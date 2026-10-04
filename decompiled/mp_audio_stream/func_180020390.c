// FUN_180020390 @ 180020390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180020390(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  uint *puVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  
  fVar16 = _UNK_1800322bc;
  fVar1 = _UNK_1800322b8;
  fVar3 = _UNK_1800322b4;
  fVar2 = _DAT_1800322b0;
  auVar4 = _DAT_180032240;
  uVar9 = 0;
  if (param_3 != 0) {
    if ((7 < param_3) &&
       ((param_2 + (param_3 - 1) * 4 < param_1 || (param_1 + (param_3 - 1) * 4 < param_2)))) {
      puVar5 = (uint *)(param_1 + 0x10);
      do {
        auVar15 = *(undefined1 (*) [16])((param_2 - param_1) + -0x10 + (longlong)puVar5);
        uVar9 = uVar9 + 8;
        uVar10 = -(uint)(auVar15._0_4_ < fVar2);
        uVar11 = -(uint)(auVar15._4_4_ < fVar3);
        uVar12 = -(uint)(auVar15._8_4_ < fVar1);
        uVar13 = -(uint)(auVar15._12_4_ < fVar16);
        auVar14 = minps(auVar4,auVar15);
        auVar15 = *(undefined1 (*) [16])((param_2 - param_1) + -0x20 + (longlong)(puVar5 + 8));
        puVar5[-4] = ~uVar10 & auVar14._0_4_ | uVar10 & (uint)fVar2;
        puVar5[-3] = ~uVar11 & auVar14._4_4_ | uVar11 & (uint)fVar3;
        puVar5[-2] = ~uVar12 & auVar14._8_4_ | uVar12 & (uint)fVar1;
        puVar5[-1] = ~uVar13 & auVar14._12_4_ | uVar13 & (uint)fVar16;
        uVar10 = -(uint)(auVar15._0_4_ < fVar2);
        uVar11 = -(uint)(auVar15._4_4_ < fVar3);
        uVar12 = -(uint)(auVar15._8_4_ < fVar1);
        uVar13 = -(uint)(auVar15._12_4_ < fVar16);
        auVar15 = minps(auVar4,auVar15);
        *puVar5 = ~uVar10 & auVar15._0_4_ | uVar10 & (uint)fVar2;
        puVar5[1] = ~uVar11 & auVar15._4_4_ | uVar11 & (uint)fVar3;
        puVar5[2] = ~uVar12 & auVar15._8_4_ | uVar12 & (uint)fVar1;
        puVar5[3] = ~uVar13 & auVar15._12_4_ | uVar13 & (uint)fVar16;
        puVar5 = puVar5 + 8;
      } while (uVar9 < (param_3 & 0xfffffffffffffff8));
      if (param_3 <= uVar9) {
        return;
      }
    }
    fVar3 = DAT_180032164;
    fVar2 = DAT_1800320cc;
    lVar8 = param_2 - param_1;
    if (3 < param_3 - uVar9) {
      pfVar6 = (float *)(param_1 + 4 + uVar9 * 4);
      lVar7 = ((param_3 - uVar9) - 4 >> 2) + 1;
      uVar9 = uVar9 + lVar7 * 4;
      do {
        fVar1 = *(float *)(lVar8 + -4 + (longlong)pfVar6);
        fVar16 = fVar3;
        if ((fVar3 <= fVar1) && (fVar16 = fVar2, fVar1 <= fVar2)) {
          fVar16 = fVar1;
        }
        pfVar6[-1] = fVar16;
        fVar1 = *(float *)((longlong)pfVar6 + lVar8);
        fVar16 = fVar3;
        if ((fVar3 <= fVar1) && (fVar16 = fVar2, fVar1 <= fVar2)) {
          fVar16 = fVar1;
        }
        *pfVar6 = fVar16;
        fVar1 = *(float *)(lVar8 + 4 + (longlong)pfVar6);
        fVar16 = fVar3;
        if ((fVar3 <= fVar1) && (fVar16 = fVar2, fVar1 <= fVar2)) {
          fVar16 = fVar1;
        }
        pfVar6[1] = fVar16;
        fVar1 = *(float *)(lVar8 + 8 + (longlong)pfVar6);
        fVar16 = fVar3;
        if ((fVar3 <= fVar1) && (fVar16 = fVar2, fVar1 <= fVar2)) {
          fVar16 = fVar1;
        }
        pfVar6[2] = fVar16;
        pfVar6 = pfVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (uVar9 < param_3) {
      pfVar6 = (float *)(param_1 + uVar9 * 4);
      lVar7 = param_3 - uVar9;
      do {
        fVar1 = *(float *)(lVar8 + (longlong)pfVar6);
        fVar16 = fVar3;
        if ((fVar3 <= fVar1) && (fVar16 = fVar2, fVar1 <= fVar2)) {
          fVar16 = fVar1;
        }
        *pfVar6 = fVar16;
        pfVar6 = pfVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return;
}


