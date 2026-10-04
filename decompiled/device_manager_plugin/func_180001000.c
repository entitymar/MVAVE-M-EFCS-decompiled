// FUN_180001000 @ 180001000

undefined8 * FUN_180001000(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar1 = param_3[7];
  param_1[7] = uVar1;
  uVar3 = (uint)uVar1 & 3;
  if ((uVar1 & 3) != 0) {
    if (uVar3 == 1) {
      lVar2 = param_3[6];
      param_1[6] = lVar2;
      uVar4 = (**(code **)(lVar2 + 8))(param_3[5]);
      param_1[5] = uVar4;
      return param_1;
    }
    if (uVar3 == 2) {
      lVar2 = param_3[6];
      param_1[6] = lVar2;
      (**(code **)(lVar2 + 8))(0,param_3);
      return param_1;
    }
  }
  uVar4 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar4;
  uVar4 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = uVar4;
  uVar4 = param_3[5];
  param_1[4] = param_3[4];
  param_1[5] = uVar4;
  param_1[6] = param_3[6];
  return param_1;
}


