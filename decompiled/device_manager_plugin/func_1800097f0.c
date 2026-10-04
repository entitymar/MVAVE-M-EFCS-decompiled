// FUN_1800097f0 @ 1800097f0

undefined8 * FUN_1800097f0(undefined8 *param_1,longlong *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2 >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    _Dst = (void *)FUN_1800015d0(uVar1 * 8);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(uVar1 * 8 + (longlong)_Dst);
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    param_1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  return param_1;
}


