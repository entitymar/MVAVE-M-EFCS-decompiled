// FUN_18002aec0 @ 18002aec0

undefined4 FUN_18002aec0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_28 [10];
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 2;
  local_28[3] = 3;
  local_28[4] = 4;
  local_28[5] = 4;
  iVar6 = local_28[*(int *)(param_1 + 0x88)];
  if (param_1 != -0x48) {
    LOCK();
    uVar3 = *(uint *)(param_1 + 0x5c);
    if (uVar3 == 0) {
      *(uint *)(param_1 + 0x5c) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar5 = param_2 * iVar6 * *(int *)(param_1 + 0x8c) + (uVar3 & 0x7fffffff);
    if (uVar5 <= *(uint *)(param_1 + 0x50)) {
      uVar4 = 0;
      uVar2 = uVar3 & 0x80000000 ^ 0x80000000;
      if (uVar5 != *(uint *)(param_1 + 0x50)) {
        uVar4 = uVar5;
        uVar2 = uVar3 & 0x80000000;
      }
      LOCK();
      *(uint *)(param_1 + 0x5c) = uVar2 | uVar4;
      UNLOCK();
      LOCK();
      uVar3 = *(uint *)(param_1 + 0x5c);
      if (uVar3 == 0) {
        *(uint *)(param_1 + 0x5c) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      LOCK();
      uVar5 = *(uint *)(param_1 + 0x60);
      if (uVar5 == 0) {
        *(uint *)(param_1 + 0x60) = 0;
        uVar5 = 0;
      }
      UNLOCK();
      iVar6 = (uVar5 & 0x7fffffff) - (uVar3 & 0x7fffffff);
      if ((int)(uVar5 ^ uVar3) < 0) {
        iVar6 = iVar6 + *(int *)(param_1 + 0x50);
      }
      uVar1 = 0;
      if (iVar6 == 0) {
        uVar1 = 0xffffffef;
      }
      return uVar1;
    }
  }
  return 0xfffffffe;
}


