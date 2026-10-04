// FUN_1800021e0 @ 1800021e0

undefined8 FUN_1800021e0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  void *_Dst;
  ulonglong uVar9;
  void *_Src;
  ulonglong uVar10;
  int local_68 [10];
  
  uVar10 = 0;
  if (param_3 != 0) {
    while( true ) {
      uVar8 = param_3 - uVar10;
      if (0xffffffff < uVar8) {
        uVar8 = 0xffffffff;
      }
      if (param_1 == 0) break;
      local_68[0] = 0;
      local_68[1] = 1;
      local_68[2] = 2;
      local_68[3] = 3;
      local_68[4] = 4;
      local_68[5] = 4;
      uVar8 = (ulonglong)
              (uint)((int)uVar8 * local_68[*(int *)(param_1 + 0x88)] * *(int *)(param_1 + 0x8c));
      if ((longlong *)(param_1 + 0x48) == (longlong *)0x0) break;
      LOCK();
      uVar7 = *(uint *)(param_1 + 0x60);
      if (uVar7 == 0) {
        *(uint *)(param_1 + 0x60) = 0;
        uVar7 = 0;
      }
      UNLOCK();
      LOCK();
      uVar3 = *(uint *)(param_1 + 0x5c);
      if (uVar3 == 0) {
        *(uint *)(param_1 + 0x5c) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      if ((int)(uVar3 ^ uVar7) < 0) {
        uVar7 = *(uint *)(param_1 + 0x50);
      }
      else {
        uVar7 = uVar7 & 0x7fffffff;
      }
      uVar9 = (ulonglong)(uVar7 - (uVar3 & 0x7fffffff));
      if (uVar8 <= uVar9) {
        uVar9 = uVar8;
      }
      LOCK();
      uVar7 = *(uint *)(param_1 + 0x5c);
      if (uVar7 == 0) {
        *(uint *)(param_1 + 0x5c) = 0;
        uVar7 = 0;
      }
      UNLOCK();
      iVar5 = *(int *)(param_1 + 0x88);
      iVar1 = *(int *)(param_1 + 0x8c);
      _Src = (void *)((ulonglong)(uVar7 & 0x7fffffff) + *(longlong *)(param_1 + 0x48));
      local_68[0] = 0;
      local_68[1] = 1;
      local_68[2] = 2;
      local_68[3] = 3;
      local_68[4] = 4;
      local_68[5] = 4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      auVar2 = auVar2 / ZEXT416((uint)(iVar1 * local_68[iVar5]));
      lVar6 = auVar2._0_8_;
      iVar4 = auVar2._0_4_;
      if (iVar4 == 0) break;
      local_68[0] = 0;
      local_68[1] = 1;
      local_68[2] = 2;
      local_68[3] = 3;
      local_68[4] = 4;
      local_68[5] = 4;
      _Dst = (void *)((uint)(iVar1 * local_68[iVar5]) * uVar10 + param_2);
      if (_Dst != _Src) {
        local_68[0] = 0;
        local_68[1] = 1;
        local_68[2] = 2;
        local_68[3] = 3;
        local_68[4] = 4;
        local_68[5] = 4;
        for (uVar8 = (ulonglong)(uint)(iVar1 * local_68[iVar5]) * lVar6; uVar8 != 0;
            uVar8 = uVar8 - uVar9) {
          uVar9 = uVar8;
          if (0xffffffff < uVar8) {
            uVar9 = 0xffffffff;
          }
          memcpy(_Dst,_Src,uVar9);
          _Dst = (void *)((longlong)_Dst + uVar9);
          _Src = (void *)((longlong)_Src + uVar9);
        }
      }
      iVar5 = FUN_18002aec0(param_1,iVar4);
      if ((iVar5 != 0) || (uVar10 = uVar10 + lVar6, param_3 <= uVar10)) break;
    }
  }
  *param_4 = uVar10;
  return 0;
}


