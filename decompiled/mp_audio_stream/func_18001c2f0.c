// FUN_18001c2f0 @ 18001c2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18001c2f0(longlong param_1,uint param_2,void *param_3,uint param_4,int *param_5,
                 ulonglong param_6)

{
  uint *puVar1;
  float *pfVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  void **ppvVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStackY_10d8 [32];
  uint local_10a8;
  uint local_10a4;
  uint local_10a0;
  uint local_109c;
  uint local_1098;
  int local_1094;
  uint local_1090;
  uint local_108c;
  uint local_1088;
  uint local_1084;
  void *local_1080;
  uint local_1078;
  uint local_1074;
  longlong local_1070;
  void **local_1068;
  longlong local_1060;
  longlong local_1058;
  ulonglong local_1050;
  int *local_1048;
  void *local_1038 [254];
  void *local_848 [254];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_10d8;
  iVar8 = 0;
  uVar16 = (ulonglong)param_2;
  uVar13 = (ulonglong)param_4;
  local_1048 = param_5;
  uVar23 = 0;
  local_1094 = 0;
  local_10a8 = 0;
  if (((param_5 == (int *)0x0) || (*param_5 = 0, param_1 == 0)) ||
     (*(uint *)(param_1 + 0x44) <= param_2)) {
    iVar8 = -2;
  }
  else {
    LOCK();
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 == 0) {
      *(int *)(param_1 + 0x20) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 != 1) {
      LOCK();
      uVar20 = *(ulonglong *)(param_1 + 0x28);
      if (uVar20 == 0) {
        *(ulonglong *)(param_1 + 0x28) = 0;
        uVar20 = 0;
      }
      UNLOCK();
      if (uVar20 <= param_6) {
        LOCK();
        uVar20 = *(ulonglong *)(param_1 + 0x30);
        if (uVar20 == 0) {
          *(ulonglong *)(param_1 + 0x30) = 0;
          uVar20 = 0;
        }
        UNLOCK();
        uVar21 = param_6 + uVar13;
        if (uVar21 < uVar20) {
          LOCK();
          uVar20 = *(ulonglong *)(param_1 + 0x28);
          if (uVar20 == 0) {
            *(ulonglong *)(param_1 + 0x28) = 0;
            uVar20 = 0;
          }
          UNLOCK();
          LOCK();
          uVar10 = *(ulonglong *)(param_1 + 0x30);
          if (uVar10 == 0) {
            *(ulonglong *)(param_1 + 0x30) = 0;
            uVar10 = 0;
          }
          UNLOCK();
          uVar14 = uVar23;
          if (param_6 < uVar20) {
            uVar14 = (int)uVar21 - (int)uVar20;
          }
          uVar15 = uVar23;
          if (uVar10 < uVar21) {
            uVar15 = (int)uVar21 - (int)uVar10;
          }
          uVar19 = 0;
          local_1098 = param_2;
          local_1074 = uVar14;
          if (uVar14 == 0) {
            lVar18 = *(longlong *)(param_1 + 0x50);
          }
          else {
            uVar22 = uVar19;
            if (param_2 < *(uint *)(param_1 + 0x44)) {
              uVar22 = (uint)*(byte *)(uVar16 * 0x38 + 9 + *(longlong *)(param_1 + 0x50));
            }
            local_1080 = param_3;
            FUN_18002c430(param_3,(ulonglong)uVar14,5,uVar22);
            lVar18 = *(longlong *)(param_1 + 0x50);
            uVar22 = uVar19;
            if (param_2 < *(uint *)(param_1 + 0x44)) {
              uVar22 = (uint)*(byte *)((ulonglong)param_2 * 0x38 + 9 + lVar18);
            }
            uVar13 = (ulonglong)(param_4 - uVar14);
            param_3 = (void *)((longlong)local_1080 + (ulonglong)(uVar22 * uVar14) * 4);
          }
          if (uVar15 != 0) {
            uVar13 = (ulonglong)((int)uVar13 - uVar15);
          }
          uVar14 = *(uint *)(param_1 + 0x40);
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar22 = (uint)uVar13;
          local_109c = uVar14;
          local_1084 = uVar15;
          local_1080 = param_3;
          if ((uVar14 == 0) && (uVar15 == 1)) {
            local_10a0 = 0;
            local_10a4 = uVar22;
            local_1038[0] = param_3;
            if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x14) & 1) != 0) {
              if (param_2 == 0) {
                uVar23 = (uint)*(byte *)(*(longlong *)(param_1 + 0x50) + 9);
              }
              FUN_18002c430(param_3,uVar13,5,uVar23);
            }
            uVar23 = local_10a4;
            if ((code *)**(undefined8 **)(param_1 + 8) != (code *)0x0) {
              (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,&local_10a0,local_1038);
              uVar23 = local_10a4;
            }
          }
          else if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x14) & 1) == 0) {
            if (*(ushort *)(param_1 + 0x18) < uVar22) {
              uVar13 = (ulonglong)(uint)*(ushort *)(param_1 + 0x18);
            }
            pcVar4 = *(code **)(*(longlong *)(param_1 + 8) + 8);
            local_1078 = (uint)uVar13;
            local_10a8 = uVar22;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(param_1,uVar13,&local_10a8);
              lVar18 = *(longlong *)(param_1 + 0x50);
            }
            if (*(ushort *)(param_1 + 0x18) < local_10a8) {
              local_10a8 = (uint)*(ushort *)(param_1 + 0x18);
            }
            local_1058 = uVar16 * 0x38;
            puVar1 = (uint *)(lVar18 + 0xc + local_1058);
            LOCK();
            uVar23 = *puVar1;
            if (uVar23 == 0) {
              *puVar1 = 0;
              uVar23 = 0;
            }
            UNLOCK();
            local_1050 = uVar16;
            if ((uVar23 & 1) == 0) {
              if (param_3 != (void *)0x0) {
                if (param_2 < *(uint *)(param_1 + 0x44)) {
                  uVar19 = (uint)*(byte *)(local_1058 + 9 + *(longlong *)(param_1 + 0x50));
                }
                uVar3 = *(ushort *)(param_1 + 0x1a);
                pvVar11 = (void *)FUN_18001bdf0(param_1,param_2);
                param_3 = local_1080;
                FUN_180021ed0(local_1080,pvVar11,(ulonglong)uVar3,5,uVar19);
              }
            }
            else {
              *(undefined2 *)(param_1 + 0x1a) = 0;
              uVar23 = local_10a8;
              do {
                uVar13 = 0;
                local_10a4 = 0;
                if (uVar15 != 0) {
                  ppvVar17 = local_1038;
                  uVar16 = uVar13;
                  uVar20 = uVar13;
                  do {
                    lVar18 = *(longlong *)(param_1 + 0x50);
                    do {
                      uVar23 = *(uint *)(uVar16 + 0xc + lVar18);
                      puVar1 = (uint *)(uVar16 + 0xc + lVar18);
                      LOCK();
                      bVar24 = uVar23 == *puVar1;
                      if (bVar24) {
                        *puVar1 = uVar23 & 0xfffffffe;
                      }
                      UNLOCK();
                    } while (!bVar24);
                    pvVar11 = (void *)FUN_18001bdf0(param_1,(uint)uVar20);
                    *ppvVar17 = pvVar11;
                    uVar19 = (uint)uVar20 + 1;
                    uVar20 = (ulonglong)uVar19;
                    ppvVar17 = ppvVar17 + 1;
                    uVar16 = uVar16 + 0x38;
                    uVar14 = local_109c;
                    uVar23 = local_10a8;
                  } while (uVar19 < uVar15);
                }
                if (*(short *)(param_1 + 0x1c) == 0) {
                  local_1088 = 0;
                  local_108c = 0;
                  uVar16 = uVar13;
                  if (uVar14 != 0) {
                    ppvVar17 = local_848;
                    local_1070 = 0;
                    local_1060 = 0;
                    uVar20 = uVar13;
                    do {
                      lVar6 = local_1060;
                      lVar12 = local_1070;
                      uVar14 = (uint)uVar20;
                      local_1068 = ppvVar17;
                      pvVar11 = (void *)FUN_18001bd10(param_1,uVar14);
                      lVar18 = *(longlong *)(param_1 + 0x48);
                      *ppvVar17 = pvVar11;
                      local_1094 = FUN_18001bee0(param_1,lVar18 + lVar6,pvVar11,uVar23,&local_1090);
                      uVar16 = (ulonglong)local_1090;
                      if (local_1094 != 0) {
                        uVar16 = uVar13;
                      }
                      uVar23 = (uint)uVar16;
                      local_1090 = uVar23;
                      if (uVar23 < local_10a8) {
                        uVar20 = uVar13;
                        uVar15 = 0;
                        if (uVar14 < *(uint *)(param_1 + 0x40)) {
                          uVar20 = (ulonglong)
                                   *(byte *)(lVar12 + 0x40 + *(longlong *)(param_1 + 0x48));
                          uVar15 = (uint)*(byte *)(lVar12 + 0x40 + *(longlong *)(param_1 + 0x48));
                        }
                        uVar20 = uVar20 * (local_10a8 - uVar23);
                        uVar21 = uVar20 * 4;
                        pvVar11 = (void *)((longlong)*ppvVar17 + (ulonglong)(uVar15 * uVar23) * 4);
                        lVar12 = local_1070;
                        ppvVar17 = local_1068;
                        while (uVar20 != 0) {
                          uVar20 = uVar21;
                          if (0xffffffff < uVar21) {
                            uVar20 = 0xffffffff;
                          }
                          local_1070 = lVar12;
                          local_1068 = ppvVar17;
                          if ((pvVar11 != (void *)0x0) && (uVar20 != 0)) {
                            memset(pvVar11,0,uVar20);
                          }
                          pvVar11 = (void *)((longlong)pvVar11 + uVar20);
                          uVar21 = uVar21 - uVar20;
                          uVar14 = local_1088;
                          lVar12 = local_1070;
                          ppvVar17 = local_1068;
                          uVar20 = uVar21;
                        }
                      }
                      if (uVar23 < local_108c) {
                        uVar16 = (ulonglong)local_108c;
                      }
                      local_1088 = uVar14 + 1;
                      uVar20 = (ulonglong)local_1088;
                      local_1070 = lVar12 + 0x48;
                      local_1060 = local_1060 + 0x48;
                      local_108c = (uint)uVar16;
                      ppvVar17 = ppvVar17 + 1;
                      uVar23 = local_10a8;
                      local_1068 = ppvVar17;
                    } while (local_1088 < local_109c);
                  }
                  *(undefined2 *)(param_1 + 0x1e) = 0;
                  *(short *)(param_1 + 0x1c) = (short)uVar16;
                }
                else if (uVar14 != 0) {
                  uVar14 = *(uint *)(param_1 + 0x40);
                  ppvVar17 = local_848;
                  uVar3 = *(ushort *)(param_1 + 0x1e);
                  lVar18 = 0;
                  do {
                    uVar15 = (uint)uVar13;
                    if (uVar15 < uVar14) {
                      uVar16 = (ulonglong)*(byte *)(lVar18 + 0x40 + *(longlong *)(param_1 + 0x48));
                    }
                    else {
                      uVar16 = 0;
                    }
                    lVar12 = FUN_18001bd10(param_1,uVar15);
                    uVar13 = (ulonglong)(uVar15 + 1);
                    lVar18 = lVar18 + 0x48;
                    *ppvVar17 = (void *)(lVar12 + uVar3 * uVar16 * 4);
                    ppvVar17 = ppvVar17 + 1;
                    uVar23 = local_10a8;
                  } while (uVar15 + 1 < local_109c);
                }
                uVar14 = local_1078;
                param_3 = local_1080;
                uVar13 = 0;
                if (local_1080 != (void *)0x0) {
                  if (local_1098 < *(uint *)(param_1 + 0x44)) {
                    uVar13 = (ulonglong)*(byte *)(local_1058 + 9 + *(longlong *)(param_1 + 0x50));
                  }
                  local_1038[local_1050] =
                       (void *)((longlong)local_1080 + *(ushort *)(param_1 + 0x1a) * uVar13 * 4);
                }
                puVar5 = *(undefined8 **)(param_1 + 8);
                local_10a4 = local_1078 - *(ushort *)(param_1 + 0x1a);
                if ((*(byte *)((longlong)puVar5 + 0x14) & 2) == 0) {
                  local_10a0 = (uint)*(ushort *)(param_1 + 0x1c);
LAB_18001c8d9:
                  if ((local_10a0 == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 8) == 0)) {
                    local_10a4 = 0;
                  }
                  else if ((code *)**(undefined8 **)(param_1 + 8) != (code *)0x0) {
                    (*(code *)**(undefined8 **)(param_1 + 8))
                              (param_1,local_848,&local_10a0,local_1038);
                    uVar23 = local_10a8;
                  }
                  *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + (short)local_10a0;
                  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) - (short)local_10a0;
                }
                else {
                  if ((((*(byte *)((longlong)puVar5 + 0x14) & 4) == 0) ||
                      (*(short *)(param_1 + 0x1e) != 0)) ||
                     (bVar24 = true, *(short *)(param_1 + 0x1c) != 0)) {
                    bVar24 = false;
                  }
                  if (*(ushort *)(param_1 + 0x1c) < (ushort)uVar23) {
                    *(ushort *)(param_1 + 0x1c) = (ushort)uVar23;
                  }
                  local_10a0 = uVar23;
                  if (!bVar24) goto LAB_18001c8d9;
                  if ((code *)*puVar5 != (code *)0x0) {
                    (*(code *)*puVar5)(param_1,0,&local_10a0,local_1038);
                    uVar23 = local_10a8;
                  }
                }
                *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + (short)local_10a4;
              } while ((*(ushort *)(param_1 + 0x1a) != uVar14) &&
                      ((uVar14 = local_109c, uVar15 = local_1084, local_10a4 != 0 ||
                       (local_10a0 != 0))));
              uVar16 = (ulonglong)local_1098;
            }
            uVar3 = *(ushort *)(param_1 + 0x1a);
            lVar18 = *(longlong *)(param_1 + 0x50);
            do {
              uVar23 = *(uint *)(uVar16 * 0x38 + 0xc + lVar18);
              puVar1 = (uint *)(uVar16 * 0x38 + 0xc + lVar18);
              LOCK();
              bVar24 = uVar23 == *puVar1;
              if (bVar24) {
                *puVar1 = uVar23 | 1;
              }
              UNLOCK();
              uVar23 = (uint)uVar3;
              iVar8 = local_1094;
            } while (!bVar24);
          }
          else {
            local_1038[0] = param_3;
            local_848[0] = param_3;
            iVar8 = FUN_18001bee0(param_1,*(longlong *)(param_1 + 0x48),param_3,uVar22,&local_10a8);
            uVar23 = local_10a8;
            if (iVar8 == 0) {
              local_10a0 = local_10a8;
              local_10a4 = local_10a8;
              if ((local_10a8 != 0) && ((code *)**(undefined8 **)(param_1 + 8) != (code *)0x0)) {
                (*(code *)**(undefined8 **)(param_1 + 8))(param_1,local_848,&local_10a0,local_1038);
              }
            }
          }
          uVar14 = 0;
          pfVar2 = (float *)(*(longlong *)(param_1 + 0x50) + 0x1c + uVar16 * 0x38);
          LOCK();
          fVar9 = *pfVar2;
          if (fVar9 == 0.0) {
            *pfVar2 = 0.0;
            fVar9 = 0.0;
          }
          UNLOCK();
          if ((uint)uVar16 < *(uint *)(param_1 + 0x44)) {
            uVar14 = (uint)*(byte *)(uVar16 * 0x38 + 9 + *(longlong *)(param_1 + 0x50));
          }
          FUN_1800216d0(param_3,param_3,(ulonglong)(uVar14 * uVar23),fVar9);
          LOCK();
          *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (ulonglong)uVar23;
          UNLOCK();
          *local_1048 = local_1074 + uVar23;
          return iVar8;
        }
      }
    }
    iVar8 = 0;
  }
  return iVar8;
}


