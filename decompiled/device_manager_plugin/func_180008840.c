// FUN_180008840 @ 180008840

void FUN_180008840(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  ulonglong uVar1;
  void *_Dst_02;
  void *_Src;
  ulonglong uVar2;
  ulonglong uVar3;
  size_t _Size;
  
  if (param_4 != 0) {
    _Dst = (void *)param_1[1];
    _Src = (void *)*param_1;
    if ((ulonglong)(param_1[2] - (longlong)_Dst) < param_4) {
      _Size = (longlong)_Dst - (longlong)_Src;
      if (0x7fffffffffffffff - _Size < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_180005170();
      }
      uVar1 = param_1[2] - (longlong)_Src;
      uVar3 = _Size + param_4;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1)) &&
         (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < uVar3)) {
        uVar2 = uVar3;
      }
      _Dst_00 = (void *)FUN_1800015d0(uVar2);
      _Dst_01 = (void *)(((longlong)param_2 - (longlong)_Src) + (longlong)_Dst_00);
      memmove(_Dst_01,param_3,param_4);
      if ((param_4 != 1) || (_Dst_02 = _Dst_00, param_2 != _Dst)) {
        memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
        _Size = (longlong)_Dst - (longlong)param_2;
        _Dst_02 = (void *)((longlong)_Dst_01 + param_4);
        _Src = param_2;
      }
      memmove(_Dst_02,_Src,_Size);
      FUN_18000aab0(param_1,(longlong)_Dst_00,uVar3,uVar2);
    }
    else {
      uVar3 = (longlong)_Dst - (longlong)param_2;
      if (param_4 < uVar3) {
        memmove(_Dst,(void *)((longlong)_Dst - param_4),param_4);
        param_1[1] = (longlong)_Dst + param_4;
        memmove((void *)((longlong)_Dst - (uVar3 - param_4)),param_2,uVar3 - param_4);
      }
      else {
        memmove((void *)((longlong)param_2 + param_4),param_2,uVar3);
        param_1[1] = (longlong)((longlong)param_2 + param_4) + uVar3;
      }
      memmove(param_2,param_3,param_4);
    }
  }
  return;
}


