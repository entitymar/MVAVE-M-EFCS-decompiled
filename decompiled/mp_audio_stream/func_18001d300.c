// FUN_18001d300 @ 18001d300

void FUN_18001d300(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = 0;
  if (param_4 <= 0.0) {
    fVar7 = 0.0 - param_4;
    fVar8 = param_4 + DAT_1800320cc;
    if (3 < param_3) {
      pfVar3 = (float *)(param_1 + 4);
      lVar5 = param_2 - param_1;
      lVar4 = (param_3 - 4 >> 2) + 1;
      uVar6 = lVar4 * 4;
      do {
        fVar1 = *(float *)(lVar5 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + -4 + (longlong)pfVar3);
        *pfVar3 = fVar1 * fVar8;
        pfVar3[-1] = fVar1 * fVar7 + fVar2;
        fVar1 = *(float *)(lVar5 + 8 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + 4 + (longlong)pfVar3);
        pfVar3[2] = fVar1 * fVar8;
        pfVar3[1] = fVar1 * fVar7 + fVar2;
        fVar1 = *(float *)(lVar5 + 0x10 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + 0xc + (longlong)pfVar3);
        pfVar3[4] = fVar1 * fVar8;
        pfVar3[3] = fVar1 * fVar7 + fVar2;
        fVar1 = *(float *)(lVar5 + 0x18 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + 0x14 + (longlong)pfVar3);
        pfVar3[6] = fVar1 * fVar8;
        pfVar3[5] = fVar1 * fVar7 + fVar2;
        pfVar3 = pfVar3 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (uVar6 < param_3) {
      pfVar3 = (float *)(param_1 + 4 + uVar6 * 8);
      lVar5 = param_3 - uVar6;
      do {
        fVar1 = *(float *)((longlong)pfVar3 + (param_2 - param_1));
        fVar2 = *(float *)((param_2 - param_1) + -4 + (longlong)pfVar3);
        *pfVar3 = fVar1 * fVar8;
        pfVar3[-1] = fVar1 * fVar7 + fVar2;
        pfVar3 = pfVar3 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    lVar5 = param_2 - param_1;
    fVar8 = DAT_1800320cc - param_4;
    fVar7 = param_4 + 0.0;
    if (3 < param_3) {
      pfVar3 = (float *)(param_1 + 4);
      lVar4 = (param_3 - 4 >> 2) + 1;
      uVar6 = lVar4 * 4;
      do {
        fVar1 = *(float *)(lVar5 + -4 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + (longlong)pfVar3);
        pfVar3[-1] = fVar1 * fVar8;
        *pfVar3 = fVar1 * fVar7 + fVar2;
        fVar1 = *(float *)(lVar5 + 4 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + 8 + (longlong)pfVar3);
        pfVar3[1] = fVar1 * fVar8;
        pfVar3[2] = fVar1 * fVar7 + fVar2;
        fVar1 = *(float *)(lVar5 + 0xc + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + 0x10 + (longlong)pfVar3);
        pfVar3[3] = fVar1 * fVar8;
        pfVar3[4] = fVar1 * fVar7 + fVar2;
        fVar1 = *(float *)(lVar5 + 0x14 + (longlong)pfVar3);
        fVar2 = *(float *)(lVar5 + 0x18 + (longlong)pfVar3);
        pfVar3[5] = fVar1 * fVar8;
        pfVar3[6] = fVar1 * fVar7 + fVar2;
        pfVar3 = pfVar3 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (uVar6 < param_3) {
      lVar4 = param_3 - uVar6;
      pfVar3 = (float *)(param_1 + 4 + uVar6 * 8);
      do {
        fVar1 = *(float *)((longlong)pfVar3 + lVar5 + -4);
        fVar2 = *(float *)((longlong)pfVar3 + lVar5);
        pfVar3[-1] = fVar1 * fVar8;
        *pfVar3 = fVar1 * fVar7 + fVar2;
        pfVar3 = pfVar3 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      return;
    }
  }
  return;
}


