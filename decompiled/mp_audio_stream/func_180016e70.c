// FUN_180016e70 @ 180016e70

ulonglong FUN_180016e70(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined4 local_res8 [2];
  
  plVar1 = param_1 + 0x19d;
  if (plVar1 != (longlong *)0x0) {
    WaitForSingleObject((HANDLE)*plVar1,0xffffffff);
  }
  uVar5 = 0;
  if ((*(longlong *)(*param_1 + 0x228) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xcdc), iVar2 != 0)) {
    if (iVar2 == 1) {
      pcVar6 = "Games";
    }
    else {
      if (iVar2 != 2) goto LAB_180016eea;
      pcVar6 = "Pro Audio";
    }
    local_res8[0] = 0;
    lVar4 = (**(code **)(*param_1 + 0x230))(pcVar6,local_res8);
    param_1[0x19c] = lVar4;
  }
LAB_180016eea:
  iVar2 = (int)param_1[1];
  if ((iVar2 == 2) || (iVar2 == 3 || iVar2 == 4)) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x188] + 0x50))();
    if (-1 < (int)uVar3) {
      LOCK();
      *(undefined4 *)(param_1 + 0x199) = 1;
      UNLOCK();
      goto LAB_180016f4c;
    }
    if (*param_1 != 0) {
      uVar5 = *(ulonglong *)(*param_1 + 0x70);
    }
    pcVar6 = "[WASAPI] Failed to start internal capture device. HRESULT = %d.";
  }
  else {
LAB_180016f4c:
    if (((int)param_1[1] != 1) && ((int)param_1[1] != 3)) goto LAB_180016f89;
    uVar3 = (**(code **)(*(longlong *)param_1[0x187] + 0x50))();
    if (-1 < (int)uVar3) {
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0xccc) = 1;
      UNLOCK();
      goto LAB_180016f89;
    }
    if (*param_1 != 0) {
      uVar5 = *(ulonglong *)(*param_1 + 0x70);
    }
    pcVar6 = "[WASAPI] Failed to start internal playback device. HRESULT = %d.";
  }
  FUN_180025970(uVar5,1,pcVar6,(ulonglong)uVar3);
  uVar5 = FUN_18001cc60(uVar3);
  uVar5 = uVar5 & 0xffffffff;
LAB_180016f89:
  if (plVar1 != (longlong *)0x0) {
    SetEvent((HANDLE)*plVar1);
  }
  return uVar5;
}


