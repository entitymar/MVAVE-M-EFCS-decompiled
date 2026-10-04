// FUN_18000e780 @ 18000e780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000e780(longlong param_1,uint param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStackY_10c8 [32];
  ulonglong local_1098;
  int local_1090 [6];
  ulonglong local_1078;
  ulonglong local_1070;
  ulonglong local_1068;
  undefined1 (*local_1060) [16];
  ulonglong local_1058;
  ulonglong local_1050;
  undefined4 local_1048 [1024];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_10c8;
  local_1060 = param_3;
  if (*(char *)(param_1 + 0x684) == '\0') {
    uVar6 = (ulonglong)param_2;
    local_1068 = uVar6;
    local_1070 = 0;
    if (*(longlong *)(param_1 + 0x6a0) == 0) {
      if (param_2 != 0) {
        piVar1 = (int *)(param_1 + 0x558);
        while( true ) {
          local_1090[0] = 0;
          local_1090[1] = 1;
          uVar9 = uVar6 - local_1070;
          local_1090[2] = 2;
          local_1090[3] = 3;
          local_1090[4] = 4;
          local_1090[5] = 4;
          uVar5 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                         ZEXT416((uint)(local_1090[*(int *)(param_1 + 0x334)] *
                                       *(int *)(param_1 + 0x338))),0);
          if (uVar9 <= uVar5) {
            uVar5 = uVar9;
          }
          local_1058 = 0;
          local_1060 = param_3;
          if (piVar1 != (int *)0x0) {
            if (*(char *)(param_1 + 0x683) == '\0') {
              local_1058 = uVar9;
            }
            else if ((((undefined8 *)(param_1 + 0x5c0) != (undefined8 *)0x0) &&
                     (*(longlong *)(param_1 + 0x5c8) != 0)) &&
                    (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x5c8) + 0x38),
                    pcVar2 != (code *)0x0)) {
              (*pcVar2)(*(undefined8 *)(param_1 + 0x5d0),*(undefined8 *)(param_1 + 0x5c0),uVar9,
                        &local_1058);
            }
          }
          if (local_1058 < uVar5) {
            uVar5 = local_1058;
          }
          if (uVar5 != 0) {
            FUN_18000c260(param_1,local_1048,0,(uint)uVar5);
          }
          local_1078 = uVar9;
          if (piVar1 == (int *)0x0) break;
          local_1098 = uVar5;
          switch(*(undefined4 *)(param_1 + 0x574)) {
          case 0:
            if (uVar5 < uVar9) {
              uVar9 = uVar5;
            }
            local_1050 = uVar9;
            if (param_3 != (undefined1 (*) [16])0x0) {
              local_1090[0] = 0;
              local_1090[1] = 1;
              local_1090[2] = 2;
              local_1090[3] = 3;
              local_1090[4] = 4;
              local_1090[5] = 4;
              puVar7 = local_1048;
              uVar5 = (uint)(local_1090[*(int *)(param_1 + 0x55c)] * *(int *)(param_1 + 0x564)) *
                      uVar9;
              pauVar8 = param_3;
              uVar9 = local_1050;
              uVar6 = local_1068;
              param_3 = local_1060;
              while (local_1068 = uVar6, local_1050 = uVar9, uVar5 != 0) {
                uVar6 = uVar5;
                if (0xffffffff < uVar5) {
                  uVar6 = 0xffffffff;
                }
                local_1060 = param_3;
                memcpy(pauVar8,puVar7,uVar6);
                pauVar8 = (undefined1 (*) [16])((longlong)*pauVar8 + uVar6);
                puVar7 = (undefined4 *)((longlong)puVar7 + uVar6);
                uVar5 = uVar5 - uVar6;
                uVar9 = local_1050;
                uVar6 = local_1068;
                param_3 = local_1060;
              }
            }
LAB_18000ee22:
            local_1078 = uVar9;
            local_1098 = uVar9;
            goto LAB_18000ef64;
          case 1:
            if (uVar5 < uVar9) {
              uVar9 = uVar5;
            }
            if (param_3 == (undefined1 (*) [16])0x0) goto LAB_18000ee22;
            FUN_180028b70(param_3,*(int *)(param_1 + 0x55c),local_1048,*piVar1,
                          *(uint *)(param_1 + 0x560) * uVar9,*(int *)(param_1 + 0x570));
            local_1078 = uVar9;
            local_1098 = uVar9;
            goto LAB_18000ef64;
          case 2:
            uVar4 = FUN_18000afa0(piVar1,local_1048,&local_1098,(undefined4 *)param_3,&local_1078);
            iVar3 = (int)uVar4;
            break;
          case 3:
            if ((*(char *)(param_1 + 0x680) == '\0') && (*(char *)(param_1 + 0x681) == '\0')) {
              if ((undefined8 *)(param_1 + 0x5c0) == (undefined8 *)0x0) {
                iVar3 = -2;
              }
              else if ((*(longlong *)(param_1 + 0x5c8) == 0) ||
                      (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x5c8) + 0x18),
                      pcVar2 == (code *)0x0)) {
                iVar3 = -0x1d;
              }
              else {
                iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x5d0),*(undefined8 *)(param_1 + 0x5c0),
                                  local_1048,&local_1098);
              }
            }
            else {
              uVar9 = FUN_18000bcb0(piVar1,(longlong)local_1048,&local_1098,(longlong)param_3,
                                    &local_1078);
              iVar3 = (int)uVar9;
            }
            break;
          case 4:
            uVar4 = FUN_18000b700(piVar1,(longlong)local_1048,&local_1098,(longlong)param_3,
                                  &local_1078);
            iVar3 = (int)uVar4;
            break;
          case 5:
            uVar4 = FUN_18000a960(piVar1,(longlong)local_1048,&local_1098,(longlong)param_3,
                                  &local_1078);
            iVar3 = (int)uVar4;
            break;
          default:
            goto switchD_18000e8d4_default;
          }
          if (iVar3 != 0) {
            return;
          }
LAB_18000ef64:
          local_1070 = local_1070 + local_1078;
          local_1090[0] = 0;
          local_1090[1] = 1;
          local_1090[2] = 2;
          local_1090[3] = 3;
          local_1090[4] = 4;
          local_1090[5] = 4;
          param_3 = (undefined1 (*) [16])
                    (*param_3 +
                    (uint)(local_1090[*(int *)(param_1 + 0x43c)] * *(int *)(param_1 + 0x440)) *
                    local_1078);
          local_1060 = param_3;
          if ((local_1098 == 0) && (local_1078 == 0)) {
            return;
          }
          if (uVar6 <= local_1070) {
            return;
          }
        }
      }
    }
    else if (param_2 != 0) {
      do {
        uVar9 = *(ulonglong *)(param_1 + 0x6b8);
        if (uVar9 == 0) goto LAB_18000ec29;
        local_1078 = uVar6 - local_1070;
        local_1098 = local_1078;
        if (uVar9 < local_1078) {
          local_1098 = uVar9;
        }
        piVar1 = (int *)(param_1 + 0x558);
        local_1090[0] = 0;
        local_1090[1] = 1;
        local_1090[2] = 2;
        local_1090[3] = 3;
        local_1090[4] = 4;
        local_1090[5] = 4;
        puVar7 = (undefined4 *)
                 ((ulonglong)
                  (uint)(local_1090[*(int *)(param_1 + 0x334)] * *(int *)(param_1 + 0x338)) *
                  *(longlong *)(param_1 + 0x6b0) + *(longlong *)(param_1 + 0x6a0));
        if (piVar1 == (int *)0x0) {
          return;
        }
        switch(*(undefined4 *)(param_1 + 0x574)) {
        case 0:
          uVar9 = local_1078;
          if (local_1098 < local_1078) {
            uVar9 = local_1098;
          }
          if (param_3 != (undefined1 (*) [16])0x0) {
            local_1090[0] = 0;
            local_1090[1] = 1;
            local_1090[2] = 2;
            local_1090[3] = 3;
            local_1090[4] = 4;
            local_1090[5] = 4;
            if (puVar7 == (undefined4 *)0x0) {
              uVar5 = (uint)(local_1090[*(int *)(param_1 + 0x55c)] * *(int *)(param_1 + 0x564)) *
                      uVar9;
              pauVar8 = param_3;
              uVar6 = local_1068;
              if (uVar5 != 0) {
                do {
                  uVar6 = uVar5;
                  if (0xffffffff < uVar5) {
                    uVar6 = 0xffffffff;
                  }
                  if ((pauVar8 != (undefined1 (*) [16])0x0) && (uVar6 != 0)) {
                    memset(pauVar8,0,uVar6);
                  }
                  uVar5 = uVar5 - uVar6;
                  pauVar8 = (undefined1 (*) [16])((longlong)*pauVar8 + uVar6);
                } while (uVar5 != 0);
                local_1078 = uVar9;
                uVar6 = local_1068;
                local_1098 = uVar9;
                goto LAB_18000eba1;
              }
            }
            else {
              uVar5 = (uint)(local_1090[*(int *)(param_1 + 0x55c)] * *(int *)(param_1 + 0x564)) *
                      uVar9;
              pauVar8 = param_3;
              uVar6 = local_1068;
              param_3 = local_1060;
              while (local_1068 = uVar6, uVar5 != 0) {
                uVar6 = uVar5;
                if (0xffffffff < uVar5) {
                  uVar6 = 0xffffffff;
                }
                local_1060 = param_3;
                memcpy(pauVar8,puVar7,uVar6);
                pauVar8 = (undefined1 (*) [16])((longlong)*pauVar8 + uVar6);
                puVar7 = (undefined4 *)((longlong)puVar7 + uVar6);
                uVar5 = uVar5 - uVar6;
                uVar6 = local_1068;
                param_3 = local_1060;
              }
            }
          }
          local_1078 = uVar9;
          local_1098 = uVar9;
          goto LAB_18000eba1;
        case 1:
          uVar9 = local_1078;
          if (local_1098 < local_1078) {
            uVar9 = local_1098;
          }
          if (param_3 != (undefined1 (*) [16])0x0) {
            if (puVar7 != (undefined4 *)0x0) {
              FUN_180028b70(param_3,*(int *)(param_1 + 0x55c),puVar7,*piVar1,
                            *(uint *)(param_1 + 0x560) * uVar9,*(int *)(param_1 + 0x570));
              local_1078 = uVar9;
              local_1098 = uVar9;
              goto LAB_18000eba1;
            }
            local_1090[0] = 0;
            local_1090[1] = 1;
            local_1090[2] = 2;
            local_1090[3] = 3;
            local_1090[4] = 4;
            local_1090[5] = 4;
            uVar5 = (uint)(local_1090[*(int *)(param_1 + 0x55c)] * *(int *)(param_1 + 0x564)) *
                    uVar9;
            pauVar8 = param_3;
            uVar6 = local_1068;
            while (local_1068 = uVar6, uVar5 != 0) {
              uVar6 = uVar5;
              if (0xffffffff < uVar5) {
                uVar6 = 0xffffffff;
              }
              if ((pauVar8 != (undefined1 (*) [16])0x0) && (uVar6 != 0)) {
                memset(pauVar8,0,uVar6);
              }
              pauVar8 = (undefined1 (*) [16])((longlong)*pauVar8 + uVar6);
              uVar5 = uVar5 - uVar6;
              uVar6 = local_1068;
            }
          }
          local_1078 = uVar9;
          local_1098 = uVar9;
          goto LAB_18000eba1;
        case 2:
          uVar4 = FUN_18000afa0(piVar1,puVar7,&local_1098,(undefined4 *)param_3,&local_1078);
          iVar3 = (int)uVar4;
          break;
        case 3:
          if ((*(char *)(param_1 + 0x680) == '\0') && (*(char *)(param_1 + 0x681) == '\0')) {
            if ((undefined8 *)(param_1 + 0x5c0) == (undefined8 *)0x0) {
              iVar3 = -2;
            }
            else if ((*(longlong *)(param_1 + 0x5c8) == 0) ||
                    (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x5c8) + 0x18),
                    pcVar2 == (code *)0x0)) {
              iVar3 = -0x1d;
            }
            else {
              iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x5d0),*(undefined8 *)(param_1 + 0x5c0),
                                puVar7,&local_1098);
            }
          }
          else {
            uVar9 = FUN_18000bcb0(piVar1,(longlong)puVar7,&local_1098,(longlong)param_3,&local_1078)
            ;
            iVar3 = (int)uVar9;
          }
          break;
        case 4:
          uVar4 = FUN_18000b700(piVar1,(longlong)puVar7,&local_1098,(longlong)param_3,&local_1078);
          iVar3 = (int)uVar4;
          break;
        case 5:
          uVar4 = FUN_18000a960(piVar1,(longlong)puVar7,&local_1098,(longlong)param_3,&local_1078);
          iVar3 = (int)uVar4;
          break;
        default:
          goto switchD_18000e8d4_default;
        }
        if (iVar3 != 0) {
          return;
        }
LAB_18000eba1:
        *(longlong *)(param_1 + 0x6b0) = *(longlong *)(param_1 + 0x6b0) + local_1098;
        lVar10 = *(longlong *)(param_1 + 0x6b8) - local_1098;
        local_1090[0] = 0;
        local_1090[1] = 1;
        local_1090[2] = 2;
        local_1090[3] = 3;
        local_1090[4] = 4;
        local_1090[5] = 4;
        iVar3 = local_1090[*(int *)(param_1 + 0x43c)];
        *(longlong *)(param_1 + 0x6b8) = lVar10;
        local_1070 = local_1070 + local_1078;
        param_3 = (undefined1 (*) [16])
                  (*param_3 + (uint)(iVar3 * *(int *)(param_1 + 0x440)) * local_1078);
        local_1060 = param_3;
        if ((local_1098 == 0) && (local_1078 == 0)) {
          return;
        }
        if (lVar10 == 0) {
LAB_18000ec29:
          FUN_18000c260(param_1,*(void **)(param_1 + 0x6a0),0,*(uint *)(param_1 + 0x6a8));
          *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(param_1 + 0x6a8);
          *(undefined8 *)(param_1 + 0x6b0) = 0;
        }
      } while (local_1070 < uVar6);
    }
  }
  else {
    FUN_18000c260(param_1,param_3,0,param_2);
  }
switchD_18000e8d4_default:
  return;
}


