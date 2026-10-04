// FUN_18000762c @ 18000762c

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18000762c(undefined8 *param_1)

{
  longlong *plVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_4b8 [32];
  ulonglong local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  LPVOID pvStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180025040 ^ (ulonglong)auStack_4b8;
  plVar1 = (longlong *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar4 = FUN_18000c9e0(pFVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(ulonglong *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  pvStack_40 = (LPVOID)0x0;
  uVar3 = FUN_1800078b8(&local_498);
  FUN_180009da0(pvStack_40);
  pvStack_40 = (LPVOID)0x0;
  FUN_18000caa8((char)uVar4,pFVar2,plVar1);
  return uVar3;
}


