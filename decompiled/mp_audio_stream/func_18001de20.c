// FUN_18001de20 @ 18001de20

void FUN_18001de20(longlong param_1,double param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  float local_res8 [2];
  uint local_78 [16];
  
  fVar4 = DAT_18003214c;
  iVar1 = *(int *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x4c);
  uVar6 = (ulonglong)uVar2;
  local_78[0] = 0;
  local_78[1] = 1;
  local_78[2] = 2;
  local_78[3] = 3;
  local_78[4] = 4;
  local_78[5] = 4;
  uVar3 = local_78[iVar1];
  uVar13 = (uint)DAT_180032280;
  uVar14 = (uint)((ulonglong)DAT_180032280 >> 0x20);
  if (iVar1 == 5) {
    uVar9 = 0;
    if (param_4 != 0) {
      dVar12 = *(double *)(param_1 + 0x68);
      do {
        dVar11 = *(double *)(param_1 + 0x70);
        dVar10 = *(double *)(param_1 + 0x58);
        if (param_2 <= dVar11 - (double)(longlong)dVar11) {
          dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar14,
                                    SUB84(dVar10,0) ^ uVar13);
        }
        uVar7 = 0;
        *(double *)(param_1 + 0x70) = dVar11 + dVar12;
        if ((int)uVar6 != 0) {
          do {
            lVar5 = uVar6 * uVar9 + uVar7;
            uVar7 = uVar7 + 1;
            *(float *)(param_3 + lVar5 * 4) = (float)dVar10;
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar7 < uVar6);
          dVar12 = *(double *)(param_1 + 0x68);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_4);
    }
  }
  else if (iVar1 == 2) {
    uVar9 = 0;
    if (param_4 != 0) {
      dVar12 = *(double *)(param_1 + 0x68);
      do {
        dVar11 = *(double *)(param_1 + 0x70);
        dVar10 = *(double *)(param_1 + 0x58);
        if (param_2 <= dVar11 - (double)(longlong)dVar11) {
          dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar14,
                                    SUB84(dVar10,0) ^ uVar13);
        }
        uVar7 = 0;
        *(double *)(param_1 + 0x70) = dVar11 + dVar12;
        if ((int)uVar6 != 0) {
          do {
            lVar5 = uVar6 * uVar9 + uVar7;
            uVar7 = uVar7 + 1;
            *(short *)(param_3 + lVar5 * 2) = (short)(int)((float)dVar10 * fVar4);
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar7 < *(uint *)(param_1 + 0x4c));
          dVar12 = *(double *)(param_1 + 0x68);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_4);
    }
  }
  else {
    uVar9 = 0;
    if (param_4 != 0) {
      do {
        dVar12 = *(double *)(param_1 + 0x70);
        dVar11 = *(double *)(param_1 + 0x58);
        if (param_2 <= dVar12 - (double)(longlong)dVar12) {
          dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar14,
                                    SUB84(dVar11,0) ^ uVar13);
        }
        uVar7 = 0;
        local_res8[0] = (float)dVar11;
        *(double *)(param_1 + 0x70) = dVar12 + *(double *)(param_1 + 0x68);
        if ((int)uVar6 != 0) {
          pauVar8 = (undefined1 (*) [16])((uVar2 * uVar3) * uVar9 + param_3);
          do {
            FUN_180028b70(pauVar8,*(int *)(param_1 + 0x48),local_res8,5,1,0);
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x4c);
            uVar7 = uVar7 + 1;
            pauVar8 = (undefined1 (*) [16])(*pauVar8 + uVar3);
          } while (uVar7 < uVar6);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_4);
    }
  }
  return;
}


