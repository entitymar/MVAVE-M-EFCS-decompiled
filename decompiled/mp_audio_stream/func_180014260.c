// FUN_180014260 @ 180014260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180014260(longlong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE pvVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  ulonglong uVar7;
  undefined7 extraout_var_00;
  void *pvVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  uint local_b0;
  int *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [40];
  uint local_58;
  ushort local_54;
  ulonglong local_48;
  ulonglong uStack_40;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_e8;
  uVar14 = 0;
  local_b8 = 0;
  local_b0 = 0;
  if (param_1 + 0x187 != (longlong *)0x0) {
    param_1[0x187] = 0;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
    param_1[0x18c] = 0;
    param_1[0x18d] = 0;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0;
  }
  iVar4 = *param_2;
  if (iVar4 == 4) {
    return uStack_40;
  }
  if (((iVar4 - 1U & 0xfffffffd) == 0) && (*(int *)(param_3 + 1) == 1)) {
    return uStack_40;
  }
  if ((iVar4 - 2U < 2) && (*(int *)(param_4 + 1) == 1)) {
    return uStack_40;
  }
  if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
    local_b8 = *(undefined4 *)*param_3;
  }
  uVar9 = uVar14;
  if ((uint *)*param_4 != (uint *)0x0) {
    local_b0 = *(uint *)*param_4;
    uVar9 = (ulonglong)local_b0;
  }
  lVar11 = 0xfe;
  local_a8 = param_2;
  local_a0 = param_3;
  if (iVar4 - 2U < 2) {
    pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    param_1[0x18a] = (longlong)pvVar5;
    if (pvVar5 != (HANDLE)0x0) {
      iVar4 = (**(code **)(*param_1 + 0x198))(uVar9,local_80,0x30);
      if (iVar4 != 0) {
        pcVar12 = "[WinMM] Failed to retrieve internal device caps.";
        goto LAB_1800147de;
      }
      local_88 = 0x14;
      uStack_90 = 0;
      local_98._0_4_ = CONCAT22(local_54,1);
      if (2 < local_54) {
        local_98._0_4_ = 0x20001;
      }
      local_98 = (ulonglong)(uint)local_98;
      uVar6 = FUN_1800196f0(local_58,local_54,(undefined2 *)((longlong)&uStack_90 + 6),
                            (undefined4 *)((longlong)&local_98 + 4));
      if ((int)uVar6 != 0) {
        pcVar12 = "[WinMM] Could not find appropriate format for internal device.";
        goto LAB_1800147de;
      }
      local_c0 = 0x50002;
      uVar15 = (int)((uint)uStack_90._6_2_ * (uint)local_98._2_2_ +
                    ((int)((uint)uStack_90._6_2_ * (uint)local_98._2_2_) >> 0x1f & 7U)) >> 3;
      uStack_90 = CONCAT44(CONCAT22(uStack_90._6_2_,(short)uVar15),
                           (uVar15 & 0xffff) * local_98._4_4_);
      local_c8 = param_1;
      iVar4 = (**(code **)(*param_1 + 0x1a0))(param_1 + 0x188,local_b0,&local_98,param_1[0x18a]);
      if (iVar4 != 0) {
        pcVar12 = "[WinMM] Failed to open capture device.";
        goto LAB_1800147de;
      }
      uVar2 = FUN_180018fb0((short *)&local_98);
      uVar9 = (ulonglong)local_98._2_2_;
      puVar10 = param_4 + 3;
      *(int *)((longlong)param_4 + 0xc) = (int)CONCAT71(extraout_var,uVar2);
      lVar13 = 0xfe;
      *(uint *)(param_4 + 2) = (uint)local_98._2_2_;
      *(int *)((longlong)param_4 + 0x14) = local_98._4_4_;
      if ((puVar10 != (undefined8 *)0x0) && (uVar7 = uVar14, local_98._2_2_ != 0)) {
        do {
          uVar15 = (uint)uVar7;
          if (lVar13 == 0) break;
          uVar7 = FUN_180005500(0,(uint)uVar9,uVar15);
          *(char *)puVar10 = (char)uVar7;
          lVar13 = lVar13 + -1;
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
          uVar7 = (ulonglong)(uVar15 + 1);
        } while (uVar15 + 1 < (uint)uVar9);
      }
      param_2 = local_a8;
      uVar15 = FUN_180002d70((longlong)param_4,*(int *)((longlong)param_4 + 0x14),local_a8[5]);
      *(uint *)(param_4 + 0x23) = uVar15;
      goto LAB_1800144e7;
    }
    pcVar12 = "[WinMM] Failed to create event for fragment enqueing for the capture device.";
LAB_180014368:
    DVar3 = GetLastError();
    FUN_18001cb40(DVar3);
    goto LAB_1800147de;
  }
LAB_1800144e7:
  if ((*param_2 == 1) || (*param_2 == 3)) {
    pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    param_1[0x189] = (longlong)pvVar5;
    if (pvVar5 == (HANDLE)0x0) {
      pcVar12 = "[WinMM] Failed to create event for fragment enqueing for the playback device.";
      goto LAB_180014368;
    }
    iVar4 = (**(code **)(*param_1 + 0x158))(local_b8,local_80,0x34);
    if (iVar4 != 0) {
      pcVar12 = "[WinMM] Failed to retrieve internal device caps.";
      goto LAB_1800147de;
    }
    local_88 = 0x14;
    uStack_90 = 0;
    local_98._0_4_ = CONCAT22(local_54,1);
    if (2 < local_54) {
      local_98._0_4_ = 0x20001;
    }
    local_98 = (ulonglong)(uint)local_98;
    uVar6 = FUN_1800196f0(local_58,local_54,(undefined2 *)((longlong)&uStack_90 + 6),
                          (undefined4 *)((longlong)&local_98 + 4));
    if ((int)uVar6 != 0) {
      pcVar12 = "[WinMM] Could not find appropriate format for internal device.";
      goto LAB_1800147de;
    }
    local_c0 = 0x50002;
    uVar15 = (int)((uint)uStack_90._6_2_ * (uint)local_98._2_2_ +
                  ((int)((uint)uStack_90._6_2_ * (uint)local_98._2_2_) >> 0x1f & 7U)) >> 3;
    uStack_90 = CONCAT44(CONCAT22(uStack_90._6_2_,(short)uVar15),(uVar15 & 0xffff) * local_98._4_4_)
    ;
    local_c8 = param_1;
    iVar4 = (**(code **)(*param_1 + 0x160))(param_1 + 0x187,local_b8,&local_98,param_1[0x189]);
    if (iVar4 != 0) {
      pcVar12 = "[WinMM] Failed to open playback device.";
      goto LAB_1800147de;
    }
    uVar2 = FUN_180018fb0((short *)&local_98);
    uVar9 = (ulonglong)local_98._2_2_;
    puVar10 = param_3 + 3;
    *(int *)((longlong)param_3 + 0xc) = (int)CONCAT71(extraout_var_00,uVar2);
    *(uint *)(param_3 + 2) = (uint)local_98._2_2_;
    *(int *)((longlong)param_3 + 0x14) = local_98._4_4_;
    if ((puVar10 != (undefined8 *)0x0) && (uVar7 = uVar14, local_98._2_2_ != 0)) {
      do {
        uVar15 = (uint)uVar7;
        if (lVar11 == 0) break;
        uVar7 = FUN_180005500(0,(uint)uVar9,uVar15);
        *(char *)puVar10 = (char)uVar7;
        lVar11 = lVar11 + -1;
        puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        uVar7 = (ulonglong)(uVar15 + 1);
      } while (uVar15 + 1 < (uint)uVar9);
    }
    uVar15 = FUN_180002d70((longlong)param_3,*(int *)((longlong)param_3 + 0x14),param_2[5]);
    *(uint *)(param_3 + 0x23) = uVar15;
  }
  iVar4 = *param_2;
  if ((iVar4 == 2) || (uVar9 = uVar14, iVar4 == 3)) {
    local_98 = 0x100000000;
    uStack_90 = 0x300000002;
    local_88 = 4;
    local_84 = 4;
    uVar9 = (ulonglong)
            (uint)((*(int *)((longlong)&local_98 + (longlong)*(int *)((longlong)param_4 + 0xc) * 4)
                    * *(int *)(param_4 + 0x23) * *(int *)(param_4 + 2) + 0x30) *
                  *(int *)(param_4 + 0x24));
  }
  if ((iVar4 - 1U & 0xfffffffd) == 0) {
    local_98 = 0x100000000;
    uStack_90 = 0x300000002;
    local_88 = 4;
    local_84 = 4;
    uVar9 = (ulonglong)
            (uint)((int)uVar9 +
                  (*(int *)((longlong)&local_98 + (longlong)*(int *)((longlong)param_3 + 0xc) * 4) *
                   *(int *)(param_3 + 0x23) * *(int *)(param_3 + 2) + 0x30) *
                  *(int *)(param_3 + 0x24));
  }
  if (*param_1 == -0x100) {
    pvVar8 = malloc(uVar9);
LAB_18001475a:
    if ((pvVar8 != (void *)0x0) && ((int)uVar9 != 0)) {
      memset(pvVar8,0,uVar9);
      param_1[0x192] = (longlong)pvVar8;
LAB_18001477d:
      if ((int)uVar9 != 0) {
        memset(pvVar8,0,uVar9);
      }
      iVar4 = *local_a8;
      if ((iVar4 == 2) || (iVar4 == 3)) {
        param_1[399] = param_1[0x192];
        if (iVar4 == 2) {
          uVar15 = *(uint *)(param_4 + 0x24);
        }
        else {
          uVar15 = *(int *)(param_3 + 0x24) + *(int *)(param_4 + 0x24);
        }
        param_1[0x191] = (ulonglong)uVar15 * 0x30 + param_1[0x192];
        uVar9 = uVar14;
        if (*(int *)(param_4 + 0x24) != 0) {
          do {
            local_98 = 0x100000000;
            uStack_90 = 0x300000002;
            local_88 = 4;
            local_84 = 4;
            iVar4 = *(int *)((longlong)&local_98 + (longlong)*(int *)((longlong)param_4 + 0xc) * 4)
                    * *(int *)(param_4 + 0x23) * *(int *)(param_4 + 2);
            lVar11 = uVar9 * 0x30;
            *(ulonglong *)(lVar11 + param_1[399]) =
                 (ulonglong)(uint)(iVar4 * (int)uVar9) + param_1[0x191];
            *(int *)(param_1[399] + 8 + lVar11) = iVar4;
            *(undefined4 *)(param_1[399] + 0x18 + lVar11) = 0;
            *(undefined4 *)(param_1[399] + 0x1c + lVar11) = 0;
            (**(code **)(*param_1 + 0x1b0))(param_1[0x188],param_1[399] + lVar11,0x30);
            uVar15 = (int)uVar9 + 1;
            *(undefined8 *)(param_1[399] + 0x10 + lVar11) = 0;
            param_3 = local_a0;
            uVar9 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(param_4 + 0x24));
        }
      }
      iVar4 = *local_a8;
      if ((iVar4 != 1) && (iVar4 != 3)) {
        return uStack_40;
      }
      lVar11 = param_1[0x192];
      if (iVar4 == 1) {
        param_1[0x18e] = lVar11;
        lVar11 = (ulonglong)*(uint *)(param_3 + 0x24) * 0x30 + lVar11;
      }
      else {
        local_98 = 0x100000000;
        uStack_90 = 0x300000002;
        local_88 = 4;
        param_1[0x18e] = (ulonglong)*(uint *)(param_4 + 0x24) * 0x30 + lVar11;
        local_84 = 4;
        lVar11 = (ulonglong)(uint)(*(int *)(param_3 + 0x24) + *(int *)(param_4 + 0x24)) * 0x30 +
                 (ulonglong)
                 (uint)(*(int *)((longlong)&local_98 +
                                (longlong)*(int *)((longlong)param_4 + 0xc) * 4) *
                        *(int *)(param_4 + 0x23) * *(int *)(param_4 + 2) * *(int *)(param_4 + 0x24))
                 + lVar11;
      }
      param_1[400] = lVar11;
      if (*(int *)(param_3 + 0x24) == 0) {
        return uStack_40;
      }
      do {
        local_98 = 0x100000000;
        uStack_90 = 0x300000002;
        local_88 = 4;
        local_84 = 4;
        iVar4 = *(int *)((longlong)&local_98 + (longlong)*(int *)((longlong)param_3 + 0xc) * 4) *
                *(int *)(param_3 + 2) * *(int *)(param_3 + 0x23);
        lVar11 = uVar14 * 0x30;
        *(ulonglong *)(lVar11 + param_1[0x18e]) =
             (ulonglong)(uint)(iVar4 * (int)uVar14) + param_1[400];
        *(int *)(param_1[0x18e] + 8 + lVar11) = iVar4;
        *(undefined4 *)(param_1[0x18e] + 0x18 + lVar11) = 0;
        *(undefined4 *)(param_1[0x18e] + 0x1c + lVar11) = 0;
        (**(code **)(*param_1 + 0x170))(param_1[0x187],param_1[0x18e] + lVar11,0x30);
        uVar15 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar15;
        *(undefined8 *)(param_1[0x18e] + 0x10 + lVar11) = 0;
      } while (uVar15 < *(uint *)(param_3 + 0x24));
      return uStack_40;
    }
    param_1[0x192] = (longlong)pvVar8;
    if (pvVar8 != (void *)0x0) goto LAB_18001477d;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x108);
    if (pcVar1 != (code *)0x0) {
      pvVar8 = (void *)(*pcVar1)(uVar9);
      goto LAB_18001475a;
    }
    param_1[0x192] = 0;
  }
  pcVar12 = "[WinMM] Failed to allocate memory for the intermediary buffer.";
LAB_1800147de:
  if (((int)param_1[1] == 2) || ((int)param_1[1] == 3)) {
    if ((param_1[399] != 0) && (uVar9 = uVar14, *(int *)(param_4 + 0x24) != 0)) {
      do {
        (**(code **)(*param_1 + 0x1b8))(param_1[0x188],uVar9 * 0x30 + param_1[399],0x30);
        uVar15 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar15;
      } while (uVar15 < *(uint *)(param_4 + 0x24));
    }
    (**(code **)(*param_1 + 0x1a8))(param_1[0x188]);
  }
  if (((int)param_1[1] == 1) || ((int)param_1[1] == 3)) {
    if ((param_1[399] != 0) && (uVar9 = uVar14, *(int *)(param_3 + 0x24) != 0)) {
      do {
        (**(code **)(*param_1 + 0x178))(param_1[0x187],uVar9 * 0x30 + param_1[0x18e],0x30);
        uVar15 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar15;
      } while (uVar15 < *(uint *)(param_3 + 0x24));
    }
    (**(code **)(*param_1 + 0x168))(param_1[0x187]);
  }
  pvVar8 = (void *)param_1[0x192];
  puVar10 = (undefined8 *)(*param_1 + 0x100);
  if (pvVar8 != (void *)0x0) {
    if (puVar10 == (undefined8 *)0x0) {
      free(pvVar8);
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0x118);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(pvVar8,*puVar10);
      }
    }
  }
  if (*pcVar12 != '\0') {
    if (*param_1 != 0) {
      uVar14 = *(ulonglong *)(*param_1 + 0x70);
    }
    FUN_180025970(uVar14,1,"%s",pcVar12);
  }
  return uStack_40;
}


