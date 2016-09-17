// Function that allows using attachTo without losing the orientation of the object.
_object = _this select 0;
_target = _this select 1;
// Don't run unless the object is local
if (!local _object) exitWith {};
_dir = vectorDir _object;
_up = vectorUp _object;

_object attachTo [_target];
_object setVectorDirAndUp [_dir, _up];