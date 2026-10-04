// FUN_1800089e0 @ 1800089e0

void FUN_1800089e0(longlong *param_1,ulonglong param_2)

{
  size_t _Size;
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  void *_Memory;
  ulonglong uVar5;
  
  pvVar1 = (void *)param_1[1];
  lVar2 = *param_1;
  uVar5 = (longlong)pvVar1 - lVar2 >> 2;
  if (param_2 < uVar5) {
    param_1[1] = lVar2 + param_2 * 4;
    return;
  }
  if (uVar5 < param_2) {
    uVar4 = param_1[2] - lVar2 >> 2;
    if (param_2 <= uVar4) {
      _Size = (param_2 - uVar5) * 4;
      memset(pvVar1,0,_Size);
      param_1[1] = (longlong)(_Size + (longlong)pvVar1);
      return;
    }
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar3 = 0x3fffffffffffffff;
    }
    else {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar3 = param_2;
      if ((param_2 <= uVar4) && (uVar3 = uVar4, 0x3fffffffffffffff < uVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_180004e70();
      }
    }
    _Dst = (void *)FUN_1800015d0(uVar3 * 4);
    memset((void *)((longlong)_Dst + uVar5 * 4),0,(param_2 - uVar5) * 4);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      _Memory = pvVar1;
      if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)((longlong)_Dst + param_2 * 4);
    param_1[2] = (longlong)(uVar3 * 4 + (longlong)_Dst);
  }
  return;
}


