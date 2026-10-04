// FUN_180006a40 @ 180006a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180006a40(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 auStack_648 [32];
  undefined8 local_628;
  undefined8 uStack_620;
  char local_528 [256];
  undefined4 local_428;
  ulonglong local_18;
  
  local_18 = DAT_180036c40 ^ (ulonglong)auStack_648;
  memset(&local_628,0,0x608);
  if (param_1 == (undefined8 *)0x0) {
    local_428 = 1;
  }
  else {
    local_628 = *param_1;
    uStack_620 = param_1[1];
  }
  FUN_18001d5f0(local_528,0x100,param_2,0xffffffffffffffff);
  iVar1 = (*(code *)param_4[2])(*param_4,*(undefined4 *)(param_4 + 1),&local_628,param_4[3]);
  *(uint *)(param_4 + 4) = (uint)(iVar1 == 0);
  return iVar1 != 0;
}


