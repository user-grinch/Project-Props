#pragma once
#include "pch.h"
#include <vector>
#include <map>

ThiscallEvent <AddressList<0x404C90, H_JUMP>, PRIORITY_BEFORE, ArgPick2N<int, 0, CEntity*, 1>, void(int, CEntity*)>  buildingCtorEvent;
ThiscallEvent <AddressList<0x404180, H_JUMP>, PRIORITY_BEFORE, ArgPickN<CEntity*, 0>, void(CEntity*)>  buildingDtorEvent;

template <class T>
class EntityExtender
{
private:
    inline static std::vector<std::pair<CEntity*, T>> data{};

public:
    EntityExtender(const EntityExtender&) = delete;

    EntityExtender()
    {
        plugin::Events::objectDtorEvent.before += [](CEntity *pEntity)
        {
            for (auto it = data.begin(); it != data.end(); it++)
            {
                if (it->first == pEntity)
                {
                    data.erase(it);
                    break;
                }
            }
        };

        buildingDtorEvent.before += [](CEntity *pEntity)
        {
            for (auto it = data.begin(); it != data.end(); it++)
            {
                if (it->first == pEntity)
                {
                    data.erase(it);
                    break;
                }
            }
        };
    }

    T& Get(CEntity* pEntity)
    {
        for (auto it = data.begin(); it < data.end(); ++it)
        {
            if (it->first == pEntity)
                return it->second;
        }

        data.push_back({ pEntity, T(pEntity) });
        return data.back().second;
    }
};