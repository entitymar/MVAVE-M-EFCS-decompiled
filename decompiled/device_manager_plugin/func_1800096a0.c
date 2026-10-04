// FUN_1800096a0 @ 1800096a0

undefined8 * FUN_1800096a0(undefined8 *param_1,longlong *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2;
  if (uVar1 != 0) {
    if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    _Dst = (void *)FUN_1800015d0(uVar1);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (longlong)_Dst + uVar1;
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    param_1[1] = _Size + (longlong)_Dst;
  }
  return param_1;
}


