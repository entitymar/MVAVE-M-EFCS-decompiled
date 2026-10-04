// FUN_180018ec0 @ 180018ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180018ec0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = 0;
  LOCK();
  fVar3 = *(float *)(param_1 + 0x33c);
  if (fVar3 == 0.0) {
    *(float *)(param_1 + 0x33c) = 0.0;
    fVar3 = 0.0;
  }
  UNLOCK();
  fVar1 = *(float *)(param_1 + 0x340);
  fVar6 = fVar1;
  if (fVar1 != fVar3) {
    *(float *)(param_1 + 0x340) = fVar3;
    fVar6 = fVar3;
  }
  fVar2 = *(float *)(param_1 + 0x2a8);
  fVar5 = *(float *)(param_1 + 0x344);
  if (fVar5 == fVar2) {
    if (fVar1 == fVar3) {
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x344) = fVar2;
    fVar5 = fVar2;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x2e8);
  }
  if ((((ulonglong *)(param_1 + 0x1a8) != (ulonglong *)0x0) &&
      (fVar5 = ((float)*(uint *)(param_1 + 0x170) / (float)uVar4) * fVar6 * fVar5, 0.0 < fVar5)) &&
     (uVar4 = (uint)(longlong)(fVar5 * _DAT_180032150), uVar4 != 0)) {
    FUN_18001b2d0((ulonglong *)(param_1 + 0x1a8),0,0,uVar4,1000000,1);
  }
  return;
}


