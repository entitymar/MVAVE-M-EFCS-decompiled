// FUN_1800012f0 @ 1800012f0

void FUN_1800012f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  size_t _Size;
  ulonglong uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = param_2[1] - *param_2 >> 2;
  if (uVar2 != 0) {
    if (0x3fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    _Dst = (void *)FUN_1800015d0(uVar2 * 4);
    *puVar1 = _Dst;
    puVar1[1] = _Dst;
    puVar1[2] = (void *)(uVar2 * 4 + (longlong)_Dst);
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    puVar1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 2) * 4);
  }
  *(undefined1 *)(*param_1 + 0x40) = 0xd;
  return;
}


