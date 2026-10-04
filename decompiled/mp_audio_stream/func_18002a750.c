// FUN_18002a750 @ 18002a750

void FUN_18002a750(longlong param_1,longlong param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  float *pfVar9;
  float fVar10;
  
  fVar4 = DAT_180032164;
  fVar3 = DAT_180032154;
  fVar2 = DAT_1800320cc;
  uVar8 = 0;
  if (3 < param_3) {
    pfVar9 = (float *)(param_2 + 8);
    puVar7 = (undefined1 *)(param_1 + 2);
    lVar6 = (param_3 - 4 >> 2) + 1;
    uVar8 = lVar6 * 4;
    do {
      fVar1 = pfVar9[-2];
      fVar10 = fVar4;
      if ((fVar4 <= fVar1) && (fVar10 = fVar2, fVar1 <= fVar2)) {
        fVar10 = fVar1;
      }
      iVar5 = (int)(fVar10 * fVar3);
      puVar7[-2] = (char)iVar5;
      puVar7[-1] = (char)((uint)iVar5 >> 8);
      *puVar7 = (char)((uint)iVar5 >> 0x10);
      fVar1 = pfVar9[-1];
      fVar10 = fVar4;
      if ((fVar4 <= fVar1) && (fVar10 = fVar2, fVar1 <= fVar2)) {
        fVar10 = fVar1;
      }
      iVar5 = (int)(fVar10 * fVar3);
      puVar7[1] = (char)iVar5;
      puVar7[2] = (char)((uint)iVar5 >> 8);
      puVar7[3] = (char)((uint)iVar5 >> 0x10);
      fVar1 = *pfVar9;
      fVar10 = fVar4;
      if ((fVar4 <= fVar1) && (fVar10 = fVar2, fVar1 <= fVar2)) {
        fVar10 = fVar1;
      }
      iVar5 = (int)(fVar10 * fVar3);
      puVar7[4] = (char)iVar5;
      puVar7[5] = (char)((uint)iVar5 >> 8);
      puVar7[6] = (char)((uint)iVar5 >> 0x10);
      fVar1 = pfVar9[1];
      fVar10 = fVar4;
      if ((fVar4 <= fVar1) && (fVar10 = fVar2, fVar1 <= fVar2)) {
        fVar10 = fVar1;
      }
      pfVar9 = pfVar9 + 4;
      iVar5 = (int)(fVar10 * fVar3);
      puVar7[7] = (char)iVar5;
      puVar7[8] = (char)((uint)iVar5 >> 8);
      puVar7[9] = (char)((uint)iVar5 >> 0x10);
      puVar7 = puVar7 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (uVar8 < param_3) {
    puVar7 = (undefined1 *)(param_1 + uVar8 * 3 + 2);
    do {
      fVar1 = *(float *)(param_2 + uVar8 * 4);
      fVar10 = fVar4;
      if ((fVar4 <= fVar1) && (fVar10 = fVar2, fVar1 <= fVar2)) {
        fVar10 = fVar1;
      }
      uVar8 = uVar8 + 1;
      iVar5 = (int)(fVar10 * fVar3);
      puVar7[-2] = (char)iVar5;
      puVar7[-1] = (char)((uint)iVar5 >> 8);
      *puVar7 = (char)((uint)iVar5 >> 0x10);
      puVar7 = puVar7 + 3;
    } while (uVar8 < param_3);
  }
  return;
}


