// FUN_1800293a0 @ 1800293a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800293a0(undefined1 (*param_1) [16],longlong param_2,ulonglong param_3,int param_4)

{
  float *pfVar1;
  double dVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  fVar20 = _UNK_18003227c;
  fVar32 = _UNK_180032278;
  fVar23 = _UNK_180032274;
  fVar35 = _DAT_180032270;
  fVar27 = DAT_180032164;
  fVar34 = DAT_18003214c;
  dVar2 = DAT_180032130;
  fVar26 = DAT_1800320cc;
  if ((((byte)param_1 | (byte)param_2) & 0xf) == 0) {
    fVar26 = 0.0;
    fVar34 = 0.0;
    if (param_4 != 0) {
      fVar26 = DAT_18003215c;
      fVar34 = DAT_1800320ac;
    }
    uVar3 = param_3 >> 3;
    uVar16 = 0;
    if (uVar3 != 0) {
      pauVar5 = param_1;
      if (param_4 == 1) {
        fVar27 = fVar34 - fVar26;
        do {
          iVar7 = DAT_18003604c * 0xbc8f;
          iVar7 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                          -0x7fffffff;
          iVar6 = iVar7 * 0xbc8f;
          iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                          -0x7fffffff;
          iVar13 = iVar6 * 0xbc8f;
          iVar13 = iVar13 + ((int)((longlong)iVar13 * 0x40000001 >> 0x3d) - (iVar13 >> 0x1f)) *
                            -0x7fffffff;
          iVar9 = iVar13 * 0xbc8f;
          iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                          -0x7fffffff;
          iVar8 = iVar9 * 0xbc8f;
          iVar8 = iVar8 + ((int)((longlong)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                          -0x7fffffff;
          iVar15 = iVar8 * 0xbc8f;
          iVar15 = iVar15 + ((int)((longlong)iVar15 * 0x40000001 >> 0x3d) - (iVar15 >> 0x1f)) *
                            -0x7fffffff;
          iVar11 = iVar15 * 0xbc8f;
          iVar11 = iVar11 + ((int)((longlong)iVar11 * 0x40000001 >> 0x3d) - (iVar11 >> 0x1f)) *
                            -0x7fffffff;
          iVar4 = iVar11 * 0xbc8f;
          DAT_18003604c =
               iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) * -0x7fffffff
          ;
          pfVar10 = (float *)(param_2 + uVar16 * 4);
          auVar24._0_4_ =
               (int)(((float)((double)iVar7 / dVar2) * fVar27 + fVar26 + *pfVar10) * fVar35);
          auVar24._4_4_ =
               (int)(((float)((double)iVar6 / dVar2) * fVar27 + fVar26 + pfVar10[1]) * fVar23);
          auVar24._8_4_ =
               (int)(((float)((double)iVar13 / dVar2) * fVar27 + fVar26 + pfVar10[2]) * fVar32);
          auVar24._12_4_ =
               (int)(((float)((double)iVar9 / dVar2) * fVar27 + fVar26 + pfVar10[3]) * fVar20);
          pfVar10 = (float *)(param_2 + 0x10 + uVar16 * 4);
          uVar16 = uVar16 + 8;
          auVar25._0_4_ =
               (int)(((float)((double)iVar8 / dVar2) * fVar27 + fVar26 + *pfVar10) * fVar35);
          auVar25._4_4_ =
               (int)(((float)((double)iVar15 / dVar2) * fVar27 + fVar26 + pfVar10[1]) * fVar23);
          auVar25._8_4_ =
               (int)(((float)((double)iVar11 / dVar2) * fVar27 + fVar26 + pfVar10[2]) * fVar32);
          auVar25._12_4_ =
               (int)(((float)((double)DAT_18003604c / dVar2) * fVar27 + fVar26 + pfVar10[3]) *
                    fVar20);
          auVar25 = packssdw(auVar24,auVar25);
          *pauVar5 = auVar25;
          pauVar5 = pauVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      else {
        do {
          fVar27 = 0.0 - fVar26;
          fVar33 = fVar34 - 0.0;
          if (param_4 == 0) {
            fVar28 = 0.0;
            fVar29 = 0.0;
            fVar30 = 0.0;
            fVar31 = 0.0;
            fVar27 = 0.0;
            fVar21 = 0.0;
            fVar19 = 0.0;
            fVar22 = 0.0;
          }
          else {
            iVar7 = DAT_18003604c * 0xbc8f;
            iVar7 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                            -0x7fffffff;
            iVar9 = iVar7 * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            iVar6 = iVar9 * 0xbc8f;
            iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                            -0x7fffffff;
            iVar15 = iVar6 * 0xbc8f;
            iVar15 = iVar15 + ((int)((longlong)iVar15 * 0x40000001 >> 0x3d) - (iVar15 >> 0x1f)) *
                              -0x7fffffff;
            iVar13 = iVar15 * 0xbc8f;
            iVar13 = iVar13 + ((int)((longlong)iVar13 * 0x40000001 >> 0x3d) - (iVar13 >> 0x1f)) *
                              -0x7fffffff;
            iVar11 = iVar13 * 0xbc8f;
            iVar11 = iVar11 + ((int)((longlong)iVar11 * 0x40000001 >> 0x3d) - (iVar11 >> 0x1f)) *
                              -0x7fffffff;
            iVar4 = iVar11 * 0xbc8f;
            iVar4 = iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                            -0x7fffffff;
            iVar8 = iVar4 * 0xbc8f;
            iVar8 = iVar8 + ((int)((longlong)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                            -0x7fffffff;
            fVar31 = (float)((double)iVar4 / dVar2) * fVar27 + fVar26 +
                     (float)((double)iVar8 / dVar2) * fVar33 + 0.0;
            fVar30 = (float)((double)iVar13 / dVar2) * fVar27 + fVar26 +
                     (float)((double)iVar11 / dVar2) * fVar33 + 0.0;
            fVar29 = (float)((double)iVar6 / dVar2) * fVar27 + fVar26 +
                     (float)((double)iVar15 / dVar2) * fVar33 + 0.0;
            iVar8 = iVar8 * 0xbc8f;
            iVar8 = iVar8 + ((int)((longlong)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                            -0x7fffffff;
            iVar11 = iVar8 * 0xbc8f;
            fVar28 = (float)((double)iVar9 / dVar2) * fVar33 + 0.0 +
                     (float)((double)iVar7 / dVar2) * fVar27 + fVar26;
            iVar11 = iVar11 + ((int)((longlong)iVar11 * 0x40000001 >> 0x3d) - (iVar11 >> 0x1f)) *
                              -0x7fffffff;
            iVar6 = iVar11 * 0xbc8f;
            iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                            -0x7fffffff;
            iVar15 = iVar6 * 0xbc8f;
            iVar15 = iVar15 + ((int)((longlong)iVar15 * 0x40000001 >> 0x3d) - (iVar15 >> 0x1f)) *
                              -0x7fffffff;
            iVar13 = iVar15 * 0xbc8f;
            iVar13 = iVar13 + ((int)((longlong)iVar13 * 0x40000001 >> 0x3d) - (iVar13 >> 0x1f)) *
                              -0x7fffffff;
            iVar9 = iVar13 * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            iVar7 = iVar9 * 0xbc8f;
            iVar7 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                            -0x7fffffff;
            iVar4 = iVar7 * 0xbc8f;
            DAT_18003604c =
                 iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                         -0x7fffffff;
            fVar22 = (float)((double)iVar7 / dVar2) * fVar27 + fVar26 +
                     (float)((double)DAT_18003604c / dVar2) * fVar33 + 0.0;
            fVar19 = (float)((double)iVar13 / dVar2) * fVar27 + fVar26 +
                     (float)((double)iVar9 / dVar2) * fVar33 + 0.0;
            fVar21 = (float)((double)iVar6 / dVar2) * fVar27 + fVar26 +
                     (float)((double)iVar15 / dVar2) * fVar33 + 0.0;
            fVar27 = (float)((double)iVar8 / dVar2) * fVar27 + fVar26 +
                     (float)((double)iVar11 / dVar2) * fVar33 + 0.0;
          }
          pfVar10 = (float *)(param_2 + uVar16 * 4);
          pfVar1 = (float *)(param_2 + 0x10 + uVar16 * 4);
          uVar16 = uVar16 + 8;
          auVar18._0_4_ = (int)((fVar28 + *pfVar10) * fVar35);
          auVar18._4_4_ = (int)((fVar29 + pfVar10[1]) * fVar23);
          auVar18._8_4_ = (int)((fVar30 + pfVar10[2]) * fVar32);
          auVar18._12_4_ = (int)((fVar31 + pfVar10[3]) * fVar20);
          auVar17._0_4_ = (int)((fVar27 + *pfVar1) * fVar35);
          auVar17._4_4_ = (int)((fVar21 + pfVar1[1]) * fVar23);
          auVar17._8_4_ = (int)((fVar19 + pfVar1[2]) * fVar32);
          auVar17._12_4_ = (int)((fVar22 + pfVar1[3]) * fVar20);
          auVar25 = packssdw(auVar18,auVar17);
          *pauVar5 = auVar25;
          uVar3 = uVar3 - 1;
          pauVar5 = pauVar5 + 1;
        } while (uVar3 != 0);
      }
    }
    fVar23 = DAT_180032164;
    fVar35 = DAT_18003214c;
    fVar27 = DAT_1800320cc;
    if (uVar16 < param_3) {
      if (param_4 == 2) {
        do {
          iVar6 = DAT_18003604c * 0xbc8f;
          iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                          -0x7fffffff;
          iVar4 = iVar6 * 0xbc8f;
          DAT_18003604c =
               iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) * -0x7fffffff
          ;
          fVar20 = (float)((double)iVar6 / dVar2) * (0.0 - fVar26) + fVar26 +
                   (float)((double)DAT_18003604c / dVar2) * (fVar34 - 0.0) + 0.0 +
                   *(float *)(param_2 + uVar16 * 4);
          fVar32 = fVar23;
          if ((fVar23 <= fVar20) && (fVar32 = fVar27, fVar20 <= fVar27)) {
            fVar32 = fVar20;
          }
          *(short *)(*param_1 + uVar16 * 2) = (short)(int)(fVar32 * fVar35);
          uVar16 = uVar16 + 1;
        } while (uVar16 < param_3);
      }
      else {
        if (3 < param_3 - uVar16) {
          fVar32 = fVar34 - fVar26;
          puVar12 = (undefined2 *)(*param_1 + uVar16 * 2 + 4);
          pfVar10 = (float *)(param_2 + 8 + uVar16 * 4);
          lVar14 = ((param_3 - uVar16) - 4 >> 2) + 1;
          uVar16 = uVar16 + lVar14 * 4;
          do {
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar20 = (float)((double)DAT_18003604c / dVar2) * fVar32 + fVar26;
            }
            else {
              fVar20 = 0.0;
            }
            fVar20 = pfVar10[-2] + fVar20;
            fVar33 = fVar23;
            if ((fVar23 <= fVar20) && (fVar33 = fVar27, fVar20 <= fVar27)) {
              fVar33 = fVar20;
            }
            puVar12[-2] = (short)(int)(fVar33 * fVar35);
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar20 = (float)((double)DAT_18003604c / dVar2) * fVar32 + fVar26;
            }
            else {
              fVar20 = 0.0;
            }
            fVar20 = pfVar10[-1] + fVar20;
            fVar33 = fVar23;
            if ((fVar23 <= fVar20) && (fVar33 = fVar27, fVar20 <= fVar27)) {
              fVar33 = fVar20;
            }
            puVar12[-1] = (short)(int)(fVar33 * fVar35);
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar20 = (float)((double)DAT_18003604c / dVar2) * fVar32 + fVar26;
            }
            else {
              fVar20 = 0.0;
            }
            fVar20 = *pfVar10 + fVar20;
            fVar33 = fVar23;
            if ((fVar23 <= fVar20) && (fVar33 = fVar27, fVar20 <= fVar27)) {
              fVar33 = fVar20;
            }
            *puVar12 = (short)(int)(fVar33 * fVar35);
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar20 = (float)((double)DAT_18003604c / dVar2) * fVar32 + fVar26;
            }
            else {
              fVar20 = 0.0;
            }
            fVar20 = pfVar10[1] + fVar20;
            fVar33 = fVar23;
            if ((fVar23 <= fVar20) && (fVar33 = fVar27, fVar20 <= fVar27)) {
              fVar33 = fVar20;
            }
            pfVar10 = pfVar10 + 4;
            puVar12[1] = (short)(int)(fVar33 * fVar35);
            puVar12 = puVar12 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          if (param_3 <= uVar16) {
            return;
          }
        }
        do {
          if (param_4 == 1) {
            iVar4 = DAT_18003604c * 0xbc8f;
            DAT_18003604c =
                 iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                         -0x7fffffff;
            fVar32 = (float)((double)DAT_18003604c / dVar2) * (fVar34 - fVar26) + fVar26;
          }
          else {
            fVar32 = 0.0;
          }
          fVar32 = *(float *)(param_2 + uVar16 * 4) + fVar32;
          fVar20 = fVar23;
          if ((fVar23 <= fVar32) && (fVar20 = fVar27, fVar32 <= fVar27)) {
            fVar20 = fVar32;
          }
          *(short *)(*param_1 + uVar16 * 2) = (short)(int)(fVar20 * fVar35);
          uVar16 = uVar16 + 1;
        } while (uVar16 < param_3);
      }
    }
  }
  else {
    fVar35 = 0.0;
    fVar23 = 0.0;
    if (param_4 != 0) {
      fVar35 = DAT_1800320ac;
      fVar23 = DAT_18003215c;
    }
    uVar16 = 0;
    uVar3 = param_3 >> 2;
    if (uVar3 != 0) {
      puVar12 = (undefined2 *)(*param_1 + 4);
      pfVar10 = (float *)(param_2 + 8);
      uVar16 = uVar3 * 4;
      do {
        if (param_4 == 1) {
          iVar4 = DAT_18003604c * 0xbc8f;
          fVar30 = fVar35 - fVar23;
          iVar4 = iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                          -0x7fffffff;
          iVar6 = iVar4 * 0xbc8f;
          fVar20 = (float)((double)iVar4 / dVar2) * fVar30 + fVar23;
          iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                          -0x7fffffff;
          iVar7 = iVar6 * 0xbc8f;
          iVar7 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                          -0x7fffffff;
          iVar4 = iVar7 * 0xbc8f;
          fVar32 = (float)((double)iVar6 / dVar2) * fVar30 + fVar23;
          DAT_18003604c =
               iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) * -0x7fffffff
          ;
          fVar33 = (float)((double)iVar7 / dVar2) * fVar30 + fVar23;
          fVar30 = (float)((double)DAT_18003604c / dVar2) * fVar30 + fVar23;
        }
        else if (param_4 == 2) {
          iVar4 = DAT_18003604c * 0xbc8f;
          fVar30 = 0.0 - fVar23;
          fVar19 = fVar35 - 0.0;
          iVar4 = iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                          -0x7fffffff;
          iVar8 = iVar4 * 0xbc8f;
          iVar8 = iVar8 + ((int)((longlong)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                          -0x7fffffff;
          iVar6 = iVar8 * 0xbc8f;
          iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                          -0x7fffffff;
          iVar9 = iVar6 * 0xbc8f;
          iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                          -0x7fffffff;
          iVar7 = iVar9 * 0xbc8f;
          fVar20 = (float)((double)iVar4 / dVar2) * fVar30 + fVar23 +
                   (float)((double)iVar8 / dVar2) * fVar19 + 0.0;
          iVar7 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                          -0x7fffffff;
          iVar8 = iVar7 * 0xbc8f;
          fVar32 = (float)((double)iVar6 / dVar2) * fVar30 + fVar23 +
                   (float)((double)iVar9 / dVar2) * fVar19 + 0.0;
          iVar8 = iVar8 + ((int)((longlong)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                          -0x7fffffff;
          iVar6 = iVar8 * 0xbc8f;
          iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                          -0x7fffffff;
          iVar4 = iVar6 * 0xbc8f;
          fVar33 = (float)((double)iVar7 / dVar2) * fVar30 + fVar23 +
                   (float)((double)iVar8 / dVar2) * fVar19 + 0.0;
          DAT_18003604c =
               iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) * -0x7fffffff
          ;
          fVar30 = (float)((double)iVar6 / dVar2) * fVar30 + fVar23 +
                   (float)((double)DAT_18003604c / dVar2) * fVar19 + 0.0;
        }
        else {
          fVar20 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar30 = 0.0;
        }
        fVar20 = fVar20 + pfVar10[-2];
        fVar32 = fVar32 + pfVar10[-1];
        fVar33 = fVar33 + *pfVar10;
        fVar30 = fVar30 + pfVar10[1];
        fVar19 = fVar27;
        if ((fVar27 <= fVar20) && (fVar19 = fVar26, fVar20 <= fVar26)) {
          fVar19 = fVar20;
        }
        fVar20 = fVar27;
        if ((fVar27 <= fVar32) && (fVar20 = fVar26, fVar32 <= fVar26)) {
          fVar20 = fVar32;
        }
        fVar32 = fVar27;
        if ((fVar27 <= fVar33) && (fVar32 = fVar26, fVar33 <= fVar26)) {
          fVar32 = fVar33;
        }
        fVar33 = fVar27;
        if ((fVar27 <= fVar30) && (fVar33 = fVar26, fVar30 <= fVar26)) {
          fVar33 = fVar30;
        }
        pfVar10 = pfVar10 + 4;
        puVar12[-2] = (short)(int)(fVar19 * fVar34);
        puVar12[-1] = (short)(int)(fVar20 * fVar34);
        *puVar12 = (short)(int)(fVar32 * fVar34);
        puVar12[1] = (short)(int)(fVar33 * fVar34);
        puVar12 = puVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (uVar16 < param_3) {
      if (param_4 == 2) {
        do {
          iVar6 = DAT_18003604c * 0xbc8f;
          iVar6 = iVar6 + ((int)((longlong)iVar6 * 0x40000001 >> 0x3d) - (iVar6 >> 0x1f)) *
                          -0x7fffffff;
          iVar4 = iVar6 * 0xbc8f;
          DAT_18003604c =
               iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) * -0x7fffffff
          ;
          fVar20 = (float)((double)iVar6 / dVar2) * (0.0 - fVar23) + fVar23 +
                   (float)((double)DAT_18003604c / dVar2) * (fVar35 - 0.0) + 0.0 +
                   *(float *)(param_2 + uVar16 * 4);
          fVar32 = fVar27;
          if ((fVar27 <= fVar20) && (fVar32 = fVar26, fVar20 <= fVar26)) {
            fVar32 = fVar20;
          }
          *(short *)(*param_1 + uVar16 * 2) = (short)(int)(fVar32 * fVar34);
          uVar16 = uVar16 + 1;
        } while (uVar16 < param_3);
      }
      else {
        if (3 < param_3 - uVar16) {
          puVar12 = (undefined2 *)(*param_1 + uVar16 * 2 + 4);
          pfVar10 = (float *)(param_2 + 8 + uVar16 * 4);
          lVar14 = ((param_3 - uVar16) - 4 >> 2) + 1;
          uVar16 = uVar16 + lVar14 * 4;
          do {
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar32 = (float)((double)DAT_18003604c / dVar2) * (fVar35 - fVar23) + fVar23;
            }
            else {
              fVar32 = 0.0;
            }
            fVar32 = pfVar10[-2] + fVar32;
            fVar20 = fVar27;
            if ((fVar27 <= fVar32) && (fVar20 = fVar26, fVar32 <= fVar26)) {
              fVar20 = fVar32;
            }
            puVar12[-2] = (short)(int)(fVar20 * fVar34);
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar32 = (float)((double)DAT_18003604c / dVar2) * (fVar35 - fVar23) + fVar23;
            }
            else {
              fVar32 = 0.0;
            }
            fVar32 = pfVar10[-1] + fVar32;
            fVar20 = fVar27;
            if ((fVar27 <= fVar32) && (fVar20 = fVar26, fVar32 <= fVar26)) {
              fVar20 = fVar32;
            }
            puVar12[-1] = (short)(int)(fVar20 * fVar34);
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar32 = (float)((double)DAT_18003604c / dVar2) * (fVar35 - fVar23) + fVar23;
            }
            else {
              fVar32 = 0.0;
            }
            fVar32 = *pfVar10 + fVar32;
            fVar20 = fVar27;
            if ((fVar27 <= fVar32) && (fVar20 = fVar26, fVar32 <= fVar26)) {
              fVar20 = fVar32;
            }
            *puVar12 = (short)(int)(fVar20 * fVar34);
            if (param_4 == 1) {
              iVar4 = DAT_18003604c * 0xbc8f;
              DAT_18003604c =
                   iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                           -0x7fffffff;
              fVar32 = (float)((double)DAT_18003604c / dVar2) * (fVar35 - fVar23) + fVar23;
            }
            else {
              fVar32 = 0.0;
            }
            fVar32 = pfVar10[1] + fVar32;
            fVar20 = fVar27;
            if ((fVar27 <= fVar32) && (fVar20 = fVar26, fVar32 <= fVar26)) {
              fVar20 = fVar32;
            }
            pfVar10 = pfVar10 + 4;
            puVar12[1] = (short)(int)(fVar20 * fVar34);
            puVar12 = puVar12 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          if (param_3 <= uVar16) {
            return;
          }
        }
        do {
          if (param_4 == 1) {
            iVar4 = DAT_18003604c * 0xbc8f;
            DAT_18003604c =
                 iVar4 + ((int)((longlong)iVar4 * 0x40000001 >> 0x3d) - (iVar4 >> 0x1f)) *
                         -0x7fffffff;
            fVar32 = (float)((double)DAT_18003604c / dVar2) * (fVar35 - fVar23) + fVar23;
          }
          else {
            fVar32 = 0.0;
          }
          fVar32 = *(float *)(param_2 + uVar16 * 4) + fVar32;
          fVar20 = fVar27;
          if ((fVar27 <= fVar32) && (fVar20 = fVar26, fVar32 <= fVar26)) {
            fVar20 = fVar32;
          }
          *(short *)(*param_1 + uVar16 * 2) = (short)(int)(fVar20 * fVar34);
          uVar16 = uVar16 + 1;
        } while (uVar16 < param_3);
      }
    }
  }
  return;
}


