// FUN_1800099c0 @ 1800099c0

void FUN_1800099c0(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar3 = *(longlong **)(param_1 + 0x18); plVar3 != plVar1; plVar3 = plVar3 + 9) {
    FUN_1800041d0(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 8);
  _Memory = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x48)) &&
     (_Memory = *(void **)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}


