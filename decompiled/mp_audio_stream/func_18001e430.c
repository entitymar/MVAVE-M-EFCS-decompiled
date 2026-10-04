// FUN_18001e430 @ 18001e430

undefined8 FUN_18001e430(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  HANDLE hEvent;
  bool bVar7;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  undefined8 uStack_20;
  
  pcVar2 = *(code **)(*param_1 + 0x260);
  if (pcVar2 == (code *)0x0) {
    iVar3 = (**(code **)(*param_1 + 600))(0);
  }
  else {
    iVar3 = (*pcVar2)(0,0);
  }
  plVar1 = param_1 + 10;
  LOCK();
  *(undefined4 *)(param_1 + 2) = 1;
  UNLOCK();
  if ((plVar1 != (longlong *)0x0) && (BVar4 = SetEvent((HANDLE)*plVar1), BVar4 == 0)) {
    GetLastError();
  }
LAB_18001e493:
  while( true ) {
    if (param_1 + 8 != (longlong *)0x0) {
      DVar5 = WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
      if ((DVar5 != 0) && (DVar5 != 0x102)) {
        GetLastError();
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    LOCK();
    bVar7 = (int)param_1[2] == 0;
    if (bVar7) {
      *(int *)(param_1 + 2) = 0;
    }
    UNLOCK();
    if (bVar7) break;
    if (*(code **)(*param_1 + 0x30) == (code *)0x0) {
LAB_18001e4f6:
      LOCK();
      *(undefined4 *)(param_1 + 2) = 2;
      UNLOCK();
      if (param_1 + 9 != (longlong *)0x0) {
        BVar4 = SetEvent((HANDLE)param_1[9]);
        if (BVar4 == 0) {
          GetLastError();
        }
      }
      iStack_30 = 0;
      uStack_2c = 0;
      local_38 = param_1;
      if ((code *)param_1[4] != (code *)0x0) {
        (*(code *)param_1[4])(&local_38);
      }
      if (((code *)local_38[5] != (code *)0x0) && (iStack_30 == 1)) {
        (*(code *)local_38[5])();
      }
      if (*(code **)(*param_1 + 0x50) == (code *)0x0) {
        FUN_18000f540(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x50))();
      }
      if (*(code **)(*param_1 + 0x38) == (code *)0x0) {
LAB_18001e57f:
        uStack_20 = 1;
        iStack_30 = 1;
        uStack_2c = 0;
        local_28 = param_1;
        local_38 = param_1;
        if ((code *)param_1[4] != (code *)0x0) {
          (*(code *)param_1[4])(&local_38);
        }
        if (((code *)local_38[5] != (code *)0x0) && (iStack_30 == 1)) {
          (*(code *)local_38[5])();
        }
      }
      else {
        iVar6 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar6 == 0) goto LAB_18001e57f;
      }
      LOCK();
      bVar7 = (int)param_1[2] == 0;
      if (bVar7) {
        *(int *)(param_1 + 2) = 0;
      }
      UNLOCK();
      if (!bVar7) goto code_r0x00018001e5c9;
      break;
    }
    iVar6 = (**(code **)(*param_1 + 0x30))(param_1);
    if (iVar6 == 0) goto LAB_18001e4f6;
    *(int *)(param_1 + 0xc) = iVar6;
    if (param_1 + 9 != (longlong *)0x0) {
      hEvent = (HANDLE)param_1[9];
      goto LAB_18001e5dd;
    }
  }
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x268))();
  }
  return 0;
code_r0x00018001e5c9:
  LOCK();
  *(undefined4 *)(param_1 + 2) = 1;
  UNLOCK();
  if (plVar1 != (longlong *)0x0) {
    hEvent = (HANDLE)*plVar1;
LAB_18001e5dd:
    BVar4 = SetEvent(hEvent);
    if (BVar4 == 0) {
      GetLastError();
    }
  }
  goto LAB_18001e493;
}


