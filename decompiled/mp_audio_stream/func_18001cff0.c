// FUN_18001cff0 @ 18001cff0

void FUN_18001cff0(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar7 = 0;
  if (param_4 <= 0.0) {
    fVar8 = param_4 + DAT_1800320cc;
    if (param_1 == param_2) {
      if (3 < param_3) {
        lVar6 = param_2 - param_1;
        lVar4 = (param_3 - 4 >> 2) + 1;
        uVar7 = lVar4 * 4;
        pfVar3 = (float *)(param_1 + 4);
        do {
          pfVar1 = pfVar3 + 8;
          *pfVar3 = fVar8 * *(float *)(lVar6 + -0x20 + (longlong)pfVar1);
          pfVar3[2] = fVar8 * *(float *)(lVar6 + -0x18 + (longlong)pfVar1);
          pfVar3[4] = fVar8 * *(float *)(lVar6 + -0x10 + (longlong)pfVar1);
          pfVar3[6] = fVar8 * *(float *)(lVar6 + -8 + (longlong)pfVar1);
          lVar4 = lVar4 + -1;
          pfVar3 = pfVar1;
        } while (lVar4 != 0);
      }
      if (uVar7 < param_3) {
        lVar6 = param_3 - uVar7;
        pfVar3 = (float *)(param_1 + 4 + uVar7 * 8);
        do {
          *pfVar3 = fVar8 * *(float *)((longlong)pfVar3 + (param_2 - param_1));
          lVar6 = lVar6 + -1;
          pfVar3 = pfVar3 + 2;
        } while (lVar6 != 0);
        return;
      }
    }
    else {
      if (3 < param_3) {
        lVar4 = param_2 - param_1;
        lVar6 = (param_3 - 4 >> 2) + 1;
        uVar7 = lVar6 * 4;
        pfVar3 = (float *)(param_1 + 4);
        do {
          pfVar3[-1] = *(float *)(lVar4 + -4 + (longlong)pfVar3);
          *pfVar3 = fVar8 * *(float *)((longlong)pfVar3 + lVar4);
          pfVar3[1] = *(float *)((longlong)pfVar3 + lVar4 + 4);
          pfVar3[2] = fVar8 * *(float *)((longlong)pfVar3 + lVar4 + 8);
          pfVar3[3] = *(float *)((longlong)pfVar3 + lVar4 + 0xc);
          pfVar3[4] = fVar8 * *(float *)((longlong)pfVar3 + lVar4 + 0x10);
          pfVar3[5] = *(float *)((longlong)pfVar3 + lVar4 + 0x14);
          pfVar3[6] = fVar8 * *(float *)(lVar4 + -8 + (longlong)(pfVar3 + 8));
          lVar6 = lVar6 + -1;
          pfVar3 = pfVar3 + 8;
        } while (lVar6 != 0);
      }
      if (uVar7 < param_3) {
        lVar6 = param_3 - uVar7;
        pfVar3 = (float *)(param_1 + 4 + uVar7 * 8);
        do {
          pfVar3[-1] = *(float *)((param_2 - param_1) + -4 + (longlong)pfVar3);
          *pfVar3 = fVar8 * *(float *)((param_2 - param_1) + (longlong)pfVar3);
          lVar6 = lVar6 + -1;
          pfVar3 = pfVar3 + 2;
        } while (lVar6 != 0);
      }
    }
  }
  else {
    fVar8 = DAT_1800320cc - param_4;
    if (param_1 == param_2) {
      lVar6 = param_2 - param_1;
      if (3 < param_3) {
        lVar4 = (param_3 - 4 >> 2) + 1;
        uVar7 = lVar4 * 4;
        pfVar3 = (float *)(param_1 + 8);
        do {
          pfVar1 = pfVar3 + 8;
          pfVar3[-2] = fVar8 * *(float *)(lVar6 + -0x28 + (longlong)pfVar1);
          *pfVar3 = fVar8 * *(float *)(lVar6 + -0x20 + (longlong)pfVar1);
          pfVar3[2] = fVar8 * *(float *)(lVar6 + -0x18 + (longlong)pfVar1);
          pfVar3[4] = fVar8 * *(float *)(lVar6 + -0x10 + (longlong)pfVar1);
          lVar4 = lVar4 + -1;
          pfVar3 = pfVar1;
        } while (lVar4 != 0);
      }
      if (uVar7 < param_3) {
        lVar4 = param_3 - uVar7;
        pfVar3 = (float *)(param_1 + uVar7 * 8);
        do {
          *pfVar3 = fVar8 * *(float *)((longlong)pfVar3 + lVar6);
          lVar4 = lVar4 + -1;
          pfVar3 = pfVar3 + 2;
        } while (lVar4 != 0);
        return;
      }
    }
    else {
      if (3 < param_3) {
        lVar4 = param_2 - param_1;
        lVar6 = (param_3 - 4 >> 2) + 1;
        uVar7 = lVar6 * 4;
        puVar5 = (undefined4 *)(param_1 + 4);
        do {
          puVar2 = puVar5 + 8;
          puVar5[-1] = fVar8 * *(float *)(lVar4 + -0x24 + (longlong)puVar2);
          *puVar5 = *(undefined4 *)((longlong)puVar5 + lVar4);
          puVar5[1] = fVar8 * *(float *)(lVar4 + -0x1c + (longlong)puVar2);
          puVar5[2] = *(undefined4 *)((longlong)puVar5 + lVar4 + 8);
          puVar5[3] = fVar8 * *(float *)(lVar4 + -0x14 + (longlong)puVar2);
          puVar5[4] = *(undefined4 *)((longlong)puVar5 + lVar4 + 0x10);
          puVar5[5] = fVar8 * *(float *)(lVar4 + -0xc + (longlong)puVar2);
          puVar5[6] = *(undefined4 *)(lVar4 + -8 + (longlong)puVar2);
          lVar6 = lVar6 + -1;
          puVar5 = puVar2;
        } while (lVar6 != 0);
      }
      if (uVar7 < param_3) {
        lVar6 = param_3 - uVar7;
        puVar5 = (undefined4 *)(param_1 + 4 + uVar7 * 8);
        do {
          puVar5[-1] = fVar8 * *(float *)((longlong)puVar5 + (param_2 - param_1) + -4);
          *puVar5 = *(undefined4 *)((longlong)puVar5 + (param_2 - param_1));
          lVar6 = lVar6 + -1;
          puVar5 = puVar5 + 2;
        } while (lVar6 != 0);
        return;
      }
    }
  }
  return;
}


