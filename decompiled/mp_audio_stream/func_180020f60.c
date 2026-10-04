// FUN_180020f60 @ 180020f60

undefined8 FUN_180020f60(longlong param_1)

{
  void *_Memory;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))();
  }
  if ((undefined8 *)(param_1 + 0x120) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x120));
  }
  if ((undefined8 *)(param_1 + 0x128) != (undefined8 *)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x128));
  }
  _Memory = *(void **)(param_1 + 0x140);
  if (_Memory != (void *)0x0) {
    if ((undefined8 *)(param_1 + 0x100) == (undefined8 *)0x0) {
      free(_Memory);
    }
    else if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(_Memory,*(undefined8 *)(param_1 + 0x100));
    }
  }
  if (*(int *)(param_1 + 0x2c8) == 0) {
    (**(code **)(param_1 + 0x268))();
  }
  FreeLibrary(*(HMODULE *)(param_1 + 0x290));
  FreeLibrary(*(HMODULE *)(param_1 + 0x2a8));
  FreeLibrary(*(HMODULE *)(param_1 + 0x250));
  if (((*(longlong *)(param_1 + 0x70) == param_1 + 0x78) && (param_1 != -0x78)) &&
     ((undefined8 *)(param_1 + 0xe0) != (undefined8 *)0x0)) {
    CloseHandle(*(HANDLE *)(param_1 + 0xe0));
  }
  return 0;
}


