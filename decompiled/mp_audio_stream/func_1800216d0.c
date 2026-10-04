// FUN_1800216d0 @ 1800216d0

void FUN_1800216d0(void *param_1,void *param_2,ulonglong param_3,float param_4)

{
  float *pfVar1;
  size_t _Size;
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
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  if ((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) {
    if (param_4 == DAT_1800320cc) {
      if ((param_1 != param_2) && (uVar14 = 0, param_3 != 0)) {
        if (3 < param_3) {
          _Size = param_3 * 4;
          if (((void *)((longlong)param_2 + (_Size - 4)) < param_1) ||
             ((void *)((_Size - 4) + (longlong)param_1) < param_2)) {
            memcpy(param_1,param_2,_Size);
            return;
          }
        }
        lVar13 = (longlong)param_2 - (longlong)param_1;
        if (3 < param_3) {
          puVar12 = (undefined4 *)((longlong)param_1 + 4);
          lVar15 = (param_3 - 4 >> 2) + 1;
          uVar14 = lVar15 * 4;
          do {
            puVar12[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar12);
            *puVar12 = *(undefined4 *)((longlong)puVar12 + lVar13);
            puVar12[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar12);
            puVar12[2] = *(undefined4 *)(lVar13 + 8 + (longlong)puVar12);
            puVar12 = puVar12 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (uVar14 < param_3) {
          puVar12 = (undefined4 *)((longlong)param_1 + uVar14 * 4);
          lVar15 = param_3 - uVar14;
          do {
            *puVar12 = *(undefined4 *)((longlong)puVar12 + lVar13);
            puVar12 = puVar12 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          return;
        }
      }
    }
    else {
      uVar14 = 0;
      if (param_3 != 0) {
        if ((0xf < param_3) &&
           (((void *)((longlong)param_2 + (param_3 - 1) * 4) < param_1 ||
            ((void *)((longlong)param_1 + (param_3 - 1) * 4) < param_2)))) {
          lVar13 = (longlong)param_2 - (longlong)param_1;
          pfVar11 = (float *)((longlong)param_1 + 0x10);
          do {
            pfVar2 = (float *)(lVar13 + -0x10 + (longlong)pfVar11);
            fVar3 = pfVar2[1];
            fVar4 = pfVar2[2];
            fVar5 = pfVar2[3];
            uVar14 = uVar14 + 0x10;
            pfVar1 = (float *)(lVar13 + (longlong)pfVar11);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar1 = pfVar11 + 0x10;
            pfVar11[-4] = *pfVar2 * param_4;
            pfVar11[-3] = fVar3 * param_4;
            pfVar11[-2] = fVar4 * param_4;
            pfVar11[-1] = fVar5 * param_4;
            pfVar2 = (float *)(lVar13 + -0x30 + (longlong)pfVar1);
            fVar3 = *pfVar2;
            fVar4 = pfVar2[1];
            fVar5 = pfVar2[2];
            fVar10 = pfVar2[3];
            *pfVar11 = fVar6 * param_4;
            pfVar11[1] = fVar7 * param_4;
            pfVar11[2] = fVar8 * param_4;
            pfVar11[3] = fVar9 * param_4;
            pfVar2 = (float *)(lVar13 + -0x20 + (longlong)pfVar1);
            fVar6 = *pfVar2;
            fVar7 = pfVar2[1];
            fVar8 = pfVar2[2];
            fVar9 = pfVar2[3];
            pfVar11[4] = fVar3 * param_4;
            pfVar11[5] = fVar4 * param_4;
            pfVar11[6] = fVar5 * param_4;
            pfVar11[7] = fVar10 * param_4;
            pfVar11[8] = fVar6 * param_4;
            pfVar11[9] = fVar7 * param_4;
            pfVar11[10] = fVar8 * param_4;
            pfVar11[0xb] = fVar9 * param_4;
            pfVar11 = pfVar1;
          } while (uVar14 < (param_3 & 0xfffffffffffffff0));
          if (param_3 <= uVar14) {
            return;
          }
        }
        if (3 < param_3 - uVar14) {
          lVar13 = uVar14 * 4;
          lVar15 = ((param_3 - uVar14) - 4 >> 2) + 1;
          uVar14 = uVar14 + lVar15 * 4;
          pfVar11 = (float *)((longlong)param_1 + lVar13 + 4);
          do {
            pfVar1 = pfVar11 + 4;
            pfVar11[-1] = param_4 * *(float *)((longlong)param_2 + (-0x14 - (longlong)param_1) +
                                              (longlong)pfVar1);
            *pfVar11 = param_4 * *(float *)((longlong)param_2 + (-0x10 - (longlong)param_1) +
                                           (longlong)pfVar1);
            pfVar11[1] = param_4 * *(float *)((longlong)param_2 + (-0xc - (longlong)param_1) +
                                             (longlong)pfVar1);
            pfVar11[2] = param_4 * *(float *)((longlong)param_2 + (-8 - (longlong)param_1) +
                                             (longlong)pfVar1);
            lVar15 = lVar15 + -1;
            pfVar11 = pfVar1;
          } while (lVar15 != 0);
          if (param_3 <= uVar14) {
            return;
          }
        }
        lVar13 = param_3 - uVar14;
        pfVar11 = (float *)((longlong)param_1 + uVar14 * 4);
        do {
          *pfVar11 = param_4 * *(float *)((longlong)param_2 + (-4 - (longlong)param_1) +
                                         (longlong)(pfVar11 + 1));
          lVar13 = lVar13 + -1;
          pfVar11 = pfVar11 + 1;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}


