#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"milgp_headgear_cfg", "ace_common"};
    author = "SynixeBrett";
    VERSION_CONFIG;
  };
};

#include "CfgWeapons.hpp"
