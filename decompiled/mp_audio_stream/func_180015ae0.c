// FUN_180015ae0 @ 180015ae0

ulonglong FUN_180015ae0(longlong *param_1,longlong param_2,uint param_3,uint *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  void *_Dst;
  void *_Src;
  uint local_88;
  uint local_84;
  int local_80 [16];
  
  uVar10 = 0;
  uVar11 = 0;
  local_84 = 0;
  if (param_1 == (longlong *)0x0) {
LAB_180015efc:
    if (param_3 <= uVar11) goto LAB_180015f35;
  }
  else {
    do {
      while( true ) {
        while( true ) {
          lVar9 = 0;
          uVar11 = (uint)uVar10;
          LOCK();
          iVar5 = (int)param_1[2];
          if (iVar5 == 0) {
            *(int *)(param_1 + 2) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (iVar5 != 2) {
            uVar10 = (ulonglong)local_84;
            goto LAB_180015efc;
          }
          if (param_3 <= uVar11) {
            uVar10 = (ulonglong)local_84;
            goto LAB_180015f35;
          }
          plVar1 = param_1 + 0x195;
          if (*plVar1 == 0) break;
          uVar6 = *(uint *)((longlong)param_1 + 0xcb4);
          iVar5 = (int)param_1[0x13b];
          local_80[6] = 0;
          local_80[0] = 0;
          local_80[1] = 1;
          local_80[2] = 2;
          local_88 = uVar6;
          if (param_3 - uVar11 <= uVar6) {
            local_88 = param_3 - uVar11;
          }
          local_80[3] = 3;
          lVar9 = (longlong)*(int *)((longlong)param_1 + 0x9d4);
          local_80[4] = 4;
          local_80[5] = 4;
          local_80[7] = 1;
          local_80[8] = 2;
          local_80[9] = 3;
          local_80[10] = 4;
          local_80[0xb] = 4;
          _Src = (void *)((ulonglong)(uint)(iVar5 * local_80[lVar9]) *
                          (ulonglong)((int)param_1[0x196] - uVar6) + *plVar1);
          _Dst = (void *)(param_2 + (uint)(iVar5 * local_80[lVar9 + 6]) * uVar10);
          if (_Dst != _Src) {
            local_80[6] = 0;
            local_80[7] = 1;
            local_80[8] = 2;
            local_80[9] = 3;
            local_80[10] = 4;
            local_80[0xb] = 4;
            for (uVar10 = (ulonglong)(uint)(iVar5 * local_80[lVar9 + 6]) * (ulonglong)local_88;
                uVar10 != 0; uVar10 = uVar10 - uVar12) {
              uVar12 = uVar10;
              if (0xffffffff < uVar10) {
                uVar12 = 0xffffffff;
              }
              memcpy(_Dst,_Src,uVar12);
              _Dst = (void *)((longlong)_Dst + uVar12);
              _Src = (void *)((longlong)_Src + uVar12);
            }
          }
          uVar10 = (ulonglong)(uVar11 + local_88);
          piVar2 = (int *)((longlong)param_1 + 0xcb4);
          *piVar2 = *piVar2 - local_88;
          if (*piVar2 == 0) {
            (**(code **)(*(longlong *)param_1[0x18a] + 0x20))
                      ((longlong *)param_1[0x18a],(int)param_1[0x196]);
            *plVar1 = 0;
            *(undefined4 *)(param_1 + 0x196) = 0;
          }
        }
        plVar3 = param_1 + 0x196;
        local_88 = 0;
        uVar6 = (**(code **)(*(longlong *)param_1[0x18a] + 0x18))
                          ((longlong *)param_1[0x18a],plVar1,plVar3,&local_88,0,0);
        if (uVar6 != 0) break;
        *(int *)((longlong)param_1 + 0xcb4) = (int)*plVar3;
        if (((local_88 & 1) != 0) && ((int)param_1[1] == 3)) {
          uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc8c) /
                   (ulonglong)*(uint *)((longlong)param_1 + 0xca4);
          uVar11 = (uint)(uVar12 >> 1);
          uVar6 = uVar11 + 1;
          if ((uVar12 & 1) == 0) {
            uVar6 = uVar11;
          }
          if (uVar6 != 0) {
            uVar11 = 0;
            do {
              uVar7 = (**(code **)(*(longlong *)param_1[0x18a] + 0x20))();
              if ((int)uVar7 < 0) {
                lVar9 = 0;
                if (*param_1 != 0) {
                  lVar9 = *(longlong *)(*param_1 + 0x70);
                }
                FUN_180025970(lVar9,4,
                              "[WASAPI] Data discontinuity recovery: IAudioCaptureClient_ReleaseBuffer() failed with %ld.\n"
                              ,(ulonglong)uVar7);
                break;
              }
              puVar13 = &local_88;
              local_88 = 0;
              uVar7 = (**(code **)(*(longlong *)param_1[0x18a] + 0x18))
                                ((longlong *)param_1[0x18a],plVar1,plVar3,puVar13,0,0);
              if (((int)uVar7 < 0) || (uVar7 == 0x8890001)) {
                lVar9 = 0;
                *plVar1 = 0;
                *(undefined4 *)plVar3 = 0;
                *(undefined4 *)((longlong)param_1 + 0xcb4) = 0;
                if (uVar7 == 0x8890001) {
                  lVar4 = *param_1;
                  if ((local_88 & 1) == 0) {
                    if (lVar4 != 0) {
                      lVar9 = *(longlong *)(lVar4 + 0x70);
                    }
                    FUN_180025970(lVar9,4,"[WASAPI] Data discontinuity recovery: Buffer emptied.\n",
                                  puVar13);
                  }
                  else {
                    if (lVar4 != 0) {
                      lVar9 = *(longlong *)(lVar4 + 0x70);
                    }
                    FUN_180025970(lVar9,4,
                                  "[WASAPI] Data discontinuity recovery: Buffer emptied, and data discontinuity still reported.\n"
                                  ,puVar13);
                  }
                }
                else if ((int)uVar7 < 0) {
                  if (*param_1 != 0) {
                    lVar9 = *(longlong *)(*param_1 + 0x70);
                  }
                  FUN_180025970(lVar9,4,
                                "[WASAPI] Data discontinuity recovery: IAudioCaptureClient_GetBuffer() failed with %ld.\n"
                                ,(ulonglong)uVar7);
                }
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar6);
          }
          if (*plVar1 != 0) {
            *(int *)((longlong)param_1 + 0xcb4) = (int)*plVar3;
          }
        }
      }
      if ((uVar6 != 0x8890001) && (uVar6 != 0x88890018)) {
        if (*param_1 != 0) {
          lVar9 = *(longlong *)(*param_1 + 0x70);
        }
        FUN_180025970(lVar9,1,
                      "[WASAPI] Failed to retrieve internal buffer from capture device in preparation for reading from the device. HRESULT = %d. Stopping device.\n"
                      ,(ulonglong)uVar6);
        uVar10 = FUN_18001cc60(uVar6);
        uVar10 = uVar10 & 0xffffffff;
        goto LAB_180015f01;
      }
      DVar8 = 10;
      if ((int)param_1[1] != 4) {
        DVar8 = 5000;
      }
      DVar8 = WaitForSingleObject((HANDLE)param_1[400],DVar8);
    } while ((DVar8 == 0) || ((int)param_1[1] == 4));
    uVar10 = 0xffffffff;
  }
LAB_180015f01:
  if (param_1[0x195] != 0) {
    (**(code **)(*(longlong *)param_1[0x18a] + 0x20))
              ((longlong *)param_1[0x18a],(int)param_1[0x196]);
    param_1[0x195] = 0;
    param_1[0x196] = 0;
  }
LAB_180015f35:
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar11;
  }
  return uVar10;
}


