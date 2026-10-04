// FUN_180021320 @ 180021320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180021320(ulonglong param_1,ulonglong param_2,ulonglong param_3,float param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float *pfVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  
  fVar20 = _UNK_1800322bc;
  fVar19 = _UNK_1800322b8;
  fVar7 = _UNK_1800322b4;
  fVar6 = _DAT_1800322b0;
  auVar8 = _DAT_180032240;
  uVar13 = 0;
  if (param_3 != 0) {
    if ((7 < param_3) &&
       ((param_2 + (param_3 - 1) * 4 < param_1 || (param_1 + (param_3 - 1) * 4 < param_2)))) {
      puVar10 = (uint *)(param_1 + 0x10);
      do {
        pfVar9 = (float *)((param_2 - param_1) + -0x10 + (longlong)puVar10);
        uVar13 = uVar13 + 8;
        uVar14 = -(uint)(*pfVar9 * param_4 < fVar6);
        uVar15 = -(uint)(pfVar9[1] * param_4 < fVar7);
        uVar16 = -(uint)(pfVar9[2] * param_4 < fVar19);
        uVar17 = -(uint)(pfVar9[3] * param_4 < fVar20);
        auVar18._4_4_ = pfVar9[1] * param_4;
        auVar18._0_4_ = *pfVar9 * param_4;
        auVar18._8_4_ = pfVar9[2] * param_4;
        auVar18._12_4_ = pfVar9[3] * param_4;
        auVar18 = minps(auVar8,auVar18);
        pfVar9 = (float *)((param_2 - param_1) + -0x20 + (longlong)(puVar10 + 8));
        fVar2 = *pfVar9;
        fVar3 = pfVar9[1];
        fVar4 = pfVar9[2];
        fVar5 = pfVar9[3];
        puVar10[-4] = ~uVar14 & auVar18._0_4_ | uVar14 & (uint)fVar6;
        puVar10[-3] = ~uVar15 & auVar18._4_4_ | uVar15 & (uint)fVar7;
        puVar10[-2] = ~uVar16 & auVar18._8_4_ | uVar16 & (uint)fVar19;
        puVar10[-1] = ~uVar17 & auVar18._12_4_ | uVar17 & (uint)fVar20;
        uVar14 = -(uint)(fVar2 * param_4 < fVar6);
        uVar15 = -(uint)(fVar3 * param_4 < fVar7);
        uVar16 = -(uint)(fVar4 * param_4 < fVar19);
        uVar17 = -(uint)(fVar5 * param_4 < fVar20);
        auVar1._4_4_ = fVar3 * param_4;
        auVar1._0_4_ = fVar2 * param_4;
        auVar1._8_4_ = fVar4 * param_4;
        auVar1._12_4_ = fVar5 * param_4;
        auVar18 = minps(auVar8,auVar1);
        *puVar10 = ~uVar14 & auVar18._0_4_ | uVar14 & (uint)fVar6;
        puVar10[1] = ~uVar15 & auVar18._4_4_ | uVar15 & (uint)fVar7;
        puVar10[2] = ~uVar16 & auVar18._8_4_ | uVar16 & (uint)fVar19;
        puVar10[3] = ~uVar17 & auVar18._12_4_ | uVar17 & (uint)fVar20;
        puVar10 = puVar10 + 8;
      } while (uVar13 < (param_3 & 0xfffffffffffffff8));
      if (param_3 <= uVar13) {
        return;
      }
    }
    fVar7 = DAT_180032164;
    fVar6 = DAT_1800320cc;
    lVar12 = param_2 - param_1;
    if (3 < param_3 - uVar13) {
      pfVar9 = (float *)(param_1 + 4 + uVar13 * 4);
      lVar11 = ((param_3 - uVar13) - 4 >> 2) + 1;
      uVar13 = uVar13 + lVar11 * 4;
      do {
        fVar20 = param_4 * *(float *)(lVar12 + -4 + (longlong)pfVar9);
        fVar19 = fVar7;
        if ((fVar7 <= fVar20) && (fVar19 = fVar6, fVar20 <= fVar6)) {
          fVar19 = fVar20;
        }
        pfVar9[-1] = fVar19;
        fVar20 = param_4 * *(float *)((longlong)pfVar9 + lVar12);
        fVar19 = fVar7;
        if ((fVar7 <= fVar20) && (fVar19 = fVar6, fVar20 <= fVar6)) {
          fVar19 = fVar20;
        }
        *pfVar9 = fVar19;
        fVar20 = param_4 * *(float *)(lVar12 + 4 + (longlong)pfVar9);
        fVar19 = fVar7;
        if ((fVar7 <= fVar20) && (fVar19 = fVar6, fVar20 <= fVar6)) {
          fVar19 = fVar20;
        }
        pfVar9[1] = fVar19;
        fVar20 = param_4 * *(float *)(lVar12 + 8 + (longlong)pfVar9);
        fVar19 = fVar7;
        if ((fVar7 <= fVar20) && (fVar19 = fVar6, fVar20 <= fVar6)) {
          fVar19 = fVar20;
        }
        pfVar9[2] = fVar19;
        pfVar9 = pfVar9 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (uVar13 < param_3) {
      pfVar9 = (float *)(param_1 + uVar13 * 4);
      lVar11 = param_3 - uVar13;
      do {
        fVar20 = param_4 * *(float *)(lVar12 + (longlong)pfVar9);
        fVar19 = fVar7;
        if ((fVar7 <= fVar20) && (fVar19 = fVar6, fVar20 <= fVar6)) {
          fVar19 = fVar20;
        }
        *pfVar9 = fVar19;
        pfVar9 = pfVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}


