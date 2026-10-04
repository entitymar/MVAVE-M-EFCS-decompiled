// FUN_180006798 @ 180006798

undefined8 FUN_180006798(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  lVar5 = 3;
  if (DAT_180025c88 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_180025c88) goto LAB_1800067d5;
  }
  DAT_180025c88 = iVar4;
LAB_1800067d5:
  DAT_180025c90 = _calloc_base((longlong)DAT_180025c88,8);
  FUN_180009da0((LPVOID)0x0);
  if (DAT_180025c90 == (LPVOID)0x0) {
    DAT_180025c88 = 3;
    DAT_180025c90 = _calloc_base(3,8);
    FUN_180009da0((LPVOID)0x0);
    if (DAT_180025c90 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_1800250b8;
  puVar6 = &DAT_1800250a0;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_180025c90) = puVar6;
    if (*(longlong *)((&DAT_180025ed0)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar6 = puVar6 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}


