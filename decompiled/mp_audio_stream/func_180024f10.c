// FUN_180024f10 @ 180024f10

undefined8 FUN_180024f10(int *param_1,short *param_2,short *param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  short *psVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_b8;
  int local_a8 [28];
  
  fVar11 = DAT_1800320cc;
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == param_3) {
    uVar33 = 0;
    uVar23 = 0;
    if (param_1[3] != 0) {
      do {
        uVar15 = FUN_180024c30((int *)(*(longlong *)(param_1 + 6) + (ulonglong)uVar23 * 0x28),
                               param_2,(longlong)param_2,param_4);
        if ((int)uVar15 != 0) {
          return uVar15;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < (uint)param_1[3]);
    }
    if (param_1[4] != 0) {
      do {
        piVar17 = (int *)((ulonglong)uVar33 * 0x40 + *(longlong *)(param_1 + 8));
        if (piVar17 == (int *)0x0) {
          return 0xfffffffe;
        }
        uVar15 = FUN_18001e820(piVar17,param_2,(longlong)param_2,param_4);
        if ((int)uVar15 != 0) {
          return uVar15;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < (uint)param_1[4]);
    }
  }
  else if (*param_1 == 5) {
    local_b8 = 0;
    if (param_4 != 0) {
      do {
        local_a8[0] = 0;
        local_a8[1] = 1;
        local_a8[2] = 2;
        local_a8[3] = 3;
        local_a8[4] = 4;
        local_a8[5] = 4;
        memcpy(param_2,param_3,(ulonglong)(uint)(local_a8[*param_1] * param_1[1]));
        uVar21 = 0;
        if (param_1[3] != 0) {
          do {
            lVar18 = *(longlong *)(param_1 + 6);
            fVar37 = fVar11 - *(float *)(lVar18 + 8 + uVar21 * 0x28);
            uVar23 = *(uint *)(lVar18 + 4 + uVar21 * 0x28);
            fVar38 = fVar11 - fVar37;
            if (uVar23 < 4) {
              lVar24 = 0;
              uVar33 = 0;
              if (uVar23 != 0) goto LAB_1800251ef;
            }
            else {
              lVar29 = -(longlong)param_2;
              uVar13 = (uVar23 - 4 >> 2) + 1;
              uVar30 = (ulonglong)uVar13;
              lVar24 = lVar29 + -8 + (longlong)(param_2 + 4);
              pfVar20 = (float *)(param_2 + 4);
              do {
                pfVar1 = (float *)(*(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + lVar24);
                lVar24 = lVar24 + 0x10;
                fVar35 = fVar38 * pfVar20[-2] - fVar37 * *pfVar1;
                pfVar20[-2] = fVar35;
                *(float *)((longlong)pfVar20 +
                          *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + lVar29 + -8) = fVar35;
                fVar35 = fVar38 * pfVar20[-1] -
                         fVar37 * *(float *)((longlong)pfVar20 +
                                            *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + -4 +
                                            lVar29);
                pfVar20[-1] = fVar35;
                *(float *)((longlong)pfVar20 +
                          *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + -4 + lVar29) = fVar35;
                fVar35 = fVar38 * *pfVar20 -
                         fVar37 * *(float *)((longlong)pfVar20 +
                                            *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + lVar29);
                *pfVar20 = fVar35;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + lVar29
                          ) = fVar35;
                fVar35 = fVar38 * pfVar20[1] -
                         fVar37 * *(float *)((longlong)pfVar20 +
                                            *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + 4 +
                                            lVar29);
                pfVar20[1] = fVar35;
                *(float *)((longlong)pfVar20 +
                          *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + lVar29 + 4) = fVar35;
                uVar30 = uVar30 - 1;
                pfVar20 = pfVar20 + 4;
              } while (uVar30 != 0);
              lVar24 = (ulonglong)uVar13 * 4;
              uVar33 = uVar13 * 4;
              if (uVar13 * 4 < uVar23) {
LAB_1800251ef:
                lVar24 = lVar24 * 4;
                uVar30 = (ulonglong)(uVar23 - uVar33);
                do {
                  fVar35 = fVar38 * *(float *)((longlong)param_2 + lVar24) -
                           fVar37 * *(float *)(*(longlong *)(lVar18 + 0x10 + uVar21 * 0x28) + lVar24
                                              );
                  *(float *)((longlong)param_2 + lVar24) = fVar35;
                  *(float *)(lVar24 + *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28)) = fVar35;
                  lVar24 = lVar24 + 4;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
            }
            uVar23 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar23;
          } while (uVar23 < (uint)param_1[3]);
        }
        uVar21 = 0;
        if (param_1[4] != 0) {
          do {
            lVar18 = 0;
            lVar24 = *(longlong *)(param_1 + 8);
            uVar33 = 0;
            lVar29 = uVar21 * 0x40;
            uVar23 = *(uint *)(lVar29 + 4 + lVar24);
            fVar37 = *(float *)(lVar29 + 8 + lVar24);
            fVar38 = *(float *)(lVar29 + 0xc + lVar24);
            fVar35 = *(float *)(lVar29 + 0x10 + lVar24);
            fVar2 = *(float *)(lVar29 + 0x14 + lVar24);
            fVar3 = *(float *)(lVar29 + 0x18 + lVar24);
            if (uVar23 < 4) {
              if (uVar23 != 0) goto LAB_180025486;
            }
            else {
              lVar31 = -(longlong)param_2;
              uVar13 = (uVar23 - 4 >> 2) + 1;
              lVar32 = 0;
              uVar30 = (ulonglong)uVar13;
              lVar34 = 0xc;
              lVar22 = 8;
              uVar33 = uVar13 * 4;
              lVar18 = (ulonglong)uVar13 * 4;
              pfVar20 = (float *)(param_2 + 4);
              do {
                fVar4 = pfVar20[-2];
                fVar36 = fVar4 * fVar37 + *(float *)(*(longlong *)(lVar29 + 0x20 + lVar24) + lVar32)
                ;
                fVar5 = *(float *)((longlong)pfVar20 +
                                  *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31 + -8);
                pfVar20[-2] = fVar36;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x20 + lVar24) + lVar31 + -8)
                     = (fVar4 * fVar38 - fVar36 * fVar2) + fVar5;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31 + -8)
                     = fVar4 * fVar35 - fVar36 * fVar3;
                fVar4 = pfVar20[-1];
                fVar36 = fVar4 * fVar37 +
                         *(float *)((longlong)pfVar20 +
                                   *(longlong *)(lVar29 + 0x20 + lVar24) + lVar31 + -4);
                fVar5 = *(float *)((longlong)pfVar20 +
                                  *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31 + -4);
                pfVar20[-1] = fVar36;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x20 + lVar24) + lVar31 + -4)
                     = (fVar4 * fVar38 - fVar36 * fVar2) + fVar5;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31 + -4)
                     = fVar4 * fVar35 - fVar36 * fVar3;
                fVar4 = *pfVar20;
                fVar36 = fVar4 * fVar37 + *(float *)(lVar22 + *(longlong *)(lVar29 + 0x20 + lVar24))
                ;
                fVar5 = *(float *)((longlong)pfVar20 +
                                  *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31);
                *pfVar20 = fVar36;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x20 + lVar24) + lVar31) =
                     (fVar4 * fVar38 - fVar36 * fVar2) + fVar5;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31) =
                     fVar4 * fVar35 - fVar36 * fVar3;
                fVar4 = pfVar20[1];
                fVar36 = fVar4 * fVar37 + *(float *)(lVar34 + *(longlong *)(lVar29 + 0x20 + lVar24))
                ;
                fVar5 = *(float *)((longlong)pfVar20 +
                                  *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31 + 4);
                pfVar20[1] = fVar36;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x20 + lVar24) + lVar31 + 4) =
                     (fVar4 * fVar38 - fVar36 * fVar2) + fVar5;
                lVar32 = lVar32 + 0x10;
                lVar22 = lVar22 + 0x10;
                lVar34 = lVar34 + 0x10;
                *(float *)((longlong)pfVar20 + *(longlong *)(lVar29 + 0x28 + lVar24) + lVar31 + 4) =
                     fVar4 * fVar35 - fVar36 * fVar3;
                uVar30 = uVar30 - 1;
                pfVar20 = pfVar20 + 4;
              } while (uVar30 != 0);
              if (uVar33 < uVar23) {
LAB_180025486:
                lVar18 = lVar18 * 4;
                uVar30 = (ulonglong)(uVar23 - uVar33);
                do {
                  fVar4 = *(float *)((longlong)param_2 + lVar18);
                  fVar36 = fVar4 * fVar37 +
                           *(float *)(lVar18 + *(longlong *)(lVar29 + 0x20 + lVar24));
                  fVar5 = *(float *)(lVar18 + *(longlong *)(lVar29 + 0x28 + lVar24));
                  *(float *)((longlong)param_2 + lVar18) = fVar36;
                  *(float *)(lVar18 + *(longlong *)(lVar29 + 0x20 + lVar24)) =
                       (fVar4 * fVar38 - fVar36 * fVar2) + fVar5;
                  *(float *)(lVar18 + *(longlong *)(lVar29 + 0x28 + lVar24)) =
                       fVar4 * fVar35 - fVar36 * fVar3;
                  lVar18 = lVar18 + 4;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
            }
            uVar23 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar23;
          } while (uVar23 < (uint)param_1[4]);
        }
        local_b8 = local_b8 + 1;
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 2;
        param_2 = param_2 + (ulonglong)(uint)param_1[1] * 2;
        if (param_4 <= local_b8) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffd;
    }
    local_b8 = 0;
    if (param_4 != 0) {
      do {
        uVar30 = 0;
        local_a8[0] = 0;
        local_a8[1] = 1;
        local_a8[2] = 2;
        local_a8[3] = 3;
        local_a8[4] = 4;
        local_a8[5] = 4;
        memcpy(param_2,param_3,(ulonglong)(uint)(local_a8[*param_1] * param_1[1]));
        uVar21 = uVar30;
        if (param_1[3] != 0) {
          do {
            lVar18 = *(longlong *)(param_1 + 6);
            iVar6 = *(int *)(lVar18 + 8 + uVar21 * 0x28);
            uVar23 = *(uint *)(lVar18 + 4 + uVar21 * 0x28);
            if (uVar23 != 0) {
              uVar25 = (ulonglong)uVar23;
              uVar28 = uVar30;
              psVar26 = param_2;
              do {
                iVar19 = *psVar26 * iVar6 -
                         (0x4000 - iVar6) *
                         *(int *)(uVar28 + *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28)) >> 0xe;
                *psVar26 = (short)iVar19;
                *(int *)(uVar28 + *(longlong *)(lVar18 + 0x10 + uVar21 * 0x28)) = iVar19;
                uVar25 = uVar25 - 1;
                uVar28 = uVar28 + 4;
                psVar26 = psVar26 + 1;
              } while (uVar25 != 0);
            }
            uVar23 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar23;
          } while (uVar23 < (uint)param_1[3]);
        }
        if (param_1[4] != 0) {
          do {
            lVar18 = *(longlong *)(param_1 + 8);
            lVar24 = uVar30 * 0x40;
            iVar6 = *(int *)(lVar24 + 0x10 + lVar18);
            uVar23 = *(uint *)(lVar24 + 4 + lVar18);
            iVar19 = *(int *)(lVar24 + 8 + lVar18);
            iVar7 = *(int *)(lVar24 + 0xc + lVar18);
            iVar8 = *(int *)(lVar24 + 0x14 + lVar18);
            iVar9 = *(int *)(lVar24 + 0x18 + lVar18);
            if (uVar23 != 0) {
              uVar21 = (ulonglong)uVar23;
              psVar26 = param_2;
              lVar29 = 0;
              do {
                iVar27 = (int)*psVar26;
                iVar16 = iVar27 * iVar19 + *(int *)(lVar29 + *(longlong *)(lVar24 + 0x20 + lVar18))
                         >> 0xe;
                iVar10 = *(int *)(lVar29 + *(longlong *)(lVar24 + 0x28 + lVar18));
                iVar14 = 0x7fff;
                if (iVar16 < 0x7fff) {
                  iVar14 = iVar16;
                }
                sVar12 = (short)iVar14;
                if (iVar14 < -0x8000) {
                  sVar12 = -0x8000;
                }
                *psVar26 = sVar12;
                *(int *)(lVar29 + *(longlong *)(lVar24 + 0x20 + lVar18)) =
                     (iVar27 * iVar7 - iVar16 * iVar8) + iVar10;
                *(int *)(lVar29 + *(longlong *)(lVar24 + 0x28 + lVar18)) =
                     iVar27 * iVar6 - iVar16 * iVar9;
                uVar21 = uVar21 - 1;
                psVar26 = psVar26 + 1;
                lVar29 = lVar29 + 4;
              } while (uVar21 != 0);
            }
            uVar23 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar23;
          } while (uVar23 < (uint)param_1[4]);
        }
        local_b8 = local_b8 + 1;
        param_3 = param_3 + (uint)param_1[1];
        param_2 = param_2 + (uint)param_1[1];
      } while (local_b8 < param_4);
    }
  }
  return 0;
}


