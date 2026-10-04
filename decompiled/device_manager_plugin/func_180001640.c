// FUN_180001640 @ 180001640

void FUN_180001640(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  if (param_3 < 0x8000000000000000) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      memcpy(param_1,param_2,param_3);
      *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    }
    else {
      uVar1 = param_3 | 0xf;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
        uVar2 = 0x16;
      }
      _Dst = (void *)FUN_1800015d0(uVar2 + 1);
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005150();
}


