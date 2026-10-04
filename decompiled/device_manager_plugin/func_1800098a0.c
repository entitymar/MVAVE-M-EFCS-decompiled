// FUN_1800098a0 @ 1800098a0

undefined8 * FUN_1800098a0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[7];
  param_1[7] = uVar1;
  uVar3 = (uint)uVar1 & 3;
  if ((uVar1 & 3) != 0) {
    if (uVar3 == 1) {
      lVar2 = param_2[6];
      param_1[6] = lVar2;
      uVar4 = (**(code **)(lVar2 + 8))(param_2[5]);
      param_1[5] = uVar4;
      return param_1;
    }
    if (uVar3 == 2) {
      lVar2 = param_2[6];
      param_1[6] = lVar2;
      (**(code **)(lVar2 + 8))();
      return param_1;
    }
  }
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[6] = param_2[6];
  return param_1;
}


