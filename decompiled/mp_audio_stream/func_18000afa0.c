// FUN_18000afa0 @ 18000afa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18000afa0(int *param_1,undefined4 *param_2,ulonglong *param_3,undefined4 *param_4,
             ulonglong *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 (*_Dst) [16];
  undefined1 auStackY_20e8 [32];
  int local_20a8 [6];
  undefined1 (*local_2090) [16];
  ulonglong local_2088;
  ulonglong local_2080;
  ulonglong *local_2078;
  undefined4 *local_2070;
  undefined4 *local_2068;
  ulonglong *local_2060;
  undefined4 local_2058 [1024];
  undefined4 local_1058 [1024];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_20e8;
  local_2070 = param_4;
  uVar4 = 0;
  local_2078 = param_5;
  local_2060 = param_3;
  local_2068 = param_2;
  if (param_3 != (ulonglong *)0x0) {
    uVar4 = *param_3;
  }
  local_2088 = 0;
  if (param_5 != (ulonglong *)0x0) {
    local_2088 = *param_5;
  }
  if (uVar4 < local_2088) {
    local_2088 = uVar4;
  }
  if (((char)param_1[0x4a] == '\0') && (*(char *)((longlong)param_1 + 0x129) == '\0')) {
    uVar3 = FUN_18001ff30(param_1 + 8,param_4,param_2,local_2088);
    param_5 = local_2078;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  else {
    local_2080 = 0;
    if (local_2088 != 0) {
      do {
        piVar5 = param_1 + 8;
        iVar2 = *piVar5;
        local_20a8[0] = 0;
        local_20a8[1] = 1;
        local_20a8[2] = 2;
        local_20a8[3] = 3;
        local_20a8[4] = 4;
        local_20a8[5] = 4;
        uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                       ZEXT416((uint)(local_20a8[iVar2] * param_1[10])),0);
        if (local_2068 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_20a8[0] = 0;
          local_20a8[1] = 1;
          local_20a8[2] = 2;
          local_20a8[3] = 3;
          local_20a8[4] = 4;
          local_20a8[5] = 4;
          puVar6 = (undefined4 *)
                   ((uint)(local_20a8[*param_1] * param_1[2]) * local_2080 + (longlong)local_2068);
        }
        pauVar8 = (undefined1 (*) [16])0x0;
        if (local_2070 != (undefined4 *)0x0) {
          local_20a8[0] = 0;
          local_20a8[1] = 1;
          local_20a8[2] = 2;
          local_20a8[3] = 3;
          local_20a8[4] = 4;
          local_20a8[5] = 4;
          pauVar8 = (undefined1 (*) [16])
                    ((uint)(local_20a8[param_1[1]] * param_1[3]) * local_2080 + (longlong)local_2070
                    );
        }
        local_20a8[0] = 0;
        local_20a8[5] = 4;
        local_20a8[4] = 4;
        local_20a8[3] = 3;
        local_20a8[2] = 2;
        local_20a8[1] = 1;
        uVar7 = local_2088 - local_2080;
        local_2090 = pauVar8;
        if ((char)param_1[0x4a] == '\0') {
          uVar9 = uVar4;
          if (uVar7 <= uVar4) {
            uVar9 = uVar7;
          }
          if (puVar6 == (undefined4 *)0x0) {
            local_20a8[0] = 0;
            puVar6 = local_1058;
            local_20a8[1] = 1;
            local_20a8[2] = 2;
            local_20a8[3] = 3;
            local_20a8[4] = 4;
            local_20a8[5] = 4;
            for (uVar4 = (uint)(local_20a8[iVar2] * param_1[10]) * uVar9; uVar4 != 0;
                uVar4 = uVar4 - uVar7) {
              uVar7 = uVar4;
              if (0xffffffff < uVar4) {
                uVar7 = 0xffffffff;
              }
              if ((puVar6 != (undefined4 *)0x0) && (uVar7 != 0)) {
                memset(puVar6,0,uVar7);
              }
              puVar6 = (undefined4 *)((longlong)puVar6 + uVar7);
            }
          }
          else {
            iVar1 = param_1[0xc];
            if (iVar1 != 1) {
              if (iVar1 == 2) {
                uVar3 = FUN_180003560(piVar5,(longlong)local_1058,(longlong)puVar6,uVar9);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              else if (iVar1 == 3) {
                uVar3 = FUN_180003220(piVar5,(longlong)local_1058,puVar6,uVar9);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              else if (iVar1 == 4) {
                uVar3 = FUN_180005270(local_1058,param_1[10],(longlong)puVar6,param_1[9],uVar9,
                                      *(byte **)(param_1 + 0x12),iVar2);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              else {
                uVar3 = FUN_180003930(piVar5,local_1058,(longlong)puVar6,uVar9);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              goto joined_r0x00018000b605;
            }
            local_20a8[0] = 0;
            puVar10 = local_1058;
            local_20a8[1] = 1;
            local_20a8[2] = 2;
            local_20a8[3] = 3;
            local_20a8[4] = 4;
            local_20a8[5] = 4;
            for (uVar4 = (uint)(local_20a8[iVar2] * param_1[10]) * uVar9; local_2090 = pauVar8,
                uVar4 != 0; uVar4 = uVar4 - uVar7) {
              uVar7 = uVar4;
              if (0xffffffff < uVar4) {
                uVar7 = 0xffffffff;
              }
              memcpy(puVar10,puVar6,uVar7);
              puVar10 = (undefined4 *)((longlong)puVar10 + uVar7);
              puVar6 = (undefined4 *)((longlong)puVar6 + uVar7);
              pauVar8 = local_2090;
            }
          }
        }
        else {
          local_20a8[0] = 0;
          local_20a8[1] = 1;
          local_20a8[2] = 2;
          local_20a8[3] = 3;
          local_20a8[4] = 4;
          local_20a8[5] = 4;
          uVar9 = (ulonglong)
                  SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                         ZEXT416((uint)(local_20a8[iVar2] * param_1[9])),0);
          if (uVar7 <= uVar9) {
            uVar9 = uVar7;
          }
          if ((*(char *)((longlong)param_1 + 0x129) != '\0') && (uVar4 < uVar9)) {
            uVar9 = uVar4;
          }
          if (puVar6 == (undefined4 *)0x0) {
            memset(local_2058,0,0x1000);
          }
          else {
            FUN_180028b70((undefined1 (*) [16])local_2058,iVar2,puVar6,*param_1,
                          (uint)param_1[2] * uVar9,param_1[6]);
          }
          if (*(char *)((longlong)param_1 + 0x129) == '\0') {
            if (pauVar8 == (undefined1 (*) [16])0x0) {
              iVar2 = -2;
              param_5 = local_2078;
              param_3 = local_2060;
            }
            else {
              iVar2 = param_1[0xc];
              if (iVar2 == 1) {
                puVar6 = local_2058;
                local_20a8[0] = 0;
                local_20a8[1] = 1;
                local_20a8[2] = 2;
                local_20a8[3] = 3;
                local_20a8[4] = 4;
                local_20a8[5] = 4;
                _Dst = pauVar8;
                for (uVar4 = (uint)(local_20a8[param_1[8]] * param_1[10]) * uVar9; uVar4 != 0;
                    uVar4 = uVar4 - uVar7) {
                  uVar7 = uVar4;
                  if (0xffffffff < uVar4) {
                    uVar7 = 0xffffffff;
                  }
                  memcpy(_Dst,puVar6,uVar7);
                  _Dst = (undefined1 (*) [16])((longlong)*_Dst + uVar7);
                  puVar6 = (undefined4 *)((longlong)puVar6 + uVar7);
                  pauVar8 = local_2090;
                }
                goto LAB_18000b4bd;
              }
              if (iVar2 == 2) {
                uVar3 = FUN_180003560(param_1 + 8,(longlong)pauVar8,(longlong)local_2058,uVar9);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              else if (iVar2 == 3) {
                uVar3 = FUN_180003220(param_1 + 8,(longlong)pauVar8,local_2058,uVar9);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              else if (iVar2 == 4) {
                uVar3 = FUN_180005270((undefined4 *)pauVar8,param_1[10],(longlong)local_2058,
                                      param_1[9],uVar9,*(byte **)(param_1 + 0x12),param_1[8]);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
              else {
                uVar3 = FUN_180003930(param_1 + 8,pauVar8,(longlong)local_2058,uVar9);
                iVar2 = (int)uVar3;
                param_5 = local_2078;
                param_3 = local_2060;
              }
            }
          }
          else {
            iVar2 = param_1[0xc];
            if (iVar2 == 1) {
              puVar6 = local_2058;
              local_20a8[0] = 0;
              puVar10 = local_1058;
              local_20a8[1] = 1;
              local_20a8[2] = 2;
              local_20a8[3] = 3;
              local_20a8[4] = 4;
              local_20a8[5] = 4;
              for (uVar4 = (uint)(local_20a8[param_1[8]] * param_1[10]) * uVar9; uVar4 != 0;
                  uVar4 = uVar4 - uVar7) {
                uVar7 = uVar4;
                if (0xffffffff < uVar4) {
                  uVar7 = 0xffffffff;
                }
                memcpy(puVar10,puVar6,uVar7);
                puVar10 = (undefined4 *)((longlong)puVar10 + uVar7);
                puVar6 = (undefined4 *)((longlong)puVar6 + uVar7);
                pauVar8 = local_2090;
              }
LAB_18000b4bd:
              iVar2 = 0;
              param_5 = local_2078;
              param_3 = local_2060;
            }
            else if (iVar2 == 2) {
              uVar3 = FUN_180003560(param_1 + 8,(longlong)local_1058,(longlong)local_2058,uVar9);
              iVar2 = (int)uVar3;
              param_5 = local_2078;
              param_3 = local_2060;
            }
            else if (iVar2 == 3) {
              uVar3 = FUN_180003220(param_1 + 8,(longlong)local_1058,local_2058,uVar9);
              iVar2 = (int)uVar3;
              param_5 = local_2078;
              param_3 = local_2060;
            }
            else if (iVar2 == 4) {
              uVar3 = FUN_180005270(local_1058,param_1[10],(longlong)local_2058,param_1[9],uVar9,
                                    *(byte **)(param_1 + 0x12),param_1[8]);
              iVar2 = (int)uVar3;
              param_5 = local_2078;
              param_3 = local_2060;
            }
            else {
              uVar3 = FUN_180003930(param_1 + 8,local_1058,(longlong)local_2058,uVar9);
              iVar2 = (int)uVar3;
              param_5 = local_2078;
              param_3 = local_2060;
            }
          }
joined_r0x00018000b605:
          local_2078 = param_5;
          local_2060 = param_3;
          if (iVar2 != 0) break;
        }
        if ((*(char *)((longlong)param_1 + 0x129) != '\0') && (pauVar8 != (undefined1 (*) [16])0x0))
        {
          FUN_180028b70(pauVar8,param_1[1],local_1058,param_1[8],(uint)param_1[10] * uVar9,
                        param_1[6]);
        }
        local_2080 = local_2080 + uVar9;
        param_5 = local_2078;
        param_3 = local_2060;
      } while (local_2080 < local_2088);
    }
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = local_2088;
  }
  if (param_5 != (ulonglong *)0x0) {
    *param_5 = local_2088;
  }
  return 0;
}


