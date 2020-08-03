#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(Item_Uniform_Combat_LS_Synixe_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_Synixe_BP_BB)
        };
        weapons[] = {
            QCLASS(Uniform_Combat_LS_Synixe_BP_BB),
            QCLASS(Uniform_Combat_RS_Synixe_BP_BB)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"synixe_items_main"};
        authors[] = {"Brett"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
