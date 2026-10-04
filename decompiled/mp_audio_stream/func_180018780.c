// FUN_180018780 @ 180018780

longlong FUN_180018780(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = 0;
  LOCK();
  bVar2 = *(int *)(param_1 + 0x348) == 0;
  if (bVar2) {
    *(int *)(param_1 + 0x348) = 0;
  }
  UNLOCK();
  if (bVar2) {
    if (param_1 == -0x1a8) {
      return 0;
    }
    if (param_2 != 0) {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x1c8) * (param_2 + -1) +
              ((ulonglong)*(uint *)(param_1 + 0x1cc) * (param_2 + -1) +
              (ulonglong)*(uint *)(param_1 + 0x1d4)) / (ulonglong)*(uint *)(param_1 + 0x1b4) +
              (ulonglong)*(uint *)(param_1 + 0x1d0);
    }
    return lVar1;
  }
  return param_2;
}


