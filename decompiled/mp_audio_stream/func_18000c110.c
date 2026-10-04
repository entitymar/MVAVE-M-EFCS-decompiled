// FUN_18000c110 @ 18000c110

ulonglong FUN_18000c110(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_res8;
  ulonglong local_38 [2];
  
  local_res8 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffef;
  }
  LOCK();
  iVar2 = (int)param_1[8];
  if (iVar2 == 0) {
    *(int *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  if (param_3 == 0) {
    return 0xfffffffe;
  }
  puVar1 = (undefined8 *)*param_1;
  if (((*(byte *)(puVar1 + 6) & 1) == 0) &&
     ((param_1[2] != -1 || ((param_1[4] != -1 && (iVar2 != 0)))))) {
    if (((code *)puVar1[3] != (code *)0x0) &&
       (iVar3 = (*(code *)puVar1[3])(param_1,local_38), iVar3 == 0)) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      lVar7 = local_38[0] - uVar5;
      if (local_38[0] < uVar5) {
        lVar7 = 0;
      }
      if (((iVar2 != 0) && (param_1[4] != -1)) && (uVar4 = param_1[4] + uVar5, uVar4 <= uVar6)) {
        uVar6 = uVar4;
      }
      uVar5 = uVar6 - (lVar7 + uVar5);
      if ((uVar5 < param_3) && (uVar6 != 0xffffffffffffffff)) {
        param_3 = uVar5;
      }
      if (param_3 == 0) {
        uVar5 = 0xffffffef;
        goto LAB_18000c21f;
      }
    }
    uVar5 = (**(code **)*param_1)(param_1,param_2,param_3,&local_res8);
  }
  else {
    uVar5 = (*(code *)*puVar1)();
  }
LAB_18000c21f:
  if (param_4 != (longlong *)0x0) {
    *param_4 = local_res8;
  }
  if (((int)uVar5 == 0) && (uVar5 = uVar5 & 0xffffffff, local_res8 == 0)) {
    uVar5 = 0xffffffef;
  }
  return uVar5;
}


