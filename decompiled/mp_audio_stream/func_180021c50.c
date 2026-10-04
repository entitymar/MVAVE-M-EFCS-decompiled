// FUN_180021c50 @ 180021c50

void FUN_180021c50(ulonglong param_1,ulonglong param_2,ulonglong param_3,float param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (((param_1 != 0) && (param_2 != 0)) && (uVar10 = 0, param_3 != 0)) {
    if ((0xf < param_3) &&
       ((param_2 + (param_3 - 1) * 4 < param_1 || (param_1 + (param_3 - 1) * 4 < param_2)))) {
      lVar7 = param_2 - param_1;
      piVar6 = (int *)(param_1 + 0x10);
      do {
        piVar2 = (int *)(lVar7 + -0x10 + (longlong)piVar6);
        iVar3 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        uVar10 = uVar10 + 0x10;
        piVar1 = piVar6 + 0x10;
        piVar6[-4] = (int)((float)*piVar2 * param_4);
        piVar6[-3] = (int)((float)iVar3 * param_4);
        piVar6[-2] = (int)((float)iVar4 * param_4);
        piVar6[-1] = (int)((float)iVar5 * param_4);
        piVar2 = (int *)((longlong)piVar6 + lVar7);
        iVar3 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        *piVar6 = (int)((float)*piVar2 * param_4);
        piVar6[1] = (int)((float)iVar3 * param_4);
        piVar6[2] = (int)((float)iVar4 * param_4);
        piVar6[3] = (int)((float)iVar5 * param_4);
        piVar2 = (int *)(lVar7 + -0x30 + (longlong)piVar1);
        iVar3 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        piVar6[4] = (int)((float)*piVar2 * param_4);
        piVar6[5] = (int)((float)iVar3 * param_4);
        piVar6[6] = (int)((float)iVar4 * param_4);
        piVar6[7] = (int)((float)iVar5 * param_4);
        piVar2 = (int *)(lVar7 + -0x20 + (longlong)piVar1);
        iVar3 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        piVar6[8] = (int)((float)*piVar2 * param_4);
        piVar6[9] = (int)((float)iVar3 * param_4);
        piVar6[10] = (int)((float)iVar4 * param_4);
        piVar6[0xb] = (int)((float)iVar5 * param_4);
        piVar6 = piVar1;
      } while (uVar10 < (param_3 & 0xfffffffffffffff0));
      if (param_3 <= uVar10) {
        return;
      }
    }
    lVar7 = param_2 - param_1;
    if (3 < param_3 - uVar10) {
      lVar8 = uVar10 * 4;
      lVar9 = ((param_3 - uVar10) - 4 >> 2) + 1;
      uVar10 = uVar10 + lVar9 * 4;
      piVar6 = (int *)(param_1 + 4 + lVar8);
      do {
        piVar1 = piVar6 + 4;
        piVar6[-1] = (int)((float)*(int *)(lVar7 + -4 + (longlong)piVar6) * param_4);
        *piVar6 = (int)((float)*(int *)(lVar7 + -0x10 + (longlong)piVar1) * param_4);
        piVar6[1] = (int)((float)*(int *)(lVar7 + -0xc + (longlong)piVar1) * param_4);
        piVar6[2] = (int)((float)*(int *)(lVar7 + -8 + (longlong)piVar1) * param_4);
        lVar9 = lVar9 + -1;
        piVar6 = piVar1;
      } while (lVar9 != 0);
    }
    if (uVar10 < param_3) {
      lVar8 = param_3 - uVar10;
      piVar6 = (int *)(param_1 + uVar10 * 4);
      do {
        *piVar6 = (int)((float)*(int *)((longlong)piVar6 + lVar7) * param_4);
        lVar8 = lVar8 + -1;
        piVar6 = piVar6 + 1;
      } while (lVar8 != 0);
    }
  }
  return;
}


