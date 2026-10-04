// FUN_18001ee20 @ 18001ee20

undefined8 FUN_18001ee20(int *param_1,short *param_2,short *param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  short *psVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  float fVar34;
  uint local_a8;
  int local_98 [24];
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == param_3) {
    uVar32 = 0;
    if (param_1[2] != 0) {
      do {
        piVar18 = (int *)((ulonglong)uVar32 * 0x40 + *(longlong *)(param_1 + 4));
        if (piVar18 == (int *)0x0) {
          return 0xfffffffe;
        }
        uVar17 = FUN_18001e820(piVar18,param_2,(longlong)param_2,param_4);
        if ((int)uVar17 != 0) {
          return uVar17;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < (uint)param_1[2]);
    }
  }
  else if (*param_1 == 5) {
    local_a8 = 0;
    if (param_4 != 0) {
      do {
        local_98[0] = 0;
        local_98[1] = 1;
        local_98[2] = 2;
        local_98[3] = 3;
        local_98[4] = 4;
        local_98[5] = 4;
        memcpy(param_2,param_3,(ulonglong)(uint)(local_98[*param_1] * param_1[1]));
        uVar22 = 0;
        if (param_1[2] != 0) {
          do {
            lVar19 = 0;
            lVar27 = *(longlong *)(param_1 + 4);
            uVar25 = 0;
            lVar21 = uVar22 * 0x40;
            uVar32 = *(uint *)(lVar21 + 4 + lVar27);
            fVar1 = *(float *)(lVar21 + 8 + lVar27);
            fVar2 = *(float *)(lVar21 + 0xc + lVar27);
            fVar3 = *(float *)(lVar21 + 0x10 + lVar27);
            fVar4 = *(float *)(lVar21 + 0x14 + lVar27);
            fVar5 = *(float *)(lVar21 + 0x18 + lVar27);
            if (uVar32 < 4) {
              if (uVar32 != 0) goto LAB_18001f1a7;
            }
            else {
              lVar29 = -(longlong)param_2;
              uVar15 = (uVar32 - 4 >> 2) + 1;
              lVar30 = 0;
              uVar24 = (ulonglong)uVar15;
              lVar33 = 0xc;
              lVar31 = 8;
              uVar25 = uVar15 * 4;
              lVar19 = (ulonglong)uVar15 * 4;
              pfVar28 = (float *)(param_2 + 4);
              do {
                fVar6 = pfVar28[-2];
                fVar34 = fVar6 * fVar1 + *(float *)(*(longlong *)(lVar21 + 0x20 + lVar27) + lVar30);
                fVar7 = *(float *)((longlong)pfVar28 +
                                  *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29 + -8);
                pfVar28[-2] = fVar34;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x20 + lVar27) + lVar29 + -8)
                     = (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29 + -8)
                     = fVar6 * fVar3 - fVar34 * fVar5;
                fVar6 = pfVar28[-1];
                fVar34 = fVar6 * fVar1 +
                         *(float *)((longlong)pfVar28 +
                                   *(longlong *)(lVar21 + 0x20 + lVar27) + lVar29 + -4);
                fVar7 = *(float *)((longlong)pfVar28 +
                                  *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29 + -4);
                pfVar28[-1] = fVar34;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x20 + lVar27) + lVar29 + -4)
                     = (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29 + -4)
                     = fVar6 * fVar3 - fVar34 * fVar5;
                fVar6 = *pfVar28;
                fVar34 = fVar6 * fVar1 + *(float *)(lVar31 + *(longlong *)(lVar21 + 0x20 + lVar27));
                fVar7 = *(float *)((longlong)pfVar28 +
                                  *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29);
                *pfVar28 = fVar34;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x20 + lVar27) + lVar29) =
                     (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29) =
                     fVar6 * fVar3 - fVar34 * fVar5;
                fVar6 = pfVar28[1];
                fVar34 = fVar6 * fVar1 + *(float *)(lVar33 + *(longlong *)(lVar21 + 0x20 + lVar27));
                fVar7 = *(float *)((longlong)pfVar28 +
                                  *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29 + 4);
                pfVar28[1] = fVar34;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x20 + lVar27) + lVar29 + 4) =
                     (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
                lVar30 = lVar30 + 0x10;
                lVar31 = lVar31 + 0x10;
                lVar33 = lVar33 + 0x10;
                *(float *)((longlong)pfVar28 + *(longlong *)(lVar21 + 0x28 + lVar27) + lVar29 + 4) =
                     fVar6 * fVar3 - fVar34 * fVar5;
                uVar24 = uVar24 - 1;
                pfVar28 = pfVar28 + 4;
              } while (uVar24 != 0);
              if (uVar25 < uVar32) {
LAB_18001f1a7:
                lVar19 = lVar19 * 4;
                uVar24 = (ulonglong)(uVar32 - uVar25);
                do {
                  fVar6 = *(float *)((longlong)param_2 + lVar19);
                  fVar34 = fVar6 * fVar1 +
                           *(float *)(lVar19 + *(longlong *)(lVar21 + 0x20 + lVar27));
                  fVar7 = *(float *)(lVar19 + *(longlong *)(lVar21 + 0x28 + lVar27));
                  *(float *)((longlong)param_2 + lVar19) = fVar34;
                  *(float *)(lVar19 + *(longlong *)(lVar21 + 0x20 + lVar27)) =
                       (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
                  *(float *)(lVar19 + *(longlong *)(lVar21 + 0x28 + lVar27)) =
                       fVar6 * fVar3 - fVar34 * fVar5;
                  lVar19 = lVar19 + 4;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
            }
            uVar32 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar32;
          } while (uVar32 < (uint)param_1[2]);
        }
        local_a8 = local_a8 + 1;
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 2;
        param_2 = param_2 + (ulonglong)(uint)param_1[1] * 2;
        if (param_4 <= local_a8) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffd;
    }
    local_a8 = 0;
    if (param_4 != 0) {
      do {
        uVar22 = 0;
        local_98[0] = 0;
        local_98[1] = 1;
        local_98[2] = 2;
        local_98[3] = 3;
        local_98[4] = 4;
        local_98[5] = 4;
        memcpy(param_2,param_3,(ulonglong)(uint)(local_98[*param_1] * param_1[1]));
        if (param_1[2] != 0) {
          do {
            lVar19 = *(longlong *)(param_1 + 4);
            lVar27 = uVar22 * 0x40;
            iVar8 = *(int *)(lVar27 + 0x10 + lVar19);
            uVar32 = *(uint *)(lVar27 + 4 + lVar19);
            iVar9 = *(int *)(lVar27 + 8 + lVar19);
            iVar10 = *(int *)(lVar27 + 0xc + lVar19);
            iVar11 = *(int *)(lVar27 + 0x14 + lVar19);
            iVar12 = *(int *)(lVar27 + 0x18 + lVar19);
            if (uVar32 != 0) {
              uVar24 = (ulonglong)uVar32;
              psVar23 = param_2;
              lVar21 = 0;
              do {
                iVar26 = (int)*psVar23;
                iVar20 = *(int *)(*(longlong *)(lVar27 + 0x20 + lVar19) + -4 + lVar21 + 4) +
                         iVar26 * iVar9 >> 0xe;
                iVar13 = *(int *)(lVar21 + *(longlong *)(lVar27 + 0x28 + lVar19));
                iVar16 = 0x7fff;
                if (iVar20 < 0x7fff) {
                  iVar16 = iVar20;
                }
                sVar14 = (short)iVar16;
                if (iVar16 < -0x8000) {
                  sVar14 = -0x8000;
                }
                *psVar23 = sVar14;
                *(int *)(lVar21 + *(longlong *)(lVar27 + 0x20 + lVar19)) =
                     (iVar26 * iVar10 - iVar20 * iVar11) + iVar13;
                *(int *)(lVar21 + *(longlong *)(lVar27 + 0x28 + lVar19)) =
                     iVar26 * iVar8 - iVar20 * iVar12;
                uVar24 = uVar24 - 1;
                psVar23 = psVar23 + 1;
                lVar21 = lVar21 + 4;
              } while (uVar24 != 0);
            }
            uVar32 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar32;
          } while (uVar32 < (uint)param_1[2]);
        }
        local_a8 = local_a8 + 1;
        param_3 = param_3 + (uint)param_1[1];
        param_2 = param_2 + (uint)param_1[1];
      } while (local_a8 < param_4);
    }
  }
  return 0;
}


