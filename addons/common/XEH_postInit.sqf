#include "script_component.hpp"

if (!hasInterface) exitWith {0};

ace_hearing_disableVolumeUpdate = true;
0 call FUNC(discord);

if (!isMultiplayer) exitWith {0};

call FUNC(disableChat);

[{time > 0 && !(isNull player)}, { //Wait for player to be loaded
  call FUNC(breath);
  call FUNC(engageSafety);
}] call CBA_fnc_waitUntilAndExecute;

["ace_arsenal_displayClosed", {
  call FUNC(engageSafety);
}] call CBA_fnc_addEventHandler;

private _firstrun = profileNamespace getVariable [QGVAR(firstRun), true];
if (_firstrun) then {
  // Enhanced movement
  // Bind climb to Conrol + Space
  ["enhanced movement$em_climb", [[57,[false,true,false]]]] call EFUNC(common,setCBAKey);

  // ACRE Babel

  //Bind Babel cycle to Shift + Space
  ["acre2$babelcyclekey", [[57,[true,false,false]]]] call EFUNC(common,setCBAKey);

  //Bind first radio to Caps Lock and Shift + Caps Lock
  ["acre2$altpttkey1", [[58,[false,false,false]],[58,[true,false,false]]]] call EFUNC(common,setCBAKey);

  profileNamespace setVariable [QGVAR(firstRun), false];
  saveProfileNamespace;
};
