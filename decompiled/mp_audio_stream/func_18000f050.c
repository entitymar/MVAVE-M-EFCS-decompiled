// FUN_18000f050 @ 18000f050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000f050(longlong param_1,uint param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *_Src;
  undefined4 *puVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 auStackY_10d8 [32];
  int local_10a8 [6];
  ulonglong local_1090;
  ulonglong local_1088;
  longlong local_1080;
  ulonglong local_1078;
  int *local_1070;
  longlong local_1068;
  ulonglong local_1060;
  ulonglong local_1058;
  undefined4 local_1048 [1024];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_10d8;
  local_1088 = (ulonglong)param_2;
  local_1068 = param_1;
  if (*(char *)(param_1 + 0xc1c) == '\0') {
    local_10a8[0] = 0;
    local_10a8[1] = 1;
    local_10a8[2] = 2;
    local_10a8[3] = 3;
    local_10a8[4] = 4;
    local_10a8[5] = 4;
    piVar9 = (int *)(param_1 + 0xaf0);
    local_1070 = piVar9;
    local_1080 = 0;
    local_1058 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                        ZEXT416((uint)(local_10a8[*(int *)(param_1 + 0x8cc)] *
                                      *(int *)(param_1 + 0x8d0))),0);
    local_1090 = local_1058;
    local_1060 = local_1088;
    if (piVar9 != (int *)0x0) {
      do {
        lVar6 = local_1080;
        local_10a8[5] = 4;
        local_10a8[4] = 4;
        local_10a8[3] = 3;
        local_10a8[2] = 2;
        local_10a8[1] = 1;
        local_10a8[0] = 0;
        local_1090 = local_1058;
        switch(piVar9[7]) {
        case 0:
          local_10a8[0] = 0;
          uVar3 = local_1058;
          if (local_1088 < local_1058) {
            uVar3 = local_1088;
          }
          local_10a8[1] = 1;
          local_1078 = uVar3;
          local_10a8[2] = 2;
          local_10a8[3] = 3;
          local_10a8[4] = 4;
          local_10a8[5] = 4;
          if (param_3 == (undefined4 *)0x0) {
            puVar7 = local_1048;
            for (uVar8 = (uint)(local_10a8[piVar9[1]] * piVar9[3]) * uVar3; uVar8 != 0;
                uVar8 = uVar8 - uVar5) {
              uVar5 = uVar8;
              if (0xffffffff < uVar8) {
                uVar5 = 0xffffffff;
              }
              if ((puVar7 != (undefined4 *)0x0) && (uVar5 != 0)) {
                memset(puVar7,0,uVar5);
              }
              puVar7 = (undefined4 *)((longlong)puVar7 + uVar5);
            }
          }
          else {
            puVar7 = local_1048;
            uVar8 = (uint)(local_10a8[piVar9[1]] * piVar9[3]) * uVar3;
            _Src = param_3;
            if (uVar8 != 0) {
              do {
                uVar3 = uVar8;
                if (0xffffffff < uVar8) {
                  uVar3 = 0xffffffff;
                }
                memcpy(puVar7,_Src,uVar3);
                puVar7 = (undefined4 *)((longlong)puVar7 + uVar3);
                uVar8 = uVar8 - uVar3;
                _Src = (undefined4 *)((longlong)_Src + uVar3);
              } while (uVar8 != 0);
              local_1080 = lVar6;
              uVar3 = local_1078;
              piVar9 = local_1070;
            }
          }
          local_1088 = uVar3;
          local_1090 = uVar3;
          lVar6 = local_1080;
          param_1 = local_1068;
          goto LAB_18000f443;
        case 1:
          uVar3 = local_1058;
          if (local_1088 < local_1058) {
            uVar3 = local_1088;
          }
          if (param_3 == (undefined4 *)0x0) {
            puVar7 = local_1048;
            local_10a8[0] = 0;
            local_10a8[1] = 1;
            local_10a8[2] = 2;
            local_10a8[3] = 3;
            local_10a8[4] = 4;
            local_10a8[5] = 4;
            for (uVar8 = (uint)(local_10a8[piVar9[1]] * piVar9[3]) * uVar3; uVar8 != 0;
                uVar8 = uVar8 - uVar5) {
              uVar5 = uVar8;
              if (0xffffffff < uVar8) {
                uVar5 = 0xffffffff;
              }
              if ((puVar7 != (undefined4 *)0x0) && (uVar5 != 0)) {
                memset(puVar7,0,uVar5);
              }
              puVar7 = (undefined4 *)((longlong)puVar7 + uVar5);
            }
            local_1088 = uVar3;
            local_1090 = uVar3;
            lVar6 = local_1080;
          }
          else {
            FUN_180028b70((undefined1 (*) [16])local_1048,piVar9[1],param_3,*piVar9,
                          (uint)piVar9[2] * uVar3,piVar9[6]);
            local_1088 = uVar3;
            local_1090 = uVar3;
          }
          goto LAB_18000f443;
        case 2:
          uVar4 = FUN_18000afa0(piVar9,param_3,&local_1088,local_1048,&local_1090);
          iVar2 = (int)uVar4;
          break;
        case 3:
          if (((char)piVar9[0x4a] == '\0') && (*(char *)((longlong)piVar9 + 0x129) == '\0')) {
            if (piVar9 + 0x1a == (int *)0x0) {
              iVar2 = -2;
            }
            else if ((*(longlong *)(piVar9 + 0x1c) == 0) ||
                    (pcVar1 = *(code **)(*(longlong *)(piVar9 + 0x1c) + 0x18), pcVar1 == (code *)0x0
                    )) {
              iVar2 = -0x1d;
            }
            else {
              iVar2 = (*pcVar1)(*(undefined8 *)(piVar9 + 0x1e),*(undefined8 *)(piVar9 + 0x1a),
                                param_3,&local_1088);
            }
          }
          else {
            uVar3 = FUN_18000bcb0(piVar9,(longlong)param_3,&local_1088,(longlong)local_1048,
                                  &local_1090);
            iVar2 = (int)uVar3;
          }
          break;
        case 4:
          uVar4 = FUN_18000b700(piVar9,(longlong)param_3,&local_1088,(longlong)local_1048,
                                &local_1090);
          iVar2 = (int)uVar4;
          break;
        case 5:
          uVar4 = FUN_18000a960(piVar9,(longlong)param_3,&local_1088,(longlong)local_1048,
                                &local_1090);
          iVar2 = (int)uVar4;
          break;
        default:
          goto switchD_18000f170_default;
        }
        if (iVar2 != 0) {
          return;
        }
LAB_18000f443:
        if (local_1090 != 0) {
          FUN_18000c260(param_1,(void *)0x0,(longlong)local_1048,(uint)local_1090);
        }
        local_10a8[0] = 0;
        local_10a8[1] = 1;
        local_10a8[2] = 2;
        local_10a8[3] = 3;
        local_10a8[4] = 4;
        local_10a8[5] = 4;
        local_1080 = lVar6 + local_1088;
        param_3 = (undefined4 *)
                  ((longlong)param_3 +
                  (uint)(local_10a8[*(int *)(param_1 + 0x9d4)] * *(int *)(param_1 + 0x9d8)) *
                  local_1088);
        if ((local_1088 == 0) && (local_1090 == 0)) {
          return;
        }
        local_1088 = local_1060 - (lVar6 + local_1088);
        local_1090 = local_1058;
      } while( true );
    }
  }
  else {
    FUN_18000c260(param_1,(void *)0x0,(longlong)param_3,param_2);
  }
switchD_18000f170_default:
  return;
}


