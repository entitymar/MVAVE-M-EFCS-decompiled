// FUN_180019e10 @ 180019e10

undefined8
FUN_180019e10(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4,
             ulonglong *param_5)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *_Dst;
  float fVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong local_res10;
  longlong local_res20;
  ulonglong local_c0;
  ulonglong local_b8;
  int local_a0 [24];
  
  fVar11 = DAT_1800320cc;
  uVar9 = *param_3;
  local_b8 = 0;
  uVar14 = 0;
  local_c0 = 0;
  uVar10 = *param_5;
  uVar17 = 0;
  local_res10 = param_2;
  local_res20 = param_4;
  if (uVar10 != 0) {
    do {
      iVar8 = *(int *)(param_1 + 0x28);
      lVar20 = local_res10;
      uVar14 = local_c0;
      while (iVar8 != 0) {
        uVar17 = local_b8;
        if (uVar9 <= uVar14) goto LAB_18001a4c2;
        uVar17 = 0;
        if (lVar20 == 0) {
          lVar20 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar17 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar17 * 4);
              *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar17 * 4) = 0;
              uVar26 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar26;
            } while (uVar26 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar26 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar17 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar17 * 4);
              *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar17 * 4) =
                   *(undefined4 *)(lVar20 + uVar17 * 4);
              uVar19 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar19;
              uVar26 = *(uint *)(param_1 + 4);
            } while (uVar19 < uVar26);
          }
          lVar20 = lVar20 + (ulonglong)uVar26 * 4;
          local_res10 = lVar20;
        }
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          _Dst = *(void **)(param_1 + 0x38);
          local_a0[0] = 0;
          local_a0[1] = 1;
          local_a0[2] = 2;
          local_a0[3] = 3;
          local_a0[4] = 4;
          local_a0[5] = 4;
          memmove(_Dst,_Dst,
                  (ulonglong)(uint)(local_a0[*(int *)(param_1 + 0x40)] * *(int *)(param_1 + 0x44)));
          uVar17 = 0;
          if (*(int *)(param_1 + 0x4c) != 0) {
            do {
              lVar20 = *(longlong *)(param_1 + 0x58);
              uVar19 = 0;
              uVar26 = *(uint *)(lVar20 + 4 + uVar17 * 0x28);
              fVar3 = *(float *)(lVar20 + 8 + uVar17 * 0x28);
              fVar28 = fVar11 - fVar3;
              if (uVar26 < 4) {
                if (uVar26 != 0) {
                  lVar13 = 0;
                  goto LAB_18001a0bf;
                }
              }
              else {
                lVar21 = -(longlong)_Dst;
                uVar12 = (uVar26 - 4 >> 2) + 1;
                uVar22 = (ulonglong)uVar12;
                uVar19 = uVar12 * 4;
                lVar16 = lVar21 + -8 + (longlong)_Dst + 8;
                lVar13 = (ulonglong)uVar12 * 4;
                pfVar15 = (float *)((longlong)_Dst + 8);
                do {
                  pfVar2 = (float *)(*(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + lVar16);
                  lVar16 = lVar16 + 0x10;
                  fVar27 = fVar3 * *pfVar2 + fVar28 * pfVar15[-2];
                  pfVar15[-2] = fVar27;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + lVar21 + -8) = fVar27;
                  fVar27 = fVar3 * *(float *)((longlong)pfVar15 +
                                             *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + -4 +
                                             lVar21) + fVar28 * pfVar15[-1];
                  pfVar15[-1] = fVar27;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + -4 + lVar21) = fVar27;
                  fVar27 = fVar3 * *(float *)((longlong)pfVar15 +
                                             *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + lVar21)
                           + fVar28 * *pfVar15;
                  *pfVar15 = fVar27;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + lVar21) = fVar27;
                  fVar27 = fVar3 * *(float *)((longlong)pfVar15 +
                                             *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + 4 +
                                             lVar21) + fVar28 * pfVar15[1];
                  pfVar15[1] = fVar27;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28) + lVar21 + 4) = fVar27;
                  uVar22 = uVar22 - 1;
                  pfVar15 = pfVar15 + 4;
                } while (uVar22 != 0);
                if (uVar19 < uVar26) {
LAB_18001a0bf:
                  uVar22 = (ulonglong)(uVar26 - uVar19);
                  lVar13 = lVar13 * 4;
                  do {
                    fVar27 = fVar3 * *(float *)(lVar13 + *(longlong *)
                                                          (lVar20 + 0x10 + uVar17 * 0x28)) +
                             fVar28 * *(float *)(lVar13 + (longlong)_Dst);
                    *(float *)(lVar13 + (longlong)_Dst) = fVar27;
                    *(float *)(lVar13 + *(longlong *)(lVar20 + 0x10 + uVar17 * 0x28)) = fVar27;
                    lVar13 = lVar13 + 4;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              uVar26 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar26;
            } while (uVar26 < *(uint *)(param_1 + 0x4c));
          }
          uVar17 = 0;
          lVar20 = local_res10;
          if (*(int *)(param_1 + 0x50) != 0) {
            do {
              lVar13 = *(longlong *)(param_1 + 0x60);
              uVar19 = 0;
              lVar16 = uVar17 * 0x40;
              uVar26 = *(uint *)(lVar16 + 4 + lVar13);
              fVar3 = *(float *)(lVar16 + 8 + lVar13);
              fVar28 = *(float *)(lVar16 + 0xc + lVar13);
              fVar27 = *(float *)(lVar16 + 0x10 + lVar13);
              fVar4 = *(float *)(lVar16 + 0x14 + lVar13);
              fVar5 = *(float *)(lVar16 + 0x18 + lVar13);
              if (uVar26 < 4) {
                if (uVar26 != 0) {
                  lVar21 = 0;
                  goto LAB_18001a35b;
                }
              }
              else {
                lVar23 = -(longlong)_Dst;
                uVar12 = (uVar26 - 4 >> 2) + 1;
                lVar24 = 0;
                uVar22 = (ulonglong)uVar12;
                lVar18 = 0xc;
                lVar25 = 8;
                uVar19 = uVar12 * 4;
                lVar21 = (ulonglong)uVar12 * 4;
                pfVar15 = (float *)((longlong)_Dst + 8);
                do {
                  fVar6 = pfVar15[-2];
                  fVar29 = fVar3 * fVar6 +
                           *(float *)(lVar24 + *(longlong *)(lVar16 + 0x20 + lVar13));
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23 + -8);
                  pfVar15[-2] = fVar29;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x20 + lVar13) + lVar23 + -8
                            ) = (fVar28 * fVar6 - fVar29 * fVar4) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23 + -8
                            ) = fVar27 * fVar6 - fVar29 * fVar5;
                  fVar6 = pfVar15[-1];
                  fVar29 = fVar3 * fVar6 +
                           *(float *)((longlong)pfVar15 +
                                     *(longlong *)(lVar16 + 0x20 + lVar13) + lVar23 + -4);
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23 + -4);
                  pfVar15[-1] = fVar29;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x20 + lVar13) + lVar23 + -4
                            ) = (fVar28 * fVar6 - fVar29 * fVar4) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23 + -4
                            ) = fVar27 * fVar6 - fVar29 * fVar5;
                  fVar6 = *pfVar15;
                  fVar29 = fVar3 * fVar6 +
                           *(float *)(*(longlong *)(lVar16 + 0x20 + lVar13) + lVar25);
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23);
                  *pfVar15 = fVar29;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x20 + lVar13) + lVar23) =
                       (fVar28 * fVar6 - fVar29 * fVar4) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23) =
                       fVar27 * fVar6 - fVar29 * fVar5;
                  fVar6 = pfVar15[1];
                  fVar29 = fVar3 * fVar6 +
                           *(float *)(lVar18 + *(longlong *)(lVar16 + 0x20 + lVar13));
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23 + 4);
                  pfVar15[1] = fVar29;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x20 + lVar13) + lVar23 + 4)
                       = (fVar28 * fVar6 - fVar29 * fVar4) + fVar7;
                  lVar24 = lVar24 + 0x10;
                  lVar25 = lVar25 + 0x10;
                  lVar18 = lVar18 + 0x10;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar16 + 0x28 + lVar13) + lVar23 + 4)
                       = fVar27 * fVar6 - fVar29 * fVar5;
                  uVar22 = uVar22 - 1;
                  pfVar15 = pfVar15 + 4;
                } while (uVar22 != 0);
                if (uVar19 < uVar26) {
LAB_18001a35b:
                  lVar21 = lVar21 * 4;
                  uVar22 = (ulonglong)(uVar26 - uVar19);
                  do {
                    fVar6 = *(float *)((longlong)_Dst + lVar21);
                    fVar29 = fVar6 * fVar3 +
                             *(float *)(lVar21 + *(longlong *)(lVar16 + 0x20 + lVar13));
                    fVar7 = *(float *)(lVar21 + *(longlong *)(lVar16 + 0x28 + lVar13));
                    *(float *)((longlong)_Dst + lVar21) = fVar29;
                    *(float *)(lVar21 + *(longlong *)(lVar16 + 0x20 + lVar13)) =
                         (fVar6 * fVar28 - fVar29 * fVar4) + fVar7;
                    *(float *)(lVar21 + *(longlong *)(lVar16 + 0x28 + lVar13)) =
                         fVar6 * fVar27 - fVar29 * fVar5;
                    lVar21 = lVar21 + 4;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              uVar26 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar26;
            } while (uVar26 < *(uint *)(param_1 + 0x50));
          }
        }
        uVar14 = uVar14 + 1;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        param_4 = local_res20;
        iVar8 = *piVar1;
      }
      if (param_4 != 0) {
        FUN_180019ab0(param_1,param_4);
        param_4 = param_4 + (ulonglong)*(uint *)(param_1 + 4) * 4;
        local_res20 = param_4;
      }
      uVar17 = local_b8 + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x2c)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_c0 = uVar14;
      local_b8 = uVar17;
    } while (uVar17 < uVar10);
  }
LAB_18001a4c2:
  *param_3 = uVar14;
  *param_5 = uVar17;
  return 0;
}


