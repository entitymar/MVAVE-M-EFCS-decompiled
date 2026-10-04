// FUN_1800023e0 @ 1800023e0

undefined8 * FUN_1800023e0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      param_1[2] = uVar1;
      param_1[3] = 0xf;
      uVar2 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar2;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar4 = uVar3, uVar3 < 0x16)) {
        uVar4 = 0x16;
      }
      _Dst = (void *)FUN_1800015d0(uVar4 + 1);
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      memcpy(_Dst,param_2,uVar1 + 1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005150();
}


