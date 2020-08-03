#include "script_component.hpp"

// Start with safety on
if (side player != sideLogic) then {
  if !(primaryWeapon player isEqualTo "") then {
    [player, primaryWeapon player, true] call ance_safemode_fnc_setWeaponSafety;
  };
  if !(secondaryWeapon player isEqualTo "") then {
    [player, secondaryWeapon player, true] call ance_safemode_fnc_setWeaponSafety;
  };
};
