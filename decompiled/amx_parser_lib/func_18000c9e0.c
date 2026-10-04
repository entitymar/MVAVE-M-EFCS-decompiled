// FUN_18000c9e0 @ 18000c9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000c9e0(FILE *param_1)

{
  uint *puVar1;
  uint uVar2;
  FILE *pFVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  
  pFVar3 = (FILE *)FUN_18000c994(param_1);
  if ((char)pFVar3 != '\0') {
    pFVar3 = (FILE *)FUN_1800068b8(1);
    if (param_1 == pFVar3) {
      plVar5 = &DAT_1800262f8;
    }
    else {
      pFVar3 = (FILE *)FUN_1800068b8(2);
      if (param_1 != pFVar3) goto LAB_18000ca9a;
      plVar5 = &DAT_180026300;
    }
    _DAT_180025c98 = _DAT_180025c98 + 1;
    uVar2 = *(uint *)((longlong)&param_1->_base + 4);
    pFVar3 = (FILE *)(ulonglong)uVar2;
    if ((uVar2 & 0x4c0) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x282;
      UNLOCK();
      if (*plVar5 == 0) {
        pvVar4 = _malloc_base(0x1000);
        *plVar5 = (longlong)pvVar4;
        pFVar3 = (FILE *)FUN_180009da0((LPVOID)0x0);
      }
      if (*plVar5 == 0) {
        *(undefined4 *)&param_1->_base = 2;
        *(int **)&param_1->_cnt = &param_1->_file;
        param_1->_ptr = (char *)&param_1->_file;
        param_1->_charbuf = 2;
      }
      else {
        *(longlong *)&param_1->_cnt = *plVar5;
        pFVar3 = (FILE *)*plVar5;
        param_1->_ptr = (char *)pFVar3;
        *(undefined4 *)&param_1->_base = 0x1000;
        param_1->_charbuf = 0x1000;
      }
      return CONCAT71((int7)((ulonglong)pFVar3 >> 8),1);
    }
  }
LAB_18000ca9a:
  return (ulonglong)pFVar3 & 0xffffffffffffff00;
}


