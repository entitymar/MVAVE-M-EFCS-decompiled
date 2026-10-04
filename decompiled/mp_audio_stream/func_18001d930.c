// FUN_18001d930 @ 18001d930

void FUN_18001d930(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  float local_res8 [2];
  uint local_68 [12];
  
  fVar5 = DAT_18003214c;
  dVar4 = DAT_1800320d0;
  local_68[0] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x4c);
  uVar7 = (ulonglong)uVar2;
  local_68[1] = 1;
  local_68[2] = 2;
  local_68[3] = 3;
  local_68[4] = 4;
  local_68[5] = 4;
  uVar3 = local_68[iVar1];
  if (iVar1 == 5) {
    uVar10 = 0;
    if (param_3 != 0) {
      do {
        dVar12 = *(double *)(param_1 + 0x70);
        uVar8 = 0;
        *(double *)(param_1 + 0x70) = dVar12 + *(double *)(param_1 + 0x68);
        dVar11 = (dVar12 - (double)(longlong)dVar12) - dVar4;
        dVar12 = *(double *)(param_1 + 0x58);
        if ((int)uVar7 != 0) {
          do {
            lVar6 = uVar7 * uVar10 + uVar8;
            uVar8 = uVar8 + 1;
            *(float *)(param_2 + lVar6 * 4) = (float)((dVar11 + dVar11) * dVar12);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar8 < uVar7);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_3);
      return;
    }
  }
  else if (iVar1 == 2) {
    uVar10 = 0;
    if (param_3 != 0) {
      do {
        dVar12 = *(double *)(param_1 + 0x70);
        uVar8 = 0;
        *(double *)(param_1 + 0x70) = dVar12 + *(double *)(param_1 + 0x68);
        dVar11 = (dVar12 - (double)(longlong)dVar12) - dVar4;
        dVar12 = *(double *)(param_1 + 0x58);
        if ((int)uVar7 != 0) {
          do {
            lVar6 = uVar7 * uVar10 + uVar8;
            uVar8 = uVar8 + 1;
            *(short *)(param_2 + lVar6 * 2) =
                 (short)(int)((float)((dVar11 + dVar11) * dVar12) * fVar5);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar8 < *(uint *)(param_1 + 0x4c));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_3);
      return;
    }
  }
  else {
    uVar10 = 0;
    if (param_3 != 0) {
      do {
        dVar12 = *(double *)(param_1 + 0x70);
        uVar8 = 0;
        *(double *)(param_1 + 0x70) = dVar12 + *(double *)(param_1 + 0x68);
        dVar12 = (dVar12 - (double)(longlong)dVar12) - dVar4;
        local_res8[0] = (float)((dVar12 + dVar12) * *(double *)(param_1 + 0x58));
        if ((int)uVar7 != 0) {
          pauVar9 = (undefined1 (*) [16])((uVar2 * uVar3) * uVar10 + param_2);
          do {
            FUN_180028b70(pauVar9,*(int *)(param_1 + 0x48),local_res8,5,1,0);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
            uVar8 = uVar8 + 1;
            pauVar9 = (undefined1 (*) [16])(*pauVar9 + uVar3);
          } while (uVar8 < uVar7);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_3);
    }
  }
  return;
}


