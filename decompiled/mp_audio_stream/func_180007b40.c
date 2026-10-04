// FUN_180007b40 @ 180007b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180007b40(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  undefined7 extraout_var_00;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  short *psVar12;
  char *pcVar13;
  code *pcVar14;
  longlong lVar15;
  undefined1 auStack_1e8 [32];
  short *local_1c8;
  int *local_1c0;
  longlong *local_1b8;
  short local_1b0 [12];
  undefined8 local_198;
  undefined8 uStack_190;
  short *local_188;
  short local_180;
  ushort local_17e;
  uint local_17c;
  int local_178;
  undefined2 local_174;
  undefined4 local_172;
  ushort local_16e;
  uint local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStack_1e8;
  uVar9 = 0;
  local_1c8 = (short *)0x0;
  lVar15 = param_4;
  iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_1c8);
  if (iVar3 < 0) {
    if (param_1 != 0) {
      uVar9 = *(ulonglong *)(param_1 + 0x70);
    }
    FUN_180025970(uVar9,1,"[WASAPI] Failed to retrieve mix format for device info retrieval.",lVar15
                 );
    uVar5 = FUN_18001cc60(iVar3);
    return uVar5;
  }
  uVar8 = (ulonglong)*(uint *)(param_4 + 0x204);
  if (*(uint *)(param_4 + 0x204) < 0x40) {
    psVar12 = local_1c8;
    uVar2 = FUN_180018fb0(local_1c8);
    *(int *)(param_4 + 0x208 + (uVar8 & 0xffffffff) * 0x10) = (int)CONCAT71(extraout_var,uVar2);
    *(uint *)(param_4 + 0x20c + (ulonglong)*(uint *)(param_4 + 0x204) * 0x10) =
         (uint)(ushort)psVar12[1];
    *(undefined4 *)(param_4 + ((ulonglong)*(uint *)(param_4 + 0x204) + 0x21) * 0x10) =
         *(undefined4 *)(psVar12 + 2);
    *(undefined4 *)(param_4 + 0x214 + (ulonglong)*(uint *)(param_4 + 0x204) * 0x10) = 0;
    *(int *)(param_4 + 0x204) = *(int *)(param_4 + 0x204) + 1;
  }
  pcVar14 = *(code **)(*param_2 + 0x20);
  iVar3 = (*pcVar14)(param_2,0,&local_1b8);
  if (iVar3 < 0) {
    if (param_1 != 0) {
      uVar9 = *(ulonglong *)(param_1 + 0x70);
    }
    FUN_180025970(uVar9,2,"[WASAPI] Failed to open property store for device info retrieval.",
                  pcVar14);
    return 0;
  }
  local_188 = (short *)0x0;
  local_198 = 0;
  uStack_190 = 0;
  pcVar14 = *(code **)(*local_1b8 + 0x28);
  iVar3 = (*pcVar14)(local_1b8,&DAT_18002f2c8,&local_198);
  if (iVar3 < 0) {
    if (param_1 != 0) {
      uVar9 = *(ulonglong *)(param_1 + 0x70);
    }
    pcVar13 = "[WASAPI] Failed to retrieve device format for device info retrieval.";
  }
  else {
    local_1c8 = local_188;
    iVar3 = (**(code **)(*param_3 + 0x38))(param_3,1,local_188,0);
    if (-1 < iVar3) {
      FUN_180002a30(local_1c8,1,param_4);
      goto LAB_180007ed4;
    }
    puVar10 = local_158;
    lVar15 = 0xfe;
    uVar1 = local_1c8[1];
    uVar8 = (ulonglong)uVar1;
    if (uVar1 < 0xff) {
      if (uVar1 != 0) {
        local_1c0 = (int *)CONCAT44(local_1c0._4_4_,(uint)uVar1);
        uVar7 = 0;
        if (uVar1 != 0) goto LAB_180007cd0;
      }
    }
    else {
      uVar8 = 0xfe;
      uVar7 = uVar9;
LAB_180007cd0:
      do {
        if (lVar15 == 0) break;
        uVar4 = FUN_180005500(0,(uint)uVar8,(uint)uVar7);
        *puVar10 = (char)uVar4;
        lVar15 = lVar15 + -1;
        puVar10 = puVar10 + 1;
        uVar6 = (uint)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < (uint)uVar8);
    }
    local_172 = 0x280000;
    local_180 = -2;
    local_17e = (ushort)uVar8;
    local_16c = FUN_180005bf0(local_158,(uint)uVar8);
    local_1c0 = &DAT_180036038;
    uVar7 = uVar9;
    uVar4 = uVar9;
    while( true ) {
      local_1b0[0] = 0;
      local_1b0[1] = 0;
      local_1b0[2] = 1;
      local_1b0[3] = 0;
      local_1b0[4] = 2;
      local_1b0[5] = 0;
      local_1b0[6] = 3;
      local_1b0[7] = 0;
      local_1b0[8] = 4;
      local_1b0[9] = 0;
      local_1b0[10] = 4;
      local_1b0[0xb] = 0;
      local_16e = local_1b0[(longlong)*local_1c0 * 2] << 3;
      iVar3 = (uint)local_16e * ((uint)uVar8 & 0xffff);
      local_172 = CONCAT22(local_172._2_2_,local_16e);
      uVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
      local_178 = (uVar6 & 0xffff) * (int)uVar7;
      local_174 = (undefined2)uVar6;
      local_168 = (undefined4)DAT_1800361a0;
      uStack_164 = DAT_1800361a0._4_4_;
      uStack_160 = (undefined4)DAT_1800361a8;
      uStack_15c = DAT_1800361a8._4_4_;
      if (*local_1c0 == 5) {
        local_168 = (undefined4)DAT_1800361b0;
        uStack_164 = DAT_1800361b0._4_4_;
        uStack_160 = (undefined4)DAT_1800361b8;
        uStack_15c = DAT_1800361b8._4_4_;
      }
      puVar11 = &DAT_180036000;
      uVar8 = uVar9;
      do {
        local_17c = *puVar11;
        pcVar14 = (code *)0x0;
        iVar3 = (**(code **)(*param_3 + 0x38))(param_3,1,&local_180);
        if (-1 < iVar3) {
          uVar9 = (ulonglong)*(uint *)(param_4 + 0x204);
          if (*(uint *)(param_4 + 0x204) < 0x40) {
            uVar2 = FUN_180018fb0(&local_180);
            *(int *)(param_4 + 0x208 + (uVar9 & 0xffffffff) * 0x10) =
                 (int)CONCAT71(extraout_var_00,uVar2);
            *(uint *)(param_4 + 0x20c + (ulonglong)*(uint *)(param_4 + 0x204) * 0x10) =
                 (uint)local_17e;
            *(uint *)(param_4 + ((ulonglong)*(uint *)(param_4 + 0x204) + 0x21) * 0x10) = local_17c;
            *(undefined4 *)(param_4 + 0x214 + (ulonglong)*(uint *)(param_4 + 0x204) * 0x10) = 2;
            *(int *)(param_4 + 0x204) = *(int *)(param_4 + 0x204) + 1;
          }
          (**(code **)(param_1 + 0x280))(&local_198);
          goto LAB_180007ed4;
        }
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
        puVar11 = puVar11 + 1;
      } while (uVar6 < 0xe);
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      local_1c0 = local_1c0 + 1;
      if (4 < uVar6) break;
      uVar7 = (ulonglong)local_17c;
      uVar8 = (ulonglong)local_17e;
    }
    (**(code **)(param_1 + 0x280))(&local_198);
    if (param_1 != 0) {
      uVar9 = *(ulonglong *)(param_1 + 0x70);
    }
    pcVar13 = "[WASAPI] Failed to find suitable device format for device info retrieval.";
  }
  FUN_180025970(uVar9,2,pcVar13,pcVar14);
LAB_180007ed4:
  (**(code **)(*local_1b8 + 0x10))();
  return 0;
}


