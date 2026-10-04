// FUN_180005a30 @ 180005a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180005a30(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180015040 ^ (ulonglong)auStack_78;
  local_20 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_20 = (longlong *)(**(code **)*puVar1)(puVar1,local_58);
  }
  FUN_180006780(local_58,param_1);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != local_58);
  }
  return param_1;
}


