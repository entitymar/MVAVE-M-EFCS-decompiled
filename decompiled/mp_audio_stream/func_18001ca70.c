// FUN_18001ca70 @ 18001ca70

undefined8 * FUN_18001ca70(undefined8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[4];
  uVar4 = param_2[2];
  if ((uint)param_2[3] <= (uint)param_2[2]) {
    uVar4 = param_2[3];
  }
  if ((((param_2[0x10] != 0) || (iVar6 = param_2[5], iVar1 != iVar6)) &&
      (iVar6 = param_2[5], param_2[0x16] != 0)) ||
     (((iVar5 = param_2[1], iVar5 != 2 && (iVar5 != 5)) &&
      ((iVar5 = *param_2, iVar5 != 2 && (iVar5 != 5)))))) {
    iVar5 = 5;
  }
  uVar2 = param_2[0x16];
  iVar3 = param_2[0x1c];
  *param_1 = CONCAT44(uVar4,iVar5);
  param_1[1] = CONCAT44(iVar6,iVar1);
  param_1[2] = (ulonglong)uVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 4;
  *(int *)(param_1 + 5) = iVar3;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x1a);
  return param_1;
}


