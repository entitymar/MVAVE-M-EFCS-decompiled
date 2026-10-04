// FUN_18000ded0 @ 18000ded0

ulonglong FUN_18000ded0(longlong *param_1,int param_2)

{
  code *pcVar1;
  size_t sVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  undefined8 local_res8 [2];
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  int iStack_124;
  longlong *plStack_120;
  longlong *local_118;
  longlong lStack_110;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  undefined8 local_48;
  
  pvVar6 = (void *)0x0;
  lVar8 = 0xfe;
  if (param_2 - 2U < 3) {
    if (*(int *)((longlong)param_1 + 0x8cc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8cc) = *(undefined4 *)((longlong)param_1 + 0x9d4);
    }
    uVar11 = *(uint *)(param_1 + 0x11a);
    if (uVar11 == 0) {
      uVar11 = *(uint *)(param_1 + 0x13b);
      *(uint *)(param_1 + 0x11a) = uVar11;
    }
    uVar5 = (ulonglong)uVar11;
    pcVar12 = (char *)((longlong)param_1 + 0x8d4);
    if (*pcVar12 == '\0') {
      if (*(uint *)(param_1 + 0x13b) == uVar11) {
        if ((param_1 + 0x13c != (longlong *)0x0) && (uVar11 != 0)) {
          memcpy(pcVar12,param_1 + 0x13c,uVar5);
        }
      }
      else if ((int)param_1[0x15d] == 1) {
        if (uVar11 != 0) {
          memset(pcVar12,0,uVar5);
        }
      }
      else {
        lVar9 = 0xfe;
        pvVar4 = pvVar6;
        if (uVar11 != 0) {
          do {
            uVar11 = (uint)pvVar4;
            if (lVar9 == 0) break;
            uVar7 = FUN_180005500(0,(uint)uVar5,uVar11);
            *pcVar12 = (char)uVar7;
            lVar9 = lVar9 + -1;
            pcVar12 = pcVar12 + 1;
            pvVar4 = (void *)(ulonglong)(uVar11 + 1);
          } while (uVar11 + 1 < (uint)uVar5);
        }
      }
    }
  }
  if ((param_2 - 1U & 0xfffffffd) == 0) {
    if (*(int *)((longlong)param_1 + 0x334) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_1 + 0x43c);
    }
    uVar11 = *(uint *)(param_1 + 0x67);
    if (uVar11 == 0) {
      uVar11 = *(uint *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x67) = uVar11;
    }
    uVar5 = (ulonglong)uVar11;
    pcVar12 = (char *)((longlong)param_1 + 0x33c);
    if (*pcVar12 == '\0') {
      if (*(uint *)(param_1 + 0x88) == uVar11) {
        if ((param_1 + 0x89 != (longlong *)0x0) && (uVar11 != 0)) {
          memcpy(pcVar12,param_1 + 0x89,uVar5);
        }
      }
      else if ((int)param_1[0xaa] == 1) {
        if (uVar11 != 0) {
          memset(pcVar12,0,uVar5);
        }
      }
      else {
        pvVar4 = pvVar6;
        if (uVar11 != 0) {
          do {
            uVar11 = (uint)pvVar4;
            if (lVar8 == 0) break;
            uVar7 = FUN_180005500(0,(uint)uVar5,uVar11);
            *pcVar12 = (char)uVar7;
            lVar8 = lVar8 + -1;
            pcVar12 = pcVar12 + 1;
            pvVar4 = (void *)(ulonglong)(uVar11 + 1);
          } while (uVar11 + 1 < (uint)uVar5);
        }
      }
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (iVar3 == 0) {
    if (param_2 - 2U < 3) {
      iVar3 = *(int *)((longlong)param_1 + 0x9dc);
      *(int *)((longlong)param_1 + 0xc) = iVar3;
      goto LAB_18000e08a;
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x444);
  }
  else {
LAB_18000e08a:
    if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
      plStack_120 = param_1 + 0x13c;
      _local_138 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x8cc),
                            *(undefined4 *)((longlong)param_1 + 0x9d4));
      _uStack_130 = CONCAT44((int)param_1[0x11a],(int)param_1[0x13b]);
      local_118 = (longlong *)((longlong)param_1 + 0x8d4);
      lStack_110 = (ulonglong)*(uint *)(param_1 + 0x15d) << 0x20;
      uStack_100 = 0;
      local_108 = (ulonglong)*(uint *)((longlong)param_1 + 0xaec);
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = (ulonglong)*(uint *)(param_1 + 0x21);
      local_48 = 1;
      local_c8 = (ulonglong)*(uint *)(param_1 + 0x24);
      local_d8 = param_1[0x22];
      lStack_d0 = param_1[0x23];
      _local_128 = CONCAT44(iVar3,*(undefined4 *)((longlong)param_1 + 0x9dc));
      local_f8 = 0;
      LOCK();
      bVar13 = (int)param_1[2] == 0;
      if (bVar13) {
        *(int *)(param_1 + 2) = 0;
      }
      UNLOCK();
      if (!bVar13) {
        lVar8 = *param_1;
        puVar10 = (undefined8 *)(lVar8 + 0x100);
        if (param_1 != (longlong *)0xfffffffffffff510) {
          if ((((*(char *)((longlong)param_1 + 0xc1b) != '\0') &&
               (param_1 + 0x16b != (longlong *)0x0)) &&
              ((param_1[0x16c] != 0 &&
               ((pcVar1 = *(code **)(param_1[0x16c] + 0x10), pcVar1 != (code *)0x0 &&
                ((*pcVar1)(param_1[0x16d],param_1[0x16b],puVar10), (int)param_1[0x182] != 0)))))) &&
             (pvVar4 = (void *)param_1[0x181], pvVar4 != (void *)0x0)) {
            if (puVar10 == (undefined8 *)0x0) {
              free(pvVar4);
            }
            else if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
              (**(code **)(lVar8 + 0x118))(pvVar4,*puVar10);
            }
          }
          if (((param_1 != (longlong *)0xfffffffffffff4f0) && ((int)param_1[0x16a] != 0)) &&
             (pvVar4 = (void *)param_1[0x169], pvVar4 != (void *)0x0)) {
            if (puVar10 == (undefined8 *)0x0) {
              free(pvVar4);
            }
            else if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
              (**(code **)(lVar8 + 0x118))(pvVar4,*puVar10);
            }
          }
          if ((*(char *)((longlong)param_1 + 0xc1d) != '\0') &&
             (pvVar4 = (void *)param_1[0x184], pvVar4 != (void *)0x0)) {
            if (puVar10 == (undefined8 *)0x0) {
              free(pvVar4);
            }
            else if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
              (**(code **)(lVar8 + 0x118))(pvVar4,*puVar10);
            }
          }
        }
      }
      lVar8 = *param_1;
      puVar10 = (undefined8 *)(lVar8 + 0x100);
      uVar5 = FUN_18000a7e0(&local_138,&local_158);
      if ((int)uVar5 != 0) {
        return uVar5 & 0xffffffff;
      }
      sVar2 = CONCAT44(local_158._4_4_,(undefined4)local_158);
      pvVar4 = pvVar6;
      if (sVar2 != 0) {
        if (puVar10 == (undefined8 *)0x0) {
          pvVar4 = malloc(sVar2);
        }
        else {
          pcVar1 = *(code **)(lVar8 + 0x108);
          if (pcVar1 == (code *)0x0) {
            return 0xfffffffc;
          }
          pvVar4 = (void *)(*pcVar1)(sVar2,*puVar10);
        }
        if (pvVar4 == (void *)0x0) {
          return 0xfffffffc;
        }
      }
      uVar5 = FUN_180021f80(&local_138,pvVar4,(int *)(param_1 + 0x15e));
      if ((int)uVar5 != 0) goto LAB_18000e2d3;
      *(undefined1 *)((longlong)param_1 + 0xc1d) = 1;
    }
  }
  if ((param_2 - 1U & 0xfffffffd) == 0) {
    plStack_120 = (longlong *)((longlong)param_1 + 0x33c);
    _local_138 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x43c),
                          *(undefined4 *)((longlong)param_1 + 0x334));
    _uStack_130 = CONCAT44((int)param_1[0x88],(int)param_1[0x67]);
    _local_128 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x444),
                          *(undefined4 *)((longlong)param_1 + 0xc));
    local_118 = param_1 + 0x89;
    lStack_110 = (ulonglong)*(uint *)(param_1 + 0xaa) << 0x20;
    uStack_100 = 0;
    local_108 = (ulonglong)*(uint *)((longlong)param_1 + 0x554);
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = (ulonglong)*(uint *)(param_1 + 0x21);
    local_48 = 1;
    local_c8 = (ulonglong)*(uint *)(param_1 + 0x24);
    local_d8 = param_1[0x22];
    lStack_d0 = param_1[0x23];
    local_f8 = 0;
    LOCK();
    bVar13 = (int)param_1[2] == 0;
    if (bVar13) {
      *(int *)(param_1 + 2) = 0;
    }
    UNLOCK();
    if (!bVar13) {
      lVar8 = *param_1;
      puVar10 = (undefined8 *)(lVar8 + 0x100);
      if (param_1 != (longlong *)0xfffffffffffffaa8) {
        if (((*(char *)((longlong)param_1 + 0x683) != '\0') && (param_1 + 0xb8 != (longlong *)0x0))
           && ((param_1[0xb9] != 0 &&
               (((pcVar1 = *(code **)(param_1[0xb9] + 0x10), pcVar1 != (code *)0x0 &&
                 ((*pcVar1)(param_1[0xba],param_1[0xb8],puVar10), (int)param_1[0xcf] != 0)) &&
                (pvVar4 = (void *)param_1[0xce], pvVar4 != (void *)0x0)))))) {
          if (puVar10 == (undefined8 *)0x0) {
            free(pvVar4);
          }
          else if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
            (**(code **)(lVar8 + 0x118))(pvVar4,*puVar10);
          }
        }
        if (((param_1 != (longlong *)0xfffffffffffffa88) && ((int)param_1[0xb7] != 0)) &&
           (pvVar4 = (void *)param_1[0xb6], pvVar4 != (void *)0x0)) {
          if (puVar10 == (undefined8 *)0x0) {
            free(pvVar4);
          }
          else if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
            (**(code **)(lVar8 + 0x118))(pvVar4,*puVar10);
          }
        }
        if ((*(char *)((longlong)param_1 + 0x685) != '\0') &&
           (pvVar4 = (void *)param_1[0xd1], pvVar4 != (void *)0x0)) {
          if (puVar10 == (undefined8 *)0x0) {
            free(pvVar4);
          }
          else if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
            (**(code **)(lVar8 + 0x118))(pvVar4,*puVar10);
          }
        }
      }
    }
    lVar8 = *param_1;
    puVar10 = (undefined8 *)(lVar8 + 0x100);
    uVar5 = FUN_18000a7e0(&local_138,&local_158);
    if ((int)uVar5 != 0) {
      return uVar5 & 0xffffffff;
    }
    sVar2 = CONCAT44(local_158._4_4_,(undefined4)local_158);
    if (sVar2 != 0) {
      if (puVar10 == (undefined8 *)0x0) {
        pvVar6 = malloc(sVar2);
      }
      else {
        pcVar1 = *(code **)(lVar8 + 0x108);
        if (pcVar1 == (code *)0x0) {
          return 0xfffffffc;
        }
        pvVar6 = (void *)(*pcVar1)(sVar2,*puVar10);
      }
      if (pvVar6 == (void *)0x0) {
        return 0xfffffffc;
      }
    }
    uVar5 = FUN_180021f80(&local_138,pvVar6,(int *)(param_1 + 0xab));
    pvVar4 = pvVar6;
    if ((int)uVar5 != 0) {
LAB_18000e2d3:
      uVar5 = uVar5 & 0xffffffff;
      if (pvVar4 == (void *)0x0) {
        return uVar5;
      }
      if (puVar10 == (undefined8 *)0x0) {
        free(pvVar4);
        return uVar5;
      }
      if ((code *)puVar10[3] != (code *)0x0) {
        (*(code *)puVar10[3])(pvVar4,*puVar10);
        return uVar5;
      }
      return uVar5;
    }
    *(undefined1 *)((longlong)param_1 + 0x685) = 1;
    if (param_2 != 1) goto LAB_18000e566;
  }
  else {
LAB_18000e566:
    if (param_2 != 3) {
      return 0;
    }
  }
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  if (((int)param_1[1] != 3) && (local_res8[0] = 0, param_1 != (longlong *)0xfffffffffffffaa8)) {
    if (*(char *)((longlong)param_1 + 0x683) == '\0') {
      local_res8[0] = 1;
LAB_18000e68e:
      pvVar6 = (void *)param_1[0xd4];
      puVar10 = (undefined8 *)(*param_1 + 0x100);
      if (pvVar6 != (void *)0x0) {
        if (puVar10 == (undefined8 *)0x0) {
          free(pvVar6);
        }
        else {
          pcVar1 = *(code **)(*param_1 + 0x118);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(pvVar6,*puVar10);
            param_1[0xd4] = 0;
            param_1[0xd5] = 0;
            return 0;
          }
        }
      }
      param_1[0xd4] = 0;
      param_1[0xd5] = 0;
      return 0;
    }
    if (param_1 + 0xb8 == (longlong *)0x0) {
      iVar3 = -2;
    }
    else if ((param_1[0xb9] == 0) ||
            (pcVar1 = *(code **)(param_1[0xb9] + 0x38), pcVar1 == (code *)0x0)) {
      iVar3 = -0x1d;
    }
    else {
      iVar3 = (*pcVar1)(param_1[0xba],param_1[0xb8],1,local_res8);
    }
    if (iVar3 == 0) goto LAB_18000e68e;
  }
  uVar5 = FUN_180002c10(*(uint *)((longlong)param_1 + 0x444),*(uint *)((longlong)param_1 + 0xc),
                        (ulonglong)*(uint *)(param_1 + 0xa9));
  lVar8 = *param_1;
  local_158._0_4_ = 0;
  puVar10 = (undefined8 *)(lVar8 + 0x100);
  local_158._4_4_ = 1;
  local_150 = 2;
  local_14c = 3;
  local_148 = 4;
  local_144 = 4;
  pvVar6 = (void *)param_1[0xd4];
  uVar7 = (uint)(*(int *)((longlong)&local_158 + (longlong)*(int *)((longlong)param_1 + 0x334) * 4)
                * (int)param_1[0x67]) * uVar5;
  if (uVar7 < 0x100000000) {
    if (puVar10 == (undefined8 *)0x0) {
      pvVar6 = realloc(pvVar6,uVar7);
LAB_18000e716:
      if (pvVar6 != (void *)0x0) {
        param_1[0xd4] = (longlong)pvVar6;
        param_1[0xd5] = uVar5;
        return 0;
      }
    }
    else if (*(code **)(lVar8 + 0x110) != (code *)0x0) {
      pvVar6 = (void *)(**(code **)(lVar8 + 0x110))(pvVar6,uVar7,*puVar10);
      goto LAB_18000e716;
    }
    pvVar6 = (void *)param_1[0xd4];
    puVar10 = (undefined8 *)(*param_1 + 0x100);
    if (pvVar6 == (void *)0x0) goto LAB_18000e6e6;
    if (puVar10 != (undefined8 *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x118);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(pvVar6,*puVar10);
      }
      goto LAB_18000e6e6;
    }
  }
  else {
    if (pvVar6 == (void *)0x0) goto LAB_18000e6e6;
    if (puVar10 != (undefined8 *)0x0) {
      if (*(code **)(lVar8 + 0x118) != (code *)0x0) {
        (**(code **)(lVar8 + 0x118))(pvVar6,*puVar10);
      }
      goto LAB_18000e6e6;
    }
  }
  free(pvVar6);
LAB_18000e6e6:
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  return 0xfffffffc;
}


