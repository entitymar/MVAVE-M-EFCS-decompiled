// FUN_1800268c0 @ 1800268c0

undefined8
FUN_1800268c0(ulonglong param_1,ulonglong param_2,longlong param_3,uint param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0xfffffffe;
  }
  if (param_5 == 0.0) {
    return 0;
  }
  uVar13 = (ulonglong)param_4 * param_3;
  if (param_5 != DAT_1800320cc) {
    uVar14 = 0;
    if (uVar13 == 0) {
      return 0;
    }
    if ((0xf < uVar13) &&
       (((param_2 - 4) + uVar13 * 4 < param_1 || ((param_1 - 4) + uVar13 * 4 < param_2)))) {
      pfVar11 = (float *)(param_1 + 0x10);
      lVar15 = param_2 - param_1;
      do {
        uVar14 = uVar14 + 0x10;
        pfVar2 = (float *)(lVar15 + -0x10 + (longlong)pfVar11);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        pfVar1 = (float *)(lVar15 + (longlong)pfVar11);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar11[-4] = *pfVar2 * param_5 + pfVar11[-4];
        pfVar11[-3] = fVar3 * param_5 + pfVar11[-3];
        pfVar11[-2] = fVar4 * param_5 + pfVar11[-2];
        pfVar11[-1] = fVar5 * param_5 + pfVar11[-1];
        pfVar1 = (float *)(lVar15 + 0x10 + (longlong)pfVar11);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar10 = pfVar1[3];
        *pfVar11 = fVar6 * param_5 + *pfVar11;
        pfVar11[1] = fVar7 * param_5 + pfVar11[1];
        pfVar11[2] = fVar8 * param_5 + pfVar11[2];
        pfVar11[3] = fVar9 * param_5 + pfVar11[3];
        pfVar11[4] = fVar3 * param_5 + pfVar11[4];
        pfVar11[5] = fVar4 * param_5 + pfVar11[5];
        pfVar11[6] = fVar5 * param_5 + pfVar11[6];
        pfVar11[7] = fVar10 * param_5 + pfVar11[7];
        pfVar1 = (float *)(lVar15 + 0x20 + (longlong)pfVar11);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar11[8] = *pfVar1 * param_5 + pfVar11[8];
        pfVar11[9] = fVar3 * param_5 + pfVar11[9];
        pfVar11[10] = fVar4 * param_5 + pfVar11[10];
        pfVar11[0xb] = fVar5 * param_5 + pfVar11[0xb];
        pfVar11 = pfVar11 + 0x10;
      } while (uVar14 < (uVar13 & 0xfffffffffffffff0));
      if (uVar13 <= uVar14) {
        return 0;
      }
    }
    if (3 < uVar13 - uVar14) {
      pfVar11 = (float *)(param_1 + 4 + uVar14 * 4);
      lVar15 = param_2 - param_1;
      lVar17 = ((uVar13 - uVar14) - 4 >> 2) + 1;
      uVar14 = uVar14 + lVar17 * 4;
      do {
        pfVar11[-1] = param_5 * *(float *)(lVar15 + -4 + (longlong)pfVar11) + pfVar11[-1];
        *pfVar11 = param_5 * *(float *)(lVar15 + (longlong)pfVar11) + *pfVar11;
        pfVar11[1] = param_5 * *(float *)(lVar15 + 4 + (longlong)pfVar11) + pfVar11[1];
        pfVar11[2] = param_5 * *(float *)(lVar15 + 8 + (longlong)pfVar11) + pfVar11[2];
        pfVar11 = pfVar11 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      if (uVar13 <= uVar14) {
        return 0;
      }
    }
    pfVar11 = (float *)(param_1 + uVar14 * 4);
    lVar15 = uVar13 - uVar14;
    do {
      *pfVar11 = param_5 * *(float *)((longlong)pfVar11 + (param_2 - param_1)) + *pfVar11;
      pfVar11 = pfVar11 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    return 0;
  }
  uVar14 = 0;
  if (uVar13 == 0) {
    return 0;
  }
  if ((uVar13 < 2) ||
     ((param_1 <= (param_2 - 4) + uVar13 * 4 && (param_2 <= (param_1 - 4) + uVar13 * 4))))
  goto LAB_180026a07;
  if (uVar13 < 0x10) {
    lVar15 = param_2 - param_1;
LAB_1800269ca:
    puVar12 = (undefined8 *)(param_1 + uVar14 * 4);
    do {
      uVar14 = uVar14 + 2;
      *puVar12 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar15 + (longlong)puVar12) >> 0x20) +
                          (float)((ulonglong)*puVar12 >> 0x20),
                          (float)*(undefined8 *)(lVar15 + (longlong)puVar12) + (float)*puVar12);
      puVar12 = puVar12 + 1;
    } while (uVar14 < (uVar13 & 0xfffffffffffffffe));
  }
  else {
    uVar16 = (ulonglong)((uint)uVar13 & 0xf);
    pfVar11 = (float *)(param_1 + 0x10);
    lVar15 = param_2 - param_1;
    do {
      uVar14 = uVar14 + 0x10;
      pfVar2 = (float *)(lVar15 + -0x10 + (longlong)pfVar11);
      fVar3 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      pfVar1 = (float *)(lVar15 + (longlong)pfVar11);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar11[-4] = *pfVar2 + pfVar11[-4];
      pfVar11[-3] = fVar3 + pfVar11[-3];
      pfVar11[-2] = fVar4 + pfVar11[-2];
      pfVar11[-1] = fVar5 + pfVar11[-1];
      pfVar1 = (float *)(lVar15 + 0x10 + (longlong)pfVar11);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar10 = pfVar1[3];
      *pfVar11 = fVar6 + *pfVar11;
      pfVar11[1] = fVar7 + pfVar11[1];
      pfVar11[2] = fVar8 + pfVar11[2];
      pfVar11[3] = fVar9 + pfVar11[3];
      pfVar11[4] = fVar3 + pfVar11[4];
      pfVar11[5] = fVar4 + pfVar11[5];
      pfVar11[6] = fVar5 + pfVar11[6];
      pfVar11[7] = fVar10 + pfVar11[7];
      pfVar1 = (float *)(lVar15 + 0x20 + (longlong)pfVar11);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar11[8] = *pfVar1 + pfVar11[8];
      pfVar11[9] = fVar3 + pfVar11[9];
      pfVar11[10] = fVar4 + pfVar11[10];
      pfVar11[0xb] = fVar5 + pfVar11[0xb];
      pfVar11 = pfVar11 + 0x10;
    } while (uVar14 < uVar13 - uVar16);
    if (1 < uVar16) goto LAB_1800269ca;
  }
  if (uVar13 <= uVar14) {
    return 0;
  }
LAB_180026a07:
  if (3 < uVar13 - uVar14) {
    pfVar11 = (float *)(param_1 + 4 + uVar14 * 4);
    lVar15 = param_2 - param_1;
    lVar17 = ((uVar13 - uVar14) - 4 >> 2) + 1;
    uVar14 = uVar14 + lVar17 * 4;
    do {
      pfVar11[-1] = *(float *)(lVar15 + -4 + (longlong)pfVar11) + pfVar11[-1];
      *pfVar11 = *(float *)(lVar15 + (longlong)pfVar11) + *pfVar11;
      pfVar11[1] = *(float *)(lVar15 + 4 + (longlong)pfVar11) + pfVar11[1];
      pfVar11[2] = *(float *)(lVar15 + 8 + (longlong)pfVar11) + pfVar11[2];
      pfVar11 = pfVar11 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if (uVar13 <= uVar14) {
      return 0;
    }
  }
  pfVar11 = (float *)(param_1 + uVar14 * 4);
  lVar15 = uVar13 - uVar14;
  do {
    *pfVar11 = *(float *)((longlong)pfVar11 + (param_2 - param_1)) + *pfVar11;
    pfVar11 = pfVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return 0;
}


