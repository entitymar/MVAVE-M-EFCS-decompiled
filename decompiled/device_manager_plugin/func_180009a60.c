// FUN_180009a60 @ 180009a60

void FUN_180009a60(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  _Memory = pvVar1;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x48)) &&
     (_Memory = *(void **)((longlong)pvVar1 + -8),
     0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}


