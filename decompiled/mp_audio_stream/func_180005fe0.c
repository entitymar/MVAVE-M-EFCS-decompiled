// FUN_180005fe0 @ 180005fe0

undefined8 FUN_180005fe0(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  DWORD DVar9;
  int iVar10;
  BOOL BVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  
  do {
    if ((undefined8 *)(param_1 + 0x158) == (undefined8 *)0x0) {
      return 0;
    }
    DVar9 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x158),0xffffffff);
    if (DVar9 != 0) {
      if (DVar9 == 0x102) {
        return 0;
      }
      DVar9 = GetLastError();
      uVar12 = FUN_18001cb40(DVar9);
      if ((int)uVar12 != 0) {
        return 0;
      }
    }
    puVar1 = (undefined8 *)(param_1 + 0x150);
    if (puVar1 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    }
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x160);
    piVar2 = (int *)(param_1 + 0x168 + uVar13 * 0x30);
    iVar5 = *piVar2;
    puVar8 = *(undefined8 **)(piVar2 + 2);
    plVar3 = (longlong *)(param_1 + 0x178 + uVar13 * 0x30);
    lVar6 = *plVar3;
    plVar3 = (longlong *)plVar3[1];
    puVar4 = (undefined8 *)(param_1 + 0x188 + uVar13 * 0x30);
    uVar12 = *puVar4;
    puVar7 = (undefined4 *)puVar4[1];
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
    *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1 & 3;
    if (puVar1 != (undefined8 *)0x0) {
      SetEvent((HANDLE)*puVar1);
    }
    if (iVar5 == 2) {
      puVar14 = &DAT_18002f320;
      if ((int)lVar6 != 1) {
        puVar14 = &DAT_18002f330;
      }
      iVar10 = (**(code **)(*plVar3 + 0x70))(plVar3,puVar14,uVar12);
      uVar12 = FUN_18001cc60(iVar10);
      *puVar7 = (int)uVar12;
    }
    else if (iVar5 == 3) {
      if ((int)plVar3 == 1) {
        if (*(longlong **)(lVar6 + 0xc38) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar6 + 0xc38) + 0x10))();
          *(undefined8 *)(lVar6 + 0xc38) = 0;
        }
      }
      else if (((int)plVar3 == 2) && (*(longlong **)(lVar6 + 0xc40) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar6 + 0xc40) + 0x10))();
        *(undefined8 *)(lVar6 + 0xc40) = 0;
      }
    }
    if ((puVar8 != (undefined8 *)0x0) && (BVar11 = SetEvent((HANDLE)*puVar8), BVar11 == 0)) {
      GetLastError();
    }
    if (iVar5 == 1) {
      return 0;
    }
  } while( true );
}


