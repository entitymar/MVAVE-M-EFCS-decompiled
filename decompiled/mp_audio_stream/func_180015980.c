// FUN_180015980 @ 180015980

undefined8 FUN_180015980(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  bool bVar7;
  int local_48 [8];
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_1 + 0xc74);
      if (uVar1 == 0) {
LAB_180015a42:
        *(undefined4 *)(param_1 + 0xc74) = 0;
      }
      else {
        local_48[0] = 0;
        local_48[1] = 1;
        local_48[2] = 2;
        local_48[3] = 3;
        uVar3 = param_3 - uVar6;
        if (uVar1 <= param_3 - uVar6) {
          uVar3 = uVar1;
        }
        local_48[4] = 4;
        local_48[5] = 4;
        iVar5 = local_48[*(int *)(param_1 + 0x9d4)] * *(int *)(param_1 + 0x9d8);
        uVar4 = (ulonglong)(iVar5 * uVar3);
        _Dst = (void *)((ulonglong)(iVar5 * uVar6) + param_2);
        if ((_Dst != (void *)0x0) && (uVar4 != 0)) {
          memset(_Dst,0,uVar4);
        }
        *(int *)(param_1 + 0xc74) = *(int *)(param_1 + 0xc74) - uVar3;
        uVar6 = uVar6 + uVar3;
        if (*(int *)(param_1 + 0xc74) == 0) goto LAB_180015a42;
      }
      if (uVar6 == param_3) break;
      uVar1 = *(uint *)(param_1 + 0xae0);
      lVar2 = *(longlong *)(param_1 + 0xc80);
      LOCK();
      bVar7 = *(int *)(param_1 + 0xc88) == 0;
      if (bVar7) {
        *(int *)(param_1 + 0xc88) = 0;
      }
      UNLOCK();
      while ((!bVar7 && (uVar4 = FUN_180011b40(param_1), uVar4 < (ulonglong)uVar1 + lVar2))) {
        Sleep(10);
        LOCK();
        bVar7 = *(int *)(param_1 + 0xc88) == 0;
        if (bVar7) {
          *(int *)(param_1 + 0xc88) = 0;
        }
        UNLOCK();
      }
      *(longlong *)(param_1 + 0xc80) =
           *(longlong *)(param_1 + 0xc80) + (ulonglong)*(uint *)(param_1 + 0xae0);
      *(uint *)(param_1 + 0xc74) = *(uint *)(param_1 + 0xae0);
    } while (uVar6 < param_3);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar6;
  }
  return 0;
}


