// FUN_1800173d0 @ 1800173d0

undefined8 FUN_1800173d0(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  HANDLE hEvent;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  uint local_res8 [2];
  
  uVar6 = 0;
  if (param_1[0x19c] != 0) {
    (**(code **)(*param_1 + 0x238))();
    param_1[0x19c] = 0;
  }
  if (((int)param_1[1] == 2) || ((int)param_1[1] - 3U < 2)) {
    iVar3 = (**(code **)(*(longlong *)param_1[0x188] + 0x58))();
    if (iVar3 < 0) {
      if ((*param_1 == 0) || (lVar10 = *(longlong *)(*param_1 + 0x70), lVar10 == 0))
      goto LAB_180017497;
      puVar9 = (undefined8 *)(lVar10 + 0x68);
      if (puVar9 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar9,0xffffffff);
      }
      if (*(int *)(lVar10 + 0x40) != 0) {
        do {
          pcVar1 = *(code **)(lVar10 + uVar6 * 0x10);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(*(undefined8 *)(lVar10 + 8 + uVar6 * 0x10),1,
                      "[WASAPI] Failed to stop internal capture device.");
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar10 + 0x40));
      }
    }
    else {
      iVar3 = (**(code **)(*(longlong *)param_1[0x188] + 0x60))();
      if (-1 < iVar3) {
        if (param_1[0x195] != 0) {
          (**(code **)(*(longlong *)param_1[0x18a] + 0x20))
                    ((longlong *)param_1[0x18a],(int)param_1[0x196]);
          param_1[0x195] = 0;
          param_1[0x196] = 0;
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x199) = 0;
        UNLOCK();
        goto LAB_180017555;
      }
      if ((*param_1 == 0) || (lVar10 = *(longlong *)(*param_1 + 0x70), lVar10 == 0))
      goto LAB_180017497;
      puVar9 = (undefined8 *)(lVar10 + 0x68);
      if (puVar9 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar9,0xffffffff);
      }
      if (*(int *)(lVar10 + 0x40) != 0) {
        do {
          pcVar1 = *(code **)(lVar10 + uVar6 * 0x10);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(*(undefined8 *)(lVar10 + 8 + uVar6 * 0x10),1,
                      "[WASAPI] Failed to reset internal capture device.");
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar10 + 0x40));
      }
    }
    if (puVar9 == (undefined8 *)0x0) goto LAB_180017497;
    hEvent = (HANDLE)*puVar9;
  }
  else {
LAB_180017555:
    if (((int)param_1[1] != 1) && ((int)param_1[1] != 3)) {
      return 0;
    }
    LOCK();
    bVar11 = *(int *)((longlong)param_1 + 0xccc) == 0;
    if (bVar11) {
      *(int *)((longlong)param_1 + 0xccc) = 0;
    }
    UNLOCK();
    if (!bVar11) {
      uVar5 = *(uint *)(param_1 + 0x191) / *(uint *)((longlong)param_1 + 0x444);
      if ((int)param_1[0x66] == 1) {
        WaitForSingleObject((HANDLE)param_1[399],uVar5);
      }
      else {
        uVar7 = 0xffffffff;
        while (plVar2 = (longlong *)param_1[0x187], (int)param_1[0x66] == 0) {
          iVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,local_res8);
          if (iVar3 < 0) {
            uVar4 = FUN_18001cc60(iVar3);
            uVar8 = 0;
            if ((int)uVar4 != 0) break;
          }
          else {
            uVar8 = local_res8[0];
            if (plVar2 == (longlong *)param_1[0x187]) {
              uVar8 = (int)param_1[0x191] - local_res8[0];
            }
          }
          if ((*(uint *)(param_1 + 0x191) <= uVar8) || (uVar8 == uVar7)) break;
          WaitForSingleObject((HANDLE)param_1[399],uVar5 * 1000);
          ResetEvent((HANDLE)param_1[399]);
          uVar7 = uVar8;
        }
      }
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x187] + 0x58))();
    if (iVar3 < 0) {
      if ((*param_1 == 0) || (lVar10 = *(longlong *)(*param_1 + 0x70), lVar10 == 0))
      goto LAB_180017497;
      if ((undefined8 *)(lVar10 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar10 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar10 + 0x40) != 0) {
        do {
          pcVar1 = *(code **)(lVar10 + uVar6 * 0x10);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(*(undefined8 *)(lVar10 + 8 + uVar6 * 0x10),1,
                      "[WASAPI] Failed to stop internal playback device.");
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar10 + 0x40));
      }
    }
    else {
      iVar3 = (**(code **)(*(longlong *)param_1[0x187] + 0x60))();
      if (-1 < iVar3) {
        if (param_1[0x197] != 0) {
          (**(code **)(*(longlong *)param_1[0x189] + 0x20))
                    ((longlong *)param_1[0x189],(int)param_1[0x198],0);
          param_1[0x197] = 0;
          param_1[0x198] = 0;
        }
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0xccc) = 0;
        UNLOCK();
        return 0;
      }
      if ((*param_1 == 0) || (lVar10 = *(longlong *)(*param_1 + 0x70), lVar10 == 0))
      goto LAB_180017497;
      if ((undefined8 *)(lVar10 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar10 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar10 + 0x40) != 0) {
        do {
          pcVar1 = *(code **)(lVar10 + uVar6 * 0x10);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(*(undefined8 *)(lVar10 + 8 + uVar6 * 0x10),1,
                      "[WASAPI] Failed to reset internal playback device.");
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar10 + 0x40));
      }
    }
    if ((undefined8 *)(lVar10 + 0x68) == (undefined8 *)0x0) goto LAB_180017497;
    hEvent = *(HANDLE *)(lVar10 + 0x68);
  }
  SetEvent(hEvent);
LAB_180017497:
  uVar4 = FUN_18001cc60(iVar3);
  return uVar4;
}


