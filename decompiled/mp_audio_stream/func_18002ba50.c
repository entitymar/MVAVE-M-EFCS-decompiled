// FUN_18002ba50 @ 18002ba50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002ba50(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  dVar6 = _UNK_180032238;
  dVar5 = _DAT_180032230;
  uVar12 = 0;
  if (param_3 != 0) {
    if ((7 < param_3) &&
       ((param_2 + (param_3 - 1) * 4 < param_1 || (param_1 + (param_3 - 1) * 4 < param_2)))) {
      lVar9 = param_2 - param_1;
      puVar7 = (undefined8 *)(param_1 + 8);
      do {
        uVar3 = *(undefined8 *)(lVar9 + -8 + (longlong)puVar7);
        uVar12 = uVar12 + 8;
        puVar1 = puVar7 + 4;
        uVar4 = *(undefined8 *)((longlong)puVar7 + lVar9);
        puVar7[-1] = CONCAT44((float)((double)(int)((ulonglong)uVar3 >> 0x20) * dVar6),
                              (float)((double)(int)uVar3 * dVar5));
        uVar3 = *(undefined8 *)(lVar9 + -0x18 + (longlong)puVar1);
        *puVar7 = CONCAT44((float)((double)(int)((ulonglong)uVar4 >> 0x20) * dVar6),
                           (float)((double)(int)uVar4 * dVar5));
        uVar4 = *(undefined8 *)(lVar9 + -0x10 + (longlong)puVar1);
        puVar7[1] = CONCAT44((float)((double)(int)((ulonglong)uVar3 >> 0x20) * dVar6),
                             (float)((double)(int)uVar3 * dVar5));
        puVar7[2] = CONCAT44((float)((double)(int)((ulonglong)uVar4 >> 0x20) * dVar6),
                             (float)((double)(int)uVar4 * dVar5));
        puVar7 = puVar1;
      } while (uVar12 < (param_3 & 0xfffffffffffffff8));
      if (param_3 <= uVar12) {
        return;
      }
    }
    dVar5 = DAT_1800320c0;
    lVar9 = param_2 - param_1;
    if (3 < param_3 - uVar12) {
      lVar11 = uVar12 * 4;
      lVar10 = ((param_3 - uVar12) - 4 >> 2) + 1;
      uVar12 = uVar12 + lVar10 * 4;
      pfVar8 = (float *)(param_1 + 4 + lVar11);
      do {
        pfVar2 = pfVar8 + 4;
        pfVar8[-1] = (float)((double)*(int *)(lVar9 + -0x14 + (longlong)pfVar2) * dVar5);
        *pfVar8 = (float)((double)*(int *)(lVar9 + -0x10 + (longlong)pfVar2) * dVar5);
        pfVar8[1] = (float)((double)*(int *)(lVar9 + -0xc + (longlong)pfVar2) * dVar5);
        pfVar8[2] = (float)((double)*(int *)(lVar9 + -8 + (longlong)pfVar2) * dVar5);
        lVar10 = lVar10 + -1;
        pfVar8 = pfVar2;
      } while (lVar10 != 0);
    }
    if (uVar12 < param_3) {
      lVar11 = param_3 - uVar12;
      pfVar8 = (float *)(param_1 + uVar12 * 4);
      do {
        *pfVar8 = (float)((double)*(int *)((longlong)pfVar8 + lVar9) * dVar5);
        lVar11 = lVar11 + -1;
        pfVar8 = pfVar8 + 1;
      } while (lVar11 != 0);
    }
  }
  return;
}


