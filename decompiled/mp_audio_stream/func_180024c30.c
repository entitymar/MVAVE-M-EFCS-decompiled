// FUN_180024c30 @ 180024c30

undefined8 FUN_180024c30(int *param_1,undefined2 *param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar5 = DAT_1800320cc;
  if (((param_1 == (int *)0x0) || (param_2 == (undefined2 *)0x0)) || (param_3 == 0)) {
    return 0xfffffffe;
  }
  if (*param_1 == 5) {
    uVar14 = 0;
    if (param_4 != 0) {
      do {
        uVar2 = param_1[1];
        fVar17 = fVar5 - (float)param_1[2];
        uVar11 = 0;
        fVar18 = fVar5 - fVar17;
        if (uVar2 < 4) {
          if (uVar2 != 0) {
            lVar9 = 0;
            goto LAB_180024dce;
          }
        }
        else {
          lVar12 = param_3 - (longlong)param_2;
          lVar4 = -(longlong)param_2;
          uVar6 = (uVar2 - 4 >> 2) + 1;
          uVar10 = (ulonglong)uVar6;
          lVar15 = (longlong)(param_2 + 2) + lVar4 + -4;
          uVar11 = uVar6 * 4;
          lVar9 = (ulonglong)uVar6 * 4;
          pfVar8 = (float *)(param_2 + 2);
          do {
            pfVar1 = (float *)(*(longlong *)(param_1 + 4) + lVar15);
            lVar15 = lVar15 + 0x10;
            fVar16 = fVar18 * *(float *)(lVar12 + -4 + (longlong)pfVar8) - fVar17 * *pfVar1;
            pfVar8[-1] = fVar16;
            *(float *)((longlong)pfVar8 + *(longlong *)(param_1 + 4) + lVar4 + -4) = fVar16;
            fVar16 = fVar18 * *(float *)(lVar12 + (longlong)pfVar8) -
                     fVar17 * *(float *)((longlong)pfVar8 + *(longlong *)(param_1 + 4) + lVar4);
            *pfVar8 = fVar16;
            *(float *)((longlong)pfVar8 + *(longlong *)(param_1 + 4) + lVar4) = fVar16;
            fVar16 = fVar18 * *(float *)(lVar12 + 4 + (longlong)pfVar8) -
                     fVar17 * *(float *)((longlong)pfVar8 +
                                        *(longlong *)(param_1 + 4) + (4 - (longlong)param_2));
            pfVar8[1] = fVar16;
            *(float *)((longlong)pfVar8 + *(longlong *)(param_1 + 4) + (4 - (longlong)param_2)) =
                 fVar16;
            fVar16 = fVar18 * *(float *)(lVar12 + 8 + (longlong)pfVar8) -
                     fVar17 * *(float *)((longlong)pfVar8 +
                                        *(longlong *)(param_1 + 4) + (8 - (longlong)param_2));
            pfVar8[2] = fVar16;
            *(float *)((longlong)pfVar8 + *(longlong *)(param_1 + 4) + (8 - (longlong)param_2)) =
                 fVar16;
            uVar10 = uVar10 - 1;
            pfVar8 = pfVar8 + 4;
          } while (uVar10 != 0);
          if (uVar11 < uVar2) {
LAB_180024dce:
            lVar9 = lVar9 * 4;
            uVar10 = (ulonglong)(uVar2 - uVar11);
            do {
              fVar16 = fVar18 * *(float *)((param_3 - (longlong)param_2) + lVar9 + (longlong)param_2
                                          ) -
                       fVar17 * *(float *)(lVar9 + *(longlong *)(param_1 + 4));
              *(float *)(lVar9 + (longlong)param_2) = fVar16;
              *(float *)(lVar9 + *(longlong *)(param_1 + 4)) = fVar16;
              lVar9 = lVar9 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        uVar14 = uVar14 + 1;
        param_2 = param_2 + (ulonglong)(uint)param_1[1] * 2;
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 4;
      } while (uVar14 < param_4);
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffe;
    }
    uVar14 = 0;
    if (param_4 != 0) {
      do {
        iVar3 = param_1[2];
        if (param_1[1] != 0) {
          uVar10 = (ulonglong)(uint)param_1[1];
          lVar9 = 0;
          puVar13 = param_2;
          do {
            iVar7 = *(short *)((param_3 - (longlong)param_2) + (longlong)puVar13) * iVar3 -
                    (0x4000 - iVar3) * *(int *)(lVar9 + *(longlong *)(param_1 + 4)) >> 0xe;
            *puVar13 = (short)iVar7;
            *(int *)(lVar9 + *(longlong *)(param_1 + 4)) = iVar7;
            uVar10 = uVar10 - 1;
            lVar9 = lVar9 + 4;
            puVar13 = puVar13 + 1;
          } while (uVar10 != 0);
        }
        uVar14 = uVar14 + 1;
        param_2 = param_2 + (uint)param_1[1];
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 2;
      } while (uVar14 < param_4);
      return 0;
    }
  }
  return 0;
}


