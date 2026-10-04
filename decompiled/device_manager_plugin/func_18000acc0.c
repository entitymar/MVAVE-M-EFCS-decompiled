// FUN_18000acc0 @ 18000acc0

undefined8 * FUN_18000acc0(undefined8 *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  size_t _Size;
  void *_Src;
  undefined8 *puVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  int _Val;
  
  uVar2 = param_1[3];
  _Size = param_1[2];
  _Val = (int)param_3;
  if (uVar2 - _Size < param_2) {
    if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_180005150();
    }
    uVar4 = _Size + param_2 | 0xf;
    uVar5 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
      uVar5 = uVar1;
    }
    _Dst = (void *)FUN_1800015d0(uVar5 + 1);
    param_1[2] = _Size + param_2;
    param_1[3] = uVar5;
    pvVar6 = (void *)(_Size + (longlong)_Dst);
    if (uVar2 < 0x10) {
      memcpy(_Dst,param_1,_Size);
      memset(pvVar6,_Val,param_2);
      *(undefined1 *)((longlong)pvVar6 + param_2) = 0;
    }
    else {
      _Src = (void *)*param_1;
      memcpy(_Dst,_Src,_Size);
      memset(pvVar6,_Val,param_2);
      *(undefined1 *)((longlong)pvVar6 + param_2) = 0;
      pvVar6 = _Src;
      if ((0xfff < uVar2 + 1) &&
         (pvVar6 = *(void **)((longlong)_Src + -8),
         0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar6);
    }
    *param_1 = _Dst;
  }
  else {
    param_1[2] = _Size + param_2;
    puVar3 = param_1;
    if (0xf < uVar2) {
      puVar3 = (undefined8 *)*param_1;
    }
    memset((void *)(_Size + (longlong)puVar3),_Val,param_2);
    *(undefined1 *)((longlong)(_Size + (longlong)puVar3) + param_2) = 0;
  }
  return param_1;
}


