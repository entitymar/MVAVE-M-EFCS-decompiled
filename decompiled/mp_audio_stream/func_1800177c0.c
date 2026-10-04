// FUN_1800177c0 @ 1800177c0

undefined8 FUN_1800177c0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  DWORD DVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  if (((int)param_1[1] == 2) || ((int)param_1[1] == 3)) {
    if (param_1[0x188] != 0) {
      iVar4 = (**(code **)(*param_1 + 0x1d0))();
      if (((iVar4 != 0) && (*param_1 != 0)) && (lVar2 = *(longlong *)(*param_1 + 0x70), lVar2 != 0))
      {
        puVar1 = (undefined8 *)(lVar2 + 0x68);
        if (puVar1 != (undefined8 *)0x0) {
          WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
        }
        uVar9 = uVar7;
        if (*(int *)(lVar2 + 0x40) != 0) {
          do {
            pcVar3 = *(code **)(lVar2 + uVar9 * 0x10);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(*(undefined8 *)(lVar2 + 8 + uVar9 * 0x10),2,
                        "[WinMM] WARNING: Failed to reset capture device.");
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(lVar2 + 0x40));
        }
        if (puVar1 != (undefined8 *)0x0) {
          SetEvent((HANDLE)*puVar1);
        }
      }
      goto LAB_180017878;
    }
LAB_18001796b:
    uVar6 = 0xfffffffe;
  }
  else {
LAB_180017878:
    if (((int)param_1[1] == 1) || ((int)param_1[1] == 3)) {
      if (param_1[0x187] == 0) goto LAB_18001796b;
      lVar2 = param_1[0x18e];
      uVar9 = uVar7;
      if (*(int *)((longlong)param_1 + 0x54c) != 0) {
        do {
          if (*(longlong *)(lVar2 + 0x10 + uVar9 * 0x30) == 1) {
            DVar5 = WaitForSingleObject((HANDLE)param_1[0x189],0xffffffff);
            if (DVar5 != 0) break;
            *(undefined8 *)(lVar2 + 0x10 + uVar9 * 0x30) = 0;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)((longlong)param_1 + 0x54c));
      }
      iVar4 = (**(code **)(*param_1 + 0x188))(param_1[0x187]);
      if (((iVar4 != 0) && (*param_1 != 0)) && (lVar2 = *(longlong *)(*param_1 + 0x70), lVar2 != 0))
      {
        puVar1 = (undefined8 *)(lVar2 + 0x68);
        if (puVar1 != (undefined8 *)0x0) {
          WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
        }
        if (*(int *)(lVar2 + 0x40) != 0) {
          do {
            pcVar3 = *(code **)(lVar2 + uVar7 * 0x10);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(*(undefined8 *)(lVar2 + 8 + uVar7 * 0x10),2,
                        "[WinMM] WARNING: Failed to reset playback device.");
            }
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(lVar2 + 0x40));
        }
        if (puVar1 != (undefined8 *)0x0) {
          SetEvent((HANDLE)*puVar1);
        }
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


