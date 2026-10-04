// FUN_180011a50 @ 180011a50

ulonglong FUN_180011a50(longlong param_1,undefined4 param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if ((undefined8 *)(param_1 + 0xc50) == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xc50),0xffffffff);
  if (DVar1 != 0) {
    if (DVar1 == 0x102) {
      return 0xffffffde;
    }
    DVar1 = GetLastError();
    uVar3 = FUN_18001cb40(DVar1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  *(undefined4 *)(param_1 + 0xc58) = param_2;
  if ((undefined8 *)(param_1 + 0xc40) != (undefined8 *)0x0) {
    BVar2 = SetEvent(*(HANDLE *)(param_1 + 0xc40));
    if (BVar2 == 0) {
      DVar1 = GetLastError();
      uVar4 = FUN_18001cb40(DVar1);
      if ((int)uVar4 != 0) {
        return 0xffffffff;
      }
    }
    if ((undefined8 *)(param_1 + 0xc48) != (undefined8 *)0x0) {
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xc48),0xffffffff);
      if (DVar1 == 0) {
LAB_180011b18:
        return (ulonglong)*(uint *)(param_1 + 0xc5c);
      }
      if (DVar1 != 0x102) {
        DVar1 = GetLastError();
        uVar4 = FUN_18001cb40(DVar1);
        if ((int)uVar4 == 0) goto LAB_180011b18;
      }
    }
  }
  return 0xffffffff;
}


