// FUN_18002b210 @ 18002b210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002b210(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  ulonglong *puVar14;
  short *psVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined2 uVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  fVar12 = _UNK_18003221c;
  fVar11 = _UNK_180032218;
  fVar10 = _UNK_180032214;
  fVar9 = _DAT_180032210;
  uVar17 = 0;
  if (param_3 != 0) {
    if ((0xf < param_3) &&
       ((param_2 + (param_3 - 1) * 2 < param_1 || (param_1 + (param_3 - 1) * 4 < param_2)))) {
      pfVar13 = (float *)(param_1 + 0x20);
      puVar14 = (ulonglong *)(param_2 + 0x10);
      do {
        uVar3 = puVar14[-2];
        uVar4 = puVar14[-1];
        uVar21 = (undefined2)(uVar3 >> 0x30);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar3;
        auVar20._12_2_ = uVar21;
        auVar20._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar3 >> 0x20);
        auVar19._12_4_ = auVar20._12_4_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar3;
        auVar19._10_2_ = uVar21;
        auVar18._10_6_ = auVar19._10_6_;
        auVar18._8_2_ = uVar21;
        auVar18._0_8_ = uVar3;
        uVar21 = (undefined2)(uVar3 >> 0x10);
        auVar5._4_8_ = auVar18._8_8_;
        auVar5._2_2_ = uVar21;
        auVar5._0_2_ = uVar21;
        uVar17 = uVar17 + 0x10;
        uVar21 = (undefined2)(uVar4 >> 0x30);
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar4;
        auVar24._12_2_ = uVar21;
        auVar24._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar4 >> 0x20);
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar4;
        auVar23._10_2_ = uVar21;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._8_2_ = uVar21;
        auVar22._0_8_ = uVar4;
        uVar21 = (undefined2)(uVar4 >> 0x10);
        auVar6._4_8_ = auVar22._8_8_;
        auVar6._2_2_ = uVar21;
        auVar6._0_2_ = uVar21;
        pfVar13[-8] = (float)(int)(short)uVar3 * fVar9;
        pfVar13[-7] = (float)(auVar5._0_4_ >> 0x10) * fVar10;
        pfVar13[-6] = (float)(auVar18._8_4_ >> 0x10) * fVar11;
        pfVar13[-5] = (float)(auVar19._12_4_ >> 0x10) * fVar12;
        uVar3 = *puVar14;
        uVar21 = (undefined2)(uVar3 >> 0x30);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar3;
        auVar27._12_2_ = uVar21;
        auVar27._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar3 >> 0x20);
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar3;
        auVar26._10_2_ = uVar21;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._8_2_ = uVar21;
        auVar25._0_8_ = uVar3;
        uVar21 = (undefined2)(uVar3 >> 0x10);
        auVar7._4_8_ = auVar25._8_8_;
        auVar7._2_2_ = uVar21;
        auVar7._0_2_ = uVar21;
        pfVar13[-4] = (float)(int)(short)uVar4 * fVar9;
        pfVar13[-3] = (float)(auVar6._0_4_ >> 0x10) * fVar10;
        pfVar13[-2] = (float)(auVar22._8_4_ >> 0x10) * fVar11;
        pfVar13[-1] = (float)(auVar23._12_4_ >> 0x10) * fVar12;
        uVar4 = puVar14[1];
        uVar21 = (undefined2)(uVar4 >> 0x30);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar4;
        auVar30._12_2_ = uVar21;
        auVar30._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar4 >> 0x20);
        auVar29._12_4_ = auVar30._12_4_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar4;
        auVar29._10_2_ = uVar21;
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._8_2_ = uVar21;
        auVar28._0_8_ = uVar4;
        uVar21 = (undefined2)(uVar4 >> 0x10);
        auVar8._4_8_ = auVar28._8_8_;
        auVar8._2_2_ = uVar21;
        auVar8._0_2_ = uVar21;
        *pfVar13 = (float)(int)(short)uVar3 * fVar9;
        pfVar13[1] = (float)(auVar7._0_4_ >> 0x10) * fVar10;
        pfVar13[2] = (float)(auVar25._8_4_ >> 0x10) * fVar11;
        pfVar13[3] = (float)(auVar26._12_4_ >> 0x10) * fVar12;
        pfVar13[4] = (float)(int)(short)uVar4 * fVar9;
        pfVar13[5] = (float)(auVar8._0_4_ >> 0x10) * fVar10;
        pfVar13[6] = (float)(auVar28._8_4_ >> 0x10) * fVar11;
        pfVar13[7] = (float)(auVar29._12_4_ >> 0x10) * fVar12;
        pfVar13 = pfVar13 + 0x10;
        puVar14 = puVar14 + 4;
      } while (uVar17 < (param_3 & 0xfffffffffffffff0));
      if (param_3 <= uVar17) {
        return;
      }
    }
    fVar9 = DAT_1800320a8;
    if (3 < param_3 - uVar17) {
      lVar1 = uVar17 * 4;
      lVar16 = ((param_3 - uVar17) - 4 >> 2) + 1;
      lVar2 = uVar17 * 2;
      uVar17 = uVar17 + lVar16 * 4;
      pfVar13 = (float *)(param_1 + 8 + lVar1);
      psVar15 = (short *)(param_2 + 4 + lVar2);
      do {
        pfVar13[-2] = (float)(int)psVar15[-2] * fVar9;
        pfVar13[-1] = (float)(int)psVar15[-1] * fVar9;
        *pfVar13 = (float)(int)*psVar15 * fVar9;
        pfVar13[1] = (float)(int)psVar15[1] * fVar9;
        lVar16 = lVar16 + -1;
        pfVar13 = pfVar13 + 4;
        psVar15 = psVar15 + 4;
      } while (lVar16 != 0);
      if (param_3 <= uVar17) {
        return;
      }
    }
    do {
      *(float *)(param_1 + uVar17 * 4) = (float)(int)*(short *)(param_2 + uVar17 * 2) * fVar9;
      uVar17 = uVar17 + 1;
    } while (uVar17 < param_3);
  }
  return;
}


