// FUN_18001a4e0 @ 18001a4e0

undefined8
FUN_18001a4e0(longlong param_1,longlong param_2,ulonglong *param_3,void *param_4,ulonglong *param_5)

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
  longlong lVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  void *local_res20;
  ulonglong local_c8;
  ulonglong local_c0;
  int local_a8 [26];
  
  fVar12 = DAT_1800320cc;
  uVar9 = *param_3;
  uVar20 = 0;
  local_c0 = 0;
  local_c8 = 0;
  uVar10 = *param_5;
  uVar25 = uVar20;
  local_res20 = param_4;
  if (uVar10 != 0) {
    do {
      uVar23 = 0;
      iVar8 = *(int *)(param_1 + 0x28);
      while (iVar8 != 0) {
        uVar25 = local_c8;
        if (uVar9 <= uVar20) goto LAB_18001ab65;
        if (param_2 == 0) {
          param_2 = 0;
          uVar25 = uVar23;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar24 = (int)uVar25 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar25 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar25 * 4);
              *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar25 * 4) = 0;
              uVar25 = (ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar24 = 0;
          uVar25 = uVar23;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar19 = (int)uVar25 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar25 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar25 * 4);
              *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar25 * 4) =
                   *(undefined4 *)(param_2 + uVar25 * 4);
              uVar24 = *(uint *)(param_1 + 4);
              uVar25 = (ulonglong)uVar19;
            } while (uVar19 < uVar24);
          }
          param_2 = param_2 + (ulonglong)uVar24 * 4;
        }
        uVar20 = uVar20 + 1;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        local_c0 = uVar20;
        iVar8 = *piVar1;
      }
      if (param_4 != (void *)0x0) {
        FUN_180019ab0(param_1,(longlong)param_4);
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          local_a8[0] = 0;
          local_a8[1] = 1;
          local_a8[2] = 2;
          local_a8[3] = 3;
          local_a8[4] = 4;
          local_a8[5] = 4;
          memmove(param_4,param_4,
                  (ulonglong)(uint)(local_a8[*(int *)(param_1 + 0x40)] * *(int *)(param_1 + 0x44)));
          if (*(int *)(param_1 + 0x4c) != 0) {
            do {
              lVar14 = 0;
              lVar11 = *(longlong *)(param_1 + 0x58);
              uVar19 = 0;
              uVar24 = *(uint *)(lVar11 + 4 + uVar23 * 0x28);
              fVar3 = *(float *)(lVar11 + 8 + uVar23 * 0x28);
              fVar27 = fVar12 - fVar3;
              if (uVar24 < 4) {
                if (uVar24 != 0) goto LAB_18001a79c;
              }
              else {
                lVar21 = -(longlong)param_4;
                uVar13 = (uVar24 - 4 >> 2) + 1;
                uVar20 = (ulonglong)uVar13;
                uVar19 = uVar13 * 4;
                lVar17 = lVar21 + -8 + (longlong)param_4 + 8;
                lVar14 = (ulonglong)uVar13 * 4;
                pfVar15 = (float *)((longlong)param_4 + 8);
                do {
                  pfVar2 = (float *)(*(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) + lVar17);
                  lVar17 = lVar17 + 0x10;
                  fVar26 = fVar3 * *pfVar2 + fVar27 * pfVar15[-2];
                  pfVar15[-2] = fVar26;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) + lVar21 + -8) = fVar26;
                  fVar26 = fVar3 * *(float *)((longlong)pfVar15 +
                                             *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) +
                                             lVar21 + -4) + fVar27 * pfVar15[-1];
                  pfVar15[-1] = fVar26;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) + lVar21 + -4) = fVar26;
                  fVar26 = fVar3 * *(float *)((longlong)pfVar15 +
                                             *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) + lVar21)
                           + fVar27 * *pfVar15;
                  *pfVar15 = fVar26;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) + lVar21) = fVar26;
                  fVar26 = fVar3 * *(float *)((longlong)pfVar15 +
                                             *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) +
                                             lVar21 + 4) + fVar27 * pfVar15[1];
                  pfVar15[1] = fVar26;
                  *(float *)((longlong)pfVar15 +
                            *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28) + lVar21 + 4) = fVar26;
                  uVar20 = uVar20 - 1;
                  pfVar15 = pfVar15 + 4;
                } while (uVar20 != 0);
                if (uVar19 < uVar24) {
LAB_18001a79c:
                  lVar14 = lVar14 * 4;
                  uVar20 = (ulonglong)(uVar24 - uVar19);
                  do {
                    fVar26 = fVar3 * *(float *)(lVar14 + *(longlong *)
                                                          (lVar11 + 0x10 + uVar23 * 0x28)) +
                             fVar27 * *(float *)(lVar14 + (longlong)param_4);
                    *(float *)(lVar14 + (longlong)param_4) = fVar26;
                    *(float *)(lVar14 + *(longlong *)(lVar11 + 0x10 + uVar23 * 0x28)) = fVar26;
                    lVar14 = lVar14 + 4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              uVar24 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1 + 0x4c));
          }
          uVar20 = 0;
          if (*(int *)(param_1 + 0x50) != 0) {
            do {
              lVar14 = 0;
              lVar11 = *(longlong *)(param_1 + 0x60);
              uVar19 = 0;
              lVar17 = uVar20 * 0x40;
              uVar24 = *(uint *)(lVar17 + 4 + lVar11);
              fVar3 = *(float *)(lVar17 + 8 + lVar11);
              fVar27 = *(float *)(lVar17 + 0xc + lVar11);
              fVar26 = *(float *)(lVar17 + 0x10 + lVar11);
              fVar4 = *(float *)(lVar17 + 0x14 + lVar11);
              fVar5 = *(float *)(lVar17 + 0x18 + lVar11);
              if (uVar24 < 4) {
                if (uVar24 != 0) goto LAB_18001aa4b;
              }
              else {
                lVar22 = -(longlong)param_4;
                lVar21 = 0;
                uVar13 = (uVar24 - 4 >> 2) + 1;
                lVar18 = 0xc;
                uVar25 = (ulonglong)uVar13;
                lVar16 = 8;
                uVar19 = uVar13 * 4;
                lVar14 = (ulonglong)uVar13 * 4;
                pfVar15 = (float *)((longlong)param_4 + 8);
                do {
                  fVar6 = pfVar15[-2];
                  fVar28 = fVar3 * fVar6 +
                           *(float *)(*(longlong *)(lVar17 + 0x20 + lVar11) + lVar21);
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar17 + 0x28 + lVar11) + -8 + lVar22);
                  pfVar15[-2] = fVar28;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x20 + lVar11) + lVar22 + -8
                            ) = (fVar27 * fVar6 - fVar4 * fVar28) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x28 + lVar11) + lVar22 + -8
                            ) = fVar26 * fVar6 - fVar5 * fVar28;
                  fVar6 = pfVar15[-1];
                  fVar28 = fVar3 * fVar6 +
                           *(float *)((longlong)pfVar15 +
                                     *(longlong *)(lVar17 + 0x20 + lVar11) + -4 + lVar22);
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar17 + 0x28 + lVar11) + -4 + lVar22);
                  pfVar15[-1] = fVar28;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x20 + lVar11) + -4 + lVar22
                            ) = (fVar27 * fVar6 - fVar4 * fVar28) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x28 + lVar11) + -4 + lVar22
                            ) = fVar26 * fVar6 - fVar5 * fVar28;
                  fVar6 = *pfVar15;
                  fVar28 = fVar3 * fVar6 +
                           *(float *)(*(longlong *)(lVar17 + 0x20 + lVar11) + lVar16);
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar17 + 0x28 + lVar11) + lVar22);
                  *pfVar15 = fVar28;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x20 + lVar11) + lVar22) =
                       (fVar27 * fVar6 - fVar28 * fVar4) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x28 + lVar11) + lVar22) =
                       fVar26 * fVar6 - fVar28 * fVar5;
                  fVar6 = pfVar15[1];
                  fVar28 = fVar3 * fVar6 +
                           *(float *)(*(longlong *)(lVar17 + 0x20 + lVar11) + lVar18);
                  fVar7 = *(float *)((longlong)pfVar15 +
                                    *(longlong *)(lVar17 + 0x28 + lVar11) + 4 + lVar22);
                  pfVar15[1] = fVar28;
                  lVar21 = lVar21 + 0x10;
                  lVar16 = lVar16 + 0x10;
                  lVar18 = lVar18 + 0x10;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x20 + lVar11) + lVar22 + 4)
                       = (fVar27 * fVar6 - fVar4 * fVar28) + fVar7;
                  *(float *)((longlong)pfVar15 + *(longlong *)(lVar17 + 0x28 + lVar11) + lVar22 + 4)
                       = fVar26 * fVar6 - fVar5 * fVar28;
                  uVar25 = uVar25 - 1;
                  pfVar15 = pfVar15 + 4;
                } while (uVar25 != 0);
                param_4 = local_res20;
                if (uVar19 < uVar24) {
LAB_18001aa4b:
                  lVar14 = lVar14 * 4;
                  uVar25 = (ulonglong)(uVar24 - uVar19);
                  do {
                    fVar6 = *(float *)((longlong)param_4 + lVar14);
                    fVar28 = fVar6 * fVar3 +
                             *(float *)(*(longlong *)(lVar17 + 0x20 + lVar11) + lVar14);
                    fVar7 = *(float *)(*(longlong *)(lVar17 + 0x28 + lVar11) + lVar14);
                    *(float *)((longlong)param_4 + lVar14) = fVar28;
                    *(float *)(lVar14 + *(longlong *)(lVar17 + 0x20 + lVar11)) =
                         (fVar6 * fVar27 - fVar28 * fVar4) + fVar7;
                    *(float *)(lVar14 + *(longlong *)(lVar17 + 0x28 + lVar11)) =
                         fVar6 * fVar26 - fVar28 * fVar5;
                    lVar14 = lVar14 + 4;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              uVar24 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1 + 0x50));
          }
        }
        param_4 = (void *)((longlong)param_4 + (ulonglong)*(uint *)(param_1 + 4) * 4);
        uVar20 = local_c0;
        local_res20 = param_4;
      }
      uVar25 = local_c8 + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x2c)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_c8 = uVar25;
    } while (uVar25 < uVar10);
  }
LAB_18001ab65:
  *param_3 = uVar20;
  *param_5 = uVar25;
  return 0;
}


