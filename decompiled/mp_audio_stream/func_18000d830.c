// FUN_18000d830 @ 18000d830

undefined8 FUN_18000d830(uint param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar3 = *param_2;
  iVar9 = (int)param_2[1];
  if (iVar9 - 2U < 2) {
    uVar11 = 0;
    if ((int)param_2[0x13b] != 0) {
      do {
        puVar5 = (undefined4 *)
                 (**(code **)(lVar3 + 0x1c0))(*(undefined8 *)(param_2[0x189] + uVar11 * 8),param_1);
        if (puVar5 != (undefined4 *)0x0) {
          uVar8 = 0;
          puVar10 = (undefined4 *)(param_2[0x18b] + uVar11 * 4);
          if (3 < param_1) {
            uVar8 = (param_1 - 4 >> 2) + 1;
            uVar12 = (ulonglong)uVar8;
            uVar8 = uVar8 * 4;
            do {
              *puVar10 = *puVar5;
              puVar10 = puVar10 + *(uint *)(param_2 + 0x13b);
              *puVar10 = puVar5[1];
              puVar10 = puVar10 + *(uint *)(param_2 + 0x13b);
              *puVar10 = puVar5[2];
              uVar1 = *(uint *)(param_2 + 0x13b);
              puVar10[uVar1] = puVar5[3];
              puVar5 = puVar5 + 4;
              puVar10 = puVar10 + uVar1 + *(uint *)(param_2 + 0x13b);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (uVar8 < param_1) {
            uVar12 = (ulonglong)(param_1 - uVar8);
            do {
              uVar2 = *puVar5;
              puVar5 = puVar5 + 1;
              *puVar10 = uVar2;
              puVar10 = puVar10 + *(uint *)(param_2 + 0x13b);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        uVar8 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_2 + 0x13b));
      iVar9 = (int)param_2[1];
    }
    puVar5 = (undefined4 *)param_2[0x18b];
    if (puVar5 != (undefined4 *)0x0) {
      if (iVar9 == 3) {
        FUN_18000c770(param_2,param_1,puVar5,(longlong)(param_2 + 0xe));
      }
      else if ((iVar9 - 2U & 0xfffffffd) == 0) {
        FUN_18000f050((longlong)param_2,param_1,puVar5);
      }
    }
  }
  iVar9 = (int)param_2[1];
  if ((iVar9 == 1) || (iVar9 == 3)) {
    pauVar4 = (undefined1 (*) [16])param_2[0x18a];
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      if (iVar9 == 3) {
        FUN_18000ced0((longlong)param_2,param_1,pauVar4,(longlong)(param_2 + 0xe));
      }
      else if (((iVar9 != 2) && (iVar9 != 4)) && (iVar9 == 1)) {
        FUN_18000e780((longlong)param_2,param_1,pauVar4);
      }
    }
    uVar11 = 0;
    if ((int)param_2[0x88] != 0) {
      do {
        puVar5 = (undefined4 *)
                 (**(code **)(lVar3 + 0x1c0))(*(undefined8 *)(param_2[0x188] + uVar11 * 8),param_1);
        if (puVar5 != (undefined4 *)0x0) {
          uVar8 = 0;
          puVar10 = (undefined4 *)(param_2[0x18a] + uVar11 * 4);
          if (3 < param_1) {
            uVar8 = (param_1 - 4 >> 2) + 1;
            uVar12 = (ulonglong)uVar8;
            uVar8 = uVar8 * 4;
            do {
              *puVar5 = *puVar10;
              uVar6 = (ulonglong)*(uint *)(param_2 + 0x88);
              puVar5[1] = puVar10[uVar6];
              uVar7 = (ulonglong)*(uint *)(param_2 + 0x88);
              puVar5[2] = puVar10[uVar6 + uVar7];
              uVar1 = *(uint *)(param_2 + 0x88);
              puVar5[3] = puVar10[uVar6 + uVar7 + uVar1];
              puVar5 = puVar5 + 4;
              puVar10 = puVar10 + uVar6 + uVar7 + (ulonglong)uVar1 +
                                                  (ulonglong)*(uint *)(param_2 + 0x88);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (uVar8 < param_1) {
            uVar12 = (ulonglong)(param_1 - uVar8);
            do {
              *puVar5 = *puVar10;
              puVar5 = puVar5 + 1;
              puVar10 = puVar10 + *(uint *)(param_2 + 0x88);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        uVar8 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_2 + 0x88));
    }
  }
  return 0;
}


