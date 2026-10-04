// FUN_18000a650 @ 18000a650

undefined8 FUN_18000a650(longlong param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0x1d0);
  if (_Memory != (void *)0x0) {
    if ((undefined8 *)(param_1 + 0x100) == (undefined8 *)0x0) {
      free(_Memory);
    }
    else if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(_Memory,*(undefined8 *)(param_1 + 0x100));
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FreeLibrary(*(HMODULE *)(param_1 + 0x148));
  return 0;
}


