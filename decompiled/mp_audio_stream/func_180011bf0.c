// FUN_180011bf0 @ 180011bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180011bf0(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_598 [32];
  uint local_568;
  int local_564;
  int local_560 [8];
  int *local_540;
  undefined8 local_538;
  uint local_530;
  undefined4 local_52c;
  short *local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  short local_510;
  ushort local_50e;
  uint local_50c;
  int local_508;
  ushort local_504;
  uint local_502;
  undefined2 local_4fe;
  uint local_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined8 local_4e4;
  undefined8 uStack_4dc;
  undefined8 local_4d4;
  undefined8 uStack_4cc;
  undefined8 local_4c4;
  undefined8 uStack_4bc;
  undefined8 local_4b4;
  undefined8 uStack_4ac;
  undefined8 local_4a4;
  undefined8 uStack_49c;
  undefined8 local_494;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  short local_458;
  ushort local_456;
  undefined4 local_454;
  uint local_444;
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_598;
  plVar1 = param_1 + 0x187;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
  }
  iVar4 = *param_2;
  if (iVar4 == 4) {
    return 0xffffff37;
  }
  uVar7 = 0;
  local_540 = param_2;
  if (iVar4 == 2 || iVar4 == 3) {
    uVar6 = FUN_180005ea0(*(int *)((longlong)param_4 + 0xc),*(uint *)(param_4 + 2),
                          *(int *)((longlong)param_4 + 0x14),(undefined1 *)(param_4 + 3),&local_510)
    ;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1800061d0(*param_1,*(int *)(param_4 + 1),*param_4,param_1 + 0x18a);
    uVar11 = uVar6 & 0xffffffff;
    if ((int)uVar6 != 0) goto LAB_1800120c3;
    uVar6 = FUN_180008540(*param_1,(longlong *)param_1[0x18a],&local_50e,(undefined2 *)&local_502,
                          &local_50c);
    uVar11 = uVar6 & 0xffffffff;
    if ((int)uVar6 != 0) goto LAB_1800120c3;
    local_4fe = (undefined2)local_502;
    iVar4 = (local_502 & 0xffff) * (uint)local_50e;
    local_4f8 = DAT_1800361a0;
    uStack_4f0 = DAT_1800361a8;
    uVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    uVar9 = uVar5 & 0xffff;
    local_504 = (ushort)uVar5;
    local_508 = uVar9 * local_50c;
    local_560[6] = FUN_180002c80((longlong)param_4,local_50c,local_540[5]);
    local_52c = 0;
    local_538 = 0x28;
    local_568 = 3;
    if (*(uint *)(param_4 + 0x24) != 0) {
      local_568 = *(uint *)(param_4 + 0x24);
    }
    local_528 = &local_510;
    local_520 = 0;
    uStack_518 = 0;
    local_530 = uVar9 * local_568 * local_560[6];
    local_564 = (**(code **)(*(longlong *)param_1[0x18a] + 0x18))
                          ((longlong *)param_1[0x18a],&local_538,param_1 + 0x18b,0);
    if (local_564 < 0) {
      FUN_180017b70((longlong)param_1);
      if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
         (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 == 0)) goto LAB_180011eba;
      if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar12 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                      "[DirectSound] IDirectSoundCapture_CreateCaptureBuffer() failed for capture device."
                     );
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar12 + 0x40));
      }
    }
    else {
      local_564 = (**(code **)(*(longlong *)param_1[0x18b] + 0x28))
                            ((longlong *)param_1[0x18b],&local_458,0x400,0);
      if (-1 < local_564) {
        uVar3 = FUN_180018fb0(&local_458);
        *(int *)((longlong)param_4 + 0xc) = (int)CONCAT71(extraout_var,uVar3);
        *(undefined4 *)((longlong)param_4 + 0x14) = local_454;
        *(uint *)(param_4 + 2) = (uint)local_456;
        uVar5 = local_444;
        if (local_458 != -2) {
          uVar5 = local_4fc;
        }
        FUN_180005d10(uVar5,(uint)local_456,(undefined1 *)(param_4 + 3));
        uVar5 = local_568;
        local_560[0] = 0;
        local_560[1] = 1;
        local_560[2] = 2;
        local_560[3] = 3;
        local_560[4] = 4;
        local_560[5] = 4;
        if (local_560[6] !=
            (uint)(((ulonglong)local_530 /
                   (ulonglong)
                   (uint)(*(int *)(param_4 + 2) * local_560[*(int *)((longlong)param_4 + 0xc)])) /
                  (ulonglong)local_568)) {
          local_560[2] = 2;
          local_560[4] = 4;
          local_560[5] = 4;
          local_560[0] = 0;
          local_560[1] = 1;
          local_560[3] = 3;
          local_530 = *(int *)(param_4 + 2) * local_560[*(int *)((longlong)param_4 + 0xc)] *
                      local_568 * local_560[6];
          (**(code **)(*(longlong *)param_1[0x18b] + 0x10))();
          local_568 = (**(code **)(*(longlong *)param_1[0x18a] + 0x18))
                                ((longlong *)param_1[0x18a],&local_538,param_1 + 0x18b,0);
          if ((int)local_568 < 0) {
            FUN_180017b70((longlong)param_1);
            if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
               (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 != 0)) {
              if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
                WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
              }
              if (*(int *)(lVar12 + 0x40) != 0) {
                do {
                  pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
                  if (pcVar2 != (code *)0x0) {
                    (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                              "[DirectSound] Second attempt at IDirectSoundCapture_CreateCaptureBuffer() failed for capture device."
                             );
                  }
                  uVar5 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar5;
                } while (uVar5 < *(uint *)(lVar12 + 0x40));
              }
              if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
                SetEvent(*(HANDLE *)(lVar12 + 0x68));
              }
            }
            uVar7 = FUN_18001cc60(local_568);
            return uVar7;
          }
        }
        *(int *)(param_4 + 0x23) = local_560[6];
        *(uint *)(param_4 + 0x24) = uVar5;
        goto LAB_180012068;
      }
      FUN_180017b70((longlong)param_1);
      if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
         (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 == 0)) goto LAB_180011eba;
      if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar12 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                      "[DirectSound] Failed to retrieve the actual format of the capture device\'s buffer."
                     );
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar12 + 0x40));
      }
    }
    if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
      SetEvent(*(HANDLE *)(lVar12 + 0x68));
    }
LAB_180011eba:
    uVar7 = FUN_18001cc60(local_564);
    return uVar7;
  }
LAB_180012068:
  if ((*local_540 != 1) && (*local_540 != 3)) {
    return 0;
  }
  uVar6 = FUN_180005ea0(*(int *)((longlong)param_3 + 0xc),*(uint *)(param_3 + 2),
                        *(int *)((longlong)param_3 + 0x14),(undefined1 *)(param_3 + 3),&local_510);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar6 = FUN_180006270(*param_1,*(int *)(param_3 + 1),*param_3,plVar1);
  uVar11 = uVar6 & 0xffffffff;
  if ((int)uVar6 != 0) {
LAB_1800120c3:
    FUN_180017b70((longlong)param_1);
    return uVar11;
  }
  local_488 = 0x28;
  local_484 = 0x81;
  local_480 = 0;
  uStack_478 = 0;
  local_470 = 0;
  uStack_468 = 0;
  iVar4 = (**(code **)(*(longlong *)param_1[0x187] + 0x18))
                    ((longlong *)param_1[0x187],&local_488,param_1 + 0x188,0);
  if (iVar4 < 0) {
    FUN_180017b70((longlong)param_1);
    if ((*param_1 != 0) && (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 != 0)) {
      if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar12 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                      "[DirectSound] IDirectSound_CreateSoundBuffer() failed for playback device\'s primary buffer."
                     );
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar12 + 0x40));
      }
LAB_180012676:
      if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
        SetEvent(*(HANDLE *)(lVar12 + 0x68));
      }
    }
LAB_180012688:
    uVar7 = FUN_18001cc60(iVar4);
  }
  else {
    local_4e8 = 0x60;
    local_4e4 = 0;
    uStack_4dc = 0;
    local_494 = 0;
    local_4d4 = 0;
    uStack_4cc = 0;
    local_48c = 0;
    local_4c4 = 0;
    uStack_4bc = 0;
    local_4b4 = 0;
    uStack_4ac = 0;
    local_4a4 = 0;
    uStack_49c = 0;
    iVar4 = (**(code **)(*(longlong *)param_1[0x187] + 0x20))((longlong *)param_1[0x187],&local_4e8)
    ;
    if (iVar4 < 0) {
      FUN_180017b70((longlong)param_1);
      if ((*param_1 != 0) && (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 != 0)) {
        if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar12 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                        "[DirectSound] IDirectSound_GetCaps() failed for playback device.");
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar12 + 0x40));
        }
        goto LAB_180012676;
      }
      goto LAB_180012688;
    }
    if ((local_4e4 & 2) == 0) {
      uVar5 = 1;
LAB_1800122ef:
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
      iVar4 = (**(code **)(*(longlong *)param_1[0x187] + 0x40))
                        ((longlong *)param_1[0x187],&local_568);
      uVar5 = 0;
      if (-1 < iVar4) {
        uVar5 = 0;
        switch(local_568 & 0xff) {
        case 1:
        case 4:
          uVar5 = 3;
          break;
        case 2:
          uVar5 = 4;
          goto LAB_1800122ef;
        case 3:
          uVar8 = 4;
          uVar5 = 0x33;
          break;
        case 5:
          uVar8 = 4;
          uVar5 = 0x107;
          break;
        case 6:
          uVar8 = 6;
          uVar5 = 0x3f;
          break;
        case 7:
          uVar8 = 8;
          uVar5 = 0xff;
          break;
        case 8:
          uVar8 = 8;
          uVar5 = 0x63f;
          break;
        case 9:
          uVar8 = 6;
          uVar5 = 0x60f;
        }
      }
    }
    if (*(int *)(param_3 + 2) == 0) {
      local_50e = uVar8;
      local_4fc = uVar5;
    }
    if (*(int *)((longlong)param_3 + 0x14) == 0) {
      if ((local_4e4 & 0x10) == 0) {
        local_50c = (uint)uStack_4dc;
      }
      else {
        uVar5 = local_4e4._4_4_;
        if (local_4e4._4_4_ < 8000) {
          uVar5 = 8000;
        }
        uVar9 = (uint)uStack_4dc;
        if (0x5dc00 < (uint)uStack_4dc) {
          uVar9 = 0x5dc00;
        }
        local_50c = uVar9;
        if ((uVar5 <= uVar9) && (uVar6 = uVar7, uVar5 != uVar9)) {
          do {
            local_50c = *(uint *)((longlong)&DAT_180036000 + uVar6);
            if ((uVar5 <= local_50c) && (local_50c <= uVar9)) goto LAB_18001237b;
            uVar6 = uVar6 + 4;
          } while (uVar6 < 0x38);
          local_50c = 0;
        }
      }
    }
LAB_18001237b:
    iVar4 = (local_502 & 0xffff) * (uint)local_50e;
    uVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    local_508 = (uVar5 & 0xffff) * local_50c;
    local_504 = (ushort)uVar5;
    iVar4 = (**(code **)(*(longlong *)param_1[0x188] + 0x70))((longlong *)param_1[0x188],&local_510)
    ;
    if (iVar4 < 0) {
      local_504 = uVar8 * 2;
      local_508 = (uint)local_504 * 0xac44;
      local_502 = 0x120010;
      local_510 = 1;
      local_50c = 0xac44;
      local_50e = uVar8;
      iVar4 = (**(code **)(*(longlong *)param_1[0x188] + 0x70))
                        ((longlong *)param_1[0x188],&local_510);
      if (-1 < iVar4) goto LAB_18001247b;
      FUN_180017b70((longlong)param_1);
      if ((*param_1 != 0) && (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 != 0)) {
        if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar12 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                        "[DirectSound] Failed to set format of playback device\'s primary buffer.");
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar12 + 0x40));
        }
LAB_180012506:
        if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
          SetEvent(*(HANDLE *)(lVar12 + 0x68));
        }
      }
    }
    else {
LAB_18001247b:
      iVar4 = (**(code **)(*(longlong *)param_1[0x188] + 0x28))
                        ((longlong *)param_1[0x188],&local_458,0x400,0);
      if (-1 < iVar4) {
        uVar3 = FUN_180018fb0(&local_458);
        *(int *)((longlong)param_3 + 0xc) = (int)CONCAT71(extraout_var_00,uVar3);
        *(undefined4 *)((longlong)param_3 + 0x14) = local_454;
        *(uint *)(param_3 + 2) = (uint)local_456;
        if (local_458 != -2) {
          local_444 = local_4fc;
        }
        FUN_180005d10(local_444,(uint)local_456,(undefined1 *)(param_3 + 3));
        uVar5 = FUN_180002c80((longlong)param_3,*(int *)((longlong)param_3 + 0x14),local_540[5]);
        local_52c = 0;
        local_538 = 0x1810000000028;
        local_560[2] = 2;
        local_560[0] = 0;
        local_560[4] = 4;
        local_560[5] = 4;
        iVar10 = 3;
        if (*(int *)(param_3 + 0x24) != 0) {
          iVar10 = *(int *)(param_3 + 0x24);
        }
        local_520 = 0;
        uStack_518 = 0;
        local_560[1] = 1;
        local_560[3] = 3;
        local_528 = &local_458;
        local_530 = local_560[*(int *)((longlong)param_3 + 0xc)] * *(int *)(param_3 + 2) * iVar10 *
                    uVar5;
        iVar4 = (**(code **)(*(longlong *)param_1[0x187] + 0x18))
                          ((longlong *)param_1[0x187],&local_538,param_1 + 0x189,0);
        if (-1 < iVar4) {
          *(uint *)(param_3 + 0x23) = uVar5;
          *(int *)(param_3 + 0x24) = iVar10;
          return 0;
        }
        FUN_180017b70((longlong)param_1);
        if ((*param_1 != 0) && (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 != 0)) {
          if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
            WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
          }
          if (*(int *)(lVar12 + 0x40) != 0) {
            do {
              pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
              if (pcVar2 != (code *)0x0) {
                (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                          "[DirectSound] IDirectSound_CreateSoundBuffer() failed for playback device\'s secondary buffer."
                         );
              }
              uVar5 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar12 + 0x40));
          }
          goto LAB_180012676;
        }
        goto LAB_180012688;
      }
      FUN_180017b70((longlong)param_1);
      if ((*param_1 != 0) && (lVar12 = *(longlong *)(*param_1 + 0x70), lVar12 != 0)) {
        if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar12 + 0x40) != 0) {
          do {
            pcVar2 = *(code **)(lVar12 + uVar7 * 0x10);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar7 * 0x10),1,
                        "[DirectSound] Failed to retrieve the actual format of the playback device\'s primary buffer."
                       );
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(lVar12 + 0x40));
        }
        goto LAB_180012506;
      }
    }
    uVar7 = FUN_18001cc60(iVar4);
  }
  return uVar7;
}


