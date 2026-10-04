// FUN_180017d00 @ 180017d00

undefined8 FUN_180017d00(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_180011a50(param_1,3);
  puVar1 = (undefined8 *)(param_1 + 0xc38);
  if (puVar1 != (undefined8 *)0x0) {
    WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    CloseHandle((HANDLE)*puVar1);
  }
  if ((undefined8 *)(param_1 + 0xc50) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc50));
  }
  if ((undefined8 *)(param_1 + 0xc48) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc48));
  }
  if ((undefined8 *)(param_1 + 0xc40) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc40));
  }
  return 0;
}


