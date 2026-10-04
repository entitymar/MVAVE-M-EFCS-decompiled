// FUN_180012700 @ 180012700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180012700(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  int local_b8 [8];
  int *local_98;
  char local_88 [7];
  char local_81;
  char local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_e8;
  iVar5 = *param_2;
  local_98 = param_2;
  if (iVar5 == 4) {
    if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
       (lVar14 = *(longlong *)(*param_1 + 0x70), lVar14 != 0)) {
      puVar15 = (undefined8 *)(lVar14 + 0x68);
      if (puVar15 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
      }
      uVar12 = 0;
      if (*(int *)(lVar14 + 0x40) != 0) {
        do {
          pcVar3 = *(code **)(lVar14 + (ulonglong)uVar12 * 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)(lVar14 + 8 + (ulonglong)uVar12 * 0x10),1,
                      "[JACK] Loopback mode not supported.");
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(lVar14 + 0x40));
      }
      if (puVar15 != (undefined8 *)0x0) {
        SetEvent((HANDLE)*puVar15);
      }
    }
    return 0xffffff37;
  }
  if (((((iVar5 - 1U & 0xfffffffd) == 0) && ((int *)*param_3 != (int *)0x0)) &&
      (*(int *)*param_3 != 0)) ||
     (((iVar5 - 2U < 2 && ((int *)*param_4 != (int *)0x0)) && (*(int *)*param_4 != 0)))) {
    if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
       (lVar14 = *(longlong *)(*param_1 + 0x70), lVar14 != 0)) {
      puVar15 = (undefined8 *)(lVar14 + 0x68);
      if (puVar15 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
      }
      uVar12 = 0;
      if (*(int *)(lVar14 + 0x40) != 0) {
        do {
          pcVar3 = *(code **)(lVar14 + (ulonglong)uVar12 * 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)(lVar14 + 8 + (ulonglong)uVar12 * 0x10),1,
                      "[JACK] Only default devices are supported.");
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(lVar14 + 0x40));
      }
      if (puVar15 != (undefined8 *)0x0) {
        SetEvent((HANDLE)*puVar15);
      }
    }
    return 0xffffff34;
  }
  if ((((iVar5 - 1U & 0xfffffffd) == 0) && (*(int *)(param_3 + 1) == 1)) ||
     ((iVar5 - 2U < 2 && (*(int *)(param_4 + 1) == 1)))) {
    if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
       (lVar14 = *(longlong *)(*param_1 + 0x70), lVar14 != 0)) {
      if ((undefined8 *)(lVar14 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar14 + 0x68),0xffffffff);
      }
      uVar12 = 0;
      if (*(int *)(lVar14 + 0x40) != 0) {
        do {
          pcVar3 = *(code **)(lVar14 + (ulonglong)uVar12 * 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)(lVar14 + 8 + (ulonglong)uVar12 * 0x10),1,
                      "[JACK] Exclusive mode not supported.");
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(lVar14 + 0x40));
      }
      if ((undefined8 *)(lVar14 + 0x68) != (undefined8 *)0x0) {
        SetEvent(*(HANDLE *)(lVar14 + 0x68));
      }
    }
    return 0xffffff36;
  }
  plVar1 = param_1 + 0x187;
  uVar7 = FUN_18000a400(*param_1,plVar1);
  uVar11 = uVar7 & 0xffffffff;
  if ((int)uVar7 != 0) {
    if (param_1 == (longlong *)0x0) {
      return uVar11;
    }
    if (*param_1 == 0) {
      return uVar11;
    }
    lVar14 = *(longlong *)(*param_1 + 0x70);
    if (lVar14 == 0) {
      return uVar11;
    }
    puVar15 = (undefined8 *)(lVar14 + 0x68);
    if (puVar15 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
    }
    uVar12 = 0;
    if (*(int *)(lVar14 + 0x40) != 0) {
      do {
        pcVar3 = *(code **)(lVar14 + (ulonglong)uVar12 * 0x10);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(lVar14 + 8 + (ulonglong)uVar12 * 0x10),1,
                    "[JACK] Failed to open client.");
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(lVar14 + 0x40));
    }
    if (puVar15 != (undefined8 *)0x0) {
      SetEvent((HANDLE)*puVar15);
      return uVar11;
    }
    return uVar11;
  }
  iVar5 = (**(code **)(*param_1 + 0x168))(*plVar1,FUN_18000d830,param_1);
  lVar14 = *param_1;
  if (iVar5 != 0) {
    if (lVar14 == 0) {
      return 0xfffffe6f;
    }
    lVar14 = *(longlong *)(lVar14 + 0x70);
    if (lVar14 == 0) {
      return 0xfffffe6f;
    }
    puVar15 = (undefined8 *)(lVar14 + 0x68);
    if (puVar15 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
    }
    uVar12 = 0;
    if (*(int *)(lVar14 + 0x40) != 0) {
      do {
        pcVar3 = *(code **)(lVar14 + (ulonglong)uVar12 * 0x10);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(lVar14 + 8 + (ulonglong)uVar12 * 0x10),1,
                    "[JACK] Failed to set process callback.");
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(lVar14 + 0x40));
    }
    if (puVar15 == (undefined8 *)0x0) {
      return 0xfffffe6f;
    }
    SetEvent((HANDLE)*puVar15);
    return 0xfffffe6f;
  }
  iVar5 = (**(code **)(lVar14 + 0x170))(*plVar1,FUN_18000d630,param_1);
  lVar14 = *param_1;
  if (iVar5 != 0) {
    if (lVar14 == 0) {
      return 0xfffffe6f;
    }
    lVar14 = *(longlong *)(lVar14 + 0x70);
    if (lVar14 == 0) {
      return 0xfffffe6f;
    }
    puVar15 = (undefined8 *)(lVar14 + 0x68);
    if (puVar15 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
    }
    uVar12 = 0;
    if (*(int *)(lVar14 + 0x40) != 0) {
      do {
        pcVar3 = *(code **)(lVar14 + (ulonglong)uVar12 * 0x10);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(lVar14 + 8 + (ulonglong)uVar12 * 0x10),1,
                    "[JACK] Failed to set buffer size callback.");
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(lVar14 + 0x40));
    }
    if (puVar15 == (undefined8 *)0x0) {
      return 0xfffffe6f;
    }
    SetEvent((HANDLE)*puVar15);
    return 0xfffffe6f;
  }
  (**(code **)(lVar14 + 0x178))(*plVar1,&LAB_18000dad0,param_1);
  iVar5 = (**(code **)(*param_1 + 0x188))(*plVar1);
  uVar7 = 0;
  lVar14 = 0xfe;
  local_b8[6] = iVar5;
  if ((*param_2 == 2) || (*param_2 == 3)) {
    *(undefined8 *)((longlong)param_4 + 0xc) = 5;
    uVar6 = (**(code **)(*param_1 + 0x180))(*plVar1);
    uVar11 = (ulonglong)*(uint *)(param_4 + 2);
    puVar15 = param_4 + 3;
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar6;
    lVar13 = 0xfe;
    if ((puVar15 != (undefined8 *)0x0) && (uVar8 = uVar7, *(uint *)(param_4 + 2) != 0)) {
      do {
        uVar12 = (uint)uVar8;
        if (lVar13 == 0) break;
        uVar8 = FUN_180005500(1,(uint)uVar11,uVar12);
        *(char *)puVar15 = (char)uVar8;
        lVar13 = lVar13 + -1;
        puVar15 = (undefined8 *)((longlong)puVar15 + 1);
        uVar8 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < (uint)uVar11);
    }
    lVar13 = (**(code **)(*param_1 + 400))(*plVar1,0,"32 bit float mono audio",6);
    if (lVar13 == 0) {
      if (*param_1 == 0) {
        return 0xfffffe6f;
      }
      lVar14 = *(longlong *)(*param_1 + 0x70);
      if (lVar14 == 0) {
        return 0xfffffe6f;
      }
      puVar15 = (undefined8 *)(lVar14 + 0x68);
      if (puVar15 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
      }
      if (*(int *)(lVar14 + 0x40) != 0) {
        do {
          pcVar3 = *(code **)(lVar14 + uVar7 * 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)(lVar14 + 8 + uVar7 * 0x10),1,
                      "[JACK] Failed to query physical ports.");
          }
          uVar12 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(lVar14 + 0x40));
      }
      if (puVar15 == (undefined8 *)0x0) {
        return 0xfffffe6f;
      }
      SetEvent((HANDLE)*puVar15);
      return 0xfffffe6f;
    }
    uVar11 = (ulonglong)*(uint *)(param_4 + 2);
    lVar4 = *(longlong *)(lVar13 + uVar11 * 8);
    while (lVar4 != 0) {
      uVar12 = (int)uVar11 + 1;
      *(uint *)(param_4 + 2) = uVar12;
      uVar11 = (ulonglong)uVar12;
      lVar4 = *(longlong *)(lVar13 + (ulonglong)uVar12 * 8);
    }
    puVar15 = (undefined8 *)(*param_1 + 0x100);
    if (puVar15 == (undefined8 *)0x0) {
      pvVar9 = malloc(uVar11 << 3);
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x108);
      if (pcVar3 == (code *)0x0) {
        param_1[0x189] = 0;
        return 0xfffffffc;
      }
      pvVar9 = (void *)(*pcVar3)(uVar11 << 3,*puVar15);
    }
    param_1[0x189] = (longlong)pvVar9;
    if (pvVar9 == (void *)0x0) {
      return 0xfffffffc;
    }
    uVar11 = uVar7;
    if (*(int *)(param_4 + 2) != 0) {
      do {
        FUN_18001d590(local_88,0x40,0x180031490);
        FUN_180019840((uint)uVar11,&local_81,0x39,10);
        local_c8 = 0;
        uVar10 = (**(code **)(*param_1 + 0x1b0))(*plVar1,local_88,"32 bit float mono audio",1);
        *(undefined8 *)(uVar11 * 8 + param_1[0x189]) = uVar10;
        if (*(longlong *)(uVar11 * 8 + param_1[0x189]) == 0) {
          (**(code **)(*param_1 + 0x1c8))(lVar13);
          FUN_180017bf0(param_1);
          if (*param_1 == 0) {
            return 0xfffffe6f;
          }
          lVar14 = *(longlong *)(*param_1 + 0x70);
          if (lVar14 == 0) {
            return 0xfffffe6f;
          }
          puVar15 = (undefined8 *)(lVar14 + 0x68);
          if (puVar15 != (undefined8 *)0x0) {
            WaitForSingleObject((HANDLE)*puVar15,0xffffffff);
          }
          if (*(int *)(lVar14 + 0x40) != 0) {
            do {
              pcVar3 = *(code **)(lVar14 + uVar7 * 0x10);
              if (pcVar3 != (code *)0x0) {
                (*pcVar3)(*(undefined8 *)(lVar14 + 8 + uVar7 * 0x10),1,
                          "[JACK] Failed to register ports.");
              }
              uVar12 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar12;
            } while (uVar12 < *(uint *)(lVar14 + 0x40));
          }
          if (puVar15 == (undefined8 *)0x0) {
            return 0xfffffe6f;
          }
          SetEvent((HANDLE)*puVar15);
          return 0xfffffe6f;
        }
        uVar12 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(param_4 + 2));
    }
    (**(code **)(*param_1 + 0x1c8))(lVar13);
    iVar5 = local_b8[6];
    local_b8[0] = 0;
    local_b8[1] = 1;
    local_b8[2] = 2;
    local_b8[3] = 3;
    local_b8[4] = 4;
    local_b8[5] = 4;
    iVar2 = local_b8[*(int *)((longlong)param_4 + 0xc)];
    *(int *)(param_4 + 0x23) = local_b8[6];
    *(undefined4 *)(param_4 + 0x24) = 1;
    uVar11 = (ulonglong)(uint)(iVar2 * *(int *)(param_4 + 2) * local_b8[6]);
    if (*param_1 == -0x100) {
      pvVar9 = malloc(uVar11);
LAB_180012e9c:
      if ((pvVar9 == (void *)0x0) || (uVar11 == 0)) {
        param_1[0x18b] = (longlong)pvVar9;
        if (pvVar9 == (void *)0x0) goto LAB_180012e49;
      }
      else {
        memset(pvVar9,0,uVar11);
        param_1[0x18b] = (longlong)pvVar9;
      }
      goto LAB_180012ecf;
    }
    pcVar3 = *(code **)(*param_1 + 0x108);
    if (pcVar3 != (code *)0x0) {
      pvVar9 = (void *)(*pcVar3)(uVar11);
      goto LAB_180012e9c;
    }
    param_1[0x18b] = 0;
LAB_180012e49:
    FUN_180017bf0(param_1);
  }
  else {
LAB_180012ecf:
    if ((*local_98 != 1) && (*local_98 != 3)) {
      return 0;
    }
    *(undefined8 *)((longlong)param_3 + 0xc) = 5;
    uVar6 = (**(code **)(*param_1 + 0x180))(param_1[0x187]);
    uVar11 = (ulonglong)*(uint *)(param_3 + 2);
    puVar15 = param_3 + 3;
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
    if ((puVar15 != (undefined8 *)0x0) && (uVar8 = uVar7, *(uint *)(param_3 + 2) != 0)) {
      do {
        uVar12 = (uint)uVar8;
        if (lVar14 == 0) break;
        uVar8 = FUN_180005500(1,(uint)uVar11,uVar12);
        *(char *)puVar15 = (char)uVar8;
        lVar14 = lVar14 + -1;
        puVar15 = (undefined8 *)((longlong)puVar15 + 1);
        uVar8 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < (uint)uVar11);
    }
    lVar14 = (**(code **)(*param_1 + 400))(param_1[0x187],0,"32 bit float mono audio",5);
    if (lVar14 == 0) {
      if ((*param_1 != 0) && (lVar14 = *(longlong *)(*param_1 + 0x70), lVar14 != 0)) {
        if ((undefined8 *)(lVar14 + 0x68) != (undefined8 *)0x0) {
          WaitForSingleObject(*(HANDLE *)(lVar14 + 0x68),0xffffffff);
        }
        if (*(int *)(lVar14 + 0x40) != 0) {
          do {
            pcVar3 = *(code **)(lVar14 + uVar7 * 0x10);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(*(undefined8 *)(lVar14 + 8 + uVar7 * 0x10),1,
                        "[JACK] Failed to query physical ports.");
            }
            uVar12 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(lVar14 + 0x40));
        }
LAB_180013209:
        if ((undefined8 *)(lVar14 + 0x68) != (undefined8 *)0x0) {
          SetEvent(*(HANDLE *)(lVar14 + 0x68));
        }
      }
      return 0xfffffe6f;
    }
    uVar11 = (ulonglong)*(uint *)(param_3 + 2);
    lVar13 = *(longlong *)(lVar14 + uVar11 * 8);
    while (lVar13 != 0) {
      uVar12 = (int)uVar11 + 1;
      *(uint *)(param_3 + 2) = uVar12;
      uVar11 = (ulonglong)uVar12;
      lVar13 = *(longlong *)(lVar14 + (ulonglong)uVar12 * 8);
    }
    puVar15 = (undefined8 *)(*param_1 + 0x100);
    if (puVar15 == (undefined8 *)0x0) {
      pvVar9 = malloc(uVar11 << 3);
LAB_180013020:
      param_1[0x188] = (longlong)pvVar9;
      if (pvVar9 != (void *)0x0) {
        uVar11 = uVar7;
        if (*(int *)(param_3 + 2) != 0) {
          do {
            FUN_18001d590(local_88,0x40,0x1800314c0);
            FUN_180019840((uint)uVar11,local_80,0x38,10);
            local_c8 = 0;
            uVar10 = (**(code **)(*param_1 + 0x1b0))
                               (param_1[0x187],local_88,"32 bit float mono audio",2);
            *(undefined8 *)(uVar11 * 8 + param_1[0x188]) = uVar10;
            if (*(longlong *)(uVar11 * 8 + param_1[0x188]) == 0) {
              (**(code **)(*param_1 + 0x1c8))(lVar14);
              FUN_180017bf0(param_1);
              if (*param_1 == 0) {
                return 0xfffffe6f;
              }
              lVar14 = *(longlong *)(*param_1 + 0x70);
              if (lVar14 == 0) {
                return 0xfffffe6f;
              }
              if ((undefined8 *)(lVar14 + 0x68) != (undefined8 *)0x0) {
                WaitForSingleObject(*(HANDLE *)(lVar14 + 0x68),0xffffffff);
              }
              if (*(int *)(lVar14 + 0x40) != 0) {
                do {
                  pcVar3 = *(code **)(lVar14 + uVar7 * 0x10);
                  if (pcVar3 != (code *)0x0) {
                    (*pcVar3)(*(undefined8 *)(lVar14 + 8 + uVar7 * 0x10),1,
                              "[JACK] Failed to register ports.");
                  }
                  uVar12 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar12;
                } while (uVar12 < *(uint *)(lVar14 + 0x40));
              }
              goto LAB_180013209;
            }
            uVar12 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_3 + 2));
        }
        (**(code **)(*param_1 + 0x1c8))(lVar14);
        local_b8[0] = 0;
        local_b8[1] = 1;
        local_b8[2] = 2;
        local_b8[3] = 3;
        local_b8[4] = 4;
        local_b8[5] = 4;
        iVar2 = local_b8[*(int *)((longlong)param_3 + 0xc)];
        *(int *)(param_3 + 0x23) = iVar5;
        *(undefined4 *)(param_3 + 0x24) = 1;
        uVar7 = (ulonglong)(uint)(iVar2 * *(int *)(param_3 + 2) * iVar5);
        if (*param_1 == -0x100) {
          pvVar9 = malloc(uVar7);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x108);
          if (pcVar3 == (code *)0x0) {
            param_1[0x18a] = 0;
            goto LAB_180012e49;
          }
          pvVar9 = (void *)(*pcVar3)(uVar7);
        }
        if ((pvVar9 != (void *)0x0) && (uVar7 != 0)) {
          memset(pvVar9,0,uVar7);
          param_1[0x18a] = (longlong)pvVar9;
          return 0;
        }
        param_1[0x18a] = (longlong)pvVar9;
        if (pvVar9 != (void *)0x0) {
          return 0;
        }
        goto LAB_180012e49;
      }
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x108);
      if (pcVar3 != (code *)0x0) {
        pvVar9 = (void *)(*pcVar3)(uVar11 << 3,*puVar15);
        goto LAB_180013020;
      }
      param_1[0x188] = 0;
    }
    pvVar9 = (void *)param_1[0x189];
    puVar15 = (undefined8 *)(*param_1 + 0x100);
    if (pvVar9 != (void *)0x0) {
      if (puVar15 == (undefined8 *)0x0) {
        free(pvVar9);
      }
      else {
        pcVar3 = *(code **)(*param_1 + 0x118);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(pvVar9,*puVar15);
        }
      }
    }
  }
  return 0xfffffffc;
}


