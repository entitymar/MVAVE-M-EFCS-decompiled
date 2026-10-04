// FUN_180005ea0 @ 180005ea0

undefined8
FUN_180005ea0(int param_1,uint param_2,int param_3,undefined1 *param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  short local_28 [16];
  
  iVar1 = 5;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  uVar3 = 2;
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  if (param_3 == 0) {
    param_3 = 48000;
  }
  if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && ((iVar1 != 4 && (iVar1 != 5)))) {
    return 0xffffff38;
  }
  if (param_5 != (undefined2 *)0x0) {
    *(undefined8 *)(param_5 + 10) = 0;
    *(undefined8 *)(param_5 + 0xe) = 0;
    *(undefined4 *)(param_5 + 0x12) = 0;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 1;
  local_28[3] = 0;
  local_28[4] = 2;
  local_28[5] = 0;
  local_28[6] = 3;
  local_28[7] = 0;
  local_28[8] = 4;
  local_28[9] = 0;
  local_28[10] = 4;
  local_28[0xb] = 0;
  uVar4 = local_28[(longlong)iVar1 * 2] << 3;
  param_5[8] = 0x28;
  iVar1 = (uint)uVar4 * (uVar3 & 0xffff);
  *param_5 = 0xfffe;
  param_5[1] = (short)uVar3;
  *(int *)(param_5 + 2) = param_3;
  param_5[7] = uVar4;
  param_5[9] = uVar4;
  uVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  param_5[6] = (short)uVar2;
  *(uint *)(param_5 + 4) = (uVar2 & 0xffff) * param_3;
  uVar3 = FUN_180005bf0(param_4,uVar3);
  *(uint *)(param_5 + 10) = uVar3;
  *(undefined4 *)(param_5 + 0xc) = extraout_XMM0_Da;
  *(undefined4 *)(param_5 + 0xe) = extraout_XMM0_Db;
  *(undefined4 *)(param_5 + 0x10) = extraout_XMM0_Dc;
  *(undefined4 *)(param_5 + 0x12) = extraout_XMM0_Dd;
  return 0;
}


