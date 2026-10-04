// FUN_180014c00 @ 180014c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180014c00(longlong param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  double dVar2;
  ulonglong *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  size_t _Size;
  uint *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  char *pcVar22;
  undefined1 *puVar23;
  undefined1 auStackY_238 [32];
  uint local_1f4;
  uint local_1f0 [2];
  ulonglong *local_1e8;
  uint local_1e0;
  int local_1dc;
  longlong *local_1d8;
  int local_1d0;
  undefined8 *local_1c8;
  uint local_1c0;
  undefined8 local_1b8;
  LPCWSTR pWStack_1b0;
  ulonglong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  uint uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  wchar_t local_158 [4];
  wchar_t awStack_150 [4];
  wchar_t local_148 [4];
  wchar_t awStack_140 [4];
  wchar_t local_138 [4];
  wchar_t local_130;
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_238;
  uVar15 = 0;
  uVar12 = 0;
  uVar14 = 0;
  local_1dc = 0;
  local_1d8 = (longlong *)0x0;
  pcVar22 = "";
  if (param_2 == 3) {
    return 0xfffffffe;
  }
  if (((param_2 == 4) && (iVar6 = *(int *)(param_4 + 300), iVar6 != 0)) &&
     (param_3 == (undefined8 *)0x0)) {
    local_1d0 = 1;
  }
  else {
    iVar6 = *(int *)(param_4 + 300);
    local_1d0 = 0;
  }
  uVar5 = 0x40000;
  *(undefined8 *)(param_4 + 0x138) = 0;
  *(undefined8 *)(param_4 + 0x140) = 0;
  *(undefined8 *)(param_4 + 0x148) = 0;
  if (((*(int *)(param_4 + 0x120) == 0) && (*(int *)(param_4 + 8) != 0)) &&
     (uVar5 = 0x40000, *(int *)(param_4 + 0x118) != 1)) {
    uVar5 = 0x80040000;
  }
  if (((*(int *)(param_4 + 0x124) == 0) && (*(int *)(param_4 + 8) != 0)) && ((int)uVar5 < 0)) {
    uVar5 = uVar5 | 0x8000000;
  }
  local_1f0[0] = 0;
  uVar10 = uVar5 | 0x20000;
  if (param_2 != 4) {
    uVar10 = uVar5;
  }
  local_1f4 = *(uint *)(param_4 + 0x130);
  if (((param_2 != 4) || (iVar6 == 0)) || (param_3 != (undefined8 *)0x0)) {
    local_1c8 = (undefined8 *)0x0;
  }
  else {
    local_1f0[0] = 1;
    local_198._0_4_ = 1;
    local_1c8 = &local_1b8;
    uStack_190 = (uint)(local_1f4 != 0);
    param_3 = (undefined8 *)local_158;
    local_158[0] = u_VAD_Process_Loopback_18002f930[0];
    local_158[1] = u_VAD_Process_Loopback_18002f930[1];
    local_158[2] = u_VAD_Process_Loopback_18002f930[2];
    local_158[3] = u_VAD_Process_Loopback_18002f930[3];
    awStack_150[0] = u_VAD_Process_Loopback_18002f930[4];
    awStack_150[1] = u_VAD_Process_Loopback_18002f930[5];
    awStack_150[2] = u_VAD_Process_Loopback_18002f930[6];
    awStack_150[3] = u_VAD_Process_Loopback_18002f930[7];
    local_1b8 = 0x41;
    local_1a8 = &local_198;
    local_130 = u_VAD_Process_Loopback_18002f930[0x14];
    pWStack_1b0 = (LPCWSTR)0xc;
    local_148[0] = u_VAD_Process_Loopback_18002f930[8];
    local_148[1] = u_VAD_Process_Loopback_18002f930[9];
    local_148[2] = u_VAD_Process_Loopback_18002f930[10];
    local_148[3] = u_VAD_Process_Loopback_18002f930[0xb];
    awStack_140[0] = u_VAD_Process_Loopback_18002f930[0xc];
    awStack_140[1] = u_VAD_Process_Loopback_18002f930[0xd];
    awStack_140[2] = u_VAD_Process_Loopback_18002f930[0xe];
    awStack_140[3] = u_VAD_Process_Loopback_18002f930[0xf];
    local_138[0] = u_VAD_Process_Loopback_18002f930[0x10];
    local_138[1] = u_VAD_Process_Loopback_18002f930[0x11];
    local_138[2] = u_VAD_Process_Loopback_18002f930[0x12];
    local_138[3] = u_VAD_Process_Loopback_18002f930[0x13];
    local_198._4_4_ = iVar6;
  }
  local_1c0 = param_2;
  iVar6 = (**(code **)(param_1 + 0x270))(&DAT_18002f350,0,0x17,&DAT_18002f360);
  uVar21 = uVar15;
  if (iVar6 < 0) {
    if (param_1 != 0) {
      uVar21 = *(ulonglong *)(param_1 + 0x70);
    }
    uVar8 = FUN_18001cc60(iVar6);
    uVar5 = (uint)uVar8;
    pcVar17 = "[WASAPI] Failed to create IMMDeviceEnumerator.\n";
LAB_180014e40:
    FUN_180025970(uVar21,1,pcVar17,uVar21);
    if (uVar5 == 0) goto LAB_180014e5a;
LAB_180014e9b:
    if (local_1f0[0] != 0) {
      uVar21 = uVar15;
      if (param_1 != 0) {
        uVar21 = *(ulonglong *)(param_1 + 0x70);
      }
      pcVar17 = "include";
      if (local_1f4 != 0) {
        pcVar17 = "exclude";
      }
      FUN_180025970(uVar21,1,
                    "[WASAPI] Loopback mode requested to %s process ID %u, but initialization failed. Support for this feature begins with Windows 10 Build 20348. Confirm your version of Windows or consider not using process-specific loopback.\n"
                    ,pcVar17);
      goto LAB_1800158b3;
    }
LAB_180014ede:
    if (uVar5 != 0) goto LAB_1800158b3;
  }
  else {
    if ((wchar_t *)param_3 == (wchar_t *)0x0) {
      iVar6 = (**(code **)(*local_1e8 + 0x20))(local_1e8,param_2 == 2,0,&local_1d8);
    }
    else {
      iVar6 = (**(code **)(*local_1e8 + 0x28))(local_1e8,param_3,&local_1d8);
    }
    (**(code **)(*local_1e8 + 0x10))();
    if (iVar6 < 0) {
      if (param_1 != 0) {
        uVar21 = *(ulonglong *)(param_1 + 0x70);
      }
      uVar8 = FUN_18001cc60(iVar6);
      uVar5 = (uint)uVar8;
      pcVar17 = "[WASAPI] Failed to retrieve IMMDevice.\n";
      goto LAB_180014e40;
    }
LAB_180014e5a:
    iVar6 = (**(code **)(*local_1d8 + 0x18))(local_1d8,&DAT_18002f2f0,0x17,local_1c8);
    if (iVar6 < 0) {
      uVar8 = FUN_18001cc60(iVar6);
      uVar5 = (uint)uVar8;
      if (uVar5 != 0) goto LAB_180014e9b;
      goto LAB_180014ede;
    }
  }
  local_188 = 0;
  uStack_180 = 0;
  local_168 = 0;
  local_178 = 0;
  uStack_170 = 0;
  if ((*(int *)(param_4 + 0x128) == 0) &&
     (puVar19 = *(undefined8 **)(param_4 + 0x138),
     iVar6 = (**(code **)*puVar19)(puVar19,&DAT_18002f300,&local_1a0), -1 < iVar6)) {
    local_1f0[0] = 0;
    iVar6 = (**(code **)(*local_1a0 + 0x78))(local_1a0,0,local_1f0);
    if ((-1 < iVar6) && (local_1f0[0] != 0)) {
      local_198._0_4_ = 0xc;
      local_198._4_4_ = 1;
      uStack_190 = 0;
      (**(code **)(*local_1a0 + 0x80))(local_1a0,&local_198);
    }
    (**(code **)(*local_1a0 + 0x10))();
  }
  local_1e8 = (ulonglong *)0x0;
  if (*(int *)(param_4 + 0x118) == 1) {
    iVar6 = (**(code **)(*local_1d8 + 0x20))(local_1d8,0,&local_1e8);
    if (-1 < iVar6) {
      local_1a8 = (ulonglong *)0x0;
      local_1b8 = 0;
      pWStack_1b0 = (LPCWSTR)0x0;
      iVar6 = (**(code **)(*local_1e8 + 0x28))(local_1e8,&DAT_18002f2c8,&local_1b8);
      puVar3 = local_1a8;
      if (-1 < iVar6) {
        iVar6 = (**(code **)(**(longlong **)(param_4 + 0x138) + 0x38))
                          (*(longlong **)(param_4 + 0x138),1,local_1a8,0);
        if (-1 < iVar6) {
          local_188 = *puVar3;
          uStack_180 = puVar3[1];
          local_178 = puVar3[2];
          uStack_170 = puVar3[3];
          local_168 = puVar3[4];
        }
        (**(code **)(param_1 + 0x280))(&local_1b8);
      }
      (**(code **)(*local_1e8 + 0x10))();
    }
    uVar12 = -(uint)(iVar6 != 0) & 0xffffff36;
    uVar5 = (uint)(iVar6 == 0);
  }
  else {
    plVar1 = *(longlong **)(param_4 + 0x138);
    iVar6 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_1e8);
    puVar3 = local_1e8;
    if (iVar6 == 0) {
      if ((short)*local_1e8 == -2) {
        local_188 = *local_1e8;
        uStack_180 = local_1e8[1];
        local_178 = local_1e8[2];
        uStack_170 = local_1e8[3];
        local_168 = local_1e8[4];
      }
      else {
        _Size = (size_t)(ushort)local_1e8[2];
        if (_Size == 0) {
          _Size = 0x14;
        }
        else if (0x28 < _Size) {
          _Size = 0x28;
        }
        memcpy(&local_188,local_1e8,_Size);
      }
    }
    else if (local_1d0 == 0) {
      uVar12 = 0xffffff38;
    }
    else {
      local_178 = CONCAT62(local_178._2_6_,0x14);
      local_188 = 0xac4400020003;
      uStack_180 = 0x20000800056220;
    }
    (**(code **)(param_1 + 0x278))(puVar3);
    uVar5 = uVar14;
  }
  if (uVar12 != 0) {
    pcVar22 = "[WASAPI] Failed to find best device mix format.";
    uVar5 = uVar12;
    goto LAB_1800158b3;
  }
  uVar12 = local_188._4_4_;
  uVar21 = (ulonglong)local_188._4_4_;
  local_1e0 = local_188._4_4_;
  if ((int)uVar10 < 0) {
    uVar21 = 48000;
    if (*(uint *)(param_4 + 8) != 0) {
      uVar21 = (ulonglong)*(uint *)(param_4 + 8);
    }
    uVar7 = (uint)uStack_180._4_2_;
    local_188 = CONCAT44((int)uVar21,(undefined4)local_188);
    uStack_180 = CONCAT44(uStack_180._4_4_,uVar7 * (int)uVar21);
  }
  uVar4 = FUN_180018fb0((short *)&local_188);
  iVar6 = (int)CONCAT71(extraout_var,uVar4);
  *(int *)(param_4 + 0x150) = iVar6;
  if (iVar6 == 0) {
    pcVar22 = "[WASAPI] Native format not supported.";
    uVar5 = (uVar5 ^ 1) * 2 - 0xca;
    goto LAB_1800158b3;
  }
  uVar11 = (ulonglong)local_188._2_2_;
  *(uint *)(param_4 + 0x154) = (uint)local_188._2_2_;
  *(int *)(param_4 + 0x158) = (int)uVar21;
  if (((short)local_188 == -2) || (0x27 < (ushort)local_178)) {
    FUN_180005d10(local_178._4_4_,(uint)local_188._2_2_,(undefined1 *)(param_4 + 0x15c));
    uVar21 = local_188 >> 0x20;
    uVar12 = local_1e0;
  }
  else {
    puVar23 = (undefined1 *)(param_4 + 0x15c);
    lVar13 = 0xfe;
    if ((puVar23 != (undefined1 *)0x0) && (uVar9 = uVar15, local_188._2_2_ != 0)) {
      do {
        uVar7 = (uint)uVar9;
        uVar12 = local_1e0;
        if (lVar13 == 0) break;
        uVar9 = FUN_180005500(0,(uint)uVar11,uVar7);
        *puVar23 = (char)uVar9;
        lVar13 = lVar13 + -1;
        puVar23 = puVar23 + 1;
        uVar9 = (ulonglong)(uVar7 + 1);
        uVar12 = local_1e0;
      } while (uVar7 + 1 < (uint)uVar11);
    }
  }
  uVar7 = *(uint *)(param_4 + 0x10c);
  *(uint *)(param_4 + 0x25c) = uVar7;
  uVar16 = 3;
  if (*(uint *)(param_4 + 0x114) != 0) {
    uVar16 = *(uint *)(param_4 + 0x114);
  }
  *(uint *)(param_4 + 0x260) = uVar16;
  uVar20 = (uint)uVar21;
  if (uVar7 == 0) {
    if (*(int *)(param_4 + 0x110) == 0) {
      uVar7 = uVar14;
      if (*(int *)(param_4 + 0x11c) == 0) {
        if (uVar20 != 0) {
          uVar7 = uVar20 * 10;
LAB_180015261:
          uVar7 = uVar7 / 1000;
        }
      }
      else if (uVar20 != 0) {
        uVar7 = uVar20 * 100;
        goto LAB_180015261;
      }
    }
    else {
      if (uVar20 != 0) {
        uVar7 = *(int *)(param_4 + 0x110) * uVar20;
        goto LAB_180015261;
      }
      uVar7 = 0;
    }
    *(uint *)(param_4 + 0x25c) = uVar7;
  }
  local_198 = (longlong *)(((ulonglong)uVar7 * 1000000) / (uVar21 & 0xffffffff));
  if (uVar5 == 1) {
    puVar19 = (undefined8 *)(param_4 + 0x138);
    lVar13 = (ulonglong)uVar16 * (longlong)local_198 * 10;
    iVar6 = (**(code **)(*(longlong *)*puVar19 + 0x18))((longlong *)*puVar19,1,uVar10,lVar13);
    while (iVar6 == -0x7776ffe0) {
      if (5000000 < lVar13) goto LAB_18001541a;
      if (lVar13 == 0) break;
      lVar13 = lVar13 * 2;
      iVar6 = (**(code **)(*(longlong *)*puVar19 + 0x18))((longlong *)*puVar19,1,uVar10,lVar13);
    }
    if (iVar6 == -0x7776ffe7) {
      iVar6 = (**(code **)(*(longlong *)*puVar19 + 0x20))((longlong *)*puVar19,&local_1f4);
      if (-1 < iVar6) {
        dVar2 = (DAT_180032128 / (double)(local_188 >> 0x20)) * (double)local_1f4 + DAT_1800320d0;
        (**(code **)(*(longlong *)*puVar19 + 0x10))();
        iVar6 = (**(code **)(*local_1d8 + 0x18))(local_1d8,&DAT_18002f2f0,0x17,0);
        if (-1 < iVar6) {
          iVar6 = (**(code **)(*(longlong *)*puVar19 + 0x18))
                            ((longlong *)*puVar19,1,uVar10,(longlong)dVar2);
          goto LAB_1800153e2;
        }
      }
    }
    else {
LAB_1800153e2:
      if (-1 < iVar6) goto LAB_180015747;
    }
    if (iVar6 == -0x7ff8fffb) {
      pcVar22 = "[WASAPI] Failed to initialize device in exclusive mode. Access denied.";
      uVar5 = 0xfffffffa;
    }
    else if (iVar6 == -0x7776fff6) {
      pcVar22 = "[WASAPI] Failed to initialize device in exclusive mode. Device in use.";
      uVar5 = 0xffffffed;
    }
    else {
LAB_18001541a:
      pcVar22 = "[WASAPI] Failed to initialize device in exclusive mode.";
      uVar8 = FUN_18001cc60(iVar6);
      uVar5 = (uint)uVar8;
    }
    goto LAB_1800158b3;
  }
  if (uVar5 == 0) {
    if (((int)uVar10 < 0) && (uVar12 != uVar20)) {
LAB_18001568f:
      iVar6 = (**(code **)(**(longlong **)(param_4 + 0x138) + 0x18))
                        (*(longlong **)(param_4 + 0x138),0,uVar10,
                         (ulonglong)*(uint *)(param_4 + 0x260) * (longlong)local_198 * 10);
      if (iVar6 < 0) {
        if (iVar6 == -0x7ff8fffb) {
          pcVar22 = "[WASAPI] Failed to initialize device. Access denied.";
          uVar5 = 0xfffffffa;
        }
        else if (iVar6 == -0x7776fff6) {
          pcVar22 = "[WASAPI] Failed to initialize device. Device in use.";
          uVar5 = 0xffffffed;
        }
        else {
          pcVar22 = "[WASAPI] Failed to initialize device.";
          uVar8 = FUN_18001cc60(iVar6);
          uVar5 = (uint)uVar8;
        }
        goto LAB_1800158b3;
      }
      goto LAB_180015747;
    }
    local_1e8 = (ulonglong *)0x0;
    iVar6 = (**(code **)**(undefined8 **)(param_4 + 0x138))
                      (*(undefined8 **)(param_4 + 0x138),&DAT_18002f310,&local_1e8);
    if (iVar6 < 0) goto LAB_18001568f;
    puVar18 = &local_1e0;
    iVar6 = (**(code **)(*local_1e8 + 0x90))(local_1e8,&local_188,&local_1c8);
    if (iVar6 < 0) {
      uVar21 = uVar15;
      if (param_1 != 0) {
        uVar21 = *(ulonglong *)(param_1 + 0x70);
      }
      FUN_180025970(uVar21,4,
                    "[WASAPI] IAudioClient3_GetSharedModeEnginePeriod failed. Falling back to IAudioClient.\n"
                    ,puVar18);
      (**(code **)(*local_1e8 + 0x10))();
      goto LAB_18001568f;
    }
    uVar12 = *(uint *)(param_4 + 0x25c);
    uVar7 = (uVar12 / local_1e0) * local_1e0;
    uVar5 = local_1f4;
    if (uVar7 < local_1f4) {
      uVar5 = uVar7;
    }
    if (uVar5 < local_1f0[0]) {
      uVar5 = local_1f0[0];
    }
    if (param_1 == 0) {
      FUN_180025970(0,4,
                    "[WASAPI] Trying IAudioClient3_InitializeSharedAudioStream(actualPeriodInFrames=%d)\n"
                    ,(ulonglong)uVar5);
      FUN_180025970(0,4,"    defaultPeriodInFrames=%d\n",(ulonglong)local_1c8 & 0xffffffff);
      FUN_180025970(0,4,"    fundamentalPeriodInFrames=%d\n",(ulonglong)local_1e0);
      FUN_180025970(0,4,"    minPeriodInFrames=%d\n",(ulonglong)local_1f0[0]);
      uVar21 = uVar15;
    }
    else {
      FUN_180025970(*(longlong *)(param_1 + 0x70),4,
                    "[WASAPI] Trying IAudioClient3_InitializeSharedAudioStream(actualPeriodInFrames=%d)\n"
                    ,(ulonglong)uVar5);
      FUN_180025970(*(longlong *)(param_1 + 0x70),4,"    defaultPeriodInFrames=%d\n",
                    (ulonglong)local_1c8 & 0xffffffff);
      FUN_180025970(*(longlong *)(param_1 + 0x70),4,"    fundamentalPeriodInFrames=%d\n",
                    (ulonglong)local_1e0);
      FUN_180025970(*(longlong *)(param_1 + 0x70),4,"    minPeriodInFrames=%d\n",
                    (ulonglong)local_1f0[0]);
      uVar21 = *(ulonglong *)(param_1 + 0x70);
    }
    puVar19 = (undefined8 *)(ulonglong)local_1f4;
    FUN_180025970(uVar21,4,"    maxPeriodInFrames=%d\n",puVar19);
    uVar21 = uVar15;
    if (uVar5 < uVar12) {
      if (param_1 != 0) {
        uVar21 = *(ulonglong *)(param_1 + 0x70);
      }
      pcVar17 = 
      "[WASAPI] Not using IAudioClient3 because the desired period size is larger than the maximum supported by IAudioClient3.\n"
      ;
LAB_18001565c:
      FUN_180025970(uVar21,4,pcVar17,puVar19);
    }
    else {
      puVar19 = &local_188;
      iVar6 = (**(code **)(*local_1e8 + 0xa0))(local_1e8,uVar10 & 0x77ffffff,uVar5);
      if (iVar6 < 0) {
        if (param_1 != 0) {
          uVar21 = *(ulonglong *)(param_1 + 0x70);
        }
        pcVar17 = 
        "[WASAPI] IAudioClient3_InitializeSharedAudioStream failed. Falling back to IAudioClient.\n"
        ;
        goto LAB_18001565c;
      }
      local_1dc = 1;
      *(uint *)(param_4 + 0x25c) = uVar5;
      if (param_1 == 0) {
        FUN_180025970(0,4,"[WASAPI] Using IAudioClient3\n",puVar19);
      }
      else {
        FUN_180025970(*(longlong *)(param_1 + 0x70),4,"[WASAPI] Using IAudioClient3\n",puVar19);
        uVar21 = *(ulonglong *)(param_1 + 0x70);
      }
      FUN_180025970(uVar21,4,"    periodSizeInFramesOut=%d\n",(ulonglong)*(uint *)(param_4 + 0x25c))
      ;
    }
    iVar6 = local_1dc;
    (**(code **)(*local_1e8 + 0x10))();
    if (iVar6 == 0) goto LAB_18001568f;
  }
  else {
LAB_180015747:
    local_1f4 = 0;
    iVar6 = (**(code **)(**(longlong **)(param_4 + 0x138) + 0x20))();
    if (iVar6 < 0) {
      pcVar22 = "[WASAPI] Failed to get audio client\'s actual buffer size.";
      uVar8 = FUN_18001cc60(iVar6);
      uVar5 = (uint)uVar8;
      goto LAB_1800158b3;
    }
    if (local_1d0 == 0) {
      uVar21 = (ulonglong)local_1f4;
    }
    else {
      uVar21 = (longlong)
               ((ulonglong)*(uint *)(param_4 + 0x158) * (ulonglong)*(uint *)(param_4 + 0x260) *
               (longlong)local_198) / 1000000;
    }
    *(int *)(param_4 + 0x25c) = (int)((uVar21 & 0xffffffff) / (ulonglong)*(uint *)(param_4 + 0x260))
    ;
    iVar6 = local_1dc;
  }
  lVar13 = param_4 + 0x140;
  *(int *)(param_4 + 0x264) = iVar6;
  if (local_1c0 != 1) {
    lVar13 = param_4 + 0x148;
  }
  uVar21 = FUN_180010060(param_1,local_1c0,*(undefined8 *)(param_4 + 0x138),lVar13);
  if ((uint)uVar21 == 0) {
    iVar6 = (**(code **)(*local_1d8 + 0x20))(local_1d8,0,&local_198);
    if (-1 < iVar6) {
      local_1a8 = (ulonglong *)0x0;
      local_1b8 = 0;
      pWStack_1b0 = (LPCWSTR)0x0;
      iVar6 = (**(code **)(*local_198 + 0x28))(local_198,&DAT_18002f2b0,&local_1b8);
      if (-1 < iVar6) {
        WideCharToMultiByte(0xfde9,0,pWStack_1b0,-1,(LPSTR)(param_4 + 0x268),0x100,(LPCSTR)0x0,
                            (LPBOOL)0x0);
        (**(code **)(param_1 + 0x280))(&local_1b8);
      }
      (**(code **)(*local_198 + 0x10))();
    }
    FUN_180006b90(param_1,local_1d8,(void *)(param_4 + 0x368));
    uVar5 = uVar14;
  }
  else {
    pcVar22 = "[WASAPI] Failed to get audio client service.";
    uVar5 = (uint)uVar21;
  }
LAB_1800158b3:
  if (local_1d8 != (longlong *)0x0) {
    (**(code **)(*local_1d8 + 0x10))();
  }
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(longlong **)(param_4 + 0x140) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_4 + 0x140) + 0x10))();
      *(undefined8 *)(param_4 + 0x140) = 0;
    }
    if (*(longlong **)(param_4 + 0x148) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_4 + 0x148) + 0x10))();
      *(undefined8 *)(param_4 + 0x148) = 0;
    }
    if (*(longlong **)(param_4 + 0x138) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_4 + 0x138) + 0x10))();
      *(undefined8 *)(param_4 + 0x138) = 0;
    }
    if (*pcVar22 != '\0') {
      if (param_1 != 0) {
        uVar15 = *(ulonglong *)(param_1 + 0x70);
      }
      FUN_180025970(uVar15,1,"%s\n",pcVar22);
    }
  }
  return uVar5;
}


