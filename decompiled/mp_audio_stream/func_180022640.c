// FUN_180022640 @ 180022640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180022640(longlong param_1,int *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 uVar5;
  DWORD DVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  HANDLE pvVar11;
  ulonglong uVar12;
  void *pvVar13;
  char *pcVar14;
  size_t sVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  undefined *puVar21;
  ulonglong uVar22;
  undefined *puVar23;
  uint uVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  longlong *plVar27;
  undefined1 auStackY_818 [32];
  longlong local_7d8;
  int local_7c8 [6];
  longlong local_7b0;
  longlong local_7a8;
  int local_7a0;
  int local_79c;
  uint local_798;
  int local_794;
  undefined1 local_790 [256];
  int local_690;
  int local_68c;
  int local_688;
  longlong local_678;
  int local_670;
  int local_66c;
  uint local_668;
  int local_664;
  undefined1 local_660 [256];
  int local_560;
  int local_55c;
  int local_558;
  char local_548 [255];
  undefined1 auStack_449 [1025];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_818;
  local_7b0 = param_1;
  if (param_1 == 0) {
    uVar8 = FUN_180023a80((undefined8 *)0x0,0,(undefined8 *)0x0,(longlong)param_2,(longlong)param_3)
    ;
    return uVar8;
  }
  if ((param_3 == (longlong *)0x0) || (memset(param_3,0,0xcf0), param_2 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0xfffffffd;
  }
  iVar2 = *param_2;
  plVar27 = (longlong *)0x0;
  local_7d8 = 0xfe;
  if ((iVar2 == 2) || (iVar2 == 3)) {
    uVar7 = param_2[0x29];
    if (0xfe < uVar7) {
      return 0xfffffffe;
    }
    pcVar14 = *(char **)(param_2 + 0x2a);
    if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
      plVar9 = plVar27;
      if (uVar7 == 0) {
        return 0xfffffffe;
      }
      do {
        uVar24 = (int)plVar9 + 1;
        if (uVar24 < uVar7) {
          uVar16 = uVar24;
          do {
            if (*(char *)((longlong)plVar9 + (longlong)pcVar14) == pcVar14[uVar16]) {
              return 0xfffffffe;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar7);
        }
        plVar9 = (longlong *)(ulonglong)uVar24;
      } while (uVar24 < uVar7);
    }
  }
  if (((iVar2 - 1U & 0xfffffffc) == 0) && (iVar2 != 2)) {
    uVar7 = param_2[0x1f];
    if (0xfe < uVar7) {
      return 0xfffffffe;
    }
    pcVar14 = *(char **)(param_2 + 0x20);
    if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
      plVar9 = plVar27;
      if (uVar7 == 0) {
        return 0xfffffffe;
      }
      do {
        uVar24 = (int)plVar9 + 1;
        if (uVar24 < uVar7) {
          uVar16 = uVar24;
          do {
            if (*(char *)((longlong)plVar9 + (longlong)pcVar14) == pcVar14[uVar16]) {
              return 0xfffffffe;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar7);
        }
        plVar9 = (longlong *)(ulonglong)uVar24;
      } while (uVar24 < uVar7);
    }
  }
  *param_3 = param_1;
  param_3[6] = *(longlong *)(param_2 + 0xe);
  param_3[3] = *(longlong *)(param_2 + 8);
  param_3[4] = *(longlong *)(param_2 + 10);
  param_3[5] = *(longlong *)(param_2 + 0xc);
  plVar9 = plVar27;
  if (*(longlong **)(param_2 + 0x1c) != (longlong *)0x0) {
    plVar9 = param_3 + 0x26;
    lVar19 = 2;
    plVar10 = *(longlong **)(param_2 + 0x1c);
    plVar18 = plVar9;
    do {
      lVar4 = plVar10[1];
      *plVar18 = *plVar10;
      plVar18[1] = lVar4;
      lVar4 = plVar10[3];
      plVar18[2] = plVar10[2];
      plVar18[3] = lVar4;
      lVar4 = plVar10[5];
      plVar18[4] = plVar10[4];
      plVar18[5] = lVar4;
      lVar4 = plVar10[7];
      plVar18[6] = plVar10[6];
      plVar18[7] = lVar4;
      lVar4 = plVar10[9];
      plVar18[8] = plVar10[8];
      plVar18[9] = lVar4;
      lVar4 = plVar10[0xb];
      plVar18[10] = plVar10[10];
      plVar18[0xb] = lVar4;
      lVar4 = plVar10[0xd];
      plVar18[0xc] = plVar10[0xc];
      plVar18[0xd] = lVar4;
      lVar4 = plVar10[0xf];
      plVar18[0xe] = plVar10[0xe];
      plVar18[0xf] = lVar4;
      lVar19 = lVar19 + -1;
      plVar10 = plVar10 + 0x10;
      plVar18 = plVar18 + 0x10;
    } while (lVar19 != 0);
  }
  param_3[0x25] = (longlong)plVar9;
  plVar9 = plVar27;
  if (*(longlong **)(param_2 + 0x26) != (longlong *)0x0) {
    plVar9 = param_3 + 0xd9;
    lVar19 = 2;
    plVar10 = *(longlong **)(param_2 + 0x26);
    plVar18 = plVar9;
    do {
      lVar4 = plVar10[1];
      *plVar18 = *plVar10;
      plVar18[1] = lVar4;
      lVar4 = plVar10[3];
      plVar18[2] = plVar10[2];
      plVar18[3] = lVar4;
      lVar4 = plVar10[5];
      plVar18[4] = plVar10[4];
      plVar18[5] = lVar4;
      lVar4 = plVar10[7];
      plVar18[6] = plVar10[6];
      plVar18[7] = lVar4;
      lVar4 = plVar10[9];
      plVar18[8] = plVar10[8];
      plVar18[9] = lVar4;
      lVar4 = plVar10[0xb];
      plVar18[10] = plVar10[10];
      plVar18[0xb] = lVar4;
      lVar4 = plVar10[0xd];
      plVar18[0xc] = plVar10[0xc];
      plVar18[0xd] = lVar4;
      lVar4 = plVar10[0xf];
      plVar18[0xe] = plVar10[0xe];
      plVar18[0xf] = lVar4;
      lVar19 = lVar19 + -1;
      plVar10 = plVar10 + 0x10;
      plVar18 = plVar18 + 0x10;
    } while (lVar19 != 0);
  }
  param_3[0xd8] = (longlong)plVar9;
  puVar26 = (undefined1 *)((longlong)param_3 + 0x8d4);
  *(char *)((longlong)param_3 + 0x65) = (char)param_2[6];
  *(undefined1 *)((longlong)param_3 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_3 + 0x67) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)(param_3 + 0xd) = *(undefined1 *)((longlong)param_2 + 0x1b);
  LOCK();
  *(undefined4 *)((longlong)param_3 + 0x6c) = 0x3f800000;
  UNLOCK();
  *(int *)(param_3 + 1) = *param_2;
  *(int *)((longlong)param_3 + 0xc) = param_2[1];
  *(int *)(param_3 + 0x21) = param_2[0x14];
  *(int *)(param_3 + 0x24) = param_2[0x1a];
  param_3[0x22] = *(longlong *)(param_2 + 0x16);
  param_3[0x23] = *(longlong *)(param_2 + 0x18);
  *(int *)(param_3 + 0x119) = param_2[0x2e];
  *(int *)((longlong)param_3 + 0x8cc) = param_2[0x28];
  *(int *)(param_3 + 0x11a) = param_2[0x29];
  uVar7 = param_2[0x29];
  uVar8 = (ulonglong)uVar7;
  if ((puVar26 != (undefined1 *)0x0) && (uVar7 != 0)) {
    if (*(void **)(param_2 + 0x2a) == (void *)0x0) {
      lVar19 = 0xfe;
      plVar9 = plVar27;
      if (uVar7 != 0) {
        do {
          uVar7 = (uint)plVar9;
          if (lVar19 == 0) break;
          uVar12 = FUN_180005500(0,(uint)uVar8,uVar7);
          *puVar26 = (char)uVar12;
          lVar19 = lVar19 + -1;
          puVar26 = puVar26 + 1;
          plVar9 = (longlong *)(ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 < (uint)uVar8);
      }
    }
    else {
      memcpy(puVar26,*(void **)(param_2 + 0x2a),uVar8);
    }
  }
  puVar26 = (undefined1 *)((longlong)param_3 + 0x33c);
  *(int *)(param_3 + 0x15d) = param_2[0x2c];
  *(int *)((longlong)param_3 + 0xaec) = param_2[0x2d];
  *(int *)(param_3 + 0x66) = param_2[0x24];
  *(int *)((longlong)param_3 + 0x334) = param_2[0x1e];
  *(int *)(param_3 + 0x67) = param_2[0x1f];
  uVar7 = param_2[0x1f];
  uVar8 = (ulonglong)uVar7;
  if ((puVar26 != (undefined1 *)0x0) && (uVar7 != 0)) {
    if (*(void **)(param_2 + 0x20) == (void *)0x0) {
      lVar19 = 0xfe;
      plVar9 = plVar27;
      if (uVar7 != 0) {
        do {
          uVar7 = (uint)plVar9;
          if (lVar19 == 0) break;
          uVar12 = FUN_180005500(0,(uint)uVar8,uVar7);
          *puVar26 = (char)uVar12;
          lVar19 = lVar19 + -1;
          puVar26 = puVar26 + 1;
          plVar9 = (longlong *)(ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 < (uint)uVar8);
      }
    }
    else {
      memcpy(puVar26,*(void **)(param_2 + 0x20),uVar8);
    }
  }
  plVar9 = param_3 + 7;
  *(int *)(param_3 + 0xaa) = param_2[0x22];
  *(int *)((longlong)param_3 + 0x554) = param_2[0x23];
  if (plVar9 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  pvVar11 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *plVar9 = (longlong)pvVar11;
  if (pvVar11 == (HANDLE)0x0) {
    DVar6 = GetLastError();
    uVar8 = FUN_18001cb40(DVar6);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  plVar10 = param_3 + 8;
  if (plVar10 == (longlong *)0x0) {
    CloseHandle((HANDLE)*plVar9);
    return 0xfffffffe;
  }
  pvVar11 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *plVar10 = (longlong)pvVar11;
  if (pvVar11 == (HANDLE)0x0) {
    DVar6 = GetLastError();
    uVar8 = FUN_18001cb40(DVar6);
    if ((int)uVar8 != 0) {
      CloseHandle((HANDLE)*plVar9);
      return uVar8 & 0xffffffff;
    }
  }
  plVar18 = param_3 + 9;
  if (plVar18 == (longlong *)0x0) {
    uVar8 = 0xfffffffe;
    goto LAB_180022d51;
  }
  pvVar11 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *plVar18 = (longlong)pvVar11;
  if (pvVar11 == (HANDLE)0x0) {
    DVar6 = GetLastError();
    uVar12 = FUN_18001cb40(DVar6);
    uVar8 = uVar12 & 0xffffffff;
    if ((int)uVar12 != 0) goto LAB_180022d51;
  }
  if (param_3 + 10 == (longlong *)0x0) {
    uVar8 = 0xfffffffe;
  }
  else {
    pvVar11 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    param_3[10] = (longlong)pvVar11;
    if (pvVar11 == (HANDLE)0x0) {
      DVar6 = GetLastError();
      uVar12 = FUN_18001cb40(DVar6);
      uVar8 = uVar12 & 0xffffffff;
      if ((int)uVar12 != 0) goto LAB_180022d47;
    }
    memset(local_660,0,0x110);
    local_678 = *(longlong *)(param_2 + 0x1c);
    local_668 = param_2[0x1f];
    uVar8 = (ulonglong)local_668;
    local_670 = param_2[0x24];
    local_66c = param_2[0x1e];
    local_664 = param_2[1];
    if (local_668 != 0) {
      if (*(void **)(param_2 + 0x20) == (void *)0x0) {
        puVar26 = local_660;
        lVar19 = 0xfe;
        plVar25 = plVar27;
        if (local_668 != 0) {
          do {
            uVar7 = (uint)plVar25;
            if (lVar19 == 0) break;
            uVar12 = FUN_180005500(0,(uint)uVar8,uVar7);
            *puVar26 = (char)uVar12;
            lVar19 = lVar19 + -1;
            puVar26 = puVar26 + 1;
            plVar25 = (longlong *)(ulonglong)(uVar7 + 1);
          } while (uVar7 + 1 < (uint)uVar8);
        }
      }
      else {
        memcpy(local_660,*(void **)(param_2 + 0x20),(ulonglong)local_668);
      }
    }
    local_560 = param_2[2];
    iVar2 = param_2[4];
    local_55c = param_2[3];
    local_558 = iVar2;
    if (iVar2 == 0) {
      local_558 = 3;
    }
    memset(local_790,0,0x110);
    local_7a8 = *(longlong *)(param_2 + 0x26);
    local_798 = param_2[0x29];
    uVar8 = (ulonglong)local_798;
    local_7a0 = param_2[0x2e];
    local_79c = param_2[0x28];
    local_794 = param_2[1];
    if (local_798 != 0) {
      if (*(void **)(param_2 + 0x2a) == (void *)0x0) {
        puVar26 = local_790;
        plVar25 = plVar27;
        if (local_798 != 0) {
          do {
            uVar7 = (uint)plVar25;
            if (local_7d8 == 0) break;
            uVar12 = FUN_180005500(0,(uint)uVar8,uVar7);
            *puVar26 = (char)uVar12;
            puVar26 = puVar26 + 1;
            local_7d8 = local_7d8 + -1;
            plVar25 = (longlong *)(ulonglong)(uVar7 + 1);
          } while (uVar7 + 1 < (uint)uVar8);
        }
      }
      else {
        memcpy(local_790,*(void **)(param_2 + 0x2a),(ulonglong)local_798);
      }
    }
    local_690 = param_2[2];
    local_68c = param_2[3];
    local_688 = iVar2;
    if (iVar2 == 0) {
      local_688 = 3;
    }
    uVar7 = (**(code **)(local_7b0 + 0x20))(param_3,param_2,&local_678,&local_7a8);
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = FUN_180023c60(param_3,*param_2,&local_678,&local_7a8);
      lVar19 = local_7b0;
      uVar12 = uVar8 & 0xffffffff;
      if ((int)uVar8 != 0) goto LAB_18002318f;
      if (*(char *)((longlong)param_2 + 0x1b) == '\0') {
        uVar7 = param_2[2];
        if ((param_2[2] == 0) && (uVar7 = 0, *(int *)((longlong)param_3 + 0xc) != 0)) {
          uVar7 = (uint)(*(int *)((longlong)param_3 + 0xc) * param_2[3]) / 1000;
        }
        if ((*param_2 == 2) || (*param_2 - 3U < 2)) {
          *(undefined4 *)((longlong)param_3 + 0xc34) = 0;
          *(uint *)(param_3 + 0x186) = uVar7;
          uVar24 = uVar7;
          if (uVar7 == 0) {
            uVar24 = *(uint *)(param_3 + 0x15c);
            *(uint *)(param_3 + 0x186) = uVar24;
          }
          local_7c8[0] = 0;
          local_7c8[1] = 1;
          local_7c8[2] = 2;
          local_7c8[3] = 3;
          local_7c8[4] = 4;
          local_7c8[5] = 4;
          uVar8 = (ulonglong)
                  (uVar24 * local_7c8[*(int *)((longlong)param_3 + 0x8cc)] * (int)param_3[0x11a]);
          if ((undefined8 *)(local_7b0 + 0x100) == (undefined8 *)0x0) {
            pvVar13 = malloc(uVar8);
          }
          else {
            if (*(code **)(local_7b0 + 0x108) == (code *)0x0) {
              param_3[0x185] = 0;
              goto LAB_180022e8d;
            }
            pvVar13 = (void *)(**(code **)(local_7b0 + 0x108))
                                        (uVar8,*(undefined8 *)(local_7b0 + 0x100));
          }
          param_3[0x185] = (longlong)pvVar13;
          if (pvVar13 == (void *)0x0) goto LAB_180022e8d;
          FUN_18002c430(pvVar13,(ulonglong)*(uint *)(param_3 + 0x186),
                        *(int *)((longlong)param_3 + 0x8cc),*(uint *)(param_3 + 0x11a));
          *(int *)((longlong)param_3 + 0xc34) = (int)param_3[0x186];
        }
        if ((*param_2 == 1) || (*param_2 == 3)) {
          *(undefined4 *)((longlong)param_3 + 0x69c) = 0;
          if (*param_2 == 3) {
            uVar7 = *(uint *)(param_3 + 0x186);
LAB_180022f1b:
            *(uint *)(param_3 + 0xd3) = uVar7;
          }
          else {
            *(uint *)(param_3 + 0xd3) = uVar7;
            if (uVar7 == 0) {
              uVar7 = *(uint *)(param_3 + 0xa9);
              goto LAB_180022f1b;
            }
          }
          puVar1 = (undefined8 *)(lVar19 + 0x100);
          local_7c8[0] = 0;
          local_7c8[1] = 1;
          local_7c8[2] = 2;
          local_7c8[3] = 3;
          local_7c8[4] = 4;
          local_7c8[5] = 4;
          uVar8 = (ulonglong)
                  (local_7c8[*(int *)((longlong)param_3 + 0x334)] * (int)param_3[0x67] * uVar7);
          if (puVar1 == (undefined8 *)0x0) {
            pvVar13 = malloc(uVar8);
          }
          else {
            pcVar3 = *(code **)(lVar19 + 0x108);
            if (pcVar3 == (code *)0x0) {
              param_3[0xd2] = 0;
              FUN_180024310(param_3);
              return 0xfffffffc;
            }
            pvVar13 = (void *)(*pcVar3)(uVar8,*puVar1);
          }
          param_3[0xd2] = (longlong)pvVar13;
          if (pvVar13 == (void *)0x0) {
LAB_180022e8d:
            FUN_180024310(param_3);
            return 0xfffffffc;
          }
          FUN_18002c430(pvVar13,(ulonglong)*(uint *)(param_3 + 0xd3),
                        *(int *)((longlong)param_3 + 0x334),*(uint *)(param_3 + 0x67));
          *(undefined4 *)((longlong)param_3 + 0x69c) = 0;
        }
      }
      if (((*(longlong *)(local_7b0 + 0x40) == 0) && (*(longlong *)(local_7b0 + 0x48) == 0)) &&
         (*(longlong *)(local_7b0 + 0x50) == 0)) {
        if (*param_2 == 3) {
          lVar19 = param_3[0x15c];
          uVar8 = FUN_180002c10(*(uint *)((longlong)param_3 + 0xc),
                                *(uint *)((longlong)param_3 + 0x9dc),
                                (ulonglong)(uint)((int)lVar19 * 5));
          if ((int)uVar8 == 0) {
            FUN_180024310(param_3);
            return 0xfffffffe;
          }
          uVar8 = FUN_18002afc0(*(int *)((longlong)param_3 + 0x8cc),(int)param_3[0x11a],(int)uVar8,1
                                ,0,0,(longlong *)(*param_3 + 0x100),param_3 + 0xe);
          uVar12 = uVar8 & 0xffffffff;
          if ((int)uVar8 != 0) goto LAB_18002318f;
          if (param_3 + 0xe != (longlong *)0x0) {
            local_7c8[0] = 0;
            local_7c8[3] = 3;
            local_7c8[1] = 1;
            local_7c8[2] = 2;
            local_7c8[4] = 4;
            local_7c8[5] = 4;
            uVar7 = local_7c8[(int)param_3[0x1f]] * *(int *)((longlong)param_3 + 0xfc) * (int)lVar19
                    * 2;
            if (param_3 != (longlong *)0xffffffffffffff48) {
              LOCK();
              uVar24 = *(uint *)((longlong)param_3 + 0xcc);
              if (uVar24 == 0) {
                *(uint *)((longlong)param_3 + 0xcc) = 0;
                uVar24 = 0;
              }
              UNLOCK();
              uVar20 = uVar24 & 0x7fffffff;
              LOCK();
              uVar16 = *(uint *)(param_3 + 0x1a);
              if (uVar16 == 0) {
                *(uint *)(param_3 + 0x1a) = 0;
                uVar16 = 0;
              }
              UNLOCK();
              uVar17 = uVar16 & 0x7fffffff;
              uVar16 = uVar16 & 0x80000000;
              uVar8 = (ulonglong)uVar7 + (ulonglong)uVar17;
              if ((uVar24 & 0x80000000) == uVar16) {
                uVar24 = *(uint *)(param_3 + 0x18);
                uVar20 = uVar16 ^ 0x80000000;
                if (uVar8 < uVar24) {
                  uVar20 = uVar16;
                }
                uVar16 = (uVar17 + uVar7) - uVar24;
                if (uVar8 < uVar24) {
                  uVar16 = uVar17 + uVar7;
                }
                LOCK();
                *(uint *)(param_3 + 0x1a) = uVar16 | uVar20;
                UNLOCK();
                LOCK();
                *(undefined4 *)(param_3 + 2) = 1;
                UNLOCK();
                goto LAB_1800231bc;
              }
              if (uVar8 <= uVar20) {
                uVar20 = uVar17 + uVar7;
              }
              LOCK();
              *(uint *)(param_3 + 0x1a) = uVar20 | uVar16;
              UNLOCK();
            }
          }
        }
        LOCK();
        *(undefined4 *)(param_3 + 2) = 1;
        UNLOCK();
      }
      else {
        uVar8 = FUN_18001d680(param_3 + 0xb,*(undefined4 *)(local_7b0 + 0xe8),
                              *(SIZE_T *)(local_7b0 + 0xf0),0x18001e430,(longlong)param_3,
                              (longlong *)(local_7b0 + 0x100));
        uVar12 = uVar8 & 0xffffffff;
        if ((int)uVar8 != 0) {
LAB_18002318f:
          FUN_180024310(param_3);
          return uVar12;
        }
        DVar6 = WaitForSingleObject((HANDLE)param_3[10],0xffffffff);
        if ((DVar6 != 0) && (DVar6 != 0x102)) {
          GetLastError();
        }
      }
LAB_1800231bc:
      lVar19 = *param_3;
      plVar9 = plVar27;
      if (lVar19 != 0) {
        plVar9 = *(longlong **)(lVar19 + 0x70);
      }
      if (*(uint *)(lVar19 + 0x68) < 0xf) {
        pcVar14 = (&PTR_s_WASAPI_1800360b8)[(longlong)(int)*(uint *)(lVar19 + 0x68) * 2];
      }
      else {
        pcVar14 = "Unknown";
      }
      FUN_180025970((longlong)plVar9,3,"[%s]\n",pcVar14);
      iVar2 = (int)param_3[1];
      if ((iVar2 == 2) || (iVar2 - 3U < 2)) {
        FUN_180022530(param_3,(iVar2 != 4) + 1,local_548,0x100,(size_t *)0x0);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        FUN_180025970((longlong)plVar9,3,"  %s (%s)\n",local_548);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        FUN_180024bc0(*(undefined4 *)((longlong)param_3 + 0x8cc));
        pcVar14 = FUN_180024bc0(*(undefined4 *)((longlong)param_3 + 0x9d4));
        FUN_180025970((longlong)plVar9,3,"    Format:      %s -> %s\n",pcVar14);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        FUN_180025970((longlong)plVar9,3,"    Channels:    %d -> %d\n",
                      (ulonglong)*(uint *)(param_3 + 0x13b));
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        FUN_180025970((longlong)plVar9,3,"    Sample Rate: %d -> %d\n",
                      (ulonglong)*(uint *)((longlong)param_3 + 0x9dc));
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        uVar8 = (ulonglong)*(uint *)(param_3 + 0x15c);
        FUN_180025970((longlong)plVar9,3,"    Buffer Size: %d*%d (%d)\n",uVar8);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        FUN_180025970((longlong)plVar9,3,"    Conversion:\n",uVar8);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        puVar21 = &DAT_18003197c;
        if ((char)param_3[0x183] != '\0') {
          puVar21 = &DAT_180031978;
        }
        FUN_180025970((longlong)plVar9,3,"      Pre Format Conversion:  %s\n",puVar21);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        puVar21 = &DAT_18003197c;
        if (*(char *)((longlong)param_3 + 0xc19) != '\0') {
          puVar21 = &DAT_180031978;
        }
        FUN_180025970((longlong)plVar9,3,"      Post Format Conversion: %s\n",puVar21);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        puVar21 = &DAT_18003197c;
        if (*(char *)((longlong)param_3 + 0xc1a) != '\0') {
          puVar21 = &DAT_180031978;
        }
        FUN_180025970((longlong)plVar9,3,"      Channel Routing:        %s\n",puVar21);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        puVar21 = &DAT_18003197c;
        if (*(char *)((longlong)param_3 + 0xc1b) != '\0') {
          puVar21 = &DAT_180031978;
        }
        FUN_180025970((longlong)plVar9,3,"      Resampling:             %s\n",puVar21);
        plVar9 = plVar27;
        if (*param_3 != 0) {
          plVar9 = *(longlong **)(*param_3 + 0x70);
        }
        puVar21 = &DAT_18003197c;
        if (*(char *)((longlong)param_3 + 0xc1c) != '\0') {
          puVar21 = &DAT_180031978;
        }
        FUN_180025970((longlong)plVar9,3,"      Passthrough:            %s\n",puVar21);
        uVar7 = *(uint *)(param_3 + 0x13b);
        plVar9 = plVar27;
        plVar10 = param_3 + 0x13c;
        if (uVar7 == 0) {
LAB_180023519:
          (auStack_449 + 1)[(longlong)plVar9] = 0;
        }
        else {
          while( true ) {
            uVar24 = (uint)plVar9;
            if (param_3 + 0x13c == (longlong *)0x0) {
              uVar8 = FUN_180005500(0,uVar7,uVar24);
              uVar5 = (undefined1)uVar8;
            }
            else if (uVar24 < uVar7) {
              uVar5 = (undefined1)*plVar10;
            }
            else {
              uVar5 = 0;
            }
            pcVar14 = FUN_1800200f0(uVar5);
            sVar15 = strlen(pcVar14);
            plVar9 = (longlong *)((longlong)plVar27 + sVar15);
            if (plVar9 < (longlong *)0x400) {
              memcpy(auStack_449 + 1 + (longlong)plVar27,pcVar14,sVar15);
            }
            if (uVar7 <= uVar24 + 1) break;
            plVar27 = (longlong *)((longlong)plVar9 + 1);
            if (plVar27 < (longlong *)0x400) {
              (auStack_449 + 1)[(longlong)plVar9] = 0x20;
            }
            plVar10 = (longlong *)((longlong)plVar10 + 1);
            plVar9 = (longlong *)(ulonglong)(uVar24 + 1);
          }
          if ((longlong)plVar9 + 1U < 0x400) goto LAB_180023519;
        }
        uVar8 = 0;
        uVar12 = uVar8;
        if (*param_3 != 0) {
          uVar12 = *(ulonglong *)(*param_3 + 0x70);
        }
        FUN_180025970(uVar12,3,"      Channel Map In:         {%s}\n",auStack_449 + 1);
        uVar7 = *(uint *)(param_3 + 0x11a);
        uVar12 = uVar8;
        puVar26 = (undefined1 *)((longlong)param_3 + 0x8d4);
        if (uVar7 == 0) {
LAB_180023605:
          auStack_449[uVar12 + 1] = 0;
        }
        else {
          while( true ) {
            uVar24 = (uint)uVar12;
            if ((undefined1 *)((longlong)param_3 + 0x8d4) == (undefined1 *)0x0) {
              uVar12 = FUN_180005500(0,uVar7,uVar24);
              uVar5 = (undefined1)uVar12;
            }
            else if (uVar24 < uVar7) {
              uVar5 = *puVar26;
            }
            else {
              uVar5 = 0;
            }
            pcVar14 = FUN_1800200f0(uVar5);
            sVar15 = strlen(pcVar14);
            uVar12 = uVar8 + sVar15;
            if (uVar12 < 0x400) {
              memcpy(auStack_449 + uVar8 + 1,pcVar14,sVar15);
            }
            if (uVar7 <= uVar24 + 1) break;
            uVar8 = uVar12 + 1;
            if (uVar8 < 0x400) {
              auStack_449[uVar12 + 1] = 0x20;
            }
            puVar26 = puVar26 + 1;
            uVar12 = (ulonglong)(uVar24 + 1);
          }
          if (uVar12 + 1 < 0x400) goto LAB_180023605;
        }
        lVar19 = 0;
        if (*param_3 != 0) {
          lVar19 = *(longlong *)(*param_3 + 0x70);
        }
        FUN_180025970(lVar19,3,"      Channel Map Out:        {%s}\n",auStack_449 + 1);
      }
      uVar8 = 0;
      puVar21 = &DAT_18003197c;
      if (((int)param_3[1] != 1) && ((int)param_3[1] != 3)) {
        return 0;
      }
      FUN_180022530(param_3,1,local_548,0x100,(size_t *)0x0);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      FUN_180025970(uVar12,3,"  %s (%s)\n",local_548);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      FUN_180024bc0(*(undefined4 *)((longlong)param_3 + 0x43c));
      pcVar14 = FUN_180024bc0(*(undefined4 *)((longlong)param_3 + 0x334));
      FUN_180025970(uVar12,3,"    Format:      %s -> %s\n",pcVar14);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      FUN_180025970(uVar12,3,"    Channels:    %d -> %d\n",(ulonglong)*(uint *)(param_3 + 0x67));
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      FUN_180025970(uVar12,3,"    Sample Rate: %d -> %d\n",
                    (ulonglong)*(uint *)((longlong)param_3 + 0xc));
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      uVar22 = (ulonglong)*(uint *)(param_3 + 0xa9);
      FUN_180025970(uVar12,3,"    Buffer Size: %d*%d (%d)\n",uVar22);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      FUN_180025970(uVar12,3,"    Conversion:\n",uVar22);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      puVar23 = &DAT_18003197c;
      if ((char)param_3[0xd0] != '\0') {
        puVar23 = &DAT_180031978;
      }
      FUN_180025970(uVar12,3,"      Pre Format Conversion:  %s\n",puVar23);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      puVar23 = &DAT_18003197c;
      if (*(char *)((longlong)param_3 + 0x681) != '\0') {
        puVar23 = &DAT_180031978;
      }
      FUN_180025970(uVar12,3,"      Post Format Conversion: %s\n",puVar23);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      puVar23 = &DAT_18003197c;
      if (*(char *)((longlong)param_3 + 0x682) != '\0') {
        puVar23 = &DAT_180031978;
      }
      FUN_180025970(uVar12,3,"      Channel Routing:        %s\n",puVar23);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      puVar23 = &DAT_18003197c;
      if (*(char *)((longlong)param_3 + 0x683) != '\0') {
        puVar23 = &DAT_180031978;
      }
      FUN_180025970(uVar12,3,"      Resampling:             %s\n",puVar23);
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      if (*(char *)((longlong)param_3 + 0x684) != '\0') {
        puVar21 = &DAT_180031978;
      }
      FUN_180025970(uVar12,3,"      Passthrough:            %s\n",puVar21);
      uVar7 = *(uint *)(param_3 + 0x67);
      uVar12 = uVar8;
      if (uVar7 == 0) {
LAB_180023949:
        auStack_449[uVar12 + 1] = 0;
      }
      else {
        puVar26 = (undefined1 *)((longlong)param_3 + 0x33c);
        uVar22 = uVar8;
        while( true ) {
          uVar24 = (uint)uVar22;
          if ((undefined1 *)((longlong)param_3 + 0x33c) == (undefined1 *)0x0) {
            uVar12 = FUN_180005500(0,uVar7,uVar24);
            uVar5 = (undefined1)uVar12;
          }
          else if (uVar24 < uVar7) {
            uVar5 = *puVar26;
          }
          else {
            uVar5 = 0;
          }
          pcVar14 = FUN_1800200f0(uVar5);
          sVar15 = strlen(pcVar14);
          uVar12 = uVar8 + sVar15;
          if (uVar12 < 0x400) {
            memcpy(auStack_449 + uVar8 + 1,pcVar14,sVar15);
          }
          uVar22 = (ulonglong)(uVar24 + 1);
          if (uVar7 <= uVar24 + 1) break;
          uVar8 = uVar12 + 1;
          if (uVar8 < 0x400) {
            auStack_449[uVar12 + 1] = 0x20;
          }
          puVar26 = puVar26 + 1;
        }
        if (uVar12 + 1 < 0x400) goto LAB_180023949;
      }
      uVar8 = 0;
      uVar12 = uVar8;
      if (*param_3 != 0) {
        uVar12 = *(ulonglong *)(*param_3 + 0x70);
      }
      FUN_180025970(uVar12,3,"      Channel Map In:         {%s}\n",auStack_449 + 1);
      uVar7 = *(uint *)(param_3 + 0x88);
      uVar12 = uVar8;
      if (uVar7 != 0) {
        plVar27 = param_3 + 0x89;
        uVar22 = uVar8;
        while( true ) {
          uVar24 = (uint)uVar22;
          if (param_3 + 0x89 == (longlong *)0x0) {
            uVar12 = FUN_180005500(0,uVar7,uVar24);
            uVar5 = (undefined1)uVar12;
          }
          else if (uVar24 < uVar7) {
            uVar5 = (undefined1)*plVar27;
          }
          else {
            uVar5 = 0;
          }
          pcVar14 = FUN_1800200f0(uVar5);
          sVar15 = strlen(pcVar14);
          uVar12 = uVar8 + sVar15;
          if (uVar12 < 0x400) {
            memcpy(auStack_449 + uVar8 + 1,pcVar14,sVar15);
          }
          uVar22 = (ulonglong)(uVar24 + 1);
          if (uVar7 <= uVar24 + 1) break;
          uVar8 = uVar12 + 1;
          if (uVar8 < 0x400) {
            auStack_449[uVar12 + 1] = 0x20;
          }
          plVar27 = (longlong *)((longlong)plVar27 + 1);
        }
        if (0x3ff < uVar12 + 1) goto LAB_180023a39;
      }
      auStack_449[uVar12 + 1] = 0;
LAB_180023a39:
      lVar19 = 0;
      if (*param_3 != 0) {
        lVar19 = *(longlong *)(*param_3 + 0x70);
      }
      FUN_180025970(lVar19,3,"      Channel Map Out:        {%s}\n",auStack_449 + 1);
      return 0;
    }
  }
LAB_180022d47:
  CloseHandle((HANDLE)*plVar18);
LAB_180022d51:
  CloseHandle((HANDLE)*plVar10);
  CloseHandle((HANDLE)*plVar9);
  return uVar8;
}


