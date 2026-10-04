// FUN_18000b700 @ 18000b700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18000b700(int *param_1,longlong param_2,ulonglong *param_3,longlong param_4,ulonglong *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *_Src;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  char cVar8;
  int *piVar9;
  undefined1 (*_Dst) [16];
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auStackY_3128 [32];
  int local_30e8 [6];
  ulonglong local_30d0;
  ulonglong local_30c8;
  undefined1 (*local_30c0) [16];
  ulonglong local_30b8;
  ulonglong local_30b0;
  ulonglong local_30a8;
  ulonglong local_30a0;
  longlong local_3098;
  ulonglong local_3090;
  longlong local_3088;
  ulonglong *local_3080;
  ulonglong local_3078;
  ulonglong local_3070;
  ulonglong local_3068;
  ulonglong *local_3060;
  undefined4 local_3058 [1024];
  undefined1 local_2058 [4096];
  undefined1 local_1058 [4096];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_3128;
  local_30c8 = 0;
  local_3098 = param_4;
  local_3060 = param_3;
  local_3088 = param_2;
  local_3080 = param_5;
  local_30a8 = 0;
  if (param_3 != (ulonglong *)0x0) {
    local_30a8 = *param_3;
  }
  local_30b0 = 0;
  if (param_5 != (ulonglong *)0x0) {
    local_30b0 = *param_5;
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
  local_3078 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                      ZEXT416((uint)(param_1[0x21] * local_30e8[param_1[0x20]])),0);
  local_30e8[5] = 4;
  local_30e8[0] = 0;
  local_30e8[1] = 1;
  local_30e8[2] = 2;
  local_30e8[3] = 3;
  local_3070 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                      ZEXT416((uint)(param_1[0x21] * local_30e8[param_1[0x20]])),0);
  local_30e8[4] = 4;
  local_30e8[5] = 4;
  local_3090 = 0;
  local_30b8 = 0;
  local_3068 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                      ZEXT416((uint)(local_30e8[param_1[8]] * param_1[10])),0);
  uVar10 = local_30c8;
  if (local_30b0 != 0) {
    do {
      uVar10 = local_30b8;
      puVar4 = (undefined1 *)0x0;
      piVar9 = param_1 + 8;
      piVar5 = param_1 + 0x1a;
      local_30c0 = (undefined1 (*) [16])0x0;
      if (local_3088 != 0) {
        local_30e8[0] = 0;
        local_30e8[1] = 1;
        local_30e8[2] = 2;
        local_30e8[3] = 3;
        local_30e8[4] = 4;
        local_30e8[5] = 4;
        puVar4 = (undefined1 *)((uint)(local_30e8[*param_1] * param_1[2]) * local_3090 + local_3088)
        ;
      }
      if (param_4 != 0) {
        local_30e8[0] = 0;
        local_30e8[1] = 1;
        local_30e8[2] = 2;
        local_30e8[3] = 3;
        local_30e8[4] = 4;
        local_30e8[5] = 4;
        local_30c0 = (undefined1 (*) [16])
                     ((uint)(local_30e8[param_1[1]] * param_1[3]) * local_30b8 + param_4);
      }
      pauVar7 = local_30c0;
      cVar8 = (char)param_1[0x4a];
      local_30c8 = local_30a8 - local_3090;
      if ((cVar8 != '\0') && (local_3078 < local_30c8)) {
        local_30c8 = local_3078;
      }
      local_30d0 = local_30b0 - local_30b8;
      if (local_3070 < local_30b0 - local_30b8) {
        local_30d0 = local_3070;
      }
      if ((*(char *)((longlong)param_1 + 0x129) != '\0') && (local_3068 < local_30d0)) {
        local_30d0 = local_3068;
      }
      local_30a0 = 0;
      if (((piVar5 == (int *)0x0) || (*(longlong *)(param_1 + 0x1c) == 0)) ||
         (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x38), pcVar1 == (code *)0x0)) {
LAB_18000b9e5:
        uVar6 = ((uint)param_1[0x22] * local_30d0) / (ulonglong)(uint)param_1[0x23];
      }
      else {
        iVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)piVar5,local_30d0,
                          &local_30a0);
        cVar8 = (char)param_1[0x4a];
        uVar6 = local_30a0;
        if (iVar2 != 0) goto LAB_18000b9e5;
      }
      if (uVar6 < local_30c8) {
        local_30c8 = uVar6;
      }
      if (cVar8 != '\0') {
        if (local_3088 == 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          FUN_180028b70((undefined1 (*) [16])local_2058,param_1[0x20],puVar4,*param_1,
                        (uint)param_1[2] * local_30c8,param_1[6]);
          puVar4 = local_2058;
        }
      }
      if (piVar5 == (int *)0x0) {
        return 0xfffffffe;
      }
      if ((*(longlong *)(param_1 + 0x1c) == 0) ||
         (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1c) + 0x18), pcVar1 == (code *)0x0)) {
        return 0xffffffe3;
      }
      uVar3 = (*pcVar1)(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)piVar5,puVar4,&local_30c8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (param_4 != 0) {
        pauVar11 = (undefined1 (*) [16])local_1058;
        if (*(char *)((longlong)param_1 + 0x129) == (char)uVar3) {
          pauVar11 = pauVar7;
        }
        if (piVar9 == (int *)0x0) {
          return 0xfffffffe;
        }
        if (pauVar11 == (undefined1 (*) [16])0x0) {
          return 0xfffffffe;
        }
        iVar2 = param_1[0xc];
        if (iVar2 == 1) {
          _Src = local_3058;
          local_30e8[0] = 0;
          local_30e8[1] = 1;
          local_30e8[2] = 2;
          local_30e8[3] = 3;
          local_30e8[4] = 4;
          local_30e8[5] = 4;
          uVar6 = (uint)(local_30e8[*piVar9] * param_1[10]) * local_30d0;
          _Dst = pauVar11;
          pauVar7 = local_30c0;
          uVar10 = local_30b8;
          while (local_30c0 = pauVar7, local_30b8 = uVar10, uVar6 != 0) {
            uVar10 = uVar6;
            if (0xffffffff < uVar6) {
              uVar10 = 0xffffffff;
            }
            memcpy(_Dst,_Src,uVar10);
            _Dst = (undefined1 (*) [16])((longlong)*_Dst + uVar10);
            _Src = (undefined4 *)((longlong)_Src + uVar10);
            uVar6 = uVar6 - uVar10;
            pauVar7 = local_30c0;
            uVar10 = local_30b8;
          }
        }
        else {
          if (iVar2 == 2) {
            uVar3 = FUN_180003560(piVar9,(longlong)pauVar11,(longlong)local_3058,local_30d0);
          }
          else if (iVar2 == 3) {
            uVar3 = FUN_180003220(piVar9,(longlong)pauVar11,local_3058,local_30d0);
          }
          else if (iVar2 == 4) {
            uVar3 = FUN_180005270((undefined4 *)pauVar11,param_1[10],(longlong)local_3058,param_1[9]
                                  ,local_30d0,*(byte **)(param_1 + 0x12),*piVar9);
          }
          else {
            uVar3 = FUN_180003930(piVar9,pauVar11,(longlong)local_3058,local_30d0);
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        param_4 = local_3098;
        if (*(char *)((longlong)param_1 + 0x129) != '\0') {
          FUN_180028b70(pauVar7,param_1[1],pauVar11,param_1[8],(uint)param_1[10] * local_30d0,
                        param_1[6]);
          param_4 = local_3098;
        }
      }
      local_30c8 = local_3090 + local_30c8;
      uVar10 = uVar10 + local_30d0;
      local_3090 = local_30c8;
      local_30b8 = uVar10;
      param_5 = local_3080;
    } while ((local_30d0 != 0) && (uVar10 < local_30b0));
  }
  if (local_3060 != (ulonglong *)0x0) {
    *local_3060 = local_30c8;
  }
  if (param_5 != (ulonglong *)0x0) {
    *param_5 = uVar10;
  }
  return 0;
}


