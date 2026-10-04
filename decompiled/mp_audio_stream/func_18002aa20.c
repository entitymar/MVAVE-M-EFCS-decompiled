// FUN_18002aa20 @ 18002aa20

void FUN_18002aa20(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = DAT_180032164;
  fVar3 = DAT_180032138;
  dVar2 = DAT_180032130;
  fVar1 = DAT_1800320cc;
  fVar13 = 0.0;
  fVar15 = 0.0;
  if (param_4 != 0) {
    fVar13 = DAT_180032160;
    fVar15 = DAT_1800320b8;
  }
  uVar9 = 0;
  if (param_3 != 0) {
    if (param_4 == 2) {
      do {
        iVar7 = DAT_18003604c * 0xbc8f;
        iVar7 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                        -0x7fffffff;
        iVar5 = iVar7 * 0xbc8f;
        DAT_18003604c =
             iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) * -0x7fffffff;
        fVar12 = (float)((double)iVar7 / dVar2) * (0.0 - fVar13) + fVar13 +
                 (float)((double)DAT_18003604c / dVar2) * (fVar15 - 0.0) + 0.0 +
                 *(float *)(param_2 + uVar9 * 4);
        fVar14 = fVar4;
        if ((fVar4 <= fVar12) && (fVar14 = fVar1, fVar12 <= fVar1)) {
          fVar14 = fVar12;
        }
        *(char *)(param_1 + uVar9) = (char)(int)((fVar14 + fVar1) * fVar3);
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_3);
    }
    else {
      if (3 < param_3) {
        puVar10 = (undefined1 *)(param_1 + 2);
        fVar14 = fVar15 - fVar13;
        lVar6 = (param_3 - 4 >> 2) + 1;
        pfVar8 = (float *)(param_2 + 8);
        uVar9 = lVar6 * 4;
        do {
          if (param_4 == 1) {
            iVar5 = DAT_18003604c * 0xbc8f;
            DAT_18003604c =
                 iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) *
                         -0x7fffffff;
            fVar12 = (float)((double)DAT_18003604c / dVar2) * fVar14 + fVar13;
          }
          else {
            fVar12 = 0.0;
          }
          fVar12 = pfVar8[-2] + fVar12;
          fVar11 = fVar4;
          if ((fVar4 <= fVar12) && (fVar11 = fVar1, fVar12 <= fVar1)) {
            fVar11 = fVar12;
          }
          puVar10[-2] = (char)(int)((fVar11 + fVar1) * fVar3);
          if (param_4 == 1) {
            iVar5 = DAT_18003604c * 0xbc8f;
            DAT_18003604c =
                 iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) *
                         -0x7fffffff;
            fVar12 = (float)((double)DAT_18003604c / dVar2) * fVar14 + fVar13;
          }
          else {
            fVar12 = 0.0;
          }
          fVar12 = pfVar8[-1] + fVar12;
          fVar11 = fVar4;
          if ((fVar4 <= fVar12) && (fVar11 = fVar1, fVar12 <= fVar1)) {
            fVar11 = fVar12;
          }
          puVar10[-1] = (char)(int)((fVar11 + fVar1) * fVar3);
          if (param_4 == 1) {
            iVar5 = DAT_18003604c * 0xbc8f;
            DAT_18003604c =
                 iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) *
                         -0x7fffffff;
            fVar12 = (float)((double)DAT_18003604c / dVar2) * fVar14 + fVar13;
          }
          else {
            fVar12 = 0.0;
          }
          fVar12 = *pfVar8 + fVar12;
          fVar11 = fVar4;
          if ((fVar4 <= fVar12) && (fVar11 = fVar1, fVar12 <= fVar1)) {
            fVar11 = fVar12;
          }
          *puVar10 = (char)(int)((fVar11 + fVar1) * fVar3);
          if (param_4 == 1) {
            iVar5 = DAT_18003604c * 0xbc8f;
            DAT_18003604c =
                 iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) *
                         -0x7fffffff;
            fVar12 = (float)((double)DAT_18003604c / dVar2) * fVar14 + fVar13;
          }
          else {
            fVar12 = 0.0;
          }
          fVar12 = pfVar8[1] + fVar12;
          fVar11 = fVar4;
          if ((fVar4 <= fVar12) && (fVar11 = fVar1, fVar12 <= fVar1)) {
            fVar11 = fVar12;
          }
          pfVar8 = pfVar8 + 4;
          puVar10[1] = (char)(int)((fVar11 + fVar1) * fVar3);
          puVar10 = puVar10 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (param_3 <= uVar9) {
          return;
        }
      }
      do {
        if (param_4 == 1) {
          iVar5 = DAT_18003604c * 0xbc8f;
          DAT_18003604c =
               iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) * -0x7fffffff
          ;
          fVar14 = (float)((double)DAT_18003604c / dVar2) * (fVar15 - fVar13) + fVar13;
        }
        else {
          fVar14 = 0.0;
        }
        fVar14 = *(float *)(param_2 + uVar9 * 4) + fVar14;
        fVar12 = fVar4;
        if ((fVar4 <= fVar14) && (fVar12 = fVar1, fVar14 <= fVar1)) {
          fVar12 = fVar14;
        }
        *(char *)(uVar9 + param_1) = (char)(int)((fVar12 + fVar1) * fVar3);
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_3);
    }
  }
  return;
}


