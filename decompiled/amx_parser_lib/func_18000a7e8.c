// FUN_18000a7e8 @ 18000a7e8

int FUN_18000a7e8(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180025c88; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180025c90 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_18000f888(*(FILE **)(DAT_180025c90 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180025c90 + lVar4 * 8) + 0x30));
      FUN_180009da0(*(LPVOID *)(DAT_180025c90 + lVar4 * 8));
      *(undefined8 *)(DAT_180025c90 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}


