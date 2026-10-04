// FUN_1800100c0 @ 1800100c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800100c0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined1 auStackY_2138 [32];
  uint local_20f4;
  uint local_20f0;
  int local_20e8 [10];
  uint local_20c0;
  uint local_20bc;
  uint local_20b8 [2];
  ulonglong local_20b0;
  ulonglong local_20a8;
  ulonglong local_20a0;
  ulonglong local_2098;
  longlong *local_2090;
  uint local_2088;
  uint local_2084;
  uint local_2080;
  int local_207c;
  uint local_2078;
  uint local_2074;
  undefined1 (*local_2070) [16];
  ulonglong local_2068;
  undefined4 *local_2060;
  uint local_2058;
  undefined1 local_2054 [4];
  undefined1 local_2050 [4];
  undefined1 local_204c [4];
  ulonglong local_2048;
  undefined1 local_2040 [8];
  undefined1 local_2038 [4096];
  undefined4 local_1038 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1800100e4;
  local_38 = DAT_180036c40 ^ (ulonglong)auStackY_2138;
  uVar7 = 0;
  local_20e8[0] = 0;
  local_20e8[1] = 1;
  local_20e8[2] = 2;
  local_20e8[3] = 3;
  local_20e8[4] = 4;
  local_20e8[5] = 4;
  local_20e8[0] = 0;
  local_20e8[1] = 1;
  local_20e8[2] = 2;
  local_20e8[3] = 3;
  local_2088 = local_20e8[*(int *)((longlong)param_1 + 0x9d4)] * (int)param_1[0x13b];
  local_20e8[4] = 4;
  local_20e8[5] = 4;
  local_2090 = param_1;
  uVar14 = local_20e8[*(int *)((longlong)param_1 + 0x43c)] * (int)param_1[0x88];
  local_20bc = 0;
  local_20e8[7] = 0;
  local_20f0 = 0;
  local_20e8[8] = 0;
  local_20e8[6] = 0;
  local_2080 = 0;
  uVar20 = uVar7;
  uVar17 = uVar7;
  if ((((int)param_1[1] == 2) || ((int)param_1[1] == 3)) &&
     (iVar3 = (**(code **)(*(longlong *)param_1[0x18b] + 0x48))((longlong *)param_1[0x18b],1),
     iVar3 < 0)) {
    if ((*param_1 != 0) && (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 != 0)) {
      puVar1 = (undefined8 *)(lVar9 + 0x68);
      if (puVar1 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
      }
      if (*(int *)(lVar9 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar9 + uVar7 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar7 * 0x10),1,
                      "[DirectSound] IDirectSoundCaptureBuffer_Start() failed.");
          }
          uVar14 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar9 + 0x40));
      }
      if (puVar1 != (undefined8 *)0x0) {
        SetEvent((HANDLE)*puVar1);
      }
    }
    uVar7 = FUN_18001cc60(iVar3);
    return uVar7;
  }
LAB_180010262:
  uVar5 = (uint)uVar17;
  uVar22 = 0;
LAB_180010270:
  while( true ) {
    LOCK();
    iVar3 = (int)param_1[2];
    uVar12 = 0;
    if (iVar3 == 0) {
      *(int *)(param_1 + 2) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    iVar16 = (int)param_1[1];
    uVar4 = (uint)uVar7;
    if (iVar3 != 2) {
      if ((1 < iVar16 - 2U) ||
         (iVar3 = (**(code **)(*(longlong *)param_1[0x18b] + 0x50))(), -1 < iVar3)) {
        if (((int)param_1[1] != 1) && ((int)param_1[1] != 3)) goto LAB_18001199a;
        uVar5 = local_20bc;
        if (local_20e8[6] == 0) goto LAB_1800118f5;
        iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x20))
                          ((longlong *)param_1[0x189],local_20b8,&local_2074);
        uVar5 = local_20bc;
        local_20bc = local_20b8[0];
        goto joined_r0x000180011858;
      }
      if ((*param_1 == 0) || (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 == 0))
      goto LAB_18001197e;
      if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar9 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                      "[DirectSound] IDirectSoundCaptureBuffer_Stop() failed.");
          }
          uVar14 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar9 + 0x40));
      }
      goto LAB_18001196c;
    }
    if (iVar16 == 1) break;
    if (iVar16 == 2) {
      iVar3 = (**(code **)(*(longlong *)param_1[0x18b] + 0x20))
                        ((longlong *)param_1[0x18b],local_204c,&local_2074);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      if (uVar5 != local_2074) {
        uVar22 = uVar17;
        if (uVar5 < local_2074) {
          uVar5 = local_2074 - uVar5;
        }
        else {
          uVar12 = *(int *)((longlong)param_1 + 0xae4) * (int)param_1[0x15c] * local_2088;
          if (uVar5 < uVar12) {
            uVar5 = uVar12 - uVar5;
          }
          else {
            uVar22 = 0;
            uVar5 = local_2074;
          }
        }
        if (*(uint *)(param_1 + 0x15c) <= uVar5) {
          iVar3 = (**(code **)(*(longlong *)param_1[0x18b] + 0x40))
                            ((longlong *)param_1[0x18b],uVar22,uVar5,&local_2060);
          if (iVar3 < 0) {
            if ((*param_1 != 0) && (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 != 0)) {
              if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
                WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
              }
              uVar12 = 0;
              if (*(int *)(lVar9 + 0x40) != 0) {
                do {
                  pcVar2 = *(code **)(lVar9 + (ulonglong)uVar12 * 0x10);
                  if (pcVar2 != (code *)0x0) {
                    (*pcVar2)(*(undefined8 *)(lVar9 + 8 + (ulonglong)uVar12 * 0x10),1,
                              "[DirectSound] Failed to map buffer from capture device in preparation for writing to the device."
                             );
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(uint *)(lVar9 + 0x40));
              }
              param_1 = local_2090;
              if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
                SetEvent(*(HANDLE *)(lVar9 + 0x68));
                param_1 = local_2090;
              }
            }
            uVar20 = FUN_18001cc60(iVar3);
            uVar20 = uVar20 & 0xffffffff;
          }
          if (uVar5 != local_20e8[9]) {
            lVar9 = 0;
            if (*param_1 != 0) {
              lVar9 = *(longlong *)(*param_1 + 0x70);
            }
            FUN_180025970(lVar9,4,
                          "[DirectSound] (Capture) lockSizeInBytesCapture=%ld != mappedSizeInBytesCapture=%ld\n"
                          ,(ulonglong)uVar5);
          }
          uVar5 = local_2088;
          FUN_18000f050((longlong)param_1,(uint)local_20e8[9] / local_2088,local_2060);
          uVar17 = 0;
          iVar3 = (**(code **)(*(longlong *)param_1[0x18b] + 0x58))
                            ((longlong *)param_1[0x18b],local_2060,local_20e8[9],0);
          if (-1 < iVar3) {
            uVar7 = (ulonglong)local_20f0;
            uVar12 = local_20e8[9] + (int)uVar22;
            if (uVar12 != *(int *)((longlong)param_1 + 0xae4) * (int)param_1[0x15c] * uVar5) {
              uVar17 = (ulonglong)uVar12;
            }
            goto LAB_1800113f3;
          }
          if ((*param_1 == 0) || (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 == 0))
          goto LAB_18001177e;
          if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
            WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
          }
          if (*(int *)(lVar9 + 0x40) != 0) {
            do {
              pcVar2 = *(code **)(lVar9 + uVar17 * 0x10);
              if (pcVar2 != (code *)0x0) {
                (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar17 * 0x10),1,
                          "[DirectSound] Failed to unlock internal buffer from capture device after reading from the device."
                         );
              }
              uVar14 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar9 + 0x40));
          }
          goto LAB_18001176c;
        }
        Sleep(1);
        goto LAB_180010262;
      }
      Sleep(1);
    }
    else {
      if (iVar16 != 3) {
        return 0xfffffffe;
      }
      iVar3 = (**(code **)(*(longlong *)param_1[0x18b] + 0x20))
                        ((longlong *)param_1[0x18b],local_2050,&local_2058);
      plVar21 = local_2090;
      if (iVar3 < 0) {
        uVar7 = FUN_18001cc60(iVar3);
        return uVar7;
      }
      if (local_2058 == uVar5) goto LAB_1800102c9;
      local_20b8[0] = uVar5;
      if (uVar5 < local_2058) {
        uVar4 = local_2058 - uVar5;
      }
      else {
        uVar4 = *(int *)((longlong)param_1 + 0xae4) * (int)param_1[0x15c] * local_2088;
        if (uVar5 < uVar4) {
          uVar4 = uVar4 - uVar5;
        }
        else {
          local_20b8[0] = 0;
          uVar4 = local_2058;
        }
      }
      if (uVar4 != 0) {
        iVar3 = (**(code **)(*(longlong *)local_2090[0x18b] + 0x40))();
        if (-1 < iVar3) {
          local_20f4 = 0;
          uVar7 = uVar22;
          goto LAB_180010370;
        }
        lVar9 = *plVar21;
        if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x70), lVar9 == 0)) goto LAB_18001177e;
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar9 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                        "[DirectSound] Failed to map buffer from capture device in preparation for writing to the device."
                       );
            }
            uVar14 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(lVar9 + 0x40));
        }
        goto LAB_18001176c;
      }
      Sleep(1);
    }
  }
  iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x20))
                    ((longlong *)param_1[0x189],&local_2084,local_2040);
  if (iVar3 < 0) goto LAB_1800113f3;
  if (local_2084 < local_20bc) {
    local_20e8[7] = (int)(local_20e8[7] == 0);
  }
  local_20bc = local_2084;
  uVar10 = uVar22;
  if (local_20e8[7] == local_20e8[8]) {
    if (uVar4 < local_2084) {
      if (*param_1 != 0) {
        uVar10 = *(ulonglong *)(*param_1 + 0x70);
      }
      pcVar18 = 
      "[DirectSound] (Playback): Play cursor has moved in front of the write cursor (same loop iterations). physicalPlayCursorInBytes=%ld, virtualWriteCursorInBytes=%ld.\n"
      ;
LAB_18001114d:
      FUN_180025970(uVar10,2,pcVar18,(ulonglong)local_2084);
    }
    else {
      uVar12 = (*(int *)((longlong)param_1 + 0x54c) * (int)param_1[0xa9] * uVar14 - uVar4) +
               local_2084;
    }
  }
  else {
    if (local_2084 < uVar4) {
      if (*param_1 != 0) {
        uVar10 = *(ulonglong *)(*param_1 + 0x70);
      }
      pcVar18 = 
      "[DirectSound] (Playback): Write cursor has moved behind the play cursor (different loop iterations). physicalPlayCursorInBytes=%ld, virtualWriteCursorInBytes=%ld.\n"
      ;
      goto LAB_18001114d;
    }
    uVar12 = local_2084 - uVar4;
  }
  if (*(uint *)(param_1 + 0xa9) <= uVar12) goto LAB_1800111b2;
  if ((uVar12 != 0) || (local_20e8[6] != 0)) goto LAB_1800102c9;
  iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x60))((longlong *)param_1[0x189],0,0,1);
  if (iVar3 < 0) {
    if ((*param_1 == 0) || (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 == 0)) goto LAB_18001177e;
    if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
      WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
    }
    if (*(int *)(lVar9 + 0x40) != 0) {
      do {
        pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                    "[DirectSound] IDirectSoundBuffer_Play() failed.");
        }
        uVar14 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(lVar9 + 0x40));
    }
LAB_18001176c:
    if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
      SetEvent(*(HANDLE *)(lVar9 + 0x68));
    }
LAB_18001177e:
    uVar7 = FUN_18001cc60(iVar3);
    return uVar7;
  }
  uVar7 = (ulonglong)local_20f0;
  local_20e8[6] = 1;
LAB_1800111b2:
  uVar5 = local_2084;
  if (local_20e8[7] == local_20e8[8]) {
    uVar5 = *(int *)((longlong)param_1 + 0x54c) * (int)param_1[0xa9] * uVar14;
  }
  iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x58))
                    ((longlong *)param_1[0x189],uVar7,uVar5 - (int)uVar7,&local_2070);
  if (iVar3 < 0) {
    if ((*param_1 != 0) && (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 != 0)) {
      if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar9 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                      "[DirectSound] Failed to map buffer from playback device in preparation for writing to the device."
                     );
          }
          uVar5 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar9 + 0x40));
      }
      if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
        SetEvent(*(HANDLE *)(lVar9 + 0x68));
      }
    }
    uVar20 = FUN_18001cc60(iVar3);
    uVar7 = (ulonglong)local_20f0;
    uVar20 = uVar20 & 0xffffffff;
  }
  else {
    FUN_18000e780((longlong)param_1,local_20c0 / uVar14,local_2070);
    iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x98))
                      ((longlong *)param_1[0x189],local_2070,local_20c0,0);
    plVar21 = local_2090;
    if (iVar3 < 0) {
      if ((*param_1 != 0) && (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 != 0)) {
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar9 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                        "[DirectSound] Failed to unlock internal buffer from playback device after writing to the device."
                       );
            }
            uVar5 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar9 + 0x40));
        }
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          SetEvent(*(HANDLE *)(lVar9 + 0x68));
        }
      }
      uVar20 = FUN_18001cc60(iVar3);
      uVar7 = (ulonglong)local_20f0;
      uVar20 = uVar20 & 0xffffffff;
    }
    else {
      uVar5 = local_20c0 + (int)uVar7;
      if (uVar5 == *(uint *)(param_1 + 0xa9) * *(int *)((longlong)param_1 + 0x54c) * uVar14) {
        local_20e8[8] = (int)(local_20e8[8] == 0);
        uVar7 = uVar22;
      }
      else {
        uVar7 = (ulonglong)uVar5;
      }
      local_20f0 = (uint)uVar7;
      local_2080 = local_2080 + local_20c0 / uVar14;
      if ((local_20e8[6] == 0) && (*(uint *)(param_1 + 0xa9) <= local_2080)) {
        iVar3 = (**(code **)(*(longlong *)local_2090[0x189] + 0x60))
                          ((longlong *)local_2090[0x189],0,0,1);
        if (-1 < iVar3) {
          local_20e8[6] = 1;
          goto LAB_1800113f3;
        }
        if ((*plVar21 == 0) || (lVar9 = *(longlong *)(*plVar21 + 0x70), lVar9 == 0))
        goto LAB_18001177e;
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar9 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                        "[DirectSound] IDirectSoundBuffer_Play() failed.");
            }
            uVar14 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(lVar9 + 0x40));
        }
        goto LAB_18001176c;
      }
    }
  }
LAB_1800113f3:
  param_1 = local_2090;
  if ((int)uVar20 != 0) {
    return uVar20;
  }
  goto LAB_180010262;
joined_r0x000180011858:
  local_20b8[0] = local_20bc;
  if (iVar3 < 0) {
LAB_1800118f5:
    local_20bc = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x90))();
    if (iVar3 < 0) {
      if ((*param_1 != 0) && (lVar9 = *(longlong *)(*param_1 + 0x70), lVar9 != 0)) {
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar9 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                        "[DirectSound] IDirectSoundBuffer_Stop() failed.");
            }
            uVar14 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(lVar9 + 0x40));
        }
LAB_18001196c:
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          SetEvent(*(HANDLE *)(lVar9 + 0x68));
        }
      }
LAB_18001197e:
      uVar7 = FUN_18001cc60(iVar3);
    }
    else {
      (**(code **)(*(longlong *)param_1[0x189] + 0x68))((longlong *)param_1[0x189],0);
LAB_18001199a:
      uVar7 = 0;
    }
    return uVar7;
  }
  if (local_20bc < uVar5) {
    local_20e8[7] = (int)(local_20e8[7] == 0);
  }
  uVar5 = local_20bc;
  if (local_20e8[7] == local_20e8[8]) {
    if (uVar4 < local_20bc) goto LAB_1800118f5;
    iVar3 = *(int *)((longlong)param_1 + 0x54c) * (int)param_1[0xa9] * uVar14 - uVar4;
  }
  else {
    if (local_20bc < uVar4) goto LAB_1800118f5;
    iVar3 = -uVar4;
  }
  if (*(int *)((longlong)param_1 + 0x54c) * (int)param_1[0xa9] * uVar14 <= iVar3 + local_20bc)
  goto LAB_1800118f5;
  Sleep(1);
  iVar3 = (**(code **)(*(longlong *)param_1[0x189] + 0x20))
                    ((longlong *)param_1[0x189],local_20b8,&local_2074);
  uVar5 = local_20bc;
  local_20bc = local_20b8[0];
  goto joined_r0x000180011858;
LAB_1800102c9:
  Sleep(1);
  goto LAB_180010270;
LAB_180010370:
  do {
    plVar19 = plVar21 + 0x15e;
    local_20e8[0] = 0;
    uVar4 = (uint)uVar7;
    local_20e8[1] = 1;
    local_20e8[2] = 2;
    local_20e8[3] = 3;
    local_20e8[4] = 4;
    local_20e8[5] = 4;
    local_20e8[0] = 0;
    local_20e8[1] = 1;
    local_20e8[2] = 2;
    local_20e8[3] = 3;
    local_20e8[4] = 4;
    local_20e8[5] = 4;
    local_207c = 0;
    uVar5 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                   ZEXT416((uint)(local_20e8[*(int *)((longlong)plVar21 + 0x334)] *
                                 (int)plVar21[0x67])),0);
    uVar11 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                    ZEXT416((uint)(local_20e8[*(int *)((longlong)plVar21 + 0x8cc)] *
                                  (int)plVar21[0x11a])),0);
    if (uVar11 < uVar5) {
      uVar5 = uVar11;
    }
    local_2098 = (ulonglong)uVar5;
    puVar15 = (undefined4 *)((ulonglong)(uVar4 * local_2088) + (longlong)local_2060);
    uVar5 = (uint)local_20e8[9] / local_2088 - uVar4;
    local_20a8 = (ulonglong)uVar5;
    local_20b0 = local_2098;
    if (plVar19 == (longlong *)0x0) {
      uVar20 = 0xfffffffe;
      break;
    }
    switch(*(undefined4 *)((longlong)plVar21 + 0xb0c)) {
    case 0:
      local_20e8[0] = 0;
      if (local_20a8 < local_2098) {
        local_2098 = local_20a8;
      }
      local_20e8[1] = 1;
      local_20e8[2] = 2;
      local_20e8[3] = 3;
      local_20e8[4] = 4;
      local_20e8[5] = 4;
      if (puVar15 == (undefined4 *)0x0) {
        pauVar13 = (undefined1 (*) [16])local_2038;
        for (uVar7 = (uint)(local_20e8[*(int *)((longlong)plVar21 + 0xaf4)] *
                           *(int *)((longlong)plVar21 + 0xafc)) * local_2098; uVar7 != 0;
            uVar7 = uVar7 - uVar20) {
          uVar20 = uVar7;
          if (0xffffffff < uVar7) {
            uVar20 = 0xffffffff;
          }
          if ((pauVar13 != (undefined1 (*) [16])0x0) && (uVar20 != 0)) {
            memset(pauVar13,0,uVar20);
          }
          pauVar13 = (undefined1 (*) [16])(*pauVar13 + uVar20);
        }
      }
      else {
        uVar7 = (uint)(local_20e8[*(int *)((longlong)plVar21 + 0xaf4)] *
                      *(int *)((longlong)plVar21 + 0xafc)) * local_2098;
        pauVar13 = (undefined1 (*) [16])local_2038;
        plVar21 = local_2090;
        for (; local_2090 = plVar21, uVar7 != 0; uVar7 = uVar7 - uVar20) {
          uVar20 = uVar7;
          if (0xffffffff < uVar7) {
            uVar20 = 0xffffffff;
          }
          memcpy(pauVar13,puVar15,uVar20);
          pauVar13 = (undefined1 (*) [16])(*pauVar13 + uVar20);
          puVar15 = (undefined4 *)((longlong)puVar15 + uVar20);
          plVar21 = local_2090;
        }
      }
      uVar5 = (uint)local_2098;
      uVar20 = 0;
      local_20b0 = local_2098;
      local_20a8 = local_2098;
      goto LAB_18001072c;
    case 1:
      uVar7 = local_2098;
      if (local_20a8 < local_2098) {
        uVar7 = local_20a8;
      }
      local_2098 = uVar7;
      if (puVar15 == (undefined4 *)0x0) {
        local_20e8[0] = 0;
        local_20e8[1] = 1;
        local_20e8[2] = 2;
        local_20e8[3] = 3;
        local_20e8[4] = 4;
        local_20e8[5] = 4;
        pauVar13 = (undefined1 (*) [16])local_2038;
        for (uVar7 = (uint)(local_20e8[*(int *)((longlong)plVar21 + 0xaf4)] *
                           *(int *)((longlong)plVar21 + 0xafc)) * uVar7; uVar7 != 0;
            uVar7 = uVar7 - uVar20) {
          uVar20 = uVar7;
          if (0xffffffff < uVar7) {
            uVar20 = 0xffffffff;
          }
          if ((pauVar13 != (undefined1 (*) [16])0x0) && (uVar20 != 0)) {
            memset(pauVar13,0,uVar20);
          }
          pauVar13 = (undefined1 (*) [16])(*pauVar13 + uVar20);
        }
        uVar5 = (uint)local_2098;
        uVar20 = 0;
        local_20b0 = local_2098;
        local_20a8 = local_2098;
      }
      else {
        FUN_180028b70((undefined1 (*) [16])local_2038,*(int *)((longlong)plVar21 + 0xaf4),puVar15,
                      (int)*plVar19,*(uint *)(plVar21 + 0x15f) * uVar7,(int)plVar21[0x161]);
        uVar5 = (uint)uVar7;
        uVar20 = uVar22;
        local_20f4 = uVar4;
        local_20b0 = uVar7;
        local_20a8 = uVar7;
      }
      goto LAB_18001072c;
    case 2:
      uVar8 = FUN_18000afa0((int *)plVar19,puVar15,&local_20a8,(undefined4 *)local_2038,&local_20b0)
      ;
      uVar5 = (uint)uVar8;
      break;
    case 3:
      if (((char)plVar21[0x183] != '\0') || (*(char *)((longlong)plVar21 + 0xc19) != '\0')) {
        uVar7 = FUN_18000bcb0((int *)plVar19,(longlong)puVar15,&local_20a8,(longlong)local_2038,
                              &local_20b0);
        uVar5 = (uint)uVar7;
        break;
      }
      if (plVar21 + 0x16b == (longlong *)0x0) {
        uVar20 = 0xfffffffe;
      }
      else {
        if ((plVar21[0x16c] != 0) &&
           (pcVar2 = *(code **)(plVar21[0x16c] + 0x18), pcVar2 != (code *)0x0)) {
          uVar5 = (*pcVar2)(plVar21[0x16d],plVar21[0x16b],puVar15,&local_20a8);
          break;
        }
        uVar20 = 0xffffffe3;
      }
      goto LAB_180010723;
    case 4:
      uVar8 = FUN_18000b700((int *)plVar19,(longlong)puVar15,&local_20a8,(longlong)local_2038,
                            &local_20b0);
      uVar5 = (uint)uVar8;
      break;
    case 5:
      uVar8 = FUN_18000a960((int *)plVar19,(longlong)puVar15,&local_20a8,(longlong)local_2038,
                            &local_20b0);
      uVar5 = (uint)uVar8;
      break;
    default:
      uVar20 = 0xfffffffd;
      goto LAB_180010e85;
    }
    uVar20 = (ulonglong)uVar5;
    uVar5 = (uint)local_20a8;
    local_2098 = local_20b0;
LAB_180010723:
    local_20f4 = uVar4;
    local_20b0 = local_2098;
    if ((int)uVar20 != 0) break;
LAB_18001072c:
    local_20f4 = local_20f4 + uVar5;
    FUN_18000c260((longlong)plVar21,local_1038,(longlong)local_2038,(uint)local_20b0);
    iVar3 = (**(code **)(*(longlong *)plVar21[0x189] + 0x20))
                      ((longlong *)plVar21[0x189],&local_2078,local_2054);
    uVar5 = local_20f0;
    if (-1 < iVar3) {
LAB_180010770:
      if (local_2078 < local_20bc) {
        local_20e8[7] = (int)(local_20e8[7] == 0);
      }
      iVar3 = local_20e8[7];
      local_20bc = local_2078;
      uVar7 = uVar22;
      if (local_20e8[7] != local_20e8[8]) {
        if (uVar5 <= local_2078) {
          iVar16 = -uVar5;
          goto LAB_1800107db;
        }
        if (*plVar21 != 0) {
          uVar7 = *(ulonglong *)(*plVar21 + 0x70);
        }
        pcVar18 = 
        "[DirectSound] (Duplex/Playback): Write cursor has moved behind the play cursor (different loop iterations). physicalPlayCursorInBytes=%ld, virtualWriteCursorInBytes=%ld.\n"
        ;
LAB_1800107f7:
        FUN_180025970(uVar7,2,pcVar18,(ulonglong)local_2078);
        uVar4 = uVar12;
LAB_18001080b:
        if (local_20e8[6] != 0) {
          Sleep(1);
          goto LAB_180010d2a;
        }
        iVar16 = (**(code **)(*(longlong *)plVar21[0x189] + 0x60))((longlong *)plVar21[0x189],0,0,1)
        ;
        if (-1 < iVar16) {
          local_20e8[6] = 1;
          goto LAB_180010847;
        }
        (**(code **)(*(longlong *)plVar21[0x18b] + 0x50))();
        if ((*plVar21 == 0) || (lVar9 = *(longlong *)(*plVar21 + 0x70), lVar9 == 0))
        goto LAB_18001150e;
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar9 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                        "[DirectSound] IDirectSoundBuffer_Play() failed.");
            }
            uVar14 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar14;
          } while (uVar14 < *(uint *)(lVar9 + 0x40));
        }
LAB_1800114fc:
        if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
          SetEvent(*(HANDLE *)(lVar9 + 0x68));
        }
LAB_18001150e:
        uVar7 = FUN_18001cc60(iVar16);
        return uVar7;
      }
      if (uVar5 < local_2078) {
        if (*plVar21 != 0) {
          uVar7 = *(ulonglong *)(*plVar21 + 0x70);
        }
        pcVar18 = 
        "[DirectSound] (Duplex/Playback): Play cursor has moved in front of the write cursor (same loop iteration). physicalPlayCursorInBytes=%ld, virtualWriteCursorInBytes=%ld.\n"
        ;
        goto LAB_1800107f7;
      }
      iVar16 = *(int *)((longlong)plVar21 + 0x54c) * (int)plVar21[0xa9] * uVar14 - uVar5;
LAB_1800107db:
      uVar4 = iVar16 + local_2078;
      if (uVar4 == 0) goto LAB_18001080b;
LAB_180010847:
      uVar11 = local_2078;
      if (iVar3 == local_20e8[8]) {
        uVar11 = *(int *)((longlong)plVar21 + 0x54c) * (int)plVar21[0xa9] * uVar14;
      }
      uVar11 = uVar11 - uVar5;
      iVar3 = (**(code **)(*(longlong *)plVar21[0x189] + 0x58))
                        ((longlong *)plVar21[0x189],uVar5,uVar11,&local_2070);
      if (-1 < iVar3) {
        if (local_20e8[6] != 0) {
          uVar5 = (int)plVar21[0xa9] * uVar14;
          uVar6 = (int)plVar21[0xa9] * *(int *)((longlong)plVar21 + 0x54c) * uVar14 - uVar4;
          if (uVar5 <= uVar6) goto LAB_180010927;
          uVar6 = uVar5 * 2 - uVar6;
          if (uVar11 < uVar6) {
            uVar6 = uVar11;
          }
          uVar7 = uVar22;
          if (*plVar21 != 0) {
            uVar7 = *(ulonglong *)(*plVar21 + 0x70);
          }
          FUN_180025970(uVar7,2,
                        "[DirectSound] (Duplex/Playback) Playback buffer starved. availableBytesPlayback=%ld, silentPaddingInBytes=%ld\n"
                        ,(ulonglong)uVar4);
          if (uVar6 == 0) goto LAB_180010927;
          if (local_2070 != (undefined1 (*) [16])0x0) {
            memset(local_2070,0,(ulonglong)uVar6);
          }
          uVar6 = uVar6 / uVar14;
          goto LAB_180010c4e;
        }
LAB_180010927:
        local_2068 = (ulonglong)(uint)((int)local_2098 - local_207c);
        local_20a0 = (ulonglong)local_20c0 / (ulonglong)uVar14;
        puVar15 = (undefined4 *)((longlong)local_1038 + (ulonglong)(local_207c * uVar14));
        plVar21 = local_2090 + 0xab;
        if (plVar21 == (longlong *)0x0) {
          uVar20 = 0xfffffffe;
          goto LAB_180010e59;
        }
        uVar7 = local_20a0;
        switch(*(undefined4 *)((longlong)local_2090 + 0x574)) {
        case 0:
          if (local_2068 < local_20a0) {
            uVar7 = local_2068;
          }
          local_2048 = uVar7;
          if (local_2070 != (undefined1 (*) [16])0x0) {
            local_20e8[0] = 0;
            local_20e8[1] = 1;
            local_20e8[2] = 2;
            local_20e8[3] = 3;
            local_20e8[4] = 4;
            local_20e8[5] = 4;
            if (puVar15 == (undefined4 *)0x0) {
              pauVar13 = local_2070;
              for (uVar20 = (uint)(local_20e8[*(int *)((longlong)local_2090 + 0x55c)] *
                                  *(int *)((longlong)local_2090 + 0x564)) * uVar7; uVar20 != 0;
                  uVar20 = uVar20 - uVar17) {
                uVar17 = uVar20;
                if (0xffffffff < uVar20) {
                  uVar17 = 0xffffffff;
                }
                if ((pauVar13 != (undefined1 (*) [16])0x0) && (uVar17 != 0)) {
                  memset(pauVar13,0,uVar17);
                }
                pauVar13 = (undefined1 (*) [16])((longlong)*pauVar13 + uVar17);
              }
            }
            else {
              uVar20 = (uint)(local_20e8[*(int *)((longlong)local_2090 + 0x55c)] *
                             *(int *)((longlong)local_2090 + 0x564)) * uVar7;
              pauVar13 = local_2070;
              if (uVar20 != 0) {
                do {
                  uVar7 = uVar20;
                  if (0xffffffff < uVar20) {
                    uVar7 = 0xffffffff;
                  }
                  memcpy(pauVar13,puVar15,uVar7);
                  puVar15 = (undefined4 *)((longlong)puVar15 + uVar7);
                  uVar20 = uVar20 - uVar7;
                  pauVar13 = (undefined1 (*) [16])((longlong)*pauVar13 + uVar7);
                } while (uVar20 != 0);
                uVar20 = 0;
                local_20a0 = local_2048;
                goto LAB_180010c46;
              }
            }
          }
LAB_180010a82:
          uVar20 = 0;
          local_20a0 = uVar7;
          goto LAB_180010c46;
        case 1:
          if (local_2068 < local_20a0) {
            uVar7 = local_2068;
          }
          if (local_2070 == (undefined1 (*) [16])0x0) goto LAB_180010a82;
          if (puVar15 == (undefined4 *)0x0) {
            local_20e8[0] = 0;
            local_20e8[1] = 1;
            local_20e8[2] = 2;
            local_20e8[3] = 3;
            local_20e8[4] = 4;
            local_20e8[5] = 4;
            uVar20 = (uint)(local_20e8[*(int *)((longlong)local_2090 + 0x55c)] *
                           *(int *)((longlong)local_2090 + 0x564)) * uVar7;
            pauVar13 = local_2070;
            if (uVar20 == 0) goto LAB_180010a82;
            do {
              uVar17 = uVar20;
              if (0xffffffff < uVar20) {
                uVar17 = 0xffffffff;
              }
              if ((pauVar13 != (undefined1 (*) [16])0x0) && (uVar17 != 0)) {
                memset(pauVar13,0,uVar17);
              }
              uVar20 = uVar20 - uVar17;
              pauVar13 = (undefined1 (*) [16])((longlong)*pauVar13 + uVar17);
            } while (uVar20 != 0);
            uVar20 = 0;
            local_20a0 = uVar7;
          }
          else {
            FUN_180028b70(local_2070,*(int *)((longlong)local_2090 + 0x55c),puVar15,(int)*plVar21,
                          *(uint *)(local_2090 + 0xac) * uVar7,(int)local_2090[0xae]);
            uVar20 = uVar22;
            local_20a0 = uVar7;
          }
          goto LAB_180010c46;
        case 2:
          uVar8 = FUN_18000afa0((int *)plVar21,puVar15,&local_2068,(undefined4 *)local_2070,
                                &local_20a0);
          uVar5 = (uint)uVar8;
          break;
        case 3:
          if (((char)local_2090[0xd0] != '\0') || (*(char *)((longlong)local_2090 + 0x681) != '\0'))
          {
            uVar7 = FUN_18000bcb0((int *)plVar21,(longlong)puVar15,&local_2068,(longlong)local_2070,
                                  &local_20a0);
            uVar5 = (uint)uVar7;
            break;
          }
          if (local_2090 + 0xb8 == (longlong *)0x0) {
            uVar20 = 0xfffffffe;
          }
          else {
            if ((local_2090[0xb9] != 0) &&
               (pcVar2 = *(code **)(local_2090[0xb9] + 0x18), pcVar2 != (code *)0x0)) {
              uVar5 = (*pcVar2)(local_2090[0xba],local_2090[0xb8],puVar15,&local_2068);
              break;
            }
            uVar20 = 0xffffffe3;
          }
          goto LAB_180010c3d;
        case 4:
          uVar8 = FUN_18000b700((int *)plVar21,(longlong)puVar15,&local_2068,(longlong)local_2070,
                                &local_20a0);
          uVar5 = (uint)uVar8;
          break;
        case 5:
          uVar8 = FUN_18000a960((int *)plVar21,(longlong)puVar15,&local_2068,(longlong)local_2070,
                                &local_20a0);
          uVar5 = (uint)uVar8;
          break;
        default:
          uVar20 = 0xfffffffd;
          goto LAB_180010e59;
        }
        uVar20 = (ulonglong)uVar5;
LAB_180010c3d:
        if ((int)uVar20 != 0) goto LAB_180010e59;
LAB_180010c46:
        uVar6 = (uint)local_20a0;
        local_207c = local_207c + uVar6;
        plVar21 = local_2090;
LAB_180010c4e:
        iVar3 = (**(code **)(*(longlong *)plVar21[0x189] + 0x98))
                          ((longlong *)plVar21[0x189],local_2070,uVar6 * uVar14,0);
        if (iVar3 < 0) {
          if ((*plVar21 == 0) || (lVar9 = *(longlong *)(*plVar21 + 0x70), lVar9 == 0))
          goto LAB_180010e4b;
          if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
            WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
          }
          uVar7 = uVar22;
          if (*(int *)(lVar9 + 0x40) != 0) {
            do {
              pcVar2 = *(code **)(lVar9 + uVar7 * 0x10);
              if (pcVar2 != (code *)0x0) {
                (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar7 * 0x10),1,
                          "[DirectSound] Failed to unlock internal buffer from playback device after writing to the device."
                         );
              }
              uVar5 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar9 + 0x40));
          }
          goto LAB_180010e39;
        }
        uVar5 = local_20f0 + uVar6 * uVar14;
        if (uVar5 / uVar14 == (int)plVar21[0xa9] * *(int *)((longlong)plVar21 + 0x54c)) {
          local_20e8[8] = (uint)(local_20e8[8] == 0);
          uVar5 = uVar12;
        }
        local_2080 = local_2080 + uVar6;
        if ((local_20e8[6] == 0) && ((uint)((int)plVar21[0xa9] * 2) <= local_2080)) {
          iVar16 = (**(code **)(*(longlong *)plVar21[0x189] + 0x60))
                             ((longlong *)plVar21[0x189],0,0,1);
          if (iVar16 < 0) {
            (**(code **)(*(longlong *)plVar21[0x18b] + 0x50))();
            if ((*plVar21 == 0) || (lVar9 = *(longlong *)(*plVar21 + 0x70), lVar9 == 0))
            goto LAB_18001150e;
            if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
              WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
            }
            if (*(int *)(lVar9 + 0x40) != 0) {
              do {
                pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
                if (pcVar2 != (code *)0x0) {
                  (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                            "[DirectSound] IDirectSoundBuffer_Play() failed.");
                }
                uVar14 = (int)uVar22 + 1;
                uVar22 = (ulonglong)uVar14;
              } while (uVar14 < *(uint *)(lVar9 + 0x40));
            }
            goto LAB_1800114fc;
          }
          local_20e8[6] = 1;
        }
        local_20f0 = uVar5;
        if (uVar6 < local_20c0 / uVar14) goto LAB_180010e59;
LAB_180010d2a:
        iVar3 = (**(code **)(*(longlong *)plVar21[0x189] + 0x20))();
        if (iVar3 < 0) goto LAB_180010e59;
        goto LAB_180010770;
      }
      if ((*plVar21 == 0) || (lVar9 = *(longlong *)(*plVar21 + 0x70), lVar9 == 0))
      goto LAB_180010e4b;
      if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
      }
      uVar7 = uVar22;
      if (*(int *)(lVar9 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar9 + uVar7 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar7 * 0x10),1,
                      "[DirectSound] Failed to map buffer from playback device in preparation for writing to the device."
                     );
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar9 + 0x40));
      }
LAB_180010e39:
      if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
        SetEvent(*(HANDLE *)(lVar9 + 0x68));
      }
LAB_180010e4b:
      uVar20 = FUN_18001cc60(iVar3);
      uVar20 = uVar20 & 0xffffffff;
    }
LAB_180010e59:
    uVar7 = (ulonglong)local_20f4;
    plVar21 = local_2090;
  } while (local_20b0 != 0);
LAB_180010e85:
  iVar3 = (**(code **)(*(longlong *)plVar21[0x18b] + 0x58))
                    ((longlong *)plVar21[0x18b],local_2060,local_20e8[9],0);
  if (iVar3 < 0) {
    if ((*plVar21 == 0) || (lVar9 = *(longlong *)(*plVar21 + 0x70), lVar9 == 0)) goto LAB_18001177e;
    if ((undefined8 *)(lVar9 + 0x68) != (undefined8 *)0x0) {
      WaitForSingleObject(*(HANDLE *)(lVar9 + 0x68),0xffffffff);
    }
    if (*(int *)(lVar9 + 0x40) != 0) {
      do {
        pcVar2 = *(code **)(lVar9 + uVar22 * 0x10);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(*(undefined8 *)(lVar9 + 8 + uVar22 * 0x10),1,
                    "[DirectSound] Failed to unlock internal buffer from capture device after reading from the device."
                   );
        }
        uVar14 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(lVar9 + 0x40));
    }
    goto LAB_18001176c;
  }
  uVar17 = (ulonglong)(local_20e8[9] + local_20b8[0]);
  uVar7 = (ulonglong)local_20f0;
  goto LAB_1800113f3;
}


