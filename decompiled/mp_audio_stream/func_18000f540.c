// FUN_18000f540 @ 18000f540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18000f540(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong _Size;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 auStackY_40e8 [32];
  uint local_40b8;
  int local_40b0 [8];
  ulonglong local_4090;
  ulonglong local_4088;
  ulonglong local_4080;
  longlong *local_4078;
  ulonglong local_4070;
  ulonglong local_4068;
  ulonglong local_4060;
  uint local_4058;
  uint local_4054;
  uint local_4050;
  uint local_404c;
  uint local_4048;
  int local_4044 [3];
  undefined4 local_4038 [1024];
  undefined4 local_3038 [1024];
  undefined4 local_2038 [1024];
  undefined4 local_1038 [1024];
  ulonglong local_38;
  
  local_38 = DAT_180036c40 ^ (ulonglong)auStackY_40e8;
  iVar12 = (int)param_1[1];
  uVar10 = 0;
  local_4078 = param_1;
  local_4070 = 0;
  local_4088 = 0;
  local_40b8 = 0;
  if ((iVar12 == 2) || (iVar12 - 3U < 2)) {
    if (*(longlong *)(*param_1 + 0x40) == 0) {
      return 0xffffffe3;
    }
    local_40b0[0] = 0;
    local_40b0[1] = 1;
    local_40b0[2] = 2;
    local_40b0[3] = 3;
    local_40b0[4] = 4;
    local_40b0[5] = 4;
    local_4070 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                        ZEXT416((uint)(local_40b0[*(int *)((longlong)param_1 + 0x9d4)] *
                                      (int)param_1[0x13b])),0);
  }
  uVar8 = local_4088;
  uVar5 = local_4070;
  uVar11 = uVar10;
  if ((iVar12 - 1U & 0xfffffffd) == 0) {
    if (*(longlong *)(*param_1 + 0x48) == 0) {
      return 0xffffffe3;
    }
    local_40b0[0] = 0;
    local_40b0[1] = 1;
    local_40b0[2] = 2;
    local_40b0[3] = 3;
    local_40b0[4] = 4;
    local_40b0[5] = 4;
    local_4088 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                        ZEXT416((uint)(local_40b0[*(int *)((longlong)param_1 + 0x43c)] *
                                      (int)param_1[0x88])),0);
    uVar8 = local_4088;
  }
LAB_18000f6b0:
  do {
    while( true ) {
      plVar9 = local_4078;
      uVar7 = 0;
      LOCK();
      iVar12 = (int)param_1[2];
      if (iVar12 == 0) {
        *(int *)(param_1 + 2) = 0;
        iVar12 = 0;
      }
      UNLOCK();
      if (iVar12 != 2) {
        return uVar10;
      }
      if ((int)uVar11 != 0) {
        return uVar10;
      }
      iVar12 = (int)param_1[1];
      if (iVar12 != 1) break;
      uVar4 = *(uint *)(param_1 + 0xa9);
      param_1 = plVar9;
      if (uVar4 != 0) {
        do {
          uVar10 = (ulonglong)(uVar4 - uVar7);
          if ((uint)uVar8 < uVar4 - uVar7) {
            uVar10 = uVar8 & 0xffffffff;
          }
          FUN_18000e780((longlong)plVar9,(uint)uVar10,(undefined1 (*) [16])local_3038);
          uVar3 = (**(code **)(*plVar9 + 0x48))(plVar9,local_3038,uVar10,local_4044);
          uVar10 = (ulonglong)uVar3;
          if (uVar3 != 0) goto LAB_18000ffc3;
          uVar11 = (ulonglong)local_40b8;
          uVar8 = local_4088;
          uVar5 = local_4070;
        } while ((local_4044[0] != 0) && (uVar7 = uVar7 + local_4044[0], uVar7 < uVar4));
      }
    }
    if (iVar12 == 2) {
LAB_18000f6e9:
      uVar4 = *(uint *)(param_1 + 0x15c);
      param_1 = plVar9;
      if (uVar4 != 0) {
        do {
          uVar10 = (ulonglong)(uVar4 - uVar7);
          if ((uint)uVar5 < uVar4 - uVar7) {
            uVar10 = uVar5 & 0xffffffff;
          }
          uVar3 = (**(code **)(*plVar9 + 0x40))(plVar9,local_1038,uVar10,&local_4054);
          uVar10 = (ulonglong)uVar3;
          if (uVar3 != 0) goto LAB_18000ffc3;
          uVar11 = (ulonglong)local_40b8;
          uVar8 = local_4088;
          uVar5 = local_4070;
          if (local_4054 == 0) goto LAB_18000f6b0;
          FUN_18000f050((longlong)plVar9,local_4054,local_1038);
          uVar7 = uVar7 + local_4054;
          uVar5 = local_4070;
        } while (uVar7 < uVar4);
        uVar8 = local_4088;
        uVar11 = (ulonglong)local_40b8;
      }
      goto LAB_18000f6b0;
    }
    if (iVar12 == 3) {
      local_4058 = 0;
      local_4048 = *(uint *)(param_1 + 0x15c);
      if (*(uint *)(param_1 + 0xa9) <= *(uint *)(param_1 + 0x15c)) {
        local_4048 = *(uint *)(param_1 + 0xa9);
      }
      if (local_4048 != 0) {
        while( true ) {
          uVar10 = (ulonglong)(local_4048 - local_4058);
          if ((uint)uVar5 < local_4048 - local_4058) {
            uVar10 = uVar5 & 0xffffffff;
          }
          uVar7 = (**(code **)(*param_1 + 0x40))(param_1,local_1038,uVar10,&local_4050);
          uVar10 = (ulonglong)uVar7;
          if (uVar7 != 0) break;
          local_40b0[6] = 0;
          uVar7 = local_4050;
LAB_18000f7de:
          iVar12 = local_40b0[6];
          uVar10 = 0;
          plVar9 = param_1 + 0x15e;
          local_40b0[0] = 0;
          local_40b0[1] = 1;
          local_40b0[2] = 2;
          local_40b0[3] = 3;
          local_40b0[4] = 4;
          local_40b0[5] = 4;
          local_40b0[0] = 0;
          local_40b0[1] = 1;
          local_40b0[2] = 2;
          local_40b0[3] = 3;
          local_40b0[4] = 4;
          local_40b0[5] = 4;
          local_40b0[0] = 0;
          local_40b0[1] = 1;
          local_40b0[2] = 2;
          local_40b0[3] = 3;
          local_40b0[4] = 4;
          uVar4 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                         ZEXT416((uint)(local_40b0[*(int *)((longlong)param_1 + 0x334)] *
                                       (int)param_1[0x67])),0);
          uVar3 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                         ZEXT416((uint)(local_40b0[*(int *)((longlong)param_1 + 0x8cc)] *
                                       (int)param_1[0x11a])),0);
          local_40b0[5] = 4;
          local_4060 = (ulonglong)uVar7;
          if (uVar3 < uVar4) {
            uVar4 = uVar3;
          }
          local_4090 = (ulonglong)uVar4;
          puVar6 = (undefined4 *)
                   ((longlong)local_1038 +
                   (ulonglong)
                   (uint)(local_40b0[*(int *)((longlong)param_1 + 0x9d4)] * (int)param_1[0x13b] *
                         local_40b0[6]));
          if (plVar9 == (longlong *)0x0) {
            uVar10 = 0xfffffffe;
            goto switchD_18000f907_default;
          }
          uVar8 = local_4090;
          switch(*(undefined4 *)((longlong)param_1 + 0xb0c)) {
          case 0:
            local_40b0[0] = 0;
            if (local_4060 < local_4090) {
              uVar8 = local_4060;
            }
            local_40b0[1] = 1;
            local_40b0[2] = 2;
            local_40b0[3] = 3;
            local_40b0[4] = 4;
            local_40b0[5] = 4;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = local_4038;
              uVar10 = (uint)(local_40b0[*(int *)((longlong)param_1 + 0xaf4)] *
                             *(int *)((longlong)param_1 + 0xafc)) * uVar8;
              if (uVar10 != 0) {
                do {
                  uVar5 = uVar10;
                  if (0xffffffff < uVar10) {
                    uVar5 = 0xffffffff;
                  }
                  if ((puVar6 != (undefined4 *)0x0) && (uVar5 != 0)) {
                    memset(puVar6,0,uVar5);
                  }
                  puVar6 = (undefined4 *)((longlong)puVar6 + uVar5);
                  uVar10 = uVar10 - uVar5;
                } while (uVar10 != 0);
                uVar10 = 0;
                uVar5 = uVar8;
                goto LAB_18000fbe1;
              }
            }
            else {
              puVar13 = local_4038;
              for (uVar10 = (uint)(local_40b0[*(int *)((longlong)param_1 + 0xaf4)] *
                                  *(int *)((longlong)param_1 + 0xafc)) * uVar8; uVar10 != 0;
                  uVar10 = uVar10 - uVar5) {
                uVar5 = uVar10;
                if (0xffffffff < uVar10) {
                  uVar5 = 0xffffffff;
                }
                memcpy(puVar13,puVar6,uVar5);
                puVar13 = (undefined4 *)((longlong)puVar13 + uVar5);
                puVar6 = (undefined4 *)((longlong)puVar6 + uVar5);
              }
            }
LAB_18000f99b:
            uVar10 = 0;
            iVar12 = local_40b0[6];
            uVar5 = uVar8;
            goto LAB_18000fbe1;
          case 1:
            if (local_4060 < local_4090) {
              uVar8 = local_4060;
            }
            uVar5 = uVar8;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = local_4038;
              local_40b0[0] = 0;
              local_40b0[1] = 1;
              local_40b0[2] = 2;
              local_40b0[3] = 3;
              local_40b0[4] = 4;
              local_40b0[5] = 4;
              uVar11 = (uint)(local_40b0[*(int *)((longlong)param_1 + 0xaf4)] *
                             *(int *)((longlong)param_1 + 0xafc)) * uVar8;
              if (uVar11 == 0) goto LAB_18000f99b;
              do {
                _Size = uVar11;
                if (0xffffffff < uVar11) {
                  _Size = 0xffffffff;
                }
                if ((puVar6 != (undefined4 *)0x0) && (_Size != 0)) {
                  memset(puVar6,0,_Size);
                }
                puVar6 = (undefined4 *)((longlong)puVar6 + _Size);
                uVar11 = uVar11 - _Size;
              } while (uVar11 != 0);
            }
            else {
              FUN_180028b70((undefined1 (*) [16])local_4038,*(int *)((longlong)param_1 + 0xaf4),
                            puVar6,(int)*plVar9,*(uint *)(param_1 + 0x15f) * uVar8,
                            (int)param_1[0x161]);
            }
            goto LAB_18000fbe1;
          case 2:
            uVar10 = FUN_18000afa0((int *)plVar9,puVar6,&local_4060,local_4038,&local_4090);
            break;
          case 3:
            if (((char)param_1[0x183] != '\0') || (*(char *)((longlong)param_1 + 0xc19) != '\0')) {
              uVar10 = FUN_18000bcb0((int *)plVar9,(longlong)puVar6,&local_4060,(longlong)local_4038
                                     ,&local_4090);
              break;
            }
            if (param_1 + 0x16b == (longlong *)0x0) {
              uVar10 = 0xfffffffe;
            }
            else {
              if ((param_1[0x16c] != 0) &&
                 (pcVar2 = *(code **)(param_1[0x16c] + 0x18), pcVar2 != (code *)0x0)) {
                uVar10 = (*pcVar2)(param_1[0x16d],param_1[0x16b],puVar6,&local_4060);
                break;
              }
              uVar10 = 0xffffffe3;
            }
            goto LAB_18000fbd9;
          case 4:
            uVar10 = FUN_18000b700((int *)plVar9,(longlong)puVar6,&local_4060,(longlong)local_4038,
                                   &local_4090);
            break;
          case 5:
            uVar10 = FUN_18000a960((int *)plVar9,(longlong)puVar6,&local_4060,(longlong)local_4038,
                                   &local_4090);
            break;
          default:
            uVar10 = 0xfffffffd;
            goto switchD_18000f907_default;
          }
          uVar10 = uVar10 & 0xffffffff;
LAB_18000fbd9:
          uVar8 = local_4090;
          uVar5 = local_4060;
          if ((int)uVar10 == 0) {
LAB_18000fbe1:
            local_4060 = uVar5;
            local_4090 = uVar8;
            plVar9 = local_4078;
            param_1 = local_4078;
            if (local_4090 == 0) goto switchD_18000f907_default;
            FUN_18000c260((longlong)local_4078,local_2038,(longlong)local_4038,(uint)local_4090);
            uVar8 = local_4088 & 0xffffffff;
            iVar12 = iVar12 + (int)local_4060;
            local_404c = uVar7 - (int)local_4060;
            plVar1 = plVar9 + 0xab;
            local_40b0[6] = iVar12;
            local_4068 = local_4090;
            local_4080 = uVar8;
            param_1 = plVar9;
            if (plVar1 != (longlong *)0x0) {
              do {
                uVar5 = uVar8;
                local_4080 = uVar8;
                local_4068 = local_4090;
                switch(*(undefined4 *)((longlong)plVar9 + 0x574)) {
                case 0:
                  puVar6 = local_2038;
                  local_40b0[0] = 0;
                  local_40b0[1] = 1;
                  puVar13 = local_3038;
                  if (local_4090 < uVar8) {
                    uVar5 = local_4090;
                  }
                  local_40b0[2] = 2;
                  local_40b0[3] = 3;
                  local_40b0[4] = 4;
                  local_40b0[5] = 4;
                  uVar10 = (uint)(local_40b0[*(int *)((longlong)plVar9 + 0x55c)] *
                                 *(int *)((longlong)plVar9 + 0x564)) * uVar5;
                  uVar11 = uVar5;
                  if (uVar10 != 0) {
                    do {
                      uVar8 = uVar10;
                      if (0xffffffff < uVar10) {
                        uVar8 = 0xffffffff;
                      }
                      memcpy(puVar13,puVar6,uVar8);
                      puVar13 = (undefined4 *)((longlong)puVar13 + uVar8);
                      puVar6 = (undefined4 *)((longlong)puVar6 + uVar8);
                      uVar10 = uVar10 - uVar8;
                    } while (uVar10 != 0);
                    uVar8 = local_4088 & 0xffffffff;
                    param_1 = local_4078;
                  }
                  goto LAB_18000fe67;
                case 1:
                  if (local_4090 < uVar8) {
                    uVar5 = local_4090;
                  }
                  FUN_180028b70((undefined1 (*) [16])local_3038,*(int *)((longlong)plVar9 + 0x55c),
                                local_2038,(int)*plVar1,*(uint *)(plVar9 + 0xac) * uVar5,
                                (int)plVar9[0xae]);
                  uVar11 = uVar5;
                  goto LAB_18000fe67;
                case 2:
                  uVar10 = FUN_18000afa0((int *)plVar1,local_2038,&local_4068,local_3038,&local_4080
                                        );
                  break;
                case 3:
                  if (((char)plVar9[0xd0] != '\0') || (*(char *)((longlong)plVar9 + 0x681) != '\0'))
                  {
                    uVar10 = FUN_18000bcb0((int *)plVar1,(longlong)local_2038,&local_4068,
                                           (longlong)local_3038,&local_4080);
                    break;
                  }
                  if (plVar9 + 0xb8 == (longlong *)0x0) {
                    uVar10 = 0xfffffffe;
                  }
                  else {
                    if ((plVar9[0xb9] != 0) &&
                       (pcVar2 = *(code **)(plVar9[0xb9] + 0x18), pcVar2 != (code *)0x0)) {
                      uVar10 = (*pcVar2)(plVar9[0xba],plVar9[0xb8],local_2038,&local_4068);
                      break;
                    }
                    uVar10 = 0xffffffe3;
                  }
                  goto LAB_18000fe63;
                case 4:
                  uVar10 = FUN_18000b700((int *)plVar1,(longlong)local_2038,&local_4068,
                                         (longlong)local_3038,&local_4080);
                  break;
                case 5:
                  uVar10 = FUN_18000a960((int *)plVar1,(longlong)local_2038,&local_4068,
                                         (longlong)local_3038,&local_4080);
                  break;
                default:
                  uVar10 = 0xfffffffd;
                  goto switchD_18000fc60_default;
                }
                uVar10 = uVar10 & 0xffffffff;
LAB_18000fe63:
                uVar5 = local_4080;
                uVar11 = local_4068;
                if ((int)uVar10 != 0) {
switchD_18000fc60_default:
                  uVar11 = 1;
                  local_40b8 = 1;
                  plVar9 = param_1;
                  iVar12 = local_40b0[6];
                  goto LAB_18000fefe;
                }
LAB_18000fe67:
                local_4068 = uVar11;
                local_4080 = uVar5;
                uVar7 = (**(code **)(*param_1 + 0x48))(param_1,local_3038,local_4080 & 0xffffffff,0)
                ;
                uVar10 = (ulonglong)uVar7;
                if (uVar7 != 0) goto switchD_18000fc60_default;
                local_4090 = local_4090 - (local_4068 & 0xffffffff);
                uVar7 = local_404c;
                if (local_4090 == 0) goto LAB_18000f7de;
                local_4068 = local_4090;
                local_4080 = uVar8;
              } while( true );
            }
            uVar11 = 1;
            uVar10 = 0xfffffffe;
            local_40b8 = 1;
          }
          else {
switchD_18000f907_default:
            uVar11 = (ulonglong)local_40b8;
            plVar9 = param_1;
          }
LAB_18000fefe:
          uVar8 = local_4088;
          param_1 = plVar9;
          uVar5 = local_4070;
          if ((iVar12 == 0) || (local_4058 = local_4058 + iVar12, local_4048 <= local_4058))
          goto LAB_18000f6b0;
        }
        local_40b8 = 1;
        uVar8 = local_4088;
        uVar5 = local_4070;
        uVar11 = 1;
      }
    }
    else if (iVar12 == 4) goto LAB_18000f6e9;
  } while( true );
LAB_18000ffc3:
  uVar11 = 1;
  local_40b8 = 1;
  uVar8 = local_4088;
  param_1 = plVar9;
  uVar5 = local_4070;
  goto LAB_18000f6b0;
}


