// FUN_180002ab0 @ 180002ab0

float FUN_180002ab0(undefined8 *param_1,undefined8 *param_2,float param_3,float param_4,
                   float param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  dVar2 = DAT_1800320f0;
  if (DAT_180032118 <= param_3) {
    return DAT_1800320cc;
  }
  dVar1 = sin(DAT_1800320f0 - (double)(param_3 * DAT_1800320c8));
  dVar2 = sin(dVar2 - (double)(param_4 * DAT_1800320c8));
  fVar4 = (float)dVar2;
  fVar3 = (float)((ulonglong)*param_2 >> 0x20) * (float)((ulonglong)*param_1 >> 0x20) +
          (float)*param_2 * (float)*param_1 + *(float *)(param_2 + 1) * *(float *)(param_1 + 1);
  if ((float)dVar1 < fVar3) {
    return DAT_1800320cc;
  }
  if (fVar4 < fVar3) {
    fVar3 = (fVar3 - fVar4) / ((float)dVar1 - fVar4);
    return (DAT_1800320cc - fVar3) * param_5 + fVar3;
  }
  return param_5;
}


