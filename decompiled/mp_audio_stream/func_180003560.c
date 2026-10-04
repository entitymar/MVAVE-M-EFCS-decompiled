// FUN_180003560 @ 180003560

undefined8 FUN_180003560(int *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  float *pfVar10;
  int *piVar11;
  short *psVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  
  iVar17 = *param_1;
  if (iVar17 == 1) {
    uVar23 = 0;
    if (param_4 != 0) {
      do {
        uVar9 = param_1[1];
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar20 = (ulonglong)uVar9;
          pbVar15 = (byte *)(uVar9 * uVar23 + param_3);
          do {
            bVar2 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            uVar5 = (uVar5 - 0x80) + (uint)bVar2;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        uVar9 = 0x7f;
        if ((int)(uVar5 / (uint)param_1[2]) < 0x7f) {
          uVar9 = uVar5 / (uint)param_1[2];
        }
        cVar8 = (char)uVar9;
        if ((int)uVar9 < -0x80) {
          cVar8 = -0x80;
        }
        *(char *)(uVar23 + param_2) = cVar8 + -0x80;
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
  else if (iVar17 == 2) {
    uVar20 = 0;
    uVar23 = uVar20;
    if (param_4 != 0) {
      do {
        uVar9 = param_1[1];
        iVar17 = 0;
        if (uVar9 < 2) {
          uVar14 = uVar20;
          uVar5 = 0;
          uVar4 = 0;
          uVar19 = 0;
          uVar13 = 0;
          if (uVar9 != 0) goto LAB_180003870;
        }
        else {
          uVar6 = (uVar9 - 2 >> 1) + 1;
          uVar24 = (ulonglong)uVar6;
          uVar14 = (ulonglong)uVar6 * 2;
          psVar12 = (short *)(uVar9 * uVar23 * 2 + param_3);
          uVar25 = uVar20;
          uVar21 = uVar20;
          do {
            uVar13 = (int)uVar25 + (int)*psVar12;
            uVar25 = (ulonglong)uVar13;
            uVar19 = (int)uVar21 + (int)psVar12[1];
            uVar21 = (ulonglong)uVar19;
            uVar24 = uVar24 - 1;
            psVar12 = psVar12 + 2;
          } while (uVar24 != 0);
          uVar5 = uVar19;
          uVar4 = uVar13;
          if (uVar6 * 2 < uVar9) {
LAB_180003870:
            iVar17 = (int)*(short *)(param_3 + (uVar9 * uVar23 + uVar14) * 2);
            uVar5 = uVar19;
            uVar4 = uVar13;
          }
        }
        *(short *)(param_2 + uVar23 * 2) = (short)((uVar5 + uVar4 + iVar17) / uVar9);
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
  else if (iVar17 == 3) {
    uVar23 = 0;
    if (param_4 != 0) {
      puVar16 = (undefined1 *)(param_2 + 2);
      uVar20 = uVar23;
      do {
        uVar9 = param_1[1];
        uVar14 = uVar23;
        if (uVar9 != 0) {
          uVar25 = (ulonglong)uVar9;
          puVar22 = (undefined2 *)(param_3 + 1 + uVar9 * uVar20 * 3);
          do {
            uVar3 = *puVar22;
            puVar1 = (undefined1 *)((longlong)puVar22 + -1);
            puVar22 = (undefined2 *)((longlong)puVar22 + 3);
            uVar14 = uVar14 + ((longlong)((ulonglong)CONCAT21(uVar3,*puVar1) << 0x28) >> 0x28);
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        uVar20 = uVar20 + 1;
        lVar7 = (longlong)uVar14 / (longlong)(ulonglong)(uint)param_1[1];
        puVar16[-2] = (char)lVar7;
        puVar16[-1] = (char)((ulonglong)lVar7 >> 8);
        *puVar16 = (char)((ulonglong)lVar7 >> 0x10);
        puVar16 = puVar16 + 3;
      } while (uVar20 < param_4);
    }
  }
  else if (iVar17 == 4) {
    uVar20 = 0;
    uVar23 = uVar20;
    if (param_4 != 0) {
      do {
        uVar9 = param_1[1];
        uVar24 = (ulonglong)uVar9;
        uVar14 = uVar20;
        uVar25 = uVar20;
        uVar21 = uVar20;
        if (uVar9 < 2) {
          uVar18 = uVar20;
          if (uVar9 != 0) goto LAB_180003720;
        }
        else {
          uVar5 = (uVar9 - 2 >> 1) + 1;
          uVar24 = (ulonglong)uVar5;
          uVar18 = (ulonglong)uVar5 * 2;
          piVar11 = (int *)(uVar9 * uVar23 * 4 + param_3);
          do {
            uVar14 = uVar14 + (longlong)*piVar11;
            uVar21 = uVar21 + (longlong)piVar11[1];
            uVar24 = uVar24 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar24 != 0);
          uVar24 = (ulonglong)(uint)param_1[1];
          if (uVar5 * 2 < uVar9) {
LAB_180003720:
            uVar25 = (longlong)*(int *)(param_3 + (uVar9 * uVar23 + uVar18) * 4);
          }
        }
        *(int *)(param_2 + uVar23 * 4) =
             (int)((longlong)(uVar21 + uVar14 + uVar25) / (longlong)uVar24);
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
  else {
    if (iVar17 != 5) {
      return 0xfffffffd;
    }
    uVar23 = 0;
    if (param_4 != 0) {
      do {
        uVar9 = param_1[1];
        fVar26 = 0.0;
        if (uVar9 < 4) {
          uVar20 = 0;
          uVar5 = 0;
          if (uVar9 != 0) goto LAB_180003641;
        }
        else {
          pfVar10 = (float *)(param_3 + 8 + uVar9 * uVar23 * 4);
          uVar4 = (uVar9 - 4 >> 2) + 1;
          uVar20 = (ulonglong)uVar4;
          do {
            fVar26 = fVar26 + pfVar10[-2] + pfVar10[-1] + *pfVar10 + pfVar10[1];
            pfVar10 = pfVar10 + 4;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
          uVar20 = (ulonglong)uVar4 * 4;
          uVar5 = uVar4 * 4;
          if (uVar4 * 4 < uVar9) {
LAB_180003641:
            pfVar10 = (float *)((uVar9 * uVar23 + uVar20) * 4 + param_3);
            uVar20 = (ulonglong)(uVar9 - uVar5);
            do {
              fVar26 = fVar26 + *pfVar10;
              pfVar10 = pfVar10 + 1;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        *(float *)(param_2 + uVar23 * 4) = fVar26 / (float)(uint)param_1[1];
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_4);
    }
  }
  return 0;
}


