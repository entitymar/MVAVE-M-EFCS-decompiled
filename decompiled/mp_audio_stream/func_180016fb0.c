// FUN_180016fb0 @ 180016fb0

undefined4 FUN_180016fb0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (((int)param_1[1] != 2) && ((int)param_1[1] != 3)) {
    return 0;
  }
  lVar2 = param_1[399];
  ResetEvent((HANDLE)param_1[0x18a]);
  uVar6 = 0;
  if (*(int *)((longlong)param_1 + 0xae4) != 0) {
    do {
      uVar5 = (ulonglong)uVar6;
      iVar4 = (**(code **)(*param_1 + 0x1c0))(param_1[0x188],param_1[399] + uVar5 * 0x30,0x30);
      if (iVar4 != 0) {
        if ((*param_1 != 0) && (lVar2 = *(longlong *)(*param_1 + 0x70), lVar2 != 0)) {
          puVar1 = (undefined8 *)(lVar2 + 0x68);
          if (puVar1 != (undefined8 *)0x0) {
            WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
          }
          uVar6 = 0;
          if (*(int *)(lVar2 + 0x40) != 0) {
            do {
              pcVar3 = *(code **)(lVar2 + (ulonglong)uVar6 * 0x10);
              if (pcVar3 != (code *)0x0) {
                (*pcVar3)(*(undefined8 *)(lVar2 + 8 + (ulonglong)uVar6 * 0x10),1,
                          "[WinMM] Failed to attach input buffers to capture device in preparation for capture."
                         );
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(uint *)(lVar2 + 0x40));
          }
          if (puVar1 != (undefined8 *)0x0) {
            SetEvent((HANDLE)*puVar1);
          }
        }
        goto code_r0x00018001717d;
      }
      uVar6 = uVar6 + 1;
      *(undefined8 *)(uVar5 * 0x30 + 0x10 + lVar2) = 1;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0xae4));
  }
  iVar4 = (**(code **)(*param_1 + 0x1c8))(param_1[0x188]);
  if (iVar4 == 0) {
    return 0;
  }
  if ((*param_1 != 0) && (lVar2 = *(longlong *)(*param_1 + 0x70), lVar2 != 0)) {
    if ((undefined8 *)(lVar2 + 0x68) != (undefined8 *)0x0) {
      WaitForSingleObject(*(HANDLE *)(lVar2 + 0x68),0xffffffff);
    }
    uVar5 = 0;
    if (*(int *)(lVar2 + 0x40) != 0) {
      do {
        pcVar3 = *(code **)(lVar2 + uVar5 * 0x10);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(lVar2 + 8 + uVar5 * 0x10),1,
                    "[WinMM] Failed to start backend device.");
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar2 + 0x40));
    }
    if ((undefined8 *)(lVar2 + 0x68) != (undefined8 *)0x0) {
      SetEvent(*(HANDLE *)(lVar2 + 0x68));
    }
  }
  switch(iVar4) {
  case 0:
    goto LAB_1800171b7;
  default:
LAB_1800171b7:
    return 0xffffffff;
  case 2:
  case 5:
  case 10:
  case 0xb:
LAB_1800171b7:
    return 0xfffffffe;
  case 7:
LAB_1800171b7:
    return 0xfffffffc;
  case 0xc:
LAB_1800171b7:
    return 0xffffffed;
  }
code_r0x00018001717d:
  switch(iVar4) {
  case 0:
LAB_1800171b7:
    return 0;
  default:
    goto LAB_1800171b7;
  case 2:
  case 5:
  case 10:
  case 0xb:
    goto LAB_1800171b7;
  case 7:
    goto LAB_1800171b7;
  case 0xc:
    goto LAB_1800171b7;
  }
}


