// FUN_180003010 @ 180003010

undefined8 * FUN_180003010(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((((param_2[0x10] != 0) || (param_2[4] != param_2[5])) && (param_2[0x16] != 0)) ||
     (((iVar6 = param_2[1], iVar6 != 2 && (iVar6 != 5)) &&
      ((iVar6 = *param_2, iVar6 != 2 && (iVar6 != 5)))))) {
    iVar6 = 5;
  }
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_2[0xb];
  uVar5 = *(undefined8 *)(param_2 + 0xe);
  *param_1 = CONCAT44(param_2[2],iVar6);
  param_1[1] = (ulonglong)uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = (ulonglong)uVar2;
  param_1[5] = 0;
  param_1[5] = uVar5;
  *(int *)((longlong)param_1 + 0x24) = param_2[0xc];
  return param_1;
}


