// FUN_180003220 @ 180003220

undefined8 FUN_180003220(int *param_1,longlong param_2,undefined4 *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    if (param_4 != 0) {
      uVar2 = param_1[2];
      uVar9 = 0;
      do {
        uVar11 = 0;
        if (uVar2 != 0) {
          do {
            uVar4 = (int)uVar11 + 1;
            *(undefined1 *)(uVar11 + uVar2 * uVar9 + param_2) =
                 *(undefined1 *)(uVar9 + (longlong)param_3);
            uVar2 = param_1[2];
            uVar11 = (ulonglong)uVar4;
          } while (uVar4 < uVar2);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_4);
    }
  }
  else if (iVar1 == 2) {
    uVar2 = param_1[2];
    uVar9 = 0;
    if (uVar2 == 2) {
      if (param_4 != 0) {
        do {
          *(undefined2 *)(param_2 + uVar9 * 4) = *(undefined2 *)((longlong)param_3 + uVar9 * 2);
          *(undefined2 *)(param_2 + 2 + uVar9 * 4) = *(undefined2 *)((longlong)param_3 + uVar9 * 2);
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_4);
        return 0;
      }
    }
    else {
      uVar11 = uVar9;
      if (param_4 != 0) {
        do {
          uVar6 = uVar9;
          if (uVar2 != 0) {
            do {
              uVar4 = (int)uVar6 + 1;
              *(undefined2 *)(param_2 + (uVar2 * uVar11 + uVar6) * 2) = *(undefined2 *)param_3;
              uVar2 = param_1[2];
              uVar6 = (ulonglong)uVar4;
            } while (uVar4 < uVar2);
          }
          uVar11 = uVar11 + 1;
          param_3 = (undefined4 *)((longlong)param_3 + 2);
        } while (uVar11 < param_4);
        return 0;
      }
    }
  }
  else if (iVar1 == 3) {
    if (param_4 != 0) {
      uVar2 = param_1[2];
      puVar8 = (undefined1 *)((longlong)param_3 + 2);
      uVar9 = 0;
      do {
        uVar11 = 0;
        if (uVar2 != 0) {
          do {
            uVar4 = (int)uVar11 + 1;
            lVar7 = uVar2 * uVar9 + uVar11;
            lVar10 = param_2 + lVar7 * 2;
            *(undefined1 *)(lVar7 + lVar10) = puVar8[-2];
            *(undefined1 *)(lVar7 + 1 + lVar10) = puVar8[-1];
            *(undefined1 *)(lVar7 + 2 + lVar10) = *puVar8;
            uVar2 = param_1[2];
            uVar11 = (ulonglong)uVar4;
          } while (uVar4 < uVar2);
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 3;
      } while (uVar9 < param_4);
      return 0;
    }
  }
  else if (iVar1 == 4) {
    uVar9 = 0;
    if (param_4 != 0) {
      uVar2 = param_1[2];
      do {
        uVar11 = 0;
        if (uVar2 != 0) {
          do {
            uVar4 = (int)uVar11 + 1;
            *(undefined4 *)(param_2 + (uVar2 * uVar9 + uVar11) * 4) = *param_3;
            uVar2 = param_1[2];
            uVar11 = (ulonglong)uVar4;
          } while (uVar4 < uVar2);
        }
        uVar9 = uVar9 + 1;
        param_3 = param_3 + 1;
      } while (uVar9 < param_4);
      return 0;
    }
  }
  else {
    if (iVar1 != 5) {
      return 0xfffffffd;
    }
    uVar2 = param_1[2];
    uVar9 = 0;
    if (uVar2 == 2) {
      if (3 < param_4) {
        lVar10 = (param_4 - 4 >> 2) + 1;
        uVar9 = lVar10 * 4;
        puVar3 = param_3 + 2;
        puVar5 = (undefined4 *)(param_2 + 8);
        do {
          puVar5[-2] = puVar3[-2];
          puVar5[-1] = puVar3[-2];
          *puVar5 = puVar3[-1];
          puVar5[1] = puVar3[-1];
          puVar5[2] = *puVar3;
          puVar5[3] = *puVar3;
          puVar5[4] = puVar3[1];
          puVar5[5] = puVar3[1];
          lVar10 = lVar10 + -1;
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 8;
        } while (lVar10 != 0);
      }
      if (uVar9 < param_4) {
        do {
          *(undefined4 *)(param_2 + uVar9 * 8) = param_3[uVar9];
          *(undefined4 *)(param_2 + 4 + uVar9 * 8) = param_3[uVar9];
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_4);
        return 0;
      }
    }
    else {
      uVar11 = uVar9;
      if (param_4 != 0) {
        do {
          uVar6 = uVar9;
          if (uVar2 != 0) {
            do {
              uVar4 = (int)uVar6 + 1;
              *(undefined4 *)(param_2 + (uVar2 * uVar11 + uVar6) * 4) = *param_3;
              uVar2 = param_1[2];
              uVar6 = (ulonglong)uVar4;
            } while (uVar4 < uVar2);
          }
          uVar11 = uVar11 + 1;
          param_3 = param_3 + 1;
        } while (uVar11 < param_4);
        return 0;
      }
    }
  }
  return 0;
}


