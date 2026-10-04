// FUN_180001000 @ 180001000

undefined1 (*) [32]
FUN_180001000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  undefined1 (*pauVar3) [32];
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  undefined1 (*pauVar12) [32];
  
  if ((int)param_2 != 0x10) {
    FUN_180003160(0x180018310,param_2,param_3,param_4);
    return (undefined1 (*) [32])0x0;
  }
  uVar9 = param_3;
  FUN_180003160(0x180018338,param_2,param_3,param_4);
  uVar5 = 0xfc8;
  pauVar3 = _calloc_base(1,0xfc8);
  FUN_180003160(0x180018350,uVar5,uVar9,param_4);
  if (pauVar3 != (undefined1 (*) [32])0x0) {
    FUN_180003160(0x180018368,uVar5,uVar9,param_4);
    FUN_180016230(pauVar3,0,0xfc8);
    fVar2 = DAT_1800183c4;
    pfVar11 = (float *)(param_1 + 0x4c0);
    lVar8 = 0;
    pfVar6 = (float *)(param_1 + 0x80);
    *(uint *)(pauVar3[0x72] + 4) = (uint)((int)param_3 != 0);
    lVar7 = -0x4c0 - param_1;
    lVar10 = lVar8;
    pauVar12 = pauVar3;
    do {
      lVar1 = (longlong)pfVar11 + (longlong)pauVar3;
      *(int *)pauVar12[2] = (int)(pfVar6[-0x20] * fVar2);
      *(int *)(pauVar3[0x24] + lVar10) = (int)(pfVar6[-0x10] * fVar2);
      *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xc00 - param_1)) = (int)(*pfVar6 * fVar2);
      *(int *)(*pauVar3 + lVar10) = (int)(pfVar11[-0x100] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10) = (int)(*pfVar11 * fVar2);
      *(int *)(pauVar3[0x44] + lVar8) = (int)(pfVar11[0x100] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 4) = (int)(pfVar11[-0xff] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 4) = (int)(pfVar11[1] * fVar2);
      *(int *)(lVar1 + 0x884 + lVar7) = (int)(pfVar11[0x101] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 8) = (int)(pfVar11[-0xfe] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 8) = (int)(pfVar11[2] * fVar2);
      *(int *)(lVar1 + 0x888 + lVar7) = (int)(pfVar11[0x102] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 0xc) = (int)(pfVar11[-0xfd] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 0xc) = (int)(pfVar11[3] * fVar2);
      *(int *)(lVar1 + 0x88c + lVar7) = (int)(pfVar11[0x103] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 0x10) = (int)(pfVar11[-0xfc] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 0x10) = (int)(pfVar11[4] * fVar2);
      *(int *)(lVar1 + 0x890 + lVar7) = (int)(pfVar11[0x104] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 0x14) = (int)(pfVar11[-0xfb] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 0x14) = (int)(pfVar11[5] * fVar2);
      *(int *)(lVar1 + 0x894 + lVar7) = (int)(pfVar11[0x105] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 0x18) = (int)(pfVar11[-0xfa] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 0x18) = (int)(pfVar11[6] * fVar2);
      *(int *)(lVar1 + 0x898 + lVar7) = (int)(pfVar11[0x106] * fVar2);
      *(int *)(*pauVar3 + lVar10 + 0x1c) = (int)(pfVar11[-0xf9] * fVar2);
      *(int *)(pauVar3[0x22] + lVar10 + 0x1c) = (int)(pfVar11[7] * fVar2);
      *(int *)(lVar1 + 0x89c + lVar7) = (int)(pfVar11[0x107] * fVar2);
      *(int *)(pauVar3[1] + lVar10) = (int)(pfVar11[-0xf8] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10) = (int)(pfVar11[8] * fVar2);
      *(int *)(lVar1 + 0x8a0 + lVar7) = (int)(pfVar11[0x108] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 4) = (int)(pfVar11[-0xf7] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 4) = (int)(pfVar11[9] * fVar2);
      *(int *)(lVar1 + 0x8a4 + lVar7) = (int)(pfVar11[0x109] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 8) = (int)(pfVar11[-0xf6] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 8) = (int)(pfVar11[10] * fVar2);
      *(int *)(lVar1 + 0x8a8 + lVar7) = (int)(pfVar11[0x10a] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 0xc) = (int)(pfVar11[-0xf5] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 0xc) = (int)(pfVar11[0xb] * fVar2);
      *(int *)(lVar1 + 0x8ac + lVar7) = (int)(pfVar11[0x10b] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 0x10) = (int)(pfVar11[-0xf4] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 0x10) = (int)(pfVar11[0xc] * fVar2);
      *(int *)(lVar1 + 0x8b0 + lVar7) = (int)(pfVar11[0x10c] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 0x14) = (int)(pfVar11[-0xf3] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 0x14) = (int)(pfVar11[0xd] * fVar2);
      *(int *)(lVar1 + 0x8b4 + lVar7) = (int)(pfVar11[0x10d] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 0x18) = (int)(pfVar11[-0xf2] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 0x18) = (int)(pfVar11[0xe] * fVar2);
      *(int *)(lVar1 + 0x8b8 + lVar7) = (int)(pfVar11[0x10e] * fVar2);
      *(int *)(pauVar3[1] + lVar10 + 0x1c) = (int)(pfVar11[-0xf1] * fVar2);
      *(int *)(pauVar3[0x23] + lVar10 + 0x1c) = (int)(pfVar11[0xf] * fVar2);
      *(int *)(lVar1 + 0x8bc + lVar7) = (int)(pfVar11[0x10f] * fVar2);
      pfVar4 = pfVar6 + 0x310;
      if ((int)param_3 != 0) {
        *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xdc8 - param_1)) = (int)(*pfVar4 * fVar2);
        *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xe08 - param_1)) =
             (int)(pfVar6[800] * fVar2);
        *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xe48 - param_1)) =
             (int)(pfVar6[0x330] * fVar2);
        *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xe88 - param_1)) =
             (int)(pfVar6[0x340] * fVar2);
        *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xec8 - param_1)) =
             (int)(pfVar6[0x350] * fVar2);
        *(int *)((longlong)pfVar6 + (longlong)pauVar3 + (0xf08 - param_1)) =
             (int)(pfVar6[0x360] * fVar2);
        pfVar4 = pfVar6 + 0x370;
      }
      lVar10 = lVar10 + 0x44;
      lVar1 = (longlong)pfVar6 + (longlong)pauVar3;
      pfVar11 = pfVar11 + 0x10;
      pfVar6 = pfVar6 + 1;
      pauVar12 = (undefined1 (*) [32])(pauVar12[2] + 4);
      lVar8 = lVar8 + 0x40;
      *(int *)(lVar1 + (0xc40 - param_1)) = (int)(*pfVar4 * fVar2);
    } while (lVar10 < 0x440);
    return pauVar3;
  }
  FUN_180003160(0x180018388,0xfc8,uVar9,param_4);
  return (undefined1 (*) [32])0x0;
}


