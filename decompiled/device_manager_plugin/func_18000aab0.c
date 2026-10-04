// FUN_18000aab0 @ 18000aab0

void FUN_18000aab0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}


