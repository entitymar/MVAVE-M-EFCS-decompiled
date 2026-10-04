// FUN_18000a960 @ 18000a960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18000a960(int *param_1,longlong param_2,ulonglong *param_3,longlong param_4,ulonglong *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*_Src) [16];
  undefined4 *puVar7;
  ulonglong uVar8;
  char cVar9;
  int *piVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auStackY_3128 [32];
  int local_30e8 [6];
  ulonglong local_30d0;
  ulonglong local_30c8;
  ulonglong local_30c0;
  ulonglong local_30b8;
  ulonglong local_30b0;
  ulonglong local_30a8;
  ulonglong local_30a0;
  ulonglong *local_3098;
  longlong local_3090;
  longlong local_3088;
  ulonglong local_3080;
  ulonglong local_3078;
  ulonglong local_3070;
  ulonglong *local_3068;
  undefined4 local_3058 [1024];
  undefined1 local_2058 [4096];
  undefined1 local_1058 [4096];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_3128;
  uVar5 = 0;
  local_3088 = param_4;
  local_3068 = param_3;
  local_3090 = param_2;
  local_3098 = param_5;
  local_30b8 = 0;
  if (param_3 != (ulonglong *)0x0) {
    local_30b8 = *param_3;
  }
  local_30a0 = 0;
  if (param_5 != (ulonglong *)0x0) {
    local_30a0 = *param_5;
  }
  local_30e8[0] = 0;
  local_30e8[1] = 1;
  local_30e8[2] = 2;
  local_30e8[3] = 3;
  local_30e8[4] = 4;
  local_30e8[5] = 4;
  local_30e8[0] = 0;
  local_30e8[1] = 1;
  local_30e8[2] = 2;
  local_30e8[3] = 3;
  local_30e8[4] = 4;
  local_3080 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                      ZEXT416((uint)(local_30e8[param_1[8]] * param_1[9])),0);
  local_30e8[5] = 4;
  local_30e8[0] = 0;
  local_30e8[1] = 1;
  local_30e8[2] = 2;
  local_30e8[3] = 3;
  local_3078 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                      ZEXT416((uint)(local_30e8[param_1[8]] * param_1[10])),0);
  local_30e8[4] = 4;
  local_30e8[5] = 4;
  local_30a8 = 0;
  local_30c0 = 0;
  local_3070 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                      ZEXT416((uint)(local_30e8[param_1[0x20]] * param_1[0x21])),0);
  local_30d0 = uVar5;
  if (local_30a0 != 0) {
    do {
      uVar5 = local_30c0;
      piVar10 = param_1 + 8;
      pauVar4 = (undefined1 (*) [16])0x0;
      pauVar6 = pauVar4;
      if (local_3090 != 0) {
        local_30e8[0] = 0;
        local_30e8[1] = 1;
        local_30e8[2] = 2;
        local_30e8[3] = 3;
        local_30e8[4] = 4;
        local_30e8[5] = 4;
        pauVar6 = (undefined1 (*) [16])
                  ((uint)(local_30e8[*param_1] * param_1[2]) * local_30a8 + local_3090);
      }
      pauVar11 = pauVar4;
      if (local_3088 != 0) {
        local_30e8[0] = 0;
        local_30e8[1] = 1;
        local_30e8[2] = 2;
        local_30e8[3] = 3;
        local_30e8[4] = 4;
        local_30e8[5] = 4;
        pauVar11 = (undefined1 (*) [16])
                   ((uint)(local_30e8[param_1[1]] * param_1[3]) * local_30c0 + local_3088);
      }
      local_30c8 = local_30a0 - local_30c0;
      if (local_3078 < local_30c8) {
        local_30c8 = local_3078;
      }
      if ((*(char *)((longlong)param_1 + 0x129) != '\0') && (local_3070 < local_30c8)) {
        local_30c8 = local_3070;
      }
      cVar9 = (char)param_1[0x4a];
      local_30d0 = local_30b8 - local_30a8;
      if ((cVar9 != '\0') && (local_3080 < local_30b8 - local_30a8)) {
        local_30d0 = local_3080;
      }
      if (local_3078 < local_30d0) {
        local_30d0 = local_3078;
      }
      local_30b0 = 0;
      if (((param_1 + 0x1a == (int *)0x0) || (*(longlong *)(param_1 + 0x1c) == 0)) ||
         (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x38), pcVar1 == (code *)0x0)) {
LAB_18000ac3f:
        uVar8 = ((uint)param_1[0x22] * local_30c8) / (ulonglong)(uint)param_1[0x23];
      }
      else {
        iVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),local_30c8
                          ,&local_30b0);
        cVar9 = (char)param_1[0x4a];
        uVar8 = local_30b0;
        if (iVar2 != 0) goto LAB_18000ac3f;
      }
      if (uVar8 < local_30d0) {
        local_30d0 = uVar8;
      }
      _Src = pauVar6;
      if ((cVar9 != '\0') && (_Src = pauVar4, pauVar6 != (undefined1 (*) [16])0x0)) {
        FUN_180028b70((undefined1 (*) [16])local_2058,*piVar10,pauVar6,*param_1,
                      (uint)param_1[2] * local_30d0,param_1[6]);
        _Src = (undefined1 (*) [16])local_2058;
      }
      if (piVar10 == (int *)0x0) {
        return 0xfffffffe;
      }
      if (_Src == (undefined1 (*) [16])0x0) {
        puVar7 = local_3058;
        local_30e8[0] = 0;
        local_30e8[1] = 1;
        local_30e8[2] = 2;
        local_30e8[3] = 3;
        local_30e8[4] = 4;
        local_30e8[5] = 4;
        uVar8 = (uint)(local_30e8[*piVar10] * param_1[10]) * local_30d0;
        uVar5 = local_30c0;
        while (local_30c0 = uVar5, uVar8 != 0) {
          uVar5 = uVar8;
          if (0xffffffff < uVar8) {
            uVar5 = 0xffffffff;
          }
          if ((puVar7 != (undefined4 *)0x0) && (uVar5 != 0)) {
            memset(puVar7,0,uVar5);
          }
          puVar7 = (undefined4 *)((longlong)puVar7 + uVar5);
          uVar8 = uVar8 - uVar5;
          uVar5 = local_30c0;
        }
      }
      else {
        iVar2 = param_1[0xc];
        if (iVar2 == 1) {
          puVar7 = local_3058;
          local_30e8[0] = 0;
          local_30e8[1] = 1;
          local_30e8[2] = 2;
          local_30e8[3] = 3;
          local_30e8[4] = 4;
          local_30e8[5] = 4;
          uVar8 = (uint)(local_30e8[*piVar10] * param_1[10]) * local_30d0;
          uVar5 = local_30c0;
          while (local_30c0 = uVar5, uVar8 != 0) {
            uVar5 = uVar8;
            if (0xffffffff < uVar8) {
              uVar5 = 0xffffffff;
            }
            memcpy(puVar7,_Src,uVar5);
            puVar7 = (undefined4 *)((longlong)puVar7 + uVar5);
            _Src = (undefined1 (*) [16])((longlong)*_Src + uVar5);
            uVar8 = uVar8 - uVar5;
            uVar5 = local_30c0;
          }
        }
        else {
          if (iVar2 == 2) {
            uVar3 = FUN_180003560(piVar10,(longlong)local_3058,(longlong)_Src,local_30d0);
          }
          else if (iVar2 == 3) {
            uVar3 = FUN_180003220(piVar10,(longlong)local_3058,(undefined4 *)_Src,local_30d0);
          }
          else if (iVar2 == 4) {
            uVar3 = FUN_180005270(local_3058,param_1[10],(longlong)_Src,param_1[9],local_30d0,
                                  *(byte **)(param_1 + 0x12),*piVar10);
          }
          else {
            uVar3 = FUN_180003930(piVar10,local_3058,(longlong)_Src,local_30d0);
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      pauVar6 = (undefined1 (*) [16])local_1058;
      if (*(char *)((longlong)param_1 + 0x129) == '\0') {
        pauVar6 = pauVar11;
      }
      if (param_1 + 0x1a == (int *)0x0) {
        return 0xfffffffe;
      }
      if ((*(longlong *)(param_1 + 0x1c) == 0) ||
         (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x18), pcVar1 == (code *)0x0)) {
        return 0xffffffe3;
      }
      uVar3 = (*pcVar1)(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),local_3058,
                        &local_30d0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((*(char *)((longlong)param_1 + 0x129) != (char)uVar3) &&
         (pauVar11 != (undefined1 (*) [16])0x0)) {
        FUN_180028b70(pauVar11,param_1[1],pauVar6,param_1[0x20],(uint)param_1[3] * local_30c8,
                      param_1[6]);
      }
      local_30d0 = local_30a8 + local_30d0;
      uVar5 = uVar5 + local_30c8;
      local_30a8 = local_30d0;
      local_30c0 = uVar5;
      param_5 = local_3098;
    } while ((local_30c8 != 0) && (uVar5 < local_30a0));
  }
  if (local_3068 != (ulonglong *)0x0) {
    *local_3068 = local_30d0;
  }
  if (param_5 != (ulonglong *)0x0) {
    *param_5 = uVar5;
  }
  return 0;
}


