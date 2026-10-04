// FUN_180005270 @ 180005270

undefined8
FUN_180005270(undefined4 *param_1,uint param_2,longlong param_3,uint param_4,longlong param_5,
             byte *param_6,int param_7)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined2 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  
  uVar2 = (ulonglong)param_4;
  uVar13 = (ulonglong)param_2;
  if ((((param_1 == (undefined4 *)0x0) || (param_3 == 0)) || (param_2 == 0)) ||
     (param_6 == (byte *)0x0)) {
LAB_1800054df:
    uVar5 = 0xfffffffe;
  }
  else {
    if (param_7 == 1) {
      if (param_5 != 0) {
        lVar9 = (longlong)param_6 - (longlong)param_1;
        do {
          puVar7 = param_1;
          uVar12 = uVar13;
          if (param_2 != 0) {
            do {
              if (*(byte *)((longlong)puVar7 + lVar9) < param_4) {
                uVar8 = *(undefined1 *)((ulonglong)*(byte *)((longlong)puVar7 + lVar9) + param_3);
              }
              else {
                uVar8 = 0;
              }
              *(undefined1 *)puVar7 = uVar8;
              uVar12 = uVar12 - 1;
              puVar7 = (undefined4 *)((longlong)puVar7 + 1);
            } while (uVar12 != 0);
          }
          param_1 = (undefined4 *)((longlong)param_1 + uVar13);
          lVar9 = lVar9 - uVar13;
          param_3 = param_3 + uVar2;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
    }
    else if (param_7 == 2) {
      if (param_5 != 0) {
        do {
          pbVar6 = param_6;
          puVar7 = param_1;
          uVar12 = uVar13;
          if (param_2 != 0) {
            do {
              if (*pbVar6 < param_4) {
                uVar10 = *(undefined2 *)(param_3 + (ulonglong)*pbVar6 * 2);
              }
              else {
                uVar10 = 0;
              }
              *(undefined2 *)puVar7 = uVar10;
              uVar12 = uVar12 - 1;
              pbVar6 = pbVar6 + 1;
              puVar7 = (undefined4 *)((longlong)puVar7 + 2);
            } while (uVar12 != 0);
          }
          param_1 = (undefined4 *)((longlong)param_1 + uVar13 * 2);
          param_3 = param_3 + uVar2 * 2;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
    }
    else if (param_7 == 3) {
      if (param_5 != 0) {
        do {
          uVar11 = 0;
          pbVar6 = param_6;
          if (param_2 != 0) {
            do {
              bVar1 = *pbVar6;
              uVar3 = uVar11 * 3;
              if (bVar1 < param_4) {
                uVar4 = (uint)bVar1 + (uint)bVar1 * 2;
                *(undefined1 *)((ulonglong)uVar3 + (longlong)param_1) =
                     *(undefined1 *)((ulonglong)uVar4 + param_3);
                *(undefined1 *)((ulonglong)(uVar3 + 1) + (longlong)param_1) =
                     *(undefined1 *)((ulonglong)uVar4 + 1 + param_3);
                *(undefined1 *)((ulonglong)(uVar3 + 2) + (longlong)param_1) =
                     *(undefined1 *)((ulonglong)uVar4 + 2 + param_3);
              }
              else {
                *(undefined1 *)((ulonglong)uVar3 + (longlong)param_1) = 0;
              }
              uVar11 = uVar11 + 1;
              *(undefined1 *)((ulonglong)(uVar3 + 1) + (longlong)param_1) = 0;
              pbVar6 = pbVar6 + 1;
            } while (uVar11 < param_2);
          }
          param_3 = param_3 + (ulonglong)(param_4 * 3);
          *(undefined1 *)((ulonglong)(uVar11 * 3 + 2) + (longlong)param_1) = 0;
          param_1 = (undefined4 *)((longlong)param_1 + (ulonglong)(param_2 * 3));
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
    }
    else if (param_7 == 4) {
      if (param_5 != 0) {
        do {
          pbVar6 = param_6;
          puVar7 = param_1;
          uVar12 = uVar13;
          if (param_2 != 0) {
            do {
              if (*pbVar6 < param_4) {
                uVar14 = *(undefined4 *)(param_3 + (ulonglong)*pbVar6 * 4);
              }
              else {
                uVar14 = 0;
              }
              *puVar7 = uVar14;
              uVar12 = uVar12 - 1;
              pbVar6 = pbVar6 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar12 != 0);
          }
          param_1 = param_1 + uVar13;
          param_3 = param_3 + uVar2 * 4;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
    }
    else {
      if (param_7 != 5) goto LAB_1800054df;
      if (param_5 != 0) {
        do {
          pbVar6 = param_6;
          puVar7 = param_1;
          uVar12 = uVar13;
          if (param_2 != 0) {
            do {
              if (*pbVar6 < param_4) {
                uVar14 = *(undefined4 *)(param_3 + (ulonglong)*pbVar6 * 4);
              }
              else {
                uVar14 = 0;
              }
              *puVar7 = uVar14;
              uVar12 = uVar12 - 1;
              pbVar6 = pbVar6 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar12 != 0);
          }
          param_1 = param_1 + uVar13;
          param_3 = param_3 + uVar2 * 4;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return 0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


