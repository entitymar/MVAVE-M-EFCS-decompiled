// FUN_1800169f0 @ 1800169f0

undefined8 FUN_1800169f0(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar11 = *param_1;
  iVar5 = (**(code **)(lVar11 + 0x198))(param_1[0x187]);
  if (iVar5 != 0) {
    if ((*param_1 != 0) && (lVar11 = *(longlong *)(*param_1 + 0x70), lVar11 != 0)) {
      puVar1 = (undefined8 *)(lVar11 + 0x68);
      if (puVar1 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
      }
      uVar8 = 0;
      if (*(int *)(lVar11 + 0x40) != 0) {
        do {
          pcVar3 = *(code **)(lVar11 + (ulonglong)uVar8 * 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)(lVar11 + 8 + (ulonglong)uVar8 * 0x10),1,
                      "[JACK] Failed to activate the JACK client.");
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(lVar11 + 0x40));
      }
      if (puVar1 != (undefined8 *)0x0) {
        SetEvent((HANDLE)*puVar1);
      }
    }
    return 0xfffffe6e;
  }
  uVar9 = 0;
  if (((int)param_1[1] == 2) || ((int)param_1[1] == 3)) {
    plVar6 = (longlong *)(**(code **)(lVar11 + 400))(param_1[0x187],0,"32 bit float mono audio",6);
    if (plVar6 != (longlong *)0x0) {
      lVar4 = *plVar6;
      uVar10 = uVar9;
      uVar2 = uVar9;
      while (lVar4 != 0) {
        uVar7 = (**(code **)(lVar11 + 0x1b8))(*(undefined8 *)(uVar2 + param_1[0x189]));
        iVar5 = (**(code **)(lVar11 + 0x1a8))(param_1[0x187],lVar4,uVar7);
        if (iVar5 != 0) {
          (**(code **)(lVar11 + 0x1c8))(plVar6);
          (**(code **)(lVar11 + 0x1a0))(param_1[0x187]);
          if ((*param_1 != 0) && (lVar11 = *(longlong *)(*param_1 + 0x70), lVar11 != 0)) {
            puVar1 = (undefined8 *)(lVar11 + 0x68);
            if (puVar1 != (undefined8 *)0x0) {
              WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
            }
            if (*(int *)(lVar11 + 0x40) != 0) {
              do {
                pcVar3 = *(code **)(lVar11 + uVar9 * 0x10);
                if (pcVar3 != (code *)0x0) {
                  (*pcVar3)(*(undefined8 *)(lVar11 + 8 + uVar9 * 0x10),1,
                            "[JACK] Failed to connect ports.");
                }
                uVar8 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar8;
              } while (uVar8 < *(uint *)(lVar11 + 0x40));
            }
            if (puVar1 != (undefined8 *)0x0) {
              SetEvent((HANDLE)*puVar1);
              return 0xffffffff;
            }
          }
          goto LAB_180016e2b;
        }
        uVar10 = uVar10 + 1;
        uVar2 = uVar10 * 8;
        lVar4 = plVar6[uVar10];
      }
      (**(code **)(lVar11 + 0x1c8))(plVar6);
      goto LAB_180016bd3;
    }
    (**(code **)(lVar11 + 0x1a0))(param_1[0x187]);
    if ((*param_1 != 0) && (lVar11 = *(longlong *)(*param_1 + 0x70), lVar11 != 0)) {
      puVar1 = (undefined8 *)(lVar11 + 0x68);
      if (puVar1 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
      }
      if (*(int *)(lVar11 + 0x40) != 0) {
        do {
          pcVar3 = *(code **)(lVar11 + uVar9 * 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)(lVar11 + 8 + uVar9 * 0x10),1,
                      "[JACK] Failed to retrieve physical ports.");
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(lVar11 + 0x40));
      }
      if (puVar1 != (undefined8 *)0x0) {
        SetEvent((HANDLE)*puVar1);
        return 0xffffffff;
      }
    }
LAB_180016e2b:
    uVar7 = 0xffffffff;
  }
  else {
LAB_180016bd3:
    if (((int)param_1[1] == 1) || ((int)param_1[1] == 3)) {
      plVar6 = (longlong *)(**(code **)(lVar11 + 400))(param_1[0x187],0,"32 bit float mono audio",5)
      ;
      if (plVar6 == (longlong *)0x0) {
        (**(code **)(lVar11 + 0x1a0))(param_1[0x187]);
        if ((*param_1 != 0) && (lVar11 = *(longlong *)(*param_1 + 0x70), lVar11 != 0)) {
          if ((undefined8 *)(lVar11 + 0x68) != (undefined8 *)0x0) {
            WaitForSingleObject(*(HANDLE *)(lVar11 + 0x68),0xffffffff);
          }
          if (*(int *)(lVar11 + 0x40) != 0) {
            do {
              pcVar3 = *(code **)(lVar11 + uVar9 * 0x10);
              if (pcVar3 != (code *)0x0) {
                (*pcVar3)(*(undefined8 *)(lVar11 + 8 + uVar9 * 0x10),1,
                          "[JACK] Failed to retrieve physical ports.");
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar11 + 0x40));
          }
LAB_180016e19:
          if ((undefined8 *)(lVar11 + 0x68) != (undefined8 *)0x0) {
            SetEvent(*(HANDLE *)(lVar11 + 0x68));
          }
        }
        goto LAB_180016e2b;
      }
      lVar4 = *plVar6;
      uVar10 = uVar9;
      uVar2 = uVar9;
      while (lVar4 != 0) {
        uVar7 = (**(code **)(lVar11 + 0x1b8))(*(undefined8 *)(uVar2 + param_1[0x188]));
        iVar5 = (**(code **)(lVar11 + 0x1a8))(param_1[0x187],uVar7,lVar4);
        if (iVar5 != 0) {
          (**(code **)(lVar11 + 0x1c8))(plVar6);
          (**(code **)(lVar11 + 0x1a0))(param_1[0x187]);
          if ((*param_1 == 0) || (lVar11 = *(longlong *)(*param_1 + 0x70), lVar11 == 0))
          goto LAB_180016e2b;
          if ((undefined8 *)(lVar11 + 0x68) != (undefined8 *)0x0) {
            WaitForSingleObject(*(HANDLE *)(lVar11 + 0x68),0xffffffff);
          }
          if (*(int *)(lVar11 + 0x40) != 0) {
            do {
              pcVar3 = *(code **)(lVar11 + uVar9 * 0x10);
              if (pcVar3 != (code *)0x0) {
                (*pcVar3)(*(undefined8 *)(lVar11 + 8 + uVar9 * 0x10),1,
                          "[JACK] Failed to connect ports.");
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar11 + 0x40));
          }
          goto LAB_180016e19;
        }
        uVar10 = uVar10 + 1;
        uVar2 = uVar10 * 8;
        lVar4 = plVar6[uVar10];
      }
      (**(code **)(lVar11 + 0x1c8))(plVar6);
    }
    uVar7 = 0;
  }
  return uVar7;
}


