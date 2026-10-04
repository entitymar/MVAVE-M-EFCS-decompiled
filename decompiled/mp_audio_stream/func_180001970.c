// FUN_180001970 @ 180001970

undefined8 FUN_180001970(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x10);
  iVar5 = (int)plVar9[1];
  if (iVar5 == 1) {
    if (param_2 != 0) goto LAB_1800019af;
LAB_1800019f8:
    if (*(char *)((longlong)plVar9 + 0xcd9) == '\0') goto LAB_180001a11;
LAB_180001a02:
    if (param_2 == 1) goto LAB_180001a07;
    if (param_2 == 0) {
      iVar5 = (int)plVar9[0x66];
      goto LAB_180001a5f;
    }
  }
  else {
    if (iVar5 != 2) {
      if ((iVar5 == 4) && (param_2 != 0)) goto LAB_1800019af;
      iVar4 = 1;
      if (iVar5 != 4) {
        iVar4 = param_2;
      }
      param_2 = iVar4;
      if (param_2 == 0) goto LAB_1800019f8;
      goto LAB_180001a02;
    }
    if (param_2 != 1) {
LAB_1800019af:
      if ((plVar9 == (longlong *)0x0) || (*plVar9 == 0)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(*plVar9 + 0x70);
      }
      FUN_180025970(lVar6,4,
                    "[WASAPI] Stream rerouting abandoned because dataFlow does match device type.\n"
                    ,param_4);
      return 0;
    }
LAB_180001a07:
    if ((char)plVar9[0x19b] == '\0') {
LAB_180001a11:
      if ((plVar9 == (longlong *)0x0) || (*plVar9 == 0)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(*plVar9 + 0x70);
      }
      FUN_180025970(lVar6,4,
                    "[WASAPI] Stream rerouting abandoned because automatic stream routing has been disabled by the device config.\n"
                    ,param_4);
      return 0;
    }
    iVar5 = (int)plVar9[0x119];
LAB_180001a5f:
    if (iVar5 == 1) {
      if ((plVar9 == (longlong *)0x0) || (*plVar9 == 0)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(*plVar9 + 0x70);
      }
      FUN_180025970(lVar6,4,
                    "[WASAPI] Stream rerouting abandoned because the device shared mode is exclusive.\n"
                    ,param_4);
      return 0;
    }
  }
  lVar6 = 0;
  if (plVar9 == (longlong *)0x0) {
LAB_180001b97:
    if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
       (lVar3 = **(longlong **)(param_1 + 0x10), lVar3 != 0)) {
      lVar6 = *(longlong *)(lVar3 + 0x70);
    }
    FUN_180025970(lVar6,4,
                  "[WASAPI] Stream rerouting abandoned because the device is in the process of starting.\n"
                  ,param_4);
    return 0;
  }
  LOCK();
  iVar5 = (int)plVar9[2];
  bVar10 = iVar5 == 0;
  if (bVar10) {
    *(int *)(plVar9 + 2) = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if ((bVar10) || (iVar5 == 3)) goto LAB_180001b97;
  bVar10 = iVar5 == 2;
  lVar6 = param_4;
  if (bVar10) {
    FUN_1800241d0(*(longlong **)(param_1 + 0x10));
  }
  if (param_4 == 0) {
    return 0;
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xce8);
  if (puVar7 != (undefined8 *)0x0) {
    WaitForSingleObject((HANDLE)*puVar7,0xffffffff);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (param_2 == 0) {
    FUN_1800168d0(plVar2,1,plVar9,lVar6);
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar6 + 0xcda) == '\0') goto LAB_180001b72;
    *(undefined1 *)(lVar6 + 0xcda) = 0;
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar6 + 8) == 3) {
      cVar1 = *(char *)(lVar6 + 0xcdb);
LAB_180001b68:
      if (cVar1 != '\0') {
        bVar10 = false;
        goto LAB_180001b72;
      }
    }
  }
  else {
    uVar8 = 2;
    if ((int)plVar2[1] == 4) {
      uVar8 = 4;
    }
    FUN_1800168d0(plVar2,uVar8,plVar9,lVar6);
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar6 + 0xcdb) == '\0') goto LAB_180001b72;
    *(undefined1 *)(lVar6 + 0xcdb) = 0;
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar6 + 8) == 3) {
      cVar1 = *(char *)(lVar6 + 0xcda);
      goto LAB_180001b68;
    }
  }
  bVar10 = true;
LAB_180001b72:
  if ((undefined8 *)(lVar6 + 0xce8) != (undefined8 *)0x0) {
    SetEvent(*(HANDLE *)(lVar6 + 0xce8));
  }
  if (!bVar10) {
    return 0;
  }
  FUN_1800240a0(*(longlong **)(param_1 + 0x10));
  return 0;
}


