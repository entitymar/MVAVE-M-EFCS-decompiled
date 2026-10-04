// FUN_180026c40 @ 180026c40

ulonglong FUN_180026c40(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Dst;
  ulonglong _Size;
  ulonglong uVar6;
  uint local_res8 [2];
  
  uVar5 = 0;
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = param_1 + 0x168;
  uVar4 = uVar5;
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x1ac) != 0)) {
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1b8) + 9);
  }
  uVar6 = uVar5;
  if (param_3 != 0) {
    lVar2 = uVar4 * 4;
    do {
      uVar4 = 0;
      uVar6 = param_3 - uVar5;
      if (0xffffffff < uVar6) {
        uVar6 = 0xffffffff;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x2d4) = 1;
      UNLOCK();
      if (lVar1 != 0) {
        LOCK();
        uVar4 = *(ulonglong *)(param_1 + 0x1a0);
        if (uVar4 == 0) {
          *(ulonglong *)(param_1 + 0x1a0) = 0;
          uVar4 = 0;
        }
        UNLOCK();
      }
      uVar3 = FUN_18001c2f0(lVar1,0,(void *)(lVar2 * uVar5 + param_2),(uint)uVar6,(int *)local_res8,
                            uVar4);
      LOCK();
      *(undefined4 *)(param_1 + 0x2d4) = 0;
      UNLOCK();
      uVar5 = uVar5 + local_res8[0];
      uVar6 = (ulonglong)uVar3;
      if ((uVar3 != 0) || (local_res8[0] == 0)) {
        if (uVar5 < param_3) {
          _Dst = (void *)(lVar2 * uVar5 + param_2);
          for (uVar4 = (param_3 - uVar5) * lVar2; uVar4 != 0; uVar4 = uVar4 - _Size) {
            _Size = uVar4;
            if (0xffffffff < uVar4) {
              _Size = 0xffffffff;
            }
            if ((_Dst != (void *)0x0) && (_Size != 0)) {
              memset(_Dst,0,_Size);
            }
            _Dst = (void *)((longlong)_Dst + _Size);
          }
        }
        break;
      }
    } while (uVar5 < param_3);
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = uVar5;
  }
  return uVar6;
}


