// FUN_180028930 @ 180028930

ulonglong FUN_180028930(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Src;
  ulonglong _Size;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  ulonglong uVar8;
  bool bVar9;
  int local_78 [14];
  
  uVar6 = 0;
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  iVar1 = (*(int **)(param_1 + 0x48))[1];
  uVar7 = uVar6;
  if (param_3 != 0) {
    lVar3 = (longlong)**(int **)(param_1 + 0x48);
    do {
      local_78[0] = 0;
      local_78[1] = 1;
      local_78[2] = 2;
      uVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8) - *(longlong *)(param_1 + 0x58);
      local_78[3] = 3;
      local_78[4] = 4;
      uVar8 = param_3 - uVar7;
      if (uVar4 < param_3 - uVar7) {
        uVar8 = uVar4;
      }
      local_78[5] = 4;
      local_78[6] = 0;
      local_78[7] = 1;
      local_78[8] = 2;
      local_78[9] = 3;
      local_78[10] = 4;
      local_78[0xb] = 4;
      _Src = (void *)(*(longlong *)(param_1 + 0x50) + 0x10 +
                     (ulonglong)(uint)(iVar1 * local_78[lVar3]) * *(longlong *)(param_1 + 0x58));
      _Dst = (void *)((uint)(iVar1 * local_78[lVar3 + 6]) * uVar7 + param_2);
      if (_Dst != _Src) {
        local_78[6] = 0;
        local_78[7] = 1;
        local_78[8] = 2;
        local_78[9] = 3;
        local_78[10] = 4;
        local_78[0xb] = 4;
        for (uVar4 = (uint)(iVar1 * local_78[lVar3 + 6]) * uVar8; uVar4 != 0; uVar4 = uVar4 - _Size)
        {
          _Size = uVar4;
          if (0xffffffff < uVar4) {
            _Size = 0xffffffff;
          }
          memcpy(_Dst,_Src,_Size);
          _Dst = (void *)((longlong)_Dst + _Size);
          _Src = (void *)((longlong)_Src + _Size);
        }
      }
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + uVar8;
      uVar7 = uVar7 + uVar8;
      plVar2 = *(longlong **)(param_1 + 0x50);
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + uVar8;
      if (*(longlong *)(param_1 + 0x58) == plVar2[1]) {
        LOCK();
        lVar5 = *plVar2;
        bVar9 = lVar5 == 0;
        if (bVar9) {
          *plVar2 = 0;
          lVar5 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar6 = 0xffffffef;
          break;
        }
        *(longlong *)(param_1 + 0x50) = lVar5;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
    } while (uVar7 < param_3);
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = uVar7;
  }
  return uVar6;
}


