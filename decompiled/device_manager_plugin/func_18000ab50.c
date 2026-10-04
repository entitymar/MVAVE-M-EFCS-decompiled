// FUN_18000ab50 @ 18000ab50

void FUN_18000ab50(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  void *_Memory;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 9) {
      FUN_1800041d0(plVar3);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x48) * 0x48)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}


