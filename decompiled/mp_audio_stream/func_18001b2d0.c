// FUN_18001b2d0 @ 18001b2d0

ulonglong FUN_18001b2d0(ulonglong *param_1,longlong param_2,longlong param_3,uint param_4,
                       uint param_5,int param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  ulonglong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [16];
  
  if (((param_1 == (ulonglong *)0x0) || (param_4 == 0)) || (param_5 == 0)) {
    return 0xfffffffe;
  }
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)param_4;
  uVar8 = param_5;
  do {
    uVar2 = uVar7 % (ulonglong)uVar8;
    uVar7 = (ulonglong)uVar8;
    uVar8 = (uint)uVar2;
  } while (uVar8 != 0);
  uVar3 = (uint)(param_4 / uVar7);
  *(uint *)(param_1 + 1) = uVar3;
  uVar8 = (uint)param_1[2];
  uVar4 = (uint)(param_5 / uVar7);
  *(uint *)((longlong)param_1 + 0xc) = uVar4;
  if (8 < uVar8) {
    return 0xfffffffe;
  }
  local_28 = *param_1;
  uVar5 = uVar3;
  if (uVar3 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar2 = param_4 / uVar7;
  if (uVar4 <= uVar3) {
    uVar2 = param_5 / uVar7;
  }
  puVar1 = param_1 + 8;
  uStack_20 = (ulonglong)uVar5;
  uVar3 = 8;
  if (uVar8 < 8) {
    uVar3 = uVar8;
  }
  local_18._8_4_ = uVar3;
  local_18._0_8_ = (double)uVar2 * DAT_1800320d0 * (double)param_1[3];
  local_18._12_4_ = 0;
  if (param_6 == 0) {
    pvVar9 = (void *)(*(longlong *)(param_3 + 0x18) + param_2);
    if (puVar1 == (ulonglong *)0x0) {
      uVar7 = 0xfffffffe;
      goto LAB_18001b402;
    }
    *puVar1 = 0;
    param_1[9] = 0;
    iVar10 = 1;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  else {
    iVar10 = 0;
    pvVar9 = (void *)0x0;
  }
  uVar7 = FUN_18001b570(&local_28,pvVar9,(int *)puVar1,iVar10);
LAB_18001b402:
  if ((int)uVar7 == 0) {
    uVar8 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(param_1 + 4) = (uint)param_1[1] / uVar8;
    *(uint *)((longlong)param_1 + 0x24) = (uint)param_1[1] % uVar8;
    uVar6 = (uVar8 * (*(uint *)((longlong)param_1 + 0x2c) % uVar6)) / uVar6 +
            uVar8 * (*(uint *)((longlong)param_1 + 0x2c) / uVar6);
    *(uint *)(param_1 + 5) = (int)param_1[5] + uVar6 / uVar8;
    *(uint *)((longlong)param_1 + 0x2c) = uVar6 % uVar8;
    return 0;
  }
  return uVar7;
}


