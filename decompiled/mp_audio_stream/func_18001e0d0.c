// FUN_18001e0d0 @ 18001e0d0

void FUN_18001e0d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  float local_res8 [2];
  uint local_98 [24];
  
  fVar7 = DAT_18003214c;
  dVar6 = DAT_1800320e0;
  dVar5 = DAT_1800320d0;
  iVar2 = *(int *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x4c);
  uVar9 = (ulonglong)uVar3;
  local_98[0] = 0;
  local_98[1] = 1;
  local_98[2] = 2;
  local_98[3] = 3;
  local_98[4] = 4;
  local_98[5] = 4;
  uVar4 = local_98[iVar2];
  uVar16 = (uint)DAT_180032280;
  uVar17 = (uint)((ulonglong)DAT_180032280 >> 0x20);
  if (iVar2 == 5) {
    uVar12 = 0;
    if (param_3 != 0) {
      dVar15 = *(double *)(param_1 + 0x68);
      dVar14 = *(double *)(param_1 + 0x58);
      do {
        dVar1 = *(double *)(param_1 + 0x70);
        dVar13 = (dVar1 - (double)(longlong)dVar1) - dVar5;
        dVar13 = dVar13 + dVar13;
        if (dVar13 <= 0.0) {
          dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar17,
                                    SUB84(dVar13,0) ^ uVar16);
        }
        uVar10 = 0;
        *(double *)(param_1 + 0x70) = dVar1 + dVar15;
        if ((int)uVar9 != 0) {
          do {
            lVar8 = uVar9 * uVar12 + uVar10;
            uVar10 = uVar10 + 1;
            *(float *)(param_2 + lVar8 * 4) = (float)(((dVar13 + dVar13) - dVar6) * dVar14);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar10 < uVar9);
          dVar15 = *(double *)(param_1 + 0x68);
          dVar14 = *(double *)(param_1 + 0x58);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
  }
  else if (iVar2 == 2) {
    uVar12 = 0;
    if (param_3 != 0) {
      dVar15 = *(double *)(param_1 + 0x68);
      dVar14 = *(double *)(param_1 + 0x58);
      do {
        dVar1 = *(double *)(param_1 + 0x70);
        dVar13 = (dVar1 - (double)(longlong)dVar1) - dVar5;
        dVar13 = dVar13 + dVar13;
        if (dVar13 <= 0.0) {
          dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar17,
                                    SUB84(dVar13,0) ^ uVar16);
        }
        uVar10 = 0;
        *(double *)(param_1 + 0x70) = dVar1 + dVar15;
        if ((int)uVar9 != 0) {
          do {
            lVar8 = uVar9 * uVar12 + uVar10;
            uVar10 = uVar10 + 1;
            *(short *)(param_2 + lVar8 * 2) =
                 (short)(int)((float)(((dVar13 + dVar13) - dVar6) * dVar14) * fVar7);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar10 < *(uint *)(param_1 + 0x4c));
          dVar15 = *(double *)(param_1 + 0x68);
          dVar14 = *(double *)(param_1 + 0x58);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
  }
  else {
    uVar12 = 0;
    if (param_3 != 0) {
      do {
        dVar15 = *(double *)(param_1 + 0x70);
        dVar14 = (dVar15 - (double)(longlong)dVar15) - dVar5;
        dVar14 = dVar14 + dVar14;
        if (dVar14 <= 0.0) {
          dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar17,
                                    SUB84(dVar14,0) ^ uVar16);
        }
        uVar10 = 0;
        *(double *)(param_1 + 0x70) = dVar15 + *(double *)(param_1 + 0x68);
        local_res8[0] = (float)(((dVar14 + dVar14) - dVar6) * *(double *)(param_1 + 0x58));
        if ((int)uVar9 != 0) {
          pauVar11 = (undefined1 (*) [16])((uVar3 * uVar4) * uVar12 + param_2);
          do {
            FUN_180028b70(pauVar11,*(int *)(param_1 + 0x48),local_res8,5,1,0);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x4c);
            uVar10 = uVar10 + 1;
            pauVar11 = (undefined1 (*) [16])(*pauVar11 + uVar4);
          } while (uVar10 < uVar9);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
  }
  return;
}


