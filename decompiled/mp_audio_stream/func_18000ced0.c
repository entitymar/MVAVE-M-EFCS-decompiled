// FUN_18000ced0 @ 18000ced0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18000ced0(longlong param_1,uint param_2,undefined1 (*param_3) [16],longlong param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  undefined4 *_Src;
  undefined1 *puVar13;
  undefined1 auStackY_10e8 [32];
  int local_10b8 [8];
  ulonglong local_1098;
  ulonglong local_1090;
  undefined1 (*local_1088) [16];
  uint local_1080;
  longlong local_1078;
  ulonglong local_1070;
  longlong local_1068;
  undefined1 local_1058 [4096];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x18000ceef;
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_10e8;
  local_1088 = param_3;
  local_1080 = param_2;
  local_1078 = param_1;
  local_1068 = param_4;
  memset(local_1058,0,0x1000);
  if (param_2 != 0) {
    uVar10 = 0;
    local_10b8[6] = 0;
    if (param_1 != 0) {
      while( true ) {
        pauVar12 = local_1088;
        iVar5 = local_10b8[6];
        LOCK();
        local_10b8[2] = *(int *)(param_1 + 0x10);
        if (local_10b8[2] == 0) {
          *(int *)(param_1 + 0x10) = 0;
          local_10b8[2] = 0;
        }
        UNLOCK();
        if (local_10b8[2] != 2) break;
        uVar6 = *(ulonglong *)(param_1 + 0x6b8);
        lVar8 = 0;
        if (uVar6 != 0) {
          local_10b8[0] = 0;
          piVar1 = (int *)(param_1 + 0x558);
          local_1098 = (ulonglong)(param_2 - uVar10);
          local_10b8[1] = 1;
          local_10b8[3] = 3;
          local_10b8[4] = 4;
          local_10b8[5] = 4;
          local_1090 = uVar6;
          _Src = (undefined4 *)
                 ((ulonglong)
                  (uint)(local_10b8[*(int *)(param_1 + 0x334)] * *(int *)(param_1 + 0x338)) *
                  *(longlong *)(param_1 + 0x6b0) + *(longlong *)(param_1 + 0x6a0));
          if (piVar1 != (int *)0x0) {
            switch(*(undefined4 *)(param_1 + 0x574)) {
            case 0:
              uVar11 = local_1098;
              if (uVar6 < local_1098) {
                uVar11 = uVar6;
              }
              local_1070 = uVar11;
              if (param_3 != (undefined1 (*) [16])0x0) {
                local_10b8[0] = 0;
                local_10b8[1] = 1;
                local_10b8[2] = 2;
                local_10b8[3] = 3;
                local_10b8[4] = 4;
                local_10b8[5] = 4;
                if (_Src == (undefined4 *)0x0) {
                  uVar6 = (uint)(local_10b8[*(int *)(param_1 + 0x55c)] * *(int *)(param_1 + 0x564))
                          * uVar11;
                  uVar10 = local_10b8[6];
                  if (uVar6 != 0) {
                    do {
                      uVar9 = uVar6;
                      if (0xffffffff < uVar6) {
                        uVar9 = 0xffffffff;
                      }
                      if ((param_3 != (undefined1 (*) [16])0x0) && (uVar9 != 0)) {
                        memset(param_3,0,uVar9);
                      }
                      param_3 = (undefined1 (*) [16])(*param_3 + uVar9);
                      uVar6 = uVar6 - uVar9;
                    } while (uVar6 != 0);
                    local_1090 = uVar11;
                    local_1098 = uVar11;
                    param_3 = local_1088;
                    uVar10 = local_10b8[6];
                    break;
                  }
                }
                else {
                  uVar11 = (uint)(local_10b8[*(int *)(param_1 + 0x55c)] * *(int *)(param_1 + 0x564))
                           * uVar11;
                  param_2 = local_1080;
                  uVar10 = local_10b8[6];
                  if (uVar11 != 0) {
                    do {
                      uVar6 = uVar11;
                      if (0xffffffff < uVar11) {
                        uVar6 = 0xffffffff;
                      }
                      memcpy(param_3,_Src,uVar6);
                      param_3 = (undefined1 (*) [16])(*param_3 + uVar6);
                      _Src = (undefined4 *)((longlong)_Src + uVar6);
                      uVar11 = uVar11 - uVar6;
                    } while (uVar11 != 0);
                    local_1088 = pauVar12;
                    local_10b8[6] = iVar5;
                    param_3 = pauVar12;
                    param_4 = local_1068;
                    param_1 = local_1078;
                    param_2 = local_1080;
                    uVar10 = local_10b8[6];
                  }
                }
              }
              local_1090 = local_1070;
              local_1098 = local_1070;
              break;
            case 1:
              uVar11 = local_1098;
              if (uVar6 < local_1098) {
                uVar11 = uVar6;
              }
              if (param_3 != (undefined1 (*) [16])0x0) {
                if (_Src != (undefined4 *)0x0) {
                  FUN_180028b70(param_3,*(int *)(param_1 + 0x55c),_Src,*piVar1,
                                *(uint *)(param_1 + 0x560) * uVar11,*(int *)(param_1 + 0x570));
                  local_1090 = uVar11;
                  local_1098 = uVar11;
                  break;
                }
                local_10b8[0] = 0;
                local_10b8[1] = 1;
                local_10b8[2] = 2;
                local_10b8[3] = 3;
                local_10b8[4] = 4;
                local_10b8[5] = 4;
                pauVar12 = param_3;
                uVar10 = local_10b8[6];
                for (uVar6 = (uint)(local_10b8[*(int *)(param_1 + 0x55c)] *
                                   *(int *)(param_1 + 0x564)) * uVar11; uVar6 != 0;
                    uVar6 = uVar6 - uVar9) {
                  uVar9 = uVar6;
                  if (0xffffffff < uVar6) {
                    uVar9 = 0xffffffff;
                  }
                  local_10b8[6] = uVar10;
                  if ((pauVar12 != (undefined1 (*) [16])0x0) && (uVar9 != 0)) {
                    memset(pauVar12,0,uVar9);
                  }
                  pauVar12 = (undefined1 (*) [16])((longlong)*pauVar12 + uVar9);
                  param_3 = local_1088;
                  uVar10 = local_10b8[6];
                }
              }
              local_1090 = uVar11;
              local_1098 = uVar11;
              break;
            case 2:
              FUN_18000afa0(piVar1,_Src,&local_1090,(undefined4 *)param_3,&local_1098);
              break;
            case 3:
              if ((*(char *)(param_1 + 0x680) == '\0') && (*(char *)(param_1 + 0x681) == '\0')) {
                if ((((undefined8 *)(param_1 + 0x5c0) != (undefined8 *)0x0) &&
                    (*(longlong *)(param_1 + 0x5c8) != 0)) &&
                   (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x5c8) + 0x18),
                   pcVar2 != (code *)0x0)) {
                  (*pcVar2)(*(undefined8 *)(param_1 + 0x5d0),*(undefined8 *)(param_1 + 0x5c0),_Src,
                            &local_1090);
                }
              }
              else {
                FUN_18000bcb0(piVar1,(longlong)_Src,&local_1090,(longlong)param_3,&local_1098);
              }
              break;
            case 4:
              FUN_18000b700(piVar1,(longlong)_Src,&local_1090,(longlong)param_3,&local_1098);
              break;
            case 5:
              FUN_18000a960(piVar1,(longlong)_Src,&local_1090,(longlong)param_3,&local_1098);
            }
          }
          uVar10 = uVar10 + (int)local_1098;
          *(longlong *)(param_1 + 0x6b0) = *(longlong *)(param_1 + 0x6b0) + local_1090;
          lVar8 = *(longlong *)(param_1 + 0x6b8) - local_1090;
          local_10b8[0] = 0;
          local_10b8[1] = 1;
          local_10b8[2] = 2;
          local_10b8[3] = 3;
          local_10b8[4] = 4;
          local_10b8[5] = 4;
          iVar5 = local_10b8[*(int *)(param_1 + 0x43c)];
          *(longlong *)(param_1 + 0x6b8) = lVar8;
          local_10b8[6] = uVar10;
          param_3 = (undefined1 (*) [16])
                    (*param_3 + (uint)(iVar5 * *(int *)(param_1 + 0x440)) * local_1098);
          local_1088 = param_3;
        }
        if (param_2 <= uVar10) {
          return 0;
        }
        if (lVar8 == 0) {
          if (param_4 == 0) {
LAB_18000d525:
            uVar6 = *(ulonglong *)(param_1 + 0x6a8);
            local_10b8[0] = 0;
            local_10b8[1] = 1;
            local_10b8[2] = 2;
            local_10b8[3] = 3;
            local_10b8[4] = 4;
            local_10b8[5] = 4;
            if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                       ZEXT416((uint)(*(int *)(param_1 + 0x8d0) *
                                     local_10b8[*(int *)(param_1 + 0x8cc)])),0) <= uVar6) {
              local_10b8[0] = 0;
              local_10b8[1] = 1;
              local_10b8[2] = 2;
              local_10b8[3] = 3;
              local_10b8[4] = 4;
              local_10b8[5] = 4;
              uVar6 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                             ZEXT416((uint)(*(int *)(param_1 + 0x8d0) *
                                           local_10b8[*(int *)(param_1 + 0x8cc)])),0);
            }
            uVar7 = (uint)uVar6;
            uVar6 = uVar6 & 0xffffffff;
            puVar13 = local_1058;
LAB_18000d5cf:
            local_10b8[5] = 4;
            local_10b8[4] = 4;
            local_10b8[3] = 3;
            local_10b8[2] = 2;
            local_10b8[1] = 1;
            local_10b8[0] = 0;
            FUN_18000c260(param_1,*(void **)(param_1 + 0x6a0),(longlong)puVar13,uVar7);
          }
          else {
            local_10b8[0] = 0;
            local_10b8[1] = 1;
            local_10b8[2] = 2;
            local_10b8[3] = 3;
            local_10b8[4] = 4;
            local_10b8[5] = 4;
            uVar6 = (ulonglong)
                    (uint)(local_10b8[*(int *)(param_4 + 0x88)] * *(int *)(param_4 + 0x8c) *
                          *(int *)(param_1 + 0x6a8));
            if ((longlong *)(param_4 + 0x48) == (longlong *)0x0) goto LAB_18000d525;
            LOCK();
            uVar7 = *(uint *)(param_4 + 0x60);
            if (uVar7 == 0) {
              *(uint *)(param_4 + 0x60) = 0;
              uVar7 = 0;
            }
            UNLOCK();
            LOCK();
            uVar4 = *(uint *)(param_4 + 0x5c);
            if (uVar4 == 0) {
              *(uint *)(param_4 + 0x5c) = 0;
              uVar4 = 0;
            }
            UNLOCK();
            if ((int)(uVar4 ^ uVar7) < 0) {
              uVar7 = *(uint *)(param_4 + 0x50);
            }
            else {
              uVar7 = uVar7 & 0x7fffffff;
            }
            uVar11 = (ulonglong)(uVar7 - (uVar4 & 0x7fffffff));
            if (uVar11 < uVar6) {
              uVar6 = uVar11;
            }
            LOCK();
            uVar7 = *(uint *)(param_4 + 0x5c);
            if (uVar7 == 0) {
              *(uint *)(param_4 + 0x5c) = 0;
              uVar7 = 0;
            }
            UNLOCK();
            local_10b8[0] = 0;
            puVar13 = (undefined1 *)
                      ((ulonglong)(uVar7 & 0x7fffffff) + *(longlong *)(param_4 + 0x48));
            local_10b8[1] = 1;
            local_10b8[2] = 2;
            local_10b8[3] = 3;
            local_10b8[4] = 4;
            local_10b8[5] = 4;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar6;
            auVar3 = auVar3 / ZEXT416((uint)(local_10b8[*(int *)(param_4 + 0x88)] *
                                            *(int *)(param_4 + 0x8c)));
            uVar6 = auVar3._0_8_;
            uVar7 = auVar3._0_4_;
            if (uVar7 != 0) goto LAB_18000d5cf;
            LOCK();
            uVar7 = *(uint *)(param_4 + 0x5c);
            if (uVar7 == 0) {
              *(uint *)(param_4 + 0x5c) = 0;
              uVar7 = 0;
            }
            UNLOCK();
            LOCK();
            uVar4 = *(uint *)(param_4 + 0x60);
            if (uVar4 == 0) {
              *(uint *)(param_4 + 0x60) = 0;
              uVar4 = 0;
            }
            UNLOCK();
            if ((int)(uVar4 ^ uVar7) < 0) {
              iVar5 = *(int *)(param_4 + 0x50) - (uVar7 & 0x7fffffff);
            }
            else {
              iVar5 = -(uVar7 & 0x7fffffff);
            }
            local_10b8[0] = 0;
            local_10b8[1] = 1;
            local_10b8[2] = 2;
            local_10b8[3] = 3;
            local_10b8[4] = 4;
            local_10b8[5] = 4;
            if (((uVar4 & 0x7fffffff) + iVar5) /
                (uint)(local_10b8[*(int *)(param_4 + 0x88)] * *(int *)(param_4 + 0x8c)) == 0) {
              return 0;
            }
          }
          *(ulonglong *)(param_1 + 0x6b8) = uVar6;
          *(undefined8 *)(param_1 + 0x6b0) = 0;
          iVar5 = FUN_18002aec0(param_4,(int)uVar6);
          param_3 = local_1088;
          if (iVar5 != 0) {
            return iVar5;
          }
        }
      }
    }
  }
  return 0;
}


