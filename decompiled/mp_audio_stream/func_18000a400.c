// FUN_18000a400 @ 18000a400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18000a400(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_180036c40 ^ (ulonglong)auStack_148;
  if (param_2 != (longlong *)0x0) {
    *param_2 = 0;
  }
  iVar1 = (**(code **)(param_1 + 0x160))();
  uVar4 = (ulonglong)iVar1;
  pcVar5 = "miniaudio";
  if (*(char **)(param_1 + 0x1d0) != (char *)0x0) {
    pcVar5 = *(char **)(param_1 + 0x1d0);
  }
  if (0x100 < uVar4) {
    uVar4 = 0x100;
  }
  FUN_18001d5f0(local_118,uVar4,(longlong)pcVar5,0xffffffffffffffff);
  lVar2 = (**(code **)(param_1 + 0x150))(local_118,*(int *)(param_1 + 0x1d8) == 0,local_128,0);
  if (lVar2 == 0) {
    uVar3 = 0xfffffe6f;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar2;
    }
    uVar3 = 0;
  }
  return uVar3;
}


