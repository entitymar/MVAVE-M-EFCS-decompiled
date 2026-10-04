// FUN_180025ba0 @ 180025ba0

undefined8 FUN_180025ba0(int *param_1,undefined2 *param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = DAT_1800320cc;
  if (((param_1 == (int *)0x0) || (param_2 == (undefined2 *)0x0)) || (param_3 == 0)) {
    return 0xfffffffe;
  }
  if (*param_1 == 5) {
    uVar15 = 0;
    if (param_4 != 0) {
      do {
        uVar3 = param_1[1];
        uVar12 = 0;
        fVar2 = (float)param_1[2];
        fVar18 = fVar6 - fVar2;
        if (uVar3 < 4) {
          if (uVar3 != 0) {
            lVar10 = 0;
            goto LAB_180025d3e;
          }
        }
        else {
          lVar13 = param_3 - (longlong)param_2;
          lVar5 = -(longlong)param_2;
          uVar7 = (uVar3 - 4 >> 2) + 1;
          uVar11 = (ulonglong)uVar7;
          lVar16 = (longlong)(param_2 + 2) + lVar5 + -4;
          uVar12 = uVar7 * 4;
          lVar10 = (ulonglong)uVar7 * 4;
          pfVar9 = (float *)(param_2 + 2);
          do {
            pfVar1 = (float *)(*(longlong *)(param_1 + 4) + lVar16);
            lVar16 = lVar16 + 0x10;
            fVar17 = fVar2 * *pfVar1 + fVar18 * *(float *)(lVar13 + -4 + (longlong)pfVar9);
            pfVar9[-1] = fVar17;
            *(float *)((longlong)pfVar9 + *(longlong *)(param_1 + 4) + lVar5 + -4) = fVar17;
            fVar17 = fVar2 * *(float *)((longlong)pfVar9 + *(longlong *)(param_1 + 4) + lVar5) +
                     fVar18 * *(float *)(lVar13 + (longlong)pfVar9);
            *pfVar9 = fVar17;
            *(float *)((longlong)pfVar9 + *(longlong *)(param_1 + 4) + lVar5) = fVar17;
            fVar17 = fVar2 * *(float *)((longlong)pfVar9 +
                                       *(longlong *)(param_1 + 4) + (4 - (longlong)param_2)) +
                     fVar18 * *(float *)(lVar13 + 4 + (longlong)pfVar9);
            pfVar9[1] = fVar17;
            *(float *)((longlong)pfVar9 + *(longlong *)(param_1 + 4) + (4 - (longlong)param_2)) =
                 fVar17;
            fVar17 = fVar2 * *(float *)((longlong)pfVar9 +
                                       *(longlong *)(param_1 + 4) + (8 - (longlong)param_2)) +
                     fVar18 * *(float *)(lVar13 + 8 + (longlong)pfVar9);
            pfVar9[2] = fVar17;
            *(float *)((longlong)pfVar9 + *(longlong *)(param_1 + 4) + (8 - (longlong)param_2)) =
                 fVar17;
            uVar11 = uVar11 - 1;
            pfVar9 = pfVar9 + 4;
          } while (uVar11 != 0);
          if (uVar12 < uVar3) {
LAB_180025d3e:
            lVar10 = lVar10 * 4;
            uVar11 = (ulonglong)(uVar3 - uVar12);
            do {
              fVar17 = fVar2 * *(float *)(*(longlong *)(param_1 + 4) + lVar10) +
                       fVar18 * *(float *)((param_3 - (longlong)param_2) +
                                          lVar10 + (longlong)param_2);
              *(float *)(lVar10 + (longlong)param_2) = fVar17;
              *(float *)(lVar10 + *(longlong *)(param_1 + 4)) = fVar17;
              lVar10 = lVar10 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        uVar15 = uVar15 + 1;
        param_2 = param_2 + (ulonglong)(uint)param_1[1] * 2;
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 4;
      } while (uVar15 < param_4);
    }
  }
  else {
    if (*param_1 != 2) {
      return 0xfffffffe;
    }
    uVar15 = 0;
    if (param_4 != 0) {
      do {
        iVar4 = param_1[2];
        if (param_1[1] != 0) {
          uVar11 = (ulonglong)(uint)param_1[1];
          lVar10 = 0;
          puVar14 = param_2;
          do {
            iVar8 = (int)*(short *)((param_3 - (longlong)param_2) + (longlong)puVar14) *
                    (0x4000 - iVar4) +
                    iVar4 * *(int *)(*(longlong *)(param_1 + 4) + -4 + lVar10 + 4) >> 0xe;
            *puVar14 = (short)iVar8;
            *(int *)(lVar10 + *(longlong *)(param_1 + 4)) = iVar8;
            uVar11 = uVar11 - 1;
            lVar10 = lVar10 + 4;
            puVar14 = puVar14 + 1;
          } while (uVar11 != 0);
        }
        uVar15 = uVar15 + 1;
        param_2 = param_2 + (uint)param_1[1];
        param_3 = param_3 + (ulonglong)(uint)param_1[1] * 2;
      } while (uVar15 < param_4);
      return 0;
    }
  }
  return 0;
}


