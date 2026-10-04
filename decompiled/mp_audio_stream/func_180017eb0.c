// FUN_180017eb0 @ 180017eb0

undefined8 FUN_180017eb0(longlong *param_1)

{
  void *_Memory;
  code *pcVar1;
  undefined8 *puVar2;
  
  if (((int)param_1[1] == 2) || ((int)param_1[1] == 3)) {
    (**(code **)(*param_1 + 0x1a8))(param_1[0x188]);
    CloseHandle((HANDLE)param_1[0x18a]);
  }
  if (((int)param_1[1] == 1) || ((int)param_1[1] == 3)) {
    (**(code **)(*param_1 + 0x188))(param_1[0x187]);
    (**(code **)(*param_1 + 0x168))(param_1[0x187]);
    CloseHandle((HANDLE)param_1[0x189]);
  }
  _Memory = (void *)param_1[0x192];
  puVar2 = (undefined8 *)(*param_1 + 0x100);
  if (_Memory != (void *)0x0) {
    if (puVar2 == (undefined8 *)0x0) {
      free(_Memory);
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0x118);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(_Memory,*puVar2);
      }
    }
  }
  if (param_1 + 0x187 != (longlong *)0x0) {
    param_1[0x187] = 0;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
    param_1[0x18c] = 0;
    param_1[0x18d] = 0;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0;
  }
  return 0;
}


