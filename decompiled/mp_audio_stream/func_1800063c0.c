// FUN_1800063c0 @ 1800063c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800063c0(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_658 [32];
  undefined1 local_638 [256];
  char local_538 [256];
  undefined4 local_438;
  ulonglong local_28;
  
  local_28 = DAT_180036c40 ^ (ulonglong)auStack_658;
  memset(local_638,0,0x608);
  FUN_18001d5f0(local_538,0x100,0x1800304f8,0xffffffffffffffff);
  local_438 = 1;
  iVar1 = (*(code *)param_2)(param_1,1,local_638,param_3);
  if (iVar1 != 0) {
    memset(local_638,0,0x608);
    FUN_18001d5f0(local_538,0x100,0x180030510,0xffffffffffffffff);
    local_438 = 1;
    (*(code *)param_2)(param_1,2,local_638,param_3);
  }
  return 0;
}


