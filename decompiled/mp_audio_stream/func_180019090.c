// FUN_180019090 @ 180019090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_180019090(uint *param_1,float *param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_1b8 [16];
  float local_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float afStack_12c [7];
  float fStack_110;
  float fStack_10c;
  ulonglong local_a8;
  
  local_a8 = DAT_180036c40 ^ (ulonglong)local_1b8;
  uVar11 = param_1[1];
  uVar8 = param_1[2];
  if (uVar11 <= uVar8) goto LAB_1800193d8;
  uVar9 = (ulonglong)(uVar8 - uVar11);
  if (param_4 < uVar8 - uVar11) {
    uVar9 = param_4;
  }
  if (uVar9 == 0) goto LAB_1800193d8;
  if ((param_2 != (float *)0x0) && (param_3 != 0)) {
    uVar4 = *param_1;
    uVar7 = (ulonglong)uVar4;
    fVar26 = (float)uVar8 / (float)uVar11;
    fVar27 = DAT_1800320cc / (float)uVar11;
    if (uVar4 < 0x21) {
      if (uVar4 != 0) {
        pfVar6 = *(float **)(param_1 + 6);
        fVar28 = (float)param_1[3];
        lVar12 = *(longlong *)(param_1 + 4) - (longlong)pfVar6;
        lVar5 = (longlong)local_1a8 - (longlong)pfVar6;
        uVar7 = (ulonglong)uVar4;
        uVar3 = 4 - (longlong)pfVar6;
        do {
          fVar29 = *(float *)(lVar12 + (longlong)pfVar6);
          fVar25 = (*pfVar6 - *(float *)(lVar12 + (longlong)pfVar6)) * fVar28;
          *(float *)(lVar5 + (longlong)pfVar6) = fVar25 * fVar27;
          *(float *)((longlong)afStack_12c + uVar3 + (longlong)pfVar6) =
               fVar28 * fVar29 + fVar25 * fVar26;
          pfVar6 = pfVar6 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar7 = 0;
      if (uVar4 == 2) {
        uVar7 = uVar9 >> 1;
        if (uVar7 != 0) {
          pfVar6 = param_2;
          fVar26 = afStack_12c[1];
          fVar27 = afStack_12c[2];
          do {
            fVar27 = fVar27 + local_1a8[1];
            fVar26 = fVar26 + local_1a8[0];
            pfVar1 = (float *)((param_3 - (longlong)param_2) + (longlong)pfVar6);
            fVar28 = pfVar1[2];
            fVar29 = pfVar1[3];
            fVar25 = *pfVar1 * afStack_12c[1];
            fVar17 = pfVar1[1] * afStack_12c[2];
            afStack_12c[1] = afStack_12c[1] + local_1a8[0];
            afStack_12c[2] = afStack_12c[2] + local_1a8[1];
            *pfVar6 = fVar25;
            pfVar6[1] = fVar17;
            pfVar6[2] = fVar28 * fVar26;
            pfVar6[3] = fVar29 * fVar27;
            pfVar6 = pfVar6 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
LAB_180019353:
        uVar7 = uVar9 & 0xfffffffffffffffe;
        if (uVar9 <= uVar7) goto LAB_1800193b2;
      }
      else {
        if (uVar4 == 6) {
          uVar7 = uVar9 >> 1;
          if (uVar7 != 0) {
            pfVar6 = param_2 + 4;
            lVar12 = param_3 - (longlong)param_2;
            fVar26 = afStack_12c[2];
            fVar27 = afStack_12c[1];
            fVar28 = afStack_12c[3];
            fVar29 = afStack_12c[4];
            fVar25 = afStack_12c[5];
            fVar17 = afStack_12c[6];
            do {
              fVar17 = fVar17 + fStack_194;
              fVar25 = fVar25 + fStack_198;
              fVar29 = fVar29 + local_1a8[3];
              fVar28 = fVar28 + local_1a8[2];
              fVar27 = fVar27 + local_1a8[0];
              fVar26 = fVar26 + local_1a8[1];
              pfVar2 = (float *)(lVar12 + -0x10 + (longlong)pfVar6);
              pfVar1 = (float *)(lVar12 + (longlong)pfVar6);
              fVar23 = pfVar1[2];
              fVar24 = pfVar1[3];
              fVar16 = *pfVar2 * afStack_12c[1];
              fVar18 = pfVar2[1] * afStack_12c[2];
              fVar19 = pfVar2[2] * afStack_12c[3];
              fVar20 = pfVar2[3] * afStack_12c[4];
              afStack_12c[1] = afStack_12c[1] + local_1a8[0];
              afStack_12c[2] = afStack_12c[2] + local_1a8[1];
              afStack_12c[3] = afStack_12c[3] + local_1a8[2];
              afStack_12c[4] = afStack_12c[4] + local_1a8[3];
              fVar21 = *pfVar1 * afStack_12c[5];
              fVar22 = pfVar1[1] * afStack_12c[6];
              afStack_12c[5] = afStack_12c[5] + fStack_198;
              afStack_12c[6] = afStack_12c[6] + fStack_194;
              pfVar6[-4] = fVar16;
              pfVar6[-3] = fVar18;
              pfVar6[-2] = fVar19;
              pfVar6[-1] = fVar20;
              pfVar1 = (float *)(lVar12 + 0x10 + (longlong)pfVar6);
              fVar16 = *pfVar1;
              fVar18 = pfVar1[1];
              fVar19 = pfVar1[2];
              fVar20 = pfVar1[3];
              *pfVar6 = fVar21;
              pfVar6[1] = fVar22;
              pfVar6[2] = fVar23 * fVar27;
              pfVar6[3] = fVar24 * fVar26;
              pfVar6[4] = fVar16 * fVar28;
              pfVar6[5] = fVar18 * fVar29;
              pfVar6[6] = fVar19 * fVar25;
              pfVar6[7] = fVar20 * fVar17;
              pfVar6 = pfVar6 + 0xc;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          goto LAB_180019353;
        }
        if (uVar4 == 8) {
          pfVar6 = param_2 + 4;
          uVar7 = uVar9;
          do {
            pfVar2 = (float *)((longlong)pfVar6 + (param_3 - (longlong)param_2) + -0x10);
            pfVar1 = (float *)((longlong)pfVar6 + (param_3 - (longlong)param_2));
            fVar26 = *pfVar2 * afStack_12c[1];
            fVar27 = pfVar2[1] * afStack_12c[2];
            fVar28 = pfVar2[2] * afStack_12c[3];
            fVar29 = pfVar2[3] * afStack_12c[4];
            afStack_12c[1] = afStack_12c[1] + local_1a8[0];
            afStack_12c[2] = afStack_12c[2] + local_1a8[1];
            afStack_12c[3] = afStack_12c[3] + local_1a8[2];
            afStack_12c[4] = afStack_12c[4] + local_1a8[3];
            fVar25 = *pfVar1 * afStack_12c[5];
            fVar17 = pfVar1[1] * afStack_12c[6];
            fVar23 = pfVar1[2] * fStack_110;
            fVar24 = pfVar1[3] * fStack_10c;
            afStack_12c[5] = afStack_12c[5] + fStack_198;
            afStack_12c[6] = afStack_12c[6] + fStack_194;
            fStack_110 = fStack_110 + fStack_190;
            fStack_10c = fStack_10c + fStack_18c;
            pfVar6[-4] = fVar26;
            pfVar6[-3] = fVar27;
            pfVar6[-2] = fVar28;
            pfVar6[-1] = fVar29;
            *pfVar6 = fVar25;
            pfVar6[1] = fVar17;
            pfVar6[2] = fVar23;
            pfVar6[3] = fVar24;
            pfVar6 = pfVar6 + 8;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          goto LAB_1800193b2;
        }
      }
      do {
        uVar11 = *param_1;
        uVar10 = 0;
        if (uVar11 != 0) {
          do {
            fVar26 = afStack_12c[uVar10 + 1];
            lVar12 = uVar11 * uVar7 + uVar10;
            afStack_12c[uVar10 + 1] = fVar26 + local_1a8[uVar10];
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
            param_2[lVar12] = fVar26 * *(float *)(param_3 + lVar12 * 4);
            uVar11 = *param_1;
          } while (uVar8 < uVar11);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
    else {
      uVar10 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar7 != 0) {
          do {
            fVar28 = *(float *)(*(longlong *)(param_1 + 4) + uVar14 * 4);
            lVar5 = uVar7 * uVar10 + uVar14;
            lVar12 = uVar14 * 4;
            uVar11 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar11;
            param_2[lVar5] =
                 ((*(float *)(*(longlong *)(param_1 + 6) + lVar12) - fVar28) * fVar26 + fVar28) *
                 *(float *)(param_3 + lVar5 * 4) * (float)param_1[3];
            uVar7 = (ulonglong)*param_1;
          } while (uVar11 < *param_1);
        }
        uVar10 = uVar10 + 1;
        fVar26 = fVar26 + fVar27;
      } while (uVar10 < uVar9);
    }
  }
LAB_1800193b2:
  uVar11 = (uint)(param_1[2] + uVar9);
  if ((ulonglong)param_1[1] <= param_1[2] + uVar9) {
    uVar11 = param_1[1];
  }
  param_4 = param_4 - uVar9;
  param_2 = param_2 + uVar9;
  param_1[2] = uVar11;
  param_3 = param_3 + uVar9 * 4;
LAB_1800193d8:
  if ((param_2 != (float *)0x0) && (param_3 != 0)) {
    uVar11 = *param_1;
    uVar9 = (ulonglong)uVar11;
    if (uVar11 < 0x21) {
      if (uVar11 != 0) {
        lVar12 = *(longlong *)(param_1 + 6);
        fVar26 = (float)param_1[3];
        uVar7 = (ulonglong)uVar11;
        pfVar6 = afStack_12c + 1;
        do {
          *pfVar6 = fVar26 * *(float *)((lVar12 - (longlong)(afStack_12c + 1)) + -4 +
                                       (longlong)(pfVar6 + 1));
          uVar7 = uVar7 - 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar7 != 0);
      }
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          uVar8 = 0;
          if (uVar11 < 4) {
            if (uVar11 != 0) {
              lVar12 = 0;
              goto LAB_1800195ed;
            }
          }
          else {
            lVar5 = uVar9 * uVar7;
            lVar13 = param_3 - (longlong)param_2;
            lVar15 = (longlong)afStack_12c + (lVar5 * -4 - (longlong)param_2) + 4U;
            uVar4 = (uVar11 - 4 >> 2) + 1;
            uVar10 = (ulonglong)uVar4;
            uVar8 = uVar4 * 4;
            lVar12 = (ulonglong)uVar4 * 4;
            pfVar6 = param_2 + lVar5 + 1;
            do {
              fVar26 = *(float *)((longlong)pfVar6 + lVar15);
              pfVar6[-1] = *(float *)((longlong)pfVar6 + lVar15 + -4) *
                           *(float *)((longlong)pfVar6 + lVar13 + -4);
              fVar27 = *(float *)((longlong)pfVar6 +
                                 (longlong)afStack_12c + (lVar5 * -4 - (longlong)param_2) + 8U);
              *pfVar6 = fVar26 * *(float *)((longlong)pfVar6 + lVar13);
              fVar26 = *(float *)((longlong)pfVar6 +
                                 (longlong)afStack_12c + (lVar5 * -4 - (longlong)param_2) + 0xcU);
              pfVar6[1] = fVar27 * *(float *)((longlong)pfVar6 + lVar13 + 4);
              pfVar6[2] = fVar26 * *(float *)((longlong)pfVar6 + lVar13 + 8);
              uVar10 = uVar10 - 1;
              pfVar6 = pfVar6 + 4;
            } while (uVar10 != 0);
            if (uVar8 < uVar11) {
LAB_1800195ed:
              uVar10 = (ulonglong)(uVar11 - uVar8);
              pfVar6 = param_2 + lVar12 + uVar9 * uVar7;
              do {
                *pfVar6 = *(float *)((longlong)afStack_12c +
                                     (uVar9 * uVar7 * -4 - (longlong)param_2) + 4 + (longlong)pfVar6
                                    ) * *(float *)((param_3 - (longlong)param_2) + (longlong)pfVar6)
                ;
                uVar10 = uVar10 - 1;
                pfVar6 = pfVar6 + 1;
              } while (uVar10 != 0);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_4);
      }
    }
    else {
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          uVar10 = 0;
          if ((int)uVar9 != 0) {
            do {
              uVar11 = (int)uVar10 + 1;
              lVar12 = uVar9 * uVar7 + uVar10;
              param_2[lVar12] =
                   *(float *)(*(longlong *)(param_1 + 6) + uVar10 * 4) *
                   *(float *)(param_3 + lVar12 * 4) * (float)param_1[3];
              uVar9 = (ulonglong)*param_1;
              uVar10 = (ulonglong)uVar11;
            } while (uVar11 < *param_1);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_4);
      }
    }
  }
  if (param_1[2] == 0xffffffff) {
    if (param_1[1] < param_4) {
      param_4 = (ulonglong)param_1[1];
    }
    param_1[2] = (uint)param_4;
  }
  return 0;
}


