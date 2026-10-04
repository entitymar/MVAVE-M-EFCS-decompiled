// FUN_18001e630 @ 18001e630

ulonglong FUN_18001e630(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  ulonglong _Size;
  ulonglong uVar4;
  void *_Dst;
  ulonglong uVar5;
  int local_68 [12];
  
  uVar4 = 0;
  if ((param_1 != 0) && (param_3 != 0)) {
    do {
      uVar5 = *(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58);
      if (param_3 - uVar4 <= uVar5) {
        uVar5 = param_3 - uVar4;
      }
      if (param_2 != 0) {
        iVar1 = *(int *)(param_1 + 0x4c);
        lVar2 = (longlong)*(int *)(param_1 + 0x48);
        local_68[0] = 0;
        local_68[1] = 1;
        local_68[2] = 2;
        local_68[3] = 3;
        local_68[4] = 4;
        local_68[5] = 4;
        local_68[6] = 0;
        local_68[7] = 1;
        local_68[8] = 2;
        local_68[9] = 3;
        local_68[10] = 4;
        _Src = (void *)((ulonglong)(uint)(iVar1 * local_68[lVar2]) * *(longlong *)(param_1 + 0x58) +
                       *(longlong *)(param_1 + 0x68));
        local_68[0xb] = 4;
        _Dst = (void *)((uint)(iVar1 * local_68[lVar2 + 6]) * uVar4 + param_2);
        if (_Dst != _Src) {
          local_68[6] = 0;
          local_68[7] = 1;
          local_68[8] = 2;
          local_68[9] = 3;
          local_68[10] = 4;
          local_68[0xb] = 4;
          for (uVar3 = (uint)(iVar1 * local_68[lVar2 + 6]) * uVar5; uVar3 != 0;
              uVar3 = uVar3 - _Size) {
            _Size = uVar3;
            if (0xffffffff < uVar3) {
              _Size = 0xffffffff;
            }
            memcpy(_Dst,_Src,_Size);
            _Dst = (void *)((longlong)_Dst + _Size);
            _Src = (void *)((longlong)_Src + _Size);
          }
        }
      }
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + uVar5;
      uVar4 = uVar4 + uVar5;
      if (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_1 + 0x60)) {
        if (param_4 == 0) {
          return uVar4;
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
    } while (uVar4 < param_3);
    return uVar4;
  }
  return 0;
}


