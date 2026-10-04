// FUN_18000a6b0 @ 18000a6b0

undefined8 FUN_18000a6b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = 1;
  local_28 = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_18000a4d0(param_1,&local_38);
  puVar1 = (undefined8 *)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    CloseHandle((HANDLE)*puVar1);
  }
  if (*(HMODULE *)(param_1 + 0x228) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if ((undefined8 *)(param_1 + 0x158) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x158));
  }
  if ((undefined8 *)(param_1 + 0x150) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x150));
  }
  return 0;
}


