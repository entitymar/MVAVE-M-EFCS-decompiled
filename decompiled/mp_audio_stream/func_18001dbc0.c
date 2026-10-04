// FUN_18001dbc0 @ 18001dbc0

void FUN_18001dbc0(longlong param_1,longlong param_2,ulonglong param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  float local_res8 [2];
  uint local_88 [20];
  
  fVar6 = DAT_18003214c;
  dVar5 = DAT_180032100;
  local_88[0] = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  local_88[1] = 1;
  local_88[2] = 2;
  uVar3 = *(uint *)(param_1 + 0x4c);
  uVar9 = (ulonglong)uVar3;
  local_88[3] = 3;
  local_88[4] = 4;
  local_88[5] = 4;
  uVar4 = local_88[iVar2];
  if (iVar2 == 5) {
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        dVar1 = *(double *)(param_1 + 0x70);
        dVar12 = sin(dVar1 * dVar5);
        dVar13 = *(double *)(param_1 + 0x58);
        uVar8 = 0;
        *(double *)(param_1 + 0x70) = dVar1 + *(double *)(param_1 + 0x68);
        if ((int)uVar9 != 0) {
          do {
            lVar7 = uVar9 * uVar11 + uVar8;
            uVar8 = uVar8 + 1;
            *(float *)(param_2 + lVar7 * 4) = (float)(dVar12 * dVar13);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar8 < uVar9);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
    }
  }
  else if (iVar2 == 2) {
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        dVar1 = *(double *)(param_1 + 0x70);
        dVar12 = sin(dVar1 * dVar5);
        dVar13 = *(double *)(param_1 + 0x58);
        uVar8 = 0;
        *(double *)(param_1 + 0x70) = dVar1 + *(double *)(param_1 + 0x68);
        if ((int)uVar9 != 0) {
          do {
            lVar7 = uVar9 * uVar11 + uVar8;
            uVar8 = uVar8 + 1;
            *(short *)(param_2 + lVar7 * 2) = (short)(int)((float)(dVar12 * dVar13) * fVar6);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x4c);
          } while (uVar8 < *(uint *)(param_1 + 0x4c));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
    }
  }
  else {
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        dVar1 = *(double *)(param_1 + 0x70);
        dVar13 = sin(dVar1 * dVar5);
        uVar8 = 0;
        local_res8[0] = (float)(dVar13 * *(double *)(param_1 + 0x58));
        *(double *)(param_1 + 0x70) = dVar1 + *(double *)(param_1 + 0x68);
        if ((int)uVar9 != 0) {
          pauVar10 = (undefined1 (*) [16])((uVar3 * uVar4) * uVar11 + param_2);
          do {
            FUN_180028b70(pauVar10,*(int *)(param_1 + 0x48),local_res8,5,1,0);
            uVar8 = uVar8 + 1;
            pauVar10 = (undefined1 (*) [16])(*pauVar10 + uVar4);
          } while (uVar8 < *(uint *)(param_1 + 0x4c));
          uVar9 = (ulonglong)*(uint *)(param_1 + 0x4c);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3);
    }
  }
  return;
}


