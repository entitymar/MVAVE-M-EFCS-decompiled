// FUN_18000a910 @ 18000a910

void FUN_18000a910(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 *_Src;
  void *_Dst;
  ulonglong uVar3;
  void *_Dst_00;
  undefined1 *_Src_00;
  ulonglong uVar4;
  size_t _Size;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 8);
  _Src_00 = (undefined1 *)plVar2[1];
  if (_Src_00 != (undefined1 *)plVar2[2]) {
    *_Src_00 = param_2;
    plVar2[1] = plVar2[1] + 1;
    return;
  }
  lVar5 = (longlong)_Src_00 - *plVar2;
  if (lVar5 != 0x7fffffffffffffff) {
    uVar3 = plVar2[2] - *plVar2;
    uVar1 = lVar5 + 1;
    uVar4 = 0x7fffffffffffffff;
    if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
       (uVar4 = (uVar3 >> 1) + uVar3, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    _Dst = (void *)FUN_1800015d0(uVar4);
    *(undefined1 *)(lVar5 + (longlong)_Dst) = param_2;
    _Src = (undefined1 *)*plVar2;
    if (_Src_00 == (undefined1 *)plVar2[1]) {
      _Size = plVar2[1] - (longlong)_Src;
      _Dst_00 = _Dst;
      _Src_00 = _Src;
    }
    else {
      memmove(_Dst,_Src,(longlong)_Src_00 - (longlong)_Src);
      _Size = plVar2[1] - (longlong)_Src_00;
      _Dst_00 = (void *)(lVar5 + 1 + (longlong)_Dst);
    }
    memmove(_Dst_00,_Src_00,_Size);
    FUN_18000aab0(plVar2,(longlong)_Dst,uVar1,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005170();
}


