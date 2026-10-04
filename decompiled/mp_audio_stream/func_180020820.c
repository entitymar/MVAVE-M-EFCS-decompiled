// FUN_180020820 @ 180020820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180020e9f) */
/* WARNING: Removing unreachable block (ram,0x000180020e93) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180020820(undefined8 *param_1,uint param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  HANDLE pvVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  byte bVar19;
  undefined8 in_XCR0;
  undefined1 auStack_298 [56];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_298;
  if (param_4 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  memset(param_4,0,0x2d0);
  if (param_3 == (undefined8 *)0x0) {
    memset(&local_260,0,0xe8);
    local_178 = local_260;
    uStack_170 = uStack_258;
    param_3 = &local_178;
    local_168 = local_250;
    uStack_160 = uStack_248;
    local_158 = local_240;
    uStack_150 = uStack_238;
    local_148 = local_230;
    uStack_140 = uStack_228;
    local_138 = local_220;
    uStack_130 = uStack_218;
    local_128 = local_210;
    uStack_120 = uStack_208;
    local_118 = local_200;
    uStack_110 = uStack_1f8;
    local_108 = local_1f0;
    uStack_100 = uStack_1e8;
    local_f8 = local_1e0;
    uStack_f0 = uStack_1d8;
    local_e8 = local_1d0;
    uStack_e0 = uStack_1c8;
    local_d8 = local_1c0;
    uStack_d0 = uStack_1b8;
    local_c8 = local_1b0;
    uStack_c0 = uStack_1a8;
    local_b8 = local_1a0;
    uStack_b0 = uStack_198;
    local_a8 = local_190;
    uStack_a0 = uStack_188;
    local_98 = local_180;
  }
  plVar1 = param_4 + 0x20;
  plVar11 = param_3 + 4;
  if (plVar1 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if (plVar11 == (longlong *)0x0) {
LAB_18002098d:
    param_4[0x21] = (longlong)malloc;
    param_4[0x22] = (longlong)&DAT_180002a20;
    param_4[0x23] = (longlong)&DAT_180002a00;
  }
  else {
    if (*plVar11 == 0) {
      if (param_3[7] == 0) {
        if ((param_3[5] == 0) && (param_3[6] == 0)) goto LAB_18002098d;
        goto LAB_180020960;
      }
    }
    else {
LAB_180020960:
      if (param_3[7] == 0) {
        return 0xfffffffe;
      }
    }
    if ((param_3[5] == 0) && (param_3[6] == 0)) {
      return 0xfffffffe;
    }
    lVar13 = param_3[5];
    *plVar1 = *plVar11;
    param_4[0x21] = lVar13;
    lVar13 = param_3[7];
    param_4[0x22] = param_3[6];
    param_4[0x23] = lVar13;
  }
  plVar11 = (longlong *)*param_3;
  uVar12 = 0;
  bVar18 = false;
  if (plVar11 != (longlong *)0x0) goto LAB_180020a79;
  plVar11 = param_4 + 0xf;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0x18] = 0;
    param_4[0x19] = 0;
    param_4[0x1a] = 0;
    param_4[0x1b] = 0;
    param_4[0x1c] = 0;
    if (param_4 + 0x18 != (longlong *)0x0) {
      if (*plVar1 == 0) {
        if (param_4[0x23] == 0) {
          if ((param_4[0x21] == 0) && (param_4[0x22] == 0)) {
            param_4[0x19] = (longlong)malloc;
            param_4[0x1a] = (longlong)&DAT_180002a20;
            param_4[0x1b] = (longlong)&DAT_180002a00;
            goto LAB_180020a41;
          }
          goto LAB_180020a21;
        }
      }
      else {
LAB_180020a21:
        if (param_4[0x23] == 0) goto LAB_180020a41;
      }
      if ((param_4[0x21] != 0) || (param_4[0x22] != 0)) {
        param_4[0x18] = *plVar1;
        param_4[0x19] = param_4[0x21];
        param_4[0x1a] = param_4[0x22];
        param_4[0x1b] = param_4[0x23];
      }
    }
LAB_180020a41:
    if (param_4 + 0x1c != (longlong *)0x0) {
      pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
      param_4[0x1c] = (longlong)pvVar6;
      if (pvVar6 != (HANDLE)0x0) goto LAB_180020a79;
      DVar3 = GetLastError();
      uVar7 = FUN_18001cb40(DVar3);
      if ((int)uVar7 == 0) goto LAB_180020a79;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_180020a79:
  param_4[0xe] = (longlong)plVar11;
  *(undefined4 *)(param_4 + 0x1d) = *(undefined4 *)(param_3 + 1);
  param_4[0x1e] = param_3[2];
  param_4[0x1f] = param_3[3];
  uVar8 = FUN_180009fb0((longlong)param_4);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  puVar9 = local_58;
  uVar4 = 0xc;
  local_88 = _DAT_180032180;
  uStack_80 = _UNK_180032188;
  local_68 = _DAT_1800321a0;
  uStack_60 = _UNK_1800321a8;
  local_78 = _DAT_180032190;
  uStack_70 = _UNK_180032198;
  do {
    *puVar9 = uVar4;
    puVar9 = puVar9 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xf);
  puVar17 = &local_88;
  uVar4 = 0xf;
  if (param_1 != (undefined8 *)0x0) {
    puVar17 = param_1;
    uVar4 = param_2;
  }
  uVar8 = uVar12;
  if (uVar4 != 0) {
    do {
      uVar10 = *(uint *)((longlong)puVar17 + uVar8 * 4);
      lVar13 = (longlong)(int)uVar10;
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      switch(uVar10) {
      case 0:
        *param_4 = (longlong)FUN_1800092b0;
        break;
      case 1:
        *param_4 = (longlong)FUN_180008750;
        break;
      case 2:
        *param_4 = (longlong)FUN_180009840;
        break;
      case 9:
        *param_4 = (longlong)FUN_180008a10;
        break;
      case 0xd:
        lVar2 = param_3[0x11];
        *param_4 = param_3[0x10];
        param_4[1] = lVar2;
        lVar2 = param_3[0x13];
        param_4[2] = param_3[0x12];
        param_4[3] = lVar2;
        lVar2 = param_3[0x15];
        param_4[4] = param_3[0x14];
        param_4[5] = lVar2;
        lVar2 = param_3[0x17];
        param_4[6] = param_3[0x16];
        param_4[7] = lVar2;
        lVar2 = param_3[0x19];
        param_4[8] = param_3[0x18];
        param_4[9] = lVar2;
        lVar2 = param_3[0x1b];
        param_4[10] = param_3[0x1a];
        param_4[0xb] = lVar2;
        param_4[0xc] = param_3[0x1c];
        break;
      case 0xe:
        *param_4 = (longlong)FUN_180009230;
      }
      if (*param_4 != 0) {
        if (uVar10 < 0xf) {
          pcVar15 = (&PTR_s_WASAPI_1800360b8)[lVar13 * 2];
        }
        else {
          pcVar15 = "Unknown";
        }
        FUN_180025970(param_4[0xe],4,"Attempting to initialize %s backend...\n",pcVar15);
        bVar19 = (byte)in_XCR0;
        if ((code *)*param_4 == FUN_180009230) {
          *param_4 = (longlong)FUN_180009230;
          param_4[1] = (longlong)FUN_180001010;
          param_4[2] = (longlong)FUN_1800064b0;
          param_4[3] = (longlong)FUN_180007720;
          param_4[4] = (longlong)FUN_180013280;
          param_4[5] = (longlong)FUN_180017d00;
          param_4[6] = (longlong)FUN_180016e40;
          param_4[7] = (longlong)FUN_180017340;
          param_4[8] = (longlong)FUN_180015980;
          param_4[9] = (longlong)FUN_180017f90;
          param_4[10] = 0;
        }
        else {
          iVar5 = (*(code *)*param_4)(param_4,param_3,param_4);
          bVar19 = (byte)in_XCR0;
          if (iVar5 != 0) {
            if (iVar5 == -0xd0) goto LAB_180020c99;
            if (uVar10 < 0xf) goto LAB_180020c7b;
            pcVar15 = "Unknown";
            pcVar14 = "Failed to initialize %s backend.\n";
            goto LAB_180020cbc;
          }
        }
        if (param_4 + 0x24 == (longlong *)0x0) {
LAB_180020dcc:
          FUN_180025970(param_4[0xe],2,
                        "Failed to initialize mutex for device enumeration. ma_context_get_devices() is not thread safe.\n"
                        ,pcVar15);
        }
        else {
          pcVar15 = (char *)0x0;
          pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
          param_4[0x24] = (longlong)pvVar6;
          if (pvVar6 == (HANDLE)0x0) {
            DVar3 = GetLastError();
            uVar7 = FUN_18001cb40(DVar3);
            if ((int)uVar7 != 0) goto LAB_180020dcc;
          }
        }
        if (param_4 + 0x25 == (longlong *)0x0) {
          uVar12 = 0xfffffffe;
        }
        else {
          pcVar15 = (char *)0x0;
          pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
          param_4[0x25] = (longlong)pvVar6;
          if (pvVar6 != (HANDLE)0x0) goto LAB_180020e3c;
          DVar3 = GetLastError();
          uVar8 = FUN_18001cb40(DVar3);
          uVar12 = uVar8 & 0xffffffff;
          if ((int)uVar8 == 0) goto LAB_180020e3c;
        }
        FUN_180025970(param_4[0xe],2,
                      "Failed to initialize mutex for device info retrieval. ma_context_get_device_info() is not thread safe.\n"
                      ,pcVar15);
LAB_180020e3c:
        FUN_180025970(param_4[0xe],4,"System Architecture:\n",pcVar15);
        FUN_180025970(param_4[0xe],4,"  Endian: %s\n",&DAT_180031960);
        FUN_180025970(param_4[0xe],4,"  SSE2:   %s\n",&DAT_180031978);
        lVar13 = cpuid_Version_info(1);
        lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
        if (((*(uint *)(lVar13 + 0xc) >> 0x1b & 1) != 0) && ((*(uint *)(lVar2 + 4) & 0x20) != 0)) {
          uVar7 = xinuse(0);
          bVar18 = (bVar19 & (byte)uVar7 & 6) == 6;
        }
        puVar16 = &DAT_18003197c;
        if (bVar18) {
          puVar16 = &DAT_180031978;
        }
        FUN_180025970(param_4[0xe],4,"  AVX2:   %s\n",puVar16);
        FUN_180025970(param_4[0xe],4,"  NEON:   %s\n",&DAT_18003197c);
        *(uint *)(param_4 + 0xd) = uVar10;
        return uVar12;
      }
      if (uVar10 == 0xd) {
LAB_180020c7b:
        pcVar14 = "Failed to initialize %s backend.\n";
        pcVar15 = (&PTR_s_WASAPI_1800360b8)[lVar13 * 2];
      }
      else {
LAB_180020c99:
        if (uVar10 < 0xf) {
          pcVar15 = (&PTR_s_WASAPI_1800360b8)[lVar13 * 2];
        }
        else {
          pcVar15 = "Unknown";
        }
        pcVar14 = "%s backend is disabled.\n";
      }
LAB_180020cbc:
      FUN_180025970(param_4[0xe],4,pcVar14,pcVar15);
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
    } while (uVar10 < uVar4);
  }
  memset(param_4,0,0x2d0);
  return 0xffffff35;
}


