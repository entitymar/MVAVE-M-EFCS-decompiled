// FUN_180001d20 @ 180001d20

ulonglong FUN_180001d20(longlong param_1,int *param_2,void *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = *param_2;
  puVar1 = (ulonglong *)(param_1 + 0x28);
  iVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar7 = param_2[10];
  uVar9 = (undefined4)DAT_1800320e0;
  uVar10 = (undefined4)((ulonglong)DAT_1800320e0 >> 0x20);
  local_48._4_4_ = 0;
  uVar8 = local_48._4_4_;
  local_48 = (ulonglong)uVar7;
  uStack_24 = 0;
  if (puVar1 == (ulonglong *)0x0) {
    uVar6 = 0xfffffffe;
  }
  else {
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    local_58 = iVar2;
    iStack_54 = iVar3;
    uStack_50 = uVar4;
    uStack_4c = uVar5;
    uStack_40 = uVar9;
    uStack_3c = uVar10;
    local_38 = iVar2;
    iStack_34 = iVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    local_28 = uVar7;
    uStack_20 = uVar9;
    uStack_1c = uVar10;
    uVar6 = FUN_180019930(&local_38,(ulonglong *)&local_58);
    if ((int)uVar6 == 0) {
      *(void **)(param_1 + 0xa0) = param_3;
      *(int *)puVar1 = iVar2;
      *(int *)(param_1 + 0x2c) = iVar3;
      *(uint *)(param_1 + 0x30) = uVar4;
      *(uint *)(param_1 + 0x34) = uVar5;
      *(uint *)(param_1 + 0x38) = uVar7;
      *(undefined4 *)(param_1 + 0x3c) = uVar8;
      *(undefined4 *)(param_1 + 0x40) = uVar9;
      *(undefined4 *)(param_1 + 0x44) = uVar10;
      if ((param_3 != (void *)0x0) && (CONCAT44(iStack_54,local_58) != 0)) {
        memset(param_3,0,CONCAT44(iStack_54,local_58));
      }
      *(longlong *)(param_1 + 0x58) = CONCAT44(uStack_4c,uStack_50) + (longlong)param_3;
      *(ulonglong *)(param_1 + 0x60) = local_48 + (longlong)param_3;
      uVar6 = FUN_18001b2d0(puVar1,(longlong)param_3,(longlong)&local_58,uVar4,uVar5,0);
      if ((int)uVar6 == 0) {
        *(undefined8 *)(param_1 + 0x50) = 1;
        *param_4 = puVar1;
      }
    }
  }
  return uVar6;
}


