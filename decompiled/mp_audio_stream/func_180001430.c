// FUN_180001430 @ 180001430

undefined8 FUN_180001430(longlong param_1,short *param_2,ulonglong param_3)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  short *psVar12;
  undefined1 uVar13;
  undefined7 uVar14;
  
  uVar13 = (undefined1)param_3;
  uVar14 = (undefined7)(param_3 >> 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  bVar5 = false;
  bVar7 = false;
  if ((*(char *)(lVar3 + 0xcd8) != '\0') &&
     ((*(int *)(lVar3 + 8) == 2 || (bVar7 = false, *(int *)(lVar3 + 8) - 3U < 2)))) {
    psVar10 = (short *)(lVar3 + 0x6c8);
    bVar7 = true;
    sVar2 = *psVar10;
    psVar12 = param_2;
    while ((sVar2 != 0 && (sVar2 == *psVar12))) {
      psVar1 = psVar10 + 1;
      psVar10 = psVar10 + 1;
      psVar12 = psVar12 + 1;
      sVar2 = *psVar1;
    }
    bVar5 = false;
    if (*psVar10 == *psVar12) {
      bVar5 = true;
    }
  }
  bVar8 = false;
  if ((*(char *)(lVar3 + 0xcd9) != '\0') &&
     ((*(int *)(lVar3 + 8) == 1 || (bVar8 = false, *(int *)(lVar3 + 8) == 3)))) {
    psVar10 = (short *)(lVar3 + 0x130);
    bVar6 = true;
    sVar2 = *psVar10;
    while ((sVar2 != 0 && (sVar2 == *param_2))) {
      psVar12 = psVar10 + 1;
      psVar10 = psVar10 + 1;
      param_2 = param_2 + 1;
      sVar2 = *psVar12;
    }
    bVar8 = true;
    if (*psVar10 == *param_2) goto LAB_18000150a;
  }
  bVar6 = bVar8;
  if (!bVar5) {
    return 0;
  }
LAB_18000150a:
  if ((param_3 & 1) == 0) {
    if (lVar3 != 0) {
      LOCK();
      iVar9 = *(int *)(lVar3 + 0x10);
      if (iVar9 == 0) {
        *(int *)(lVar3 + 0x10) = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 == 2) {
        if (bVar6) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xcda) = 1;
        }
        if (bVar7) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xcdb) = 1;
        }
        FUN_1800241d0(*(longlong **)(param_1 + 0x10));
      }
    }
  }
  else {
    bVar5 = false;
    if ((bVar6) && (*(char *)(lVar3 + 0xcda) != '\0')) {
      *(undefined1 *)(lVar3 + 0xcda) = 0;
      FUN_1800168d0(*(longlong **)(param_1 + 0x10),1,param_3,param_2);
      bVar5 = true;
    }
    if ((bVar7) && (*(char *)(*(longlong *)(param_1 + 0x10) + 0xcdb) != '\0')) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xcdb) = 0;
      uVar11 = 2;
      if ((int)(*(longlong **)(param_1 + 0x10))[1] == 4) {
        uVar11 = 4;
      }
      FUN_1800168d0(*(longlong **)(param_1 + 0x10),uVar11,CONCAT71(uVar14,uVar13),param_2);
    }
    else if (!bVar5) {
      return 0;
    }
    plVar4 = *(longlong **)(param_1 + 0x10);
    if ((*(char *)((longlong)plVar4 + 0xcda) == '\0') &&
       (*(char *)((longlong)plVar4 + 0xcdb) == '\0')) {
      FUN_1800240a0(plVar4);
    }
  }
  return 0;
}


