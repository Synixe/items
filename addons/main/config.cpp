#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"A3_Data_F_Tank_Loadorder"};
    author = "SynixeBrett";
    VERSION_CONFIG;
  };
};

#include "CfgFactionClasses.hpp"
#include "CfgMods.hpp"
#include "CfgUnitInsignia.hpp"

// Logo at start up

class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscDisplayStart: RscStandardDisplay {
  class controls {
    class LoadingStart: RscControlsGroup {
      class controls {
        class Logo: RscPictureKeepAspect {
          text = QPATHTOF(media\synixe_logo_white_ca.paa);
          onLoad = "";
        };
      };
    };
  };
};

// Logo at mission end

class RscPictureKeepAspect;
class RscTitles {
  class RscMissionEnd {
    class controls {
      class Picture: RscPictureKeepAspect {
        text = "\z\synixe_items\addons\main\media\synixe_logo_white_ca.paa";
        colorText[] = {1,1,1,1};
      };
    };
  };
};
