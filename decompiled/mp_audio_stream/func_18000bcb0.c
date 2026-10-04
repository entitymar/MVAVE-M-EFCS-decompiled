// FUN_18000bcb0 @ 18000bcb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000bcb0(int *param_1,longlong param_2,ulonglong *param_3,longlong param_4,
                       ulonglong *param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStackY_20d8 [32];
  int local_20a8 [6];
  ulonglong local_2090;
  ulonglong local_2088;
  ulonglong *local_2080;
  ulonglong local_2078;
  longlong local_2070;
  longlong local_2068;
  ulonglong *local_2060;
  undefined1 local_2058 [4096];
  undefined1 local_1058 [4096];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_20d8;
  uVar3 = 0;
  local_2060 = param_3;
  local_2070 = param_4;
  local_2068 = param_2;
  local_2080 = param_5;
  local_2078 = 0;
  if (param_3 != (ulonglong *)0x0) {
    local_2078 = *param_3;
  }
  uVar8 = uVar3;
  if (param_5 != (ulonglong *)0x0) {
    uVar8 = *param_5;
  }
  uVar7 = uVar3;
  uVar10 = uVar3;
  if (uVar8 == 0) {
LAB_18000c0b1:
    if (local_2060 != (ulonglong *)0x0) {
      *local_2060 = uVar7;
    }
    if (param_5 != (ulonglong *)0x0) {
      *param_5 = uVar10;
    }
    return uVar3;
  }
  do {
    pvVar5 = (void *)0x0;
    iVar1 = param_1[0x20];
    local_20a8[0] = 0;
    local_20a8[1] = 1;
    local_20a8[2] = 2;
    local_20a8[3] = 3;
    local_20a8[4] = 4;
    local_20a8[5] = 4;
    uVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                   ZEXT416((uint)(param_1[0x21] * local_20a8[iVar1])),0);
    if (local_2068 != 0) {
      local_20a8[0] = 0;
      local_20a8[1] = 1;
      local_20a8[2] = 2;
      local_20a8[3] = 3;
      local_20a8[4] = 4;
      local_20a8[5] = 4;
      pvVar5 = (void *)((uint)(local_20a8[*param_1] * param_1[2]) * uVar7 + local_2068);
    }
    pauVar9 = (undefined1 (*) [16])0x0;
    if (local_2070 != 0) {
      local_20a8[0] = 0;
      local_20a8[1] = 1;
      local_20a8[2] = 2;
      local_20a8[3] = 3;
      local_20a8[4] = 4;
      local_20a8[5] = 4;
      pauVar9 = (undefined1 (*) [16])
                (local_2070 + (uint)(local_20a8[param_1[1]] * param_1[3]) * uVar10);
    }
    local_20a8[5] = 4;
    local_20a8[4] = 4;
    local_20a8[3] = 3;
    local_20a8[2] = 2;
    local_20a8[1] = 1;
    local_20a8[0] = 0;
    local_2088 = local_2078 - uVar7;
    if ((char)param_1[0x4a] == '\0') {
      local_2090 = uVar8 - uVar10;
      if (uVar3 < uVar8 - uVar10) {
        local_2090 = uVar3;
      }
      param_5 = local_2080;
      if (param_1 + 0x1a == (int *)0x0) {
        uVar3 = 0xfffffffe;
        goto LAB_18000c0b1;
      }
      if ((*(longlong *)(param_1 + 0x1c) == 0) ||
         (pcVar6 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x18), pcVar6 == (code *)0x0)) {
        uVar3 = 0xffffffe3;
        goto LAB_18000c0b1;
      }
      uVar2 = (*pcVar6)(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),pvVar5,
                        &local_2088);
      uVar3 = (ulonglong)uVar2;
      bVar11 = uVar2 == 0;
    }
    else {
      local_20a8[0] = 0;
      local_20a8[1] = 1;
      local_20a8[2] = 2;
      local_20a8[3] = 3;
      local_20a8[4] = 4;
      local_20a8[5] = 4;
      uVar4 = (ulonglong)
              SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                     ZEXT416((uint)(param_1[0x21] * local_20a8[iVar1])),0);
      if (uVar4 < local_2078 - uVar7) {
        local_2088 = uVar4;
      }
      if ((*(char *)((longlong)param_1 + 0x129) != '\0') && (uVar3 < local_2088)) {
        local_2088 = uVar3;
      }
      if (pvVar5 == (void *)0x0) {
        memset(local_2058,0,0x1000);
      }
      else {
        FUN_180028b70((undefined1 (*) [16])local_2058,iVar1,pvVar5,*param_1,
                      (uint)param_1[2] * local_2088,param_1[6]);
      }
      local_2090 = uVar8 - uVar10;
      if (*(char *)((longlong)param_1 + 0x129) == '\0') {
        if (param_1 == (int *)0xffffffffffffff98) {
          uVar3 = 0xfffffffe;
          bVar11 = false;
        }
        else {
          if ((*(longlong *)(param_1 + 0x1c) != 0) &&
             (pcVar6 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x18), pcVar6 != (code *)0x0))
          goto LAB_18000bfa2;
LAB_18000bfbb:
          uVar3 = 0xffffffe3;
          bVar11 = false;
        }
      }
      else {
        if (uVar3 < uVar8 - uVar10) {
          local_2090 = uVar3;
        }
        if (param_1 == (int *)0xffffffffffffff98) {
          uVar3 = 0xfffffffe;
          bVar11 = false;
        }
        else {
          if ((*(longlong *)(param_1 + 0x1c) == 0) ||
             (pcVar6 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x18), pcVar6 == (code *)0x0))
          goto LAB_18000bfbb;
LAB_18000bfa2:
          uVar2 = (*pcVar6)(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),
                            local_2058,&local_2088);
          uVar3 = (ulonglong)uVar2;
          bVar11 = uVar2 == 0;
        }
      }
    }
    param_5 = local_2080;
    if (!bVar11) goto LAB_18000c0b1;
    if ((*(char *)((longlong)param_1 + 0x129) != '\0') && (pauVar9 != (undefined1 (*) [16])0x0)) {
      FUN_180028b70(pauVar9,param_1[1],local_1058,param_1[0x20],(uint)param_1[0x21] * local_2090,
                    param_1[6]);
    }
    uVar7 = uVar7 + local_2088;
    uVar10 = uVar10 + local_2090;
    param_5 = local_2080;
    if ((local_2090 == 0) || (uVar8 <= uVar10)) goto LAB_18000c0b1;
  } while( true );
}


