#define ENABLE_LOG 
#include "plugin.h"
#include "CBuilding.h"
#include "CStreaming.h"

#include <experimental\filesystem>

#ifdef ENABLE_LOG 
	#include <fstream>
	#include <iostream>

	#define LOG(x) std::cout << x << std::endl;

	std::ofstream lg;
#else
	#define LOG(x)
#endif

#include "SimpleIni.h"

using namespace plugin;

CSimpleIniA ini;
CSimpleIniA::TNamesDepend sections;

struct ExtendedData
{
	bool bprocessed = false;
	CObject* pObj = nullptr;
	bool bshown = false;

	ExtendedData(CObject* obj){};
};

ObjectExtendedData<ExtendedData> xData;

void(*LoadObjectData)(const char*) = (void(*)(const char*))0x005B5360;
void ProcessObjectPlacer();

class ProjectProps {
public:
	ProjectProps() 
	{

		#ifdef ENABLE_LOG 
			lg.open("ProjectProps.log");
			lg << "Log started" << std::endl;
		#endif

		SI_Error rc = ini.LoadFile("ProjectProps.ini");
		if (rc < 0)
		{
			LOG("ProjectProps.ini not found.")
			return;
		}

		ini.GetAllSections(sections);

		Events::processScriptsEvent += [] 
		{
			ProcessObjectPlacer();
		};


		Events::initGameEvent.after += []
		{
			if (std::experimental::filesystem::exists("ProjectProps.dat"))
				LoadObjectData("ProjectProps.dat");
			else
				LOG("ProjectProps.dat not found.");
		};

		Events::shutdownRwEvent += []
		{
			LOG("Log ended");
		};
	}
} projectProps;

// Places an object with relative offset to another one
void ProcessObjectPlacer()
{
	for (CObject* pObj : CPools::ms_pObjectPool)
	{
		unsigned int model = pObj->m_nModelIndex;
		for (auto it = sections.begin(); it != sections.end(); ++it) 
		{
			if (it->pItem == std::to_string(model))
			{
				ExtendedData &xdata = xData.Get(pObj);

				int bvisibleonbroken = std::stoi(ini.GetValue(it->pItem, "visibleonbroken", "0"));
				int bvisibleonlifted = std::stoi(ini.GetValue(it->pItem, "visibleonlifted", "0"));

				if (xdata.bprocessed)
				{
					if (pObj == NULL || xdata.pObj == NULL)
						continue;

					if (bvisibleonbroken || bvisibleonlifted)
					{
						if (xdata.bshown)
						{
							if ((pObj->m_nObjectFlags.bIsBroken == 0 && bvisibleonbroken)
								|| (pObj->m_nPhysicalFlags.bOnSolidSurface == 0 && bvisibleonlifted))
							{
								if (xdata.pObj != NULL)
									xdata.pObj->Remove();
								xdata.bshown = false;
							}
						}
						else
						{
							if ((pObj->m_nObjectFlags.bIsBroken == 1 && bvisibleonbroken)
								|| (pObj->m_nPhysicalFlags.bOnSolidSurface == 1 && bvisibleonlifted))
							{
								if (xdata.pObj != NULL)
									xdata.pObj->Add();
								xdata.bshown = true;
							}
						}
					}
				}
				else
				{
					int request_model = std::stoi(ini.GetValue(it->pItem, "model", "-1"));

					float offsetX = std::stof(ini.GetValue(it->pItem, "X", "0.0"));
					float offsetY = std::stof(ini.GetValue(it->pItem, "Y", "0.0"));
					float offsetZ = std::stof(ini.GetValue(it->pItem, "Z", "0.0"));
					float rotation = std::stof(ini.GetValue(it->pItem, "rot", "0.0"));

					if (request_model == -1)
						continue;

					CStreaming::RequestModel(request_model, eStreamingFlags::GAME_REQUIRED);
					CStreaming::LoadAllRequestedModels(false);

					xdata.pObj = CObject::Create(request_model);
					CObject::PlacePhysicalRelativeToOtherPhysical(pObj, xdata.pObj, CVector(offsetX, offsetY, offsetZ));
					xdata.pObj->SetHeading(rotation);

					if (bvisibleonbroken || bvisibleonlifted)
					{
						xdata.pObj->Remove();
					}
					else xdata.bshown = true;

					CStreaming::SetModelIsDeletable(request_model);
					xdata.bprocessed = true;
				}
			}
		}
	}
}
