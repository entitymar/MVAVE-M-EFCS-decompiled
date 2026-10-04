// FUN_1800183e0 @ 1800183e0

ulonglong FUN_1800183e0(longlong *param_1,longlong param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int local_58 [8];
  ulonglong uVar12;
  
  uVar7 = 0;
  uVar11 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  lVar2 = param_1[0x18e];
  uVar6 = uVar7;
  uVar12 = uVar7;
  if (param_3 != 0) {
    do {
      uVar11 = (uint)uVar12;
      lVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30;
      if (*(longlong *)(lVar10 + 0x10 + lVar2) == 0) {
        local_58[0] = 0;
        local_58[1] = 1;
        local_58[2] = 2;
        local_58[3] = 3;
        local_58[4] = 4;
        local_58[5] = 4;
        uVar8 = local_58[*(int *)((longlong)param_1 + 0x43c)] * (int)param_1[0x88];
        uVar9 = *(uint *)(lVar10 + 8 + lVar2) / uVar8 - *(int *)((longlong)param_1 + 0xc64);
        if (param_3 - uVar11 <= uVar9) {
          uVar9 = param_3 - uVar11;
        }
        memcpy((void *)((ulonglong)(*(int *)((longlong)param_1 + 0xc64) * uVar8) +
                       *(longlong *)(lVar10 + lVar2)),
               (void *)((ulonglong)(uVar8 * uVar11) + param_2),(ulonglong)(uVar9 * uVar8));
        *(int *)((longlong)param_1 + 0xc64) = *(int *)((longlong)param_1 + 0xc64) + uVar9;
        uVar11 = uVar11 + uVar9;
        uVar12 = (ulonglong)uVar11;
        if (*(uint *)((longlong)param_1 + 0xc64) ==
            *(uint *)(lVar2 + 8 + (ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30) / uVar8) {
          *(undefined8 *)(lVar2 + 0x10 + (ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30) = 1
          ;
          puVar1 = (uint *)((ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30 + 0x18 + lVar2);
          *puVar1 = *puVar1 & 0xfffffffe;
          ResetEvent((HANDLE)param_1[0x189]);
          iVar4 = (**(code **)(*param_1 + 0x180))
                            (param_1[0x187],
                             (ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30 + lVar2,0x30);
          if (iVar4 != 0) {
            uVar6 = FUN_18001cf80(iVar4);
            uVar6 = uVar6 & 0xffffffff;
            if ((*param_1 != 0) && (lVar2 = *(longlong *)(*param_1 + 0x70), lVar2 != 0)) {
              if ((undefined8 *)(lVar2 + 0x68) != (undefined8 *)0x0) {
                WaitForSingleObject(*(HANDLE *)(lVar2 + 0x68),0xffffffff);
              }
              if (*(int *)(lVar2 + 0x40) != 0) {
                do {
                  pcVar3 = *(code **)(lVar2 + uVar7 * 0x10);
                  if (pcVar3 != (code *)0x0) {
                    (*pcVar3)(*(undefined8 *)(lVar2 + 8 + uVar7 * 0x10),1,
                              "[WinMM] waveOutWrite() failed.");
                  }
                  uVar9 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar9;
                } while (uVar9 < *(uint *)(lVar2 + 0x40));
              }
              if ((undefined8 *)(lVar2 + 0x68) != (undefined8 *)0x0) {
                SetEvent(*(HANDLE *)(lVar2 + 0x68));
              }
            }
            break;
          }
          *(undefined4 *)((longlong)param_1 + 0xc64) = 0;
          *(uint *)((longlong)param_1 + 0xc5c) =
               (*(int *)((longlong)param_1 + 0xc5c) + 1U) % *(uint *)((longlong)param_1 + 0x54c);
        }
        uVar6 = uVar7;
        if (uVar11 == param_3) break;
      }
      else {
        DVar5 = WaitForSingleObject((HANDLE)param_1[0x189],0xffffffff);
        if (DVar5 != 0) {
          uVar6 = 0xffffffff;
          break;
        }
        if ((*(byte *)(lVar2 + 0x18 + (ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30) & 1)
            != 0) {
          *(undefined8 *)(lVar2 + 0x10 + (ulonglong)*(uint *)((longlong)param_1 + 0xc5c) * 0x30) = 0
          ;
          *(undefined4 *)((longlong)param_1 + 0xc64) = 0;
        }
        LOCK();
        iVar4 = (int)param_1[2];
        if (iVar4 == 0) {
          *(int *)(param_1 + 2) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        uVar6 = 0;
        if (iVar4 != 2) break;
      }
      uVar11 = (uint)uVar12;
      uVar6 = 0;
    } while (uVar11 < param_3);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar11;
  }
  return uVar6;
}


