// FUN_1800241d0 @ 1800241d0

undefined4 FUN_1800241d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  bool bVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  uVar4 = 0;
  LOCK();
  bVar6 = (int)param_1[2] == 0;
  if (bVar6) {
    *(int *)(param_1 + 2) = 0;
  }
  UNLOCK();
  if (!bVar6) {
    LOCK();
    iVar3 = (int)param_1[2];
    if (iVar3 == 0) {
      *(int *)(param_1 + 2) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 != 1) {
      plVar1 = param_1 + 7;
      if (plVar1 != (longlong *)0x0) {
        WaitForSingleObject((HANDLE)*plVar1,0xffffffff);
      }
      LOCK();
      *(undefined4 *)(param_1 + 2) = 4;
      UNLOCK();
      lVar2 = *param_1;
      if (((*(longlong *)(lVar2 + 0x40) == 0) && (*(longlong *)(lVar2 + 0x48) == 0)) &&
         (*(longlong *)(lVar2 + 0x50) == 0)) {
        if (*(code **)(lVar2 + 0x38) == (code *)0x0) {
          uVar4 = 0xfffffffd;
          LOCK();
          *(undefined4 *)(param_1 + 2) = 1;
          UNLOCK();
        }
        else {
          uVar4 = (**(code **)(lVar2 + 0x38))(param_1);
          LOCK();
          *(undefined4 *)(param_1 + 2) = 1;
          UNLOCK();
        }
      }
      else {
        if (*(code **)(lVar2 + 0x58) != (code *)0x0) {
          (**(code **)(lVar2 + 0x58))(param_1);
        }
        if (((param_1 + 10 != (longlong *)0x0) &&
            (DVar5 = WaitForSingleObject((HANDLE)param_1[10],0xffffffff), DVar5 != 0)) &&
           (DVar5 != 0x102)) {
          GetLastError();
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
      param_1[0xd6] = 0;
      param_1[0xd7] = 0;
      if (plVar1 != (longlong *)0x0) {
        SetEvent((HANDLE)*plVar1);
      }
      return uVar4;
    }
    return 0;
  }
  return 0xfffffffd;
}


