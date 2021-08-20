#include "pch.h"
#include "ProjectProps.h"

#if LOGGING
#include <fstream>
std::ofstream lg;
#define LOG(x) lg << x << std::endl;
#else
#define LOG(x)
#endif

ProjectProps::ProjectProps()
{
	static bool bInit = true;

	Events::processScriptsEvent += []()
	{
		if (bInit)
		{
			lg.open("ProjectProps.log");

			SI_Error rc = ini.LoadFile("ProjectProps.ini");
			if (rc < 0)
			{
				LOG("ProjectProps.ini not found.")
				return;
			}

			ini.GetAllSections(sections);

			// Object.dat loader
			if (std::filesystem::exists("ProjectProps.dat"))
			{
				Call<0x5B5360>("ProjectProps.dat");
			}
			else
			{
				LOG("ProjectProps.dat not found.");
			}
			bInit = false;
		}

		for (CObject* pObj : CPools::ms_pObjectPool)
		{
			ProcessDynamicObject(pObj);
		}
	};
}

void ProjectProps::ProcessDynamicObject(CObject* pObj)
{
	unsigned int model = pObj->m_nModelIndex;
	for (auto it = sections.begin(); it != sections.end(); ++it) 
	{
		if (it->pItem == std::to_string(model))
		{
			ExtendedData &xdata = xData.Get(pObj);

			if (xdata.m_bIgnore)
			{
				continue;
			}

			VisibilityFlags bVisibleFlag = (VisibilityFlags)std::stoi(ini.GetValue(it->pItem, "visibleFlag", "0"));

			if (xdata.m_bProcessed)
			{
				if (pObj == NULL || xdata.m_pEntity == NULL)
				{
					continue;
				}

				if (bVisibleFlag == VISIBLE_BROKEN || bVisibleFlag == VISIBLE_LIFTED)
				{
					if (xdata.m_bShown)
					{
						if ((pObj->m_nObjectFlags.bIsBroken == 0 && bVisibleFlag == VISIBLE_BROKEN)
							|| (pObj->m_nPhysicalFlags.bOnSolidSurface == 0 && bVisibleFlag == VISIBLE_LIFTED))
						{
							if (xdata.m_pEntity != NULL)
							{
								xdata.m_pEntity->Remove();
							}
							xdata.m_bShown = false;
						}
					}
					else
					{
						if ((pObj->m_nObjectFlags.bIsBroken == 1 && bVisibleFlag == VISIBLE_BROKEN)
							|| (pObj->m_nPhysicalFlags.bOnSolidSurface == 1 && bVisibleFlag == VISIBLE_LIFTED))
						{
							if (xdata.m_pEntity != NULL)
							{
								xdata.m_pEntity->Add();
							}
							xdata.m_bShown = true;
						}
					}
				}
			}
			else
			{
				int requestModel = std::stoi(ini.GetValue(it->pItem, "model", "-1"));

				float offsetX = std::stof(ini.GetValue(it->pItem, "X", "0.0"));
				float offsetY = std::stof(ini.GetValue(it->pItem, "Y", "0.0"));
				float offsetZ = std::stof(ini.GetValue(it->pItem, "Z", "0.0"));
				float rotation = std::stof(ini.GetValue(it->pItem, "rot", "0.0"));
				int chance = 100 / std::stoi(ini.GetValue(it->pItem, "chance", "100"));

				int magic_num = rand() % (chance + 1 - 1) + 1;

				if (magic_num != 1 || requestModel == -1) // random value
				{
					xdata.m_bIgnore = true;
					continue;
				}

				CStreaming::RequestModel(requestModel, eStreamingFlags::GAME_REQUIRED);
				CStreaming::LoadAllRequestedModels(false);

				xdata.m_pEntity = CObject::Create(requestModel);
				CObject::PlacePhysicalRelativeToOtherPhysical(pObj, (CObject*)xdata.m_pEntity, CVector(offsetX, offsetY, offsetZ));
				xdata.m_pEntity->SetHeading(rotation);

				if (bVisibleFlag == VISIBLE_BROKEN || bVisibleFlag == VISIBLE_LIFTED)
				{
					xdata.m_pEntity->Remove();
				}
				else 
				{
					xdata.m_bShown = true;
				}

				CStreaming::SetModelIsDeletable(requestModel);
				xdata.m_bProcessed = true;
			}
		}
	}
}
