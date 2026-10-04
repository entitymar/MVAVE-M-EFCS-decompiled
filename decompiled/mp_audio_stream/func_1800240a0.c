// FUN_1800240a0 @ 1800240a0

int FUN_1800240a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  bool bVar6;
  
  if (param_1 == (longlong *)0x0) {
    return -2;
  }
  LOCK();
  bVar6 = (int)param_1[2] == 0;
  if (bVar6) {
    *(int *)(param_1 + 2) = 0;
  }
  UNLOCK();
  if (bVar6) {
    return -3;
  }
  LOCK();
  iVar3 = (int)param_1[2];
  if (iVar3 == 0) {
    *(int *)(param_1 + 2) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if (iVar3 == 2) {
    return 0;
  }
  plVar1 = param_1 + 7;
  if (plVar1 != (longlong *)0x0) {
    WaitForSingleObject((HANDLE)*plVar1,0xffffffff);
  }
  LOCK();
  *(undefined4 *)(param_1 + 2) = 3;
  UNLOCK();
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x40) == 0) && (*(longlong *)(lVar2 + 0x48) == 0)) &&
     (*(longlong *)(lVar2 + 0x50) == 0)) {
    if (*(code **)(lVar2 + 0x30) == (code *)0x0) {
      iVar3 = -3;
    }
    else {
      iVar3 = (**(code **)(lVar2 + 0x30))(param_1);
      if (iVar3 == 0) {
        LOCK();
        *(undefined4 *)(param_1 + 2) = 2;
        UNLOCK();
        FUN_18000de80((longlong)param_1);
        goto LAB_1800241ae;
      }
    }
  }
  else {
    if ((param_1 + 8 != (longlong *)0x0) && (BVar4 = SetEvent((HANDLE)param_1[8]), BVar4 == 0)) {
      GetLastError();
    }
    if (((param_1 + 9 != (longlong *)0x0) &&
        (DVar5 = WaitForSingleObject((HANDLE)param_1[9],0xffffffff), DVar5 != 0)) &&
       (DVar5 != 0x102)) {
      GetLastError();
    }
    iVar3 = (int)param_1[0xc];
    if (iVar3 == 0) goto LAB_1800241ae;
  }
  LOCK();
  *(undefined4 *)(param_1 + 2) = 1;
  UNLOCK();
LAB_1800241ae:
  if (plVar1 != (longlong *)0x0) {
    SetEvent((HANDLE)*plVar1);
  }
  return iVar3;
}


