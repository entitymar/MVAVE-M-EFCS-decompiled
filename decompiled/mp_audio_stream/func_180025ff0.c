// FUN_180025ff0 @ 180025ff0

undefined8 FUN_180025ff0(int *param_1,short *param_2,short *param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  short *psVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_c8;
  uint local_c4;
  int local_b0 [28];
  
  fVar12 = DAT_1800320cc;
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == param_3) {
    uVar34 = 0;
    uVar25 = 0;
    if (param_1[3] != 0) {
      do {
        uVar16 = FUN_180025ba0((int *)(*(longlong *)(param_1 + 6) + (ulonglong)uVar25 * 0x28),
                               param_2,(longlong)param_2,param_4);
        if ((int)uVar16 != 0) {
          return uVar16;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < (uint)param_1[3]);
    }
    if (param_1[4] != 0) {
      do {
        piVar18 = (int *)((ulonglong)uVar34 * 0x40 + *(longlong *)(param_1 + 8));
        if (piVar18 == (int *)0x0) {
          return 0xfffffffe;
        }
        uVar16 = FUN_18001e820(piVar18,param_2,(longlong)param_2,param_4);
        if ((int)uVar16 != 0) {
          return uVar16;
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uint)param_1[4]);
    }
  }
  else if (*param_1 == 5) {
    local_c8 = 0;
    if (param_4 != 0) {
      do {
        local_b0[0] = 0;
        local_b0[1] = 1;
        local_b0[2] = 2;
        local_b0[3] = 3;
        local_b0[4] = 4;
        local_b0[5] = 4;
        memmove(param_2,param_3,(ulonglong)(uint)(local_b0[*param_1] * param_1[1]));
        uVar23 = 0;
        if (param_1[3] != 0) {
          do {
            lVar19 = *(longlong *)(param_1 + 6);
            uVar25 = *(uint *)(lVar19 + 4 + uVar23 * 0x28);
            fVar2 = *(float *)(lVar19 + 8 + uVar23 * 0x28);
            fVar37 = fVar12 - fVar2;
            if (uVar25 < 4) {
              lVar26 = 0;
              uVar34 = 0;
              if (uVar25 != 0) goto LAB_1800262cf;
            }
            else {
              lVar28 = -(longlong)param_2;
              lVar26 = 0;
              uVar14 = (uVar25 - 4 >> 2) + 1;
              uVar29 = (ulonglong)uVar14;
              pfVar21 = (float *)(param_2 + 4);
              do {
                pfVar1 = (float *)(*(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + lVar26);
                lVar26 = lVar26 + 0x10;
                fVar36 = fVar2 * *pfVar1 + fVar37 * pfVar21[-2];
                pfVar21[-2] = fVar36;
                *(float *)((longlong)pfVar21 +
                          *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + lVar28 + -8) = fVar36;
                fVar36 = fVar2 * *(float *)((longlong)pfVar21 +
                                           *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + -4 +
                                           lVar28) + fVar37 * pfVar21[-1];
                pfVar21[-1] = fVar36;
                *(float *)((longlong)pfVar21 +
                          *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + -4 + lVar28) = fVar36;
                fVar36 = fVar2 * *(float *)((longlong)pfVar21 +
                                           *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + lVar28) +
                         fVar37 * *pfVar21;
                *pfVar21 = fVar36;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + lVar28
                          ) = fVar36;
                fVar36 = fVar2 * *(float *)((longlong)pfVar21 +
                                           *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + 4 + lVar28
                                           ) + fVar37 * pfVar21[1];
                pfVar21[1] = fVar36;
                *(float *)((longlong)pfVar21 +
                          *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + lVar28 + 4) = fVar36;
                uVar29 = uVar29 - 1;
                pfVar21 = pfVar21 + 4;
              } while (uVar29 != 0);
              lVar26 = (ulonglong)uVar14 * 4;
              uVar34 = uVar14 * 4;
              if (uVar14 * 4 < uVar25) {
LAB_1800262cf:
                lVar26 = lVar26 * 4;
                uVar29 = (ulonglong)(uVar25 - uVar34);
                do {
                  fVar36 = fVar2 * *(float *)(*(longlong *)(lVar19 + 0x10 + uVar23 * 0x28) + lVar26)
                           + fVar37 * *(float *)((longlong)param_2 + lVar26);
                  *(float *)((longlong)param_2 + lVar26) = fVar36;
                  *(float *)(lVar26 + *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28)) = fVar36;
                  lVar26 = lVar26 + 4;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            uVar25 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar25;
          } while (uVar25 < (uint)param_1[3]);
        }
        uVar23 = 0;
        if (param_1[4] != 0) {
          do {
            lVar19 = 0;
            lVar26 = *(longlong *)(param_1 + 8);
            uVar34 = 0;
            lVar28 = uVar23 * 0x40;
            uVar25 = *(uint *)(lVar28 + 4 + lVar26);
            fVar2 = *(float *)(lVar28 + 8 + lVar26);
            fVar37 = *(float *)(lVar28 + 0xc + lVar26);
            fVar36 = *(float *)(lVar28 + 0x10 + lVar26);
            fVar3 = *(float *)(lVar28 + 0x14 + lVar26);
            fVar4 = *(float *)(lVar28 + 0x18 + lVar26);
            if (uVar25 < 4) {
              if (uVar25 != 0) goto LAB_180026567;
            }
            else {
              lVar30 = -(longlong)param_2;
              uVar14 = (uVar25 - 4 >> 2) + 1;
              lVar32 = 0;
              uVar29 = (ulonglong)uVar14;
              lVar35 = 0xc;
              lVar33 = 8;
              uVar34 = uVar14 * 4;
              lVar19 = (ulonglong)uVar14 * 4;
              pfVar21 = (float *)(param_2 + 4);
              do {
                fVar5 = pfVar21[-2];
                fVar38 = fVar5 * fVar2 + *(float *)(*(longlong *)(lVar28 + 0x20 + lVar26) + lVar32);
                fVar6 = *(float *)((longlong)pfVar21 +
                                  *(longlong *)(lVar28 + 0x28 + lVar26) + -8 + lVar30);
                pfVar21[-2] = fVar38;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x20 + lVar26) + lVar30 + -8)
                     = (fVar5 * fVar37 - fVar38 * fVar3) + fVar6;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x28 + lVar26) + lVar30 + -8)
                     = fVar5 * fVar36 - fVar38 * fVar4;
                fVar5 = pfVar21[-1];
                fVar38 = fVar5 * fVar2 +
                         *(float *)((longlong)pfVar21 +
                                   *(longlong *)(lVar28 + 0x20 + lVar26) + -4 + lVar30);
                fVar6 = *(float *)((longlong)pfVar21 +
                                  *(longlong *)(lVar28 + 0x28 + lVar26) + -4 + lVar30);
                pfVar21[-1] = fVar38;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x20 + lVar26) + -4 + lVar30)
                     = (fVar5 * fVar37 - fVar38 * fVar3) + fVar6;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x28 + lVar26) + -4 + lVar30)
                     = fVar5 * fVar36 - fVar38 * fVar4;
                fVar5 = *pfVar21;
                fVar38 = fVar5 * fVar2 + *(float *)(*(longlong *)(lVar28 + 0x20 + lVar26) + lVar33);
                fVar6 = *(float *)((longlong)pfVar21 +
                                  *(longlong *)(lVar28 + 0x28 + lVar26) + lVar30);
                *pfVar21 = fVar38;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x20 + lVar26) + lVar30) =
                     (fVar5 * fVar37 - fVar38 * fVar3) + fVar6;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x28 + lVar26) + lVar30) =
                     fVar5 * fVar36 - fVar38 * fVar4;
                fVar5 = pfVar21[1];
                fVar38 = fVar5 * fVar2 + *(float *)(*(longlong *)(lVar28 + 0x20 + lVar26) + lVar35);
                fVar6 = *(float *)((longlong)pfVar21 +
                                  *(longlong *)(lVar28 + 0x28 + lVar26) + 4 + lVar30);
                pfVar21[1] = fVar38;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x20 + lVar26) + lVar30 + 4) =
                     (fVar5 * fVar37 - fVar38 * fVar3) + fVar6;
                lVar32 = lVar32 + 0x10;
                lVar33 = lVar33 + 0x10;
                lVar35 = lVar35 + 0x10;
                *(float *)((longlong)pfVar21 + *(longlong *)(lVar28 + 0x28 + lVar26) + lVar30 + 4) =
                     fVar5 * fVar36 - fVar38 * fVar4;
                uVar29 = uVar29 - 1;
                pfVar21 = pfVar21 + 4;
              } while (uVar29 != 0);
              if (uVar34 < uVar25) {
LAB_180026567:
                lVar19 = lVar19 * 4;
                uVar29 = (ulonglong)(uVar25 - uVar34);
                do {
                  fVar5 = *(float *)((longlong)param_2 + lVar19);
                  fVar38 = fVar5 * fVar2 +
                           *(float *)(*(longlong *)(lVar28 + 0x20 + lVar26) + lVar19);
                  fVar6 = *(float *)(*(longlong *)(lVar28 + 0x28 + lVar26) + lVar19);
                  *(float *)((longlong)param_2 + lVar19) = fVar38;
                  *(float *)(lVar19 + *(longlong *)(lVar28 + 0x20 + lVar26)) =
                       (fVar5 * fVar37 - fVar38 * fVar3) + fVar6;
                  *(float *)(lVar19 + *(longlong *)(lVar28 + 0x28 + lVar26)) =
                       fVar5 * fVar36 - fVar38 * fVar4;
                  lVar19 = lVar19 + 4;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            uVar25 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar25;
          } while (uVar25 < (uint)param_1[4]);
        }
        local_c8 = local_c8 + 1;
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 2;
        param_2 = param_2 + (ulonglong)(uint)param_1[1] * 2;
        if (param_4 <= local_c8) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffd;
    }
    local_c8 = 0;
    if (param_4 != 0) {
      do {
        uVar29 = 0;
        local_b0[0] = 0;
        local_b0[1] = 1;
        local_b0[2] = 2;
        local_b0[3] = 3;
        local_b0[4] = 4;
        local_b0[5] = 4;
        memmove(param_2,param_3,(ulonglong)(uint)(local_b0[*param_1] * param_1[1]));
        uVar23 = uVar29;
        if (param_1[3] != 0) {
          do {
            lVar19 = *(longlong *)(param_1 + 6);
            iVar7 = *(int *)(lVar19 + 8 + uVar23 * 0x28);
            uVar25 = *(uint *)(lVar19 + 4 + uVar23 * 0x28);
            if (uVar25 != 0) {
              uVar31 = (ulonglong)uVar25;
              uVar22 = uVar29;
              psVar24 = param_2;
              do {
                iVar17 = iVar7 * *(int *)(uVar22 + *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28)) +
                         (int)*psVar24 * (0x4000 - iVar7) >> 0xe;
                *psVar24 = (short)iVar17;
                *(int *)(uVar22 + *(longlong *)(lVar19 + 0x10 + uVar23 * 0x28)) = iVar17;
                uVar31 = uVar31 - 1;
                uVar22 = uVar22 + 4;
                psVar24 = psVar24 + 1;
              } while (uVar31 != 0);
            }
            uVar25 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar25;
          } while (uVar25 < (uint)param_1[3]);
        }
        local_c4 = 0;
        if (param_1[4] != 0) {
          do {
            lVar19 = *(longlong *)(param_1 + 8);
            lVar26 = uVar29 * 0x40;
            iVar7 = *(int *)(lVar26 + 0xc + lVar19);
            uVar25 = *(uint *)(lVar26 + 4 + lVar19);
            iVar17 = *(int *)(lVar26 + 8 + lVar19);
            iVar8 = *(int *)(lVar26 + 0x14 + lVar19);
            iVar9 = *(int *)(lVar26 + 0x10 + lVar19);
            iVar10 = *(int *)(lVar26 + 0x18 + lVar19);
            uVar34 = (uint)uVar29;
            if (uVar25 != 0) {
              uVar23 = (ulonglong)uVar25;
              psVar24 = param_2;
              lVar28 = 0;
              do {
                iVar27 = (int)*psVar24;
                iVar20 = *(int *)(lVar28 + *(longlong *)(lVar26 + 0x20 + lVar19)) + iVar27 * iVar17
                         >> 0xe;
                iVar11 = *(int *)(lVar28 + *(longlong *)(lVar26 + 0x28 + lVar19));
                iVar15 = 0x7fff;
                if (iVar20 < 0x7fff) {
                  iVar15 = iVar20;
                }
                sVar13 = (short)iVar15;
                if (iVar15 < -0x8000) {
                  sVar13 = -0x8000;
                }
                *psVar24 = sVar13;
                *(int *)(lVar28 + *(longlong *)(lVar26 + 0x20 + lVar19)) =
                     (iVar11 - iVar20 * iVar8) + iVar27 * iVar7;
                *(int *)(lVar28 + *(longlong *)(lVar26 + 0x28 + lVar19)) =
                     iVar27 * iVar9 - iVar20 * iVar10;
                uVar23 = uVar23 - 1;
                psVar24 = psVar24 + 1;
                lVar28 = lVar28 + 4;
                uVar34 = local_c4;
              } while (uVar23 != 0);
            }
            local_c4 = uVar34 + 1;
            uVar29 = (ulonglong)local_c4;
          } while (local_c4 < (uint)param_1[4]);
        }
        local_c8 = local_c8 + 1;
        param_2 = param_2 + (uint)param_1[1];
        param_3 = param_3 + (uint)param_1[1];
      } while (local_c8 < param_4);
    }
  }
  return 0;
}


