// FUN_180013610 @ 180013610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180013610(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  short sVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  undefined4 extraout_var;
  HANDLE pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_508 [32];
  longlong **local_4e8;
  longlong *local_4d8 [2];
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined8 local_4bc;
  undefined8 uStack_4b4;
  undefined8 local_4ac;
  undefined8 uStack_4a4;
  undefined8 local_49c;
  undefined8 uStack_494;
  undefined8 local_48c;
  undefined8 uStack_484;
  undefined8 local_47c;
  undefined8 uStack_474;
  undefined8 local_46c;
  undefined8 uStack_464;
  undefined8 local_45c;
  undefined8 uStack_454;
  undefined8 local_44c;
  undefined8 uStack_444;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined8 local_42c;
  undefined8 uStack_424;
  undefined8 local_41c;
  undefined8 uStack_414;
  undefined8 local_40c;
  undefined8 uStack_404;
  undefined8 local_3fc;
  undefined8 uStack_3f4;
  undefined8 local_3ec;
  undefined8 uStack_3e4;
  undefined8 local_3dc;
  undefined8 uStack_3d4;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined2 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  int local_3ac;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  int local_39c;
  uint local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined8 local_36c;
  undefined8 uStack_364;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined8 local_32c;
  undefined8 uStack_324;
  undefined8 local_31c;
  undefined8 uStack_314;
  undefined8 local_30c;
  undefined8 uStack_304;
  undefined8 local_2fc;
  undefined8 uStack_2f4;
  undefined8 local_2ec;
  undefined8 uStack_2e4;
  undefined8 local_2dc;
  undefined8 uStack_2d4;
  undefined8 local_2cc;
  undefined8 uStack_2c4;
  undefined8 local_2bc;
  undefined8 uStack_2b4;
  undefined8 local_2ac;
  undefined8 uStack_2a4;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined8 local_27c;
  undefined4 local_274;
  undefined2 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  short local_160 [132];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStack_508;
  if (param_1 + 0x187 != (longlong *)0x0) {
    memset(param_1 + 0x187,0,0xb8);
  }
  uVar11 = 0;
  *(int *)((longlong)param_1 + 0xcdc) = param_2[0x30];
  *(char *)((longlong)param_1 + 0xcd5) = (char)param_2[0x31];
  *(undefined1 *)((longlong)param_1 + 0xcd6) = *(undefined1 *)((longlong)param_2 + 0xc5);
  *(undefined1 *)((longlong)param_1 + 0xcd7) = *(undefined1 *)((longlong)param_2 + 199);
  *(int *)(param_1 + 0x19a) = param_2[0x32];
  *(char *)((longlong)param_1 + 0xcd4) = (char)param_2[0x33];
  iVar8 = *param_2;
  if (iVar8 == 4) {
    if (param_2[0x24] == 1) {
      return 0xffffff32;
    }
  }
  else if (1 < iVar8 - 2U) goto LAB_180013af2;
  local_4c8 = *(undefined4 *)((longlong)param_4 + 0xc);
  local_4c4 = *(undefined4 *)(param_4 + 2);
  local_4bc = param_4[3];
  uStack_4b4 = param_4[4];
  local_4c0 = *(undefined4 *)((longlong)param_4 + 0x14);
  local_4ac = param_4[5];
  uStack_4a4 = param_4[6];
  local_3cc = param_4[0x21];
  local_49c = param_4[7];
  uStack_494 = param_4[8];
  local_48c = param_4[9];
  uStack_484 = param_4[10];
  local_47c = param_4[0xb];
  uStack_474 = param_4[0xc];
  local_46c = param_4[0xd];
  uStack_464 = param_4[0xe];
  local_45c = param_4[0xf];
  uStack_454 = param_4[0x10];
  local_44c = param_4[0x11];
  uStack_444 = param_4[0x12];
  local_43c = param_4[0x13];
  uStack_434 = param_4[0x14];
  local_42c = param_4[0x15];
  uStack_424 = param_4[0x16];
  local_41c = param_4[0x17];
  uStack_414 = param_4[0x18];
  local_40c = param_4[0x19];
  uStack_404 = param_4[0x1a];
  local_3fc = param_4[0x1b];
  uStack_3f4 = param_4[0x1c];
  local_3ec = param_4[0x1d];
  uStack_3e4 = param_4[0x1e];
  local_3dc = param_4[0x1f];
  uStack_3d4 = param_4[0x20];
  local_3c4 = *(undefined4 *)(param_4 + 0x22);
  local_3c0 = *(undefined2 *)((longlong)param_4 + 0x114);
  local_3bc = *(undefined4 *)(param_4 + 0x23);
  local_3b8 = *(undefined4 *)((longlong)param_4 + 0x11c);
  local_3b4 = *(undefined4 *)(param_4 + 0x24);
  local_3b0 = *(undefined4 *)(param_4 + 1);
  local_3ac = param_2[5];
  local_3a8 = (uint)*(byte *)(param_2 + 0x31);
  local_3a4 = (uint)*(byte *)((longlong)param_2 + 0xc5);
  local_3a0 = (uint)*(byte *)((longlong)param_2 + 199);
  local_39c = param_2[0x32];
  local_398 = (uint)*(byte *)(param_2 + 0x33);
  uVar6 = 2;
  if (iVar8 == 4) {
    uVar6 = 4;
  }
  uVar6 = FUN_180014c00(*param_1,uVar6,(undefined8 *)*param_4,(longlong)&local_4c8);
  if (uVar6 != 0) {
    return CONCAT44(extraout_var,uVar6);
  }
  param_1[0x188] = local_390;
  param_1[0x18a] = local_380;
  *(undefined4 *)((longlong)param_1 + 0xc94) = *(undefined4 *)((longlong)param_4 + 0x11c);
  *(undefined4 *)(param_1 + 0x192) = *(undefined4 *)(param_4 + 0x23);
  *(undefined4 *)(param_1 + 0x193) = *(undefined4 *)(param_4 + 0x24);
  *(int *)((longlong)param_1 + 0xc9c) = param_2[5];
  pvVar9 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[400] = (longlong)pvVar9;
  if (pvVar9 == (HANDLE)0x0) {
    DVar7 = GetLastError();
    uVar10 = FUN_18001cb40(DVar7);
    uVar10 = uVar10 & 0xffffffff;
    if ((longlong *)param_1[0x18a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x18a] + 0x10))();
      param_1[0x18a] = 0;
    }
    if ((longlong *)param_1[0x188] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x188] + 0x10))();
      param_1[0x188] = 0;
    }
    if (param_1 == (longlong *)0x0) {
      return uVar10;
    }
    if (*param_1 == 0) {
      return uVar10;
    }
    lVar3 = *(longlong *)(*param_1 + 0x70);
    if (lVar3 == 0) {
      return uVar10;
    }
    puVar1 = (undefined8 *)(lVar3 + 0x68);
    if (puVar1 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    }
    if (*(int *)(lVar3 + 0x40) != 0) {
      do {
        pcVar4 = *(code **)(lVar3 + uVar11 * 0x10);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(*(undefined8 *)(lVar3 + 8 + uVar11 * 0x10),1,
                    "[WASAPI] Failed to create event for capture.");
        }
        uVar6 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(lVar3 + 0x40));
    }
    if (puVar1 == (undefined8 *)0x0) {
      return uVar10;
    }
    SetEvent((HANDLE)*puVar1);
    return uVar10;
  }
  (**(code **)(*(longlong *)param_1[0x188] + 0x68))((longlong *)param_1[0x188],pvVar9);
  *(undefined4 *)((longlong)param_1 + 0xca4) = local_26c;
  (**(code **)(*(longlong *)param_1[0x188] + 0x20))
            ((longlong *)param_1[0x188],(longlong)param_1 + 0xc8c);
  plVar5 = param_1 + 0xd9;
  uVar10 = uVar11;
  if (plVar5 != (longlong *)0x0) {
    do {
      if (local_160[uVar10] == 0) {
LAB_180013a03:
        *(undefined2 *)((longlong)plVar5 + uVar10 * 2) = 0;
        goto LAB_180013a08;
      }
      sVar2 = local_160[uVar10 + 1];
      *(short *)((longlong)plVar5 + uVar10 * 2) = local_160[uVar10];
      if (sVar2 == 0) {
        uVar10 = uVar10 + 1;
        if (uVar10 < 0x80) goto LAB_180013a03;
        *(undefined2 *)plVar5 = 0;
        goto LAB_180013a08;
      }
      uVar12 = uVar10 + 2;
      *(short *)((longlong)plVar5 + uVar10 * 2 + 2) = sVar2;
      uVar10 = uVar12;
    } while (uVar12 < 0x80);
    *(undefined2 *)plVar5 = 0;
  }
LAB_180013a08:
  *(undefined4 *)((longlong)param_4 + 0xc) = local_378;
  param_4[3] = local_36c;
  param_4[4] = uStack_364;
  *(undefined4 *)(param_4 + 2) = local_374;
  param_4[5] = local_35c;
  param_4[6] = uStack_354;
  *(undefined4 *)((longlong)param_4 + 0x14) = local_370;
  param_4[7] = local_34c;
  param_4[8] = uStack_344;
  param_4[9] = local_33c;
  param_4[10] = uStack_334;
  param_4[0xb] = local_32c;
  param_4[0xc] = uStack_324;
  param_4[0xd] = local_31c;
  param_4[0xe] = uStack_314;
  param_4[0xf] = local_30c;
  param_4[0x10] = uStack_304;
  param_4[0x11] = local_2fc;
  param_4[0x12] = uStack_2f4;
  param_4[0x13] = local_2ec;
  param_4[0x14] = uStack_2e4;
  param_4[0x15] = local_2dc;
  param_4[0x16] = uStack_2d4;
  param_4[0x17] = local_2cc;
  param_4[0x18] = uStack_2c4;
  param_4[0x19] = local_2bc;
  param_4[0x1a] = uStack_2b4;
  param_4[0x1b] = local_2ac;
  param_4[0x1c] = uStack_2a4;
  param_4[0x1d] = local_29c;
  param_4[0x1e] = uStack_294;
  param_4[0x1f] = local_28c;
  param_4[0x20] = uStack_284;
  param_4[0x21] = local_27c;
  *(undefined4 *)(param_4 + 0x22) = local_274;
  *(undefined2 *)((longlong)param_4 + 0x114) = local_270;
  *(undefined4 *)(param_4 + 0x23) = local_26c;
  *(undefined4 *)(param_4 + 0x24) = local_268;
LAB_180013af2:
  if ((*param_2 == 1) || (*param_2 == 3)) {
    local_4c8 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_4bc = param_3[3];
    uStack_4b4 = param_3[4];
    local_4c4 = *(undefined4 *)(param_3 + 2);
    local_4ac = param_3[5];
    uStack_4a4 = param_3[6];
    local_4c0 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_3cc = param_3[0x21];
    local_49c = param_3[7];
    uStack_494 = param_3[8];
    local_48c = param_3[9];
    uStack_484 = param_3[10];
    local_47c = param_3[0xb];
    uStack_474 = param_3[0xc];
    local_46c = param_3[0xd];
    uStack_464 = param_3[0xe];
    local_45c = param_3[0xf];
    uStack_454 = param_3[0x10];
    local_44c = param_3[0x11];
    uStack_444 = param_3[0x12];
    local_43c = param_3[0x13];
    uStack_434 = param_3[0x14];
    local_42c = param_3[0x15];
    uStack_424 = param_3[0x16];
    local_41c = param_3[0x17];
    uStack_414 = param_3[0x18];
    local_40c = param_3[0x19];
    uStack_404 = param_3[0x1a];
    local_3fc = param_3[0x1b];
    uStack_3f4 = param_3[0x1c];
    local_3ec = param_3[0x1d];
    uStack_3e4 = param_3[0x1e];
    local_3dc = param_3[0x1f];
    uStack_3d4 = param_3[0x20];
    local_3c4 = *(undefined4 *)(param_3 + 0x22);
    local_3c0 = *(undefined2 *)((longlong)param_3 + 0x114);
    local_3bc = *(undefined4 *)(param_3 + 0x23);
    local_3b8 = *(undefined4 *)((longlong)param_3 + 0x11c);
    local_3b4 = *(undefined4 *)(param_3 + 0x24);
    local_3b0 = *(undefined4 *)(param_3 + 1);
    local_3ac = param_2[5];
    local_3a8 = (uint)*(byte *)(param_2 + 0x31);
    local_3a4 = (uint)*(byte *)((longlong)param_2 + 0xc5);
    local_3a0 = (uint)*(byte *)((longlong)param_2 + 199);
    local_39c = param_2[0x32];
    local_398 = (uint)*(byte *)(param_2 + 0x33);
    uVar6 = FUN_180014c00(*param_1,1,(undefined8 *)*param_3,(longlong)&local_4c8);
    if (uVar6 != 0) {
      if (*param_2 == 3) {
        if ((longlong *)param_1[0x18a] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x18a] + 0x10))();
          param_1[0x18a] = 0;
        }
        if ((longlong *)param_1[0x188] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x188] + 0x10))();
          param_1[0x188] = 0;
        }
        CloseHandle((HANDLE)param_1[400]);
        param_1[400] = 0;
      }
      return (ulonglong)uVar6;
    }
    param_1[0x187] = local_390;
    param_1[0x189] = local_388;
    *(undefined4 *)((longlong)param_1 + 0xc94) = *(undefined4 *)((longlong)param_3 + 0x11c);
    *(undefined4 *)(param_1 + 0x192) = *(undefined4 *)(param_3 + 0x23);
    *(undefined4 *)(param_1 + 0x193) = *(undefined4 *)(param_3 + 0x24);
    *(int *)((longlong)param_1 + 0xc9c) = param_2[5];
    pvVar9 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    param_1[399] = (longlong)pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
      DVar7 = GetLastError();
      uVar10 = FUN_18001cb40(DVar7);
      uVar10 = uVar10 & 0xffffffff;
      if (*param_2 == 3) {
        if ((longlong *)param_1[0x18a] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x18a] + 0x10))();
          param_1[0x18a] = 0;
        }
        if ((longlong *)param_1[0x188] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x188] + 0x10))();
          param_1[0x188] = 0;
        }
        CloseHandle((HANDLE)param_1[400]);
        param_1[400] = 0;
      }
      if ((longlong *)param_1[0x189] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x189] + 0x10))();
        param_1[0x189] = 0;
      }
      if ((longlong *)param_1[0x187] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x187] + 0x10))();
        param_1[0x187] = 0;
      }
      if (*param_1 == 0) {
        return uVar10;
      }
      lVar3 = *(longlong *)(*param_1 + 0x70);
      if (lVar3 == 0) {
        return uVar10;
      }
      if ((undefined8 *)(lVar3 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar3 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar3 + 0x40) != 0) {
        do {
          pcVar4 = *(code **)(lVar3 + uVar11 * 0x10);
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(*(undefined8 *)(lVar3 + 8 + uVar11 * 0x10),1,
                      "[WASAPI] Failed to create event for playback.");
          }
          uVar6 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar3 + 0x40));
      }
      if ((undefined8 *)(lVar3 + 0x68) == (undefined8 *)0x0) {
        return uVar10;
      }
      SetEvent(*(HANDLE *)(lVar3 + 0x68));
      return uVar10;
    }
    (**(code **)(*(longlong *)param_1[0x187] + 0x68))((longlong *)param_1[0x187],pvVar9);
    *(undefined4 *)(param_1 + 0x194) = local_26c;
    (**(code **)(*(longlong *)param_1[0x187] + 0x20))((longlong *)param_1[0x187],param_1 + 0x191);
    plVar5 = param_1 + 0x26;
    uVar10 = uVar11;
    if (plVar5 != (longlong *)0x0) {
      do {
        if (local_160[uVar10] == 0) {
LAB_180013ed3:
          *(undefined2 *)((longlong)plVar5 + uVar10 * 2) = 0;
          goto LAB_180013ed8;
        }
        sVar2 = local_160[uVar10 + 1];
        *(short *)((longlong)plVar5 + uVar10 * 2) = local_160[uVar10];
        if (sVar2 == 0) {
          uVar10 = uVar10 + 1;
          if (uVar10 < 0x80) goto LAB_180013ed3;
          *(undefined2 *)plVar5 = 0;
          goto LAB_180013ed8;
        }
        uVar12 = uVar10 + 2;
        *(short *)((longlong)plVar5 + uVar10 * 2 + 2) = sVar2;
        uVar10 = uVar12;
      } while (uVar12 < 0x80);
      *(undefined2 *)plVar5 = 0;
    }
LAB_180013ed8:
    *(undefined4 *)((longlong)param_3 + 0xc) = local_378;
    *(undefined4 *)(param_3 + 2) = local_374;
    param_3[3] = local_36c;
    param_3[4] = uStack_364;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_370;
    param_3[5] = local_35c;
    param_3[6] = uStack_354;
    param_3[7] = local_34c;
    param_3[8] = uStack_344;
    param_3[9] = local_33c;
    param_3[10] = uStack_334;
    param_3[0xb] = local_32c;
    param_3[0xc] = uStack_324;
    param_3[0xd] = local_31c;
    param_3[0xe] = uStack_314;
    param_3[0xf] = local_30c;
    param_3[0x10] = uStack_304;
    param_3[0x11] = local_2fc;
    param_3[0x12] = uStack_2f4;
    param_3[0x13] = local_2ec;
    param_3[0x14] = uStack_2e4;
    param_3[0x15] = local_2dc;
    param_3[0x16] = uStack_2d4;
    param_3[0x17] = local_2cc;
    param_3[0x18] = uStack_2c4;
    param_3[0x19] = local_2bc;
    param_3[0x1a] = uStack_2b4;
    param_3[0x1b] = local_2ac;
    param_3[0x1c] = uStack_2a4;
    param_3[0x1d] = local_29c;
    param_3[0x1e] = uStack_294;
    param_3[0x1f] = local_28c;
    param_3[0x20] = uStack_284;
    param_3[0x21] = local_27c;
    *(undefined4 *)(param_3 + 0x22) = local_274;
    *(undefined2 *)((longlong)param_3 + 0x114) = local_270;
    *(undefined4 *)(param_3 + 0x23) = local_26c;
    *(undefined4 *)(param_3 + 0x24) = local_268;
  }
  if (*(char *)((longlong)param_2 + 0xc6) == '\0') {
    if (((*param_2 == 2) || (*param_2 - 3U < 2)) && (*(longlong *)(param_2 + 0x26) == 0)) {
      *(undefined1 *)(param_1 + 0x19b) = 1;
    }
    if (((*param_2 == 1) || (*param_2 == 3)) && (*(longlong *)(param_2 + 0x1c) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0xcd9) = 1;
    }
  }
  if (param_1 + 0x19d != (longlong *)0x0) {
    pvVar9 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    param_1[0x19d] = (longlong)pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
      GetLastError();
    }
  }
  local_4e8 = local_4d8;
  iVar8 = (**(code **)(*param_1 + 0x270))(&DAT_18002f350,0,0x17,&DAT_18002f360);
  if (iVar8 < 0) {
    plVar5 = (longlong *)param_1[0x18b];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 0x18c);
      (**(code **)(*(longlong *)param_1[0x18b] + 0x10))();
    }
    plVar5 = (longlong *)param_1[0x189];
    if (plVar5 != (longlong *)0x0) {
      if (param_1[0x197] != 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,(int)param_1[0x198],0);
        param_1[0x197] = 0;
        param_1[0x198] = 0;
      }
      (**(code **)(*(longlong *)param_1[0x189] + 0x10))();
    }
    plVar5 = (longlong *)param_1[0x18a];
    if (plVar5 != (longlong *)0x0) {
      if (param_1[0x195] != 0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,(int)param_1[0x196]);
        param_1[0x195] = 0;
        param_1[0x196] = 0;
      }
      (**(code **)(*(longlong *)param_1[0x18a] + 0x10))();
    }
    if ((longlong *)param_1[0x187] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x187] + 0x10))();
    }
    if ((longlong *)param_1[0x188] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x188] + 0x10))();
    }
    if ((HANDLE)param_1[399] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[399]);
    }
    if ((HANDLE)param_1[400] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[400]);
    }
    if ((*param_1 != 0) && (lVar3 = *(longlong *)(*param_1 + 0x70), lVar3 != 0)) {
      if ((undefined8 *)(lVar3 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar3 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar3 + 0x40) != 0) {
        do {
          pcVar4 = *(code **)(lVar3 + uVar11 * 0x10);
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(*(undefined8 *)(lVar3 + 8 + uVar11 * 0x10),1,
                      "[WASAPI] Failed to create device enumerator.");
          }
          uVar6 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(lVar3 + 0x40));
      }
      if ((undefined8 *)(lVar3 + 0x68) != (undefined8 *)0x0) {
        SetEvent(*(HANDLE *)(lVar3 + 0x68));
      }
    }
    uVar11 = FUN_18001cc60(iVar8);
  }
  else {
    *(undefined4 *)(param_1 + 0x18d) = 1;
    param_1[0x18c] = (longlong)&PTR_FUN_1800361c0;
    param_1[0x18e] = (longlong)param_1;
    iVar8 = (**(code **)(*local_4d8[0] + 0x30))();
    if (iVar8 < 0) {
      (**(code **)(*local_4d8[0] + 0x10))();
    }
    else {
      param_1[0x18b] = (longlong)local_4d8[0];
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x199) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0xccc) = 0;
    UNLOCK();
    uVar11 = 0;
  }
  return uVar11;
}


