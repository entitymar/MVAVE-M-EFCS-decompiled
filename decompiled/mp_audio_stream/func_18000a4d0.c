// FUN_18000a4d0 @ 18000a4d0

undefined8 FUN_18000a4d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  DWORD DVar9;
  BOOL BVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  HANDLE local_res10;
  
  bVar8 = false;
  if (param_2[1] == 0) {
    bVar8 = true;
    local_res10 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    if (local_res10 == (HANDLE)0x0) {
      DVar9 = GetLastError();
      uVar11 = FUN_18001cb40(DVar9);
      if ((int)uVar11 != 0) {
        return uVar11;
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x150);
  if (puVar1 != (undefined8 *)0x0) {
    WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
  }
  iVar4 = *(int *)(param_1 + 0x164);
  while (iVar4 == 4) {
    iVar4 = *(int *)(param_1 + 0x164);
  }
  uVar11 = param_2[1];
  uVar12 = (ulonglong)(*(int *)(param_1 + 0x160) + iVar4 & 3);
  puVar2 = (undefined8 *)(param_1 + 0x168 + uVar12 * 0x30);
  *puVar2 = *param_2;
  puVar2[1] = uVar11;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar3 = (undefined4 *)(param_1 + 0x178 + uVar12 * 0x30);
  *puVar3 = *(undefined4 *)(param_2 + 2);
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar3 = (undefined4 *)(param_1 + 0x188 + uVar12 * 0x30);
  *puVar3 = *(undefined4 *)(param_2 + 4);
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  *(HANDLE **)(param_1 + 0x170 + uVar12 * 0x30) = &local_res10;
  *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  if (((undefined8 *)(param_1 + 0x158) != (undefined8 *)0x0) &&
     (BVar10 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0x158),1,(LPLONG)0x0), BVar10 == 0)) {
    GetLastError();
  }
  if (puVar1 != (undefined8 *)0x0) {
    SetEvent((HANDLE)*puVar1);
  }
  if (bVar8) {
    DVar9 = WaitForSingleObject(local_res10,0xffffffff);
    if ((DVar9 != 0) && (DVar9 != 0x102)) {
      GetLastError();
    }
    CloseHandle(local_res10);
  }
  return 0;
}


