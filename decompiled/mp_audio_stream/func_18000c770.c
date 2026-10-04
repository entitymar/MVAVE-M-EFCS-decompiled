// FUN_18000c770 @ 18000c770

undefined8 FUN_18000c770(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 (*_Dst) [16];
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *_Src;
  undefined4 *local_res18;
  uint local_78;
  ulonglong local_70;
  ulonglong local_68;
  int local_60 [8];
  
  uVar15 = 0;
  local_78 = 0;
  uVar7 = uVar15;
  local_res18 = param_3;
  do {
    local_60[0] = 0;
    local_60[1] = 1;
    local_60[2] = 2;
    local_60[3] = 3;
    local_60[4] = 4;
    local_60[5] = 4;
    if (param_4 == 0) {
LAB_18000ce2e:
      local_60[5] = 4;
      local_60[4] = 4;
      local_60[3] = 3;
      local_60[2] = 2;
      local_60[1] = 1;
      local_60[0] = 0;
      if (*param_1 == 0) {
        return 0;
      }
      lVar12 = *(longlong *)(*param_1 + 0x70);
      if (lVar12 == 0) {
        return 0;
      }
      if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar12 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar12 + uVar15 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar15 * 0x10),1,
                      "Failed to acquire capture PCM frames from ring buffer.");
          }
          uVar9 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar12 + 0x40));
      }
LAB_18000ce8c:
      if ((undefined8 *)(lVar12 + 0x68) == (undefined8 *)0x0) {
        return 0;
      }
      SetEvent(*(HANDLE *)(lVar12 + 0x68));
      return 0;
    }
    local_60[0] = 0;
    local_60[1] = 1;
    local_60[2] = 2;
    local_60[3] = 3;
    local_60[4] = 4;
    local_60[5] = 4;
    uVar14 = (ulonglong)
             (uint)((int)(0x1000 / (ulonglong)
                                   (uint)(local_60[*(int *)((longlong)param_1 + 0x8cc)] *
                                         (int)param_1[0x11a])) *
                   local_60[*(int *)(param_4 + 0x88)] * *(int *)(param_4 + 0x8c));
    if ((longlong *)(param_4 + 0x48) == (longlong *)0x0) goto LAB_18000ce2e;
    LOCK();
    uVar9 = *(uint *)(param_4 + 0x5c);
    if (uVar9 == 0) {
      *(uint *)(param_4 + 0x5c) = 0;
      uVar9 = 0;
    }
    UNLOCK();
    LOCK();
    uVar13 = *(uint *)(param_4 + 0x60);
    if (uVar13 == 0) {
      *(uint *)(param_4 + 0x60) = 0;
      uVar13 = 0;
    }
    UNLOCK();
    if ((int)(uVar13 ^ uVar9) < 0) {
      uVar9 = uVar9 & 0x7fffffff;
    }
    else {
      uVar9 = *(uint *)(param_4 + 0x50);
    }
    uVar10 = (ulonglong)(uVar9 - (uVar13 & 0x7fffffff));
    if (uVar14 <= uVar10) {
      uVar10 = uVar14;
    }
    LOCK();
    uVar9 = *(uint *)(param_4 + 0x60);
    if (uVar9 == 0) {
      *(uint *)(param_4 + 0x60) = 0;
      uVar9 = 0;
    }
    UNLOCK();
    _Dst = (undefined1 (*) [16])((ulonglong)(uVar9 & 0x7fffffff) + *(longlong *)(param_4 + 0x48));
    if (((*(char *)(param_4 + 0x65) != '\0') && (_Dst != (undefined1 (*) [16])0x0)) && (uVar10 != 0)
       ) {
      memset(_Dst,0,uVar10);
    }
    local_60[0] = 0;
    local_60[1] = 1;
    local_60[2] = 2;
    local_60[3] = 3;
    local_60[4] = 4;
    local_60[5] = 4;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    auVar3 = auVar3 / ZEXT416((uint)(local_60[*(int *)(param_4 + 0x88)] * *(int *)(param_4 + 0x8c)))
    ;
    local_70 = auVar3._0_8_;
    if (auVar3._0_4_ == 0) {
      LOCK();
      uVar9 = *(uint *)(param_4 + 0x5c);
      if (uVar9 == 0) {
        *(uint *)(param_4 + 0x5c) = 0;
        uVar9 = 0;
      }
      UNLOCK();
      LOCK();
      uVar13 = *(uint *)(param_4 + 0x60);
      if (uVar13 == 0) {
        *(uint *)(param_4 + 0x60) = 0;
        uVar13 = 0;
      }
      UNLOCK();
      if ((int)(uVar13 ^ uVar9) < 0) {
        iVar5 = *(uint *)(param_4 + 0x50) - (uVar9 & 0x7fffffff);
      }
      else {
        iVar5 = -(uVar9 & 0x7fffffff);
      }
      local_60[0] = 0;
      local_60[1] = 1;
      local_60[2] = 2;
      local_60[3] = 3;
      local_60[4] = 4;
      local_60[5] = 4;
      local_60[0] = 0;
      local_60[1] = 1;
      local_60[2] = 2;
      local_60[3] = 3;
      local_60[4] = 4;
      local_60[5] = 4;
      if (((uVar13 & 0x7fffffff) + iVar5) /
          (uint)(*(int *)(param_4 + 0x8c) * local_60[*(int *)(param_4 + 0x88)]) ==
          *(uint *)(param_4 + 0x50) /
          (uint)(*(int *)(param_4 + 0x8c) * local_60[*(int *)(param_4 + 0x88)])) {
        return 0;
      }
    }
    local_60[5] = 4;
    local_60[4] = 4;
    local_60[3] = 3;
    local_60[2] = 2;
    local_60[1] = 1;
    local_60[0] = 0;
    local_68 = (ulonglong)(uint)(param_2 - (int)uVar7);
    plVar1 = param_1 + 0x15e;
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    uVar7 = local_70;
    switch(*(undefined4 *)((longlong)param_1 + 0xb0c)) {
    case 0:
      if (local_68 < local_70) {
        uVar7 = local_68;
      }
      uVar14 = uVar7;
      if (_Dst != (undefined1 (*) [16])0x0) {
        local_60[0] = 0;
        local_60[1] = 1;
        local_60[2] = 2;
        local_60[3] = 3;
        local_60[4] = 4;
        local_60[5] = 4;
        if (local_res18 == (undefined4 *)0x0) {
          for (uVar10 = (uint)(local_60[*(int *)((longlong)param_1 + 0xaf4)] *
                              *(int *)((longlong)param_1 + 0xafc)) * uVar7; uVar10 != 0;
              uVar10 = uVar10 - uVar11) {
            uVar11 = uVar10;
            if (0xffffffff < uVar10) {
              uVar11 = 0xffffffff;
            }
            if ((_Dst != (undefined1 (*) [16])0x0) && (uVar11 != 0)) {
              memset(_Dst,0,uVar11);
            }
            _Dst = (undefined1 (*) [16])((longlong)*_Dst + uVar11);
          }
        }
        else {
          _Src = local_res18;
          for (uVar10 = (uint)(local_60[*(int *)((longlong)param_1 + 0xaf4)] *
                              *(int *)((longlong)param_1 + 0xafc)) * uVar7; uVar10 != 0;
              uVar10 = uVar10 - uVar11) {
            uVar11 = uVar10;
            if (0xffffffff < uVar10) {
              uVar11 = 0xffffffff;
            }
            memcpy(_Dst,_Src,uVar11);
            _Dst = (undefined1 (*) [16])((longlong)*_Dst + uVar11);
            _Src = (undefined4 *)((longlong)_Src + uVar11);
          }
        }
      }
      goto LAB_18000cca4;
    case 1:
      if (local_68 < local_70) {
        uVar7 = local_68;
      }
      uVar14 = uVar7;
      if (_Dst != (undefined1 (*) [16])0x0) {
        if (local_res18 == (undefined4 *)0x0) {
          local_60[0] = 0;
          local_60[1] = 1;
          local_60[2] = 2;
          local_60[3] = 3;
          local_60[4] = 4;
          local_60[5] = 4;
          for (uVar10 = (uint)(local_60[*(int *)((longlong)param_1 + 0xaf4)] *
                              *(int *)((longlong)param_1 + 0xafc)) * uVar7; uVar10 != 0;
              uVar10 = uVar10 - uVar11) {
            uVar11 = uVar10;
            if (0xffffffff < uVar10) {
              uVar11 = 0xffffffff;
            }
            if ((_Dst != (undefined1 (*) [16])0x0) && (uVar11 != 0)) {
              memset(_Dst,0,uVar11);
            }
            _Dst = (undefined1 (*) [16])((longlong)*_Dst + uVar11);
          }
        }
        else {
          FUN_180028b70(_Dst,*(int *)((longlong)param_1 + 0xaf4),local_res18,(int)*plVar1,
                        *(uint *)(param_1 + 0x15f) * uVar7,(int)param_1[0x161]);
        }
      }
      goto LAB_18000cca4;
    case 2:
      uVar8 = FUN_18000afa0((int *)plVar1,local_res18,&local_68,(undefined4 *)_Dst,&local_70);
      iVar5 = (int)uVar8;
      break;
    case 3:
      if (((char)param_1[0x183] == '\0') && (*(char *)((longlong)param_1 + 0xc19) == '\0')) {
        if (param_1 + 0x16b == (longlong *)0x0) {
          iVar5 = -2;
        }
        else if ((param_1[0x16c] == 0) ||
                (pcVar2 = *(code **)(param_1[0x16c] + 0x18), pcVar2 == (code *)0x0)) {
          iVar5 = -0x1d;
        }
        else {
          iVar5 = (*pcVar2)(param_1[0x16d],param_1[0x16b],local_res18,&local_68,_Dst,&local_70);
        }
      }
      else {
        uVar7 = FUN_18000bcb0((int *)plVar1,(longlong)local_res18,&local_68,(longlong)_Dst,&local_70
                             );
        iVar5 = (int)uVar7;
      }
      break;
    case 4:
      uVar8 = FUN_18000b700((int *)plVar1,(longlong)local_res18,&local_68,(longlong)_Dst,&local_70);
      iVar5 = (int)uVar8;
      break;
    case 5:
      uVar8 = FUN_18000a960((int *)plVar1,(longlong)local_res18,&local_68,(longlong)_Dst,&local_70);
      iVar5 = (int)uVar8;
      break;
    default:
      goto switchD_18000c9f5_default;
    }
    uVar7 = local_70;
    uVar14 = local_68;
    if (iVar5 != 0) {
      return 0;
    }
LAB_18000cca4:
    local_68 = uVar14;
    local_70 = uVar7;
    local_60[0] = 0;
    local_60[1] = 1;
    local_60[2] = 2;
    local_60[3] = 3;
    local_60[4] = 4;
    local_60[5] = 4;
    iVar5 = local_60[*(int *)(param_4 + 0x88)];
    LOCK();
    uVar9 = *(uint *)(param_4 + 0x60);
    if (uVar9 == 0) {
      *(uint *)(param_4 + 0x60) = 0;
      uVar9 = 0;
    }
    UNLOCK();
    uVar13 = iVar5 * *(int *)(param_4 + 0x8c) * (int)local_70 + (uVar9 & 0x7fffffff);
    if (*(uint *)(param_4 + 0x50) < uVar13) {
LAB_18000cdc2:
      if (*param_1 == 0) {
        return 0;
      }
      lVar12 = *(longlong *)(*param_1 + 0x70);
      if (lVar12 == 0) {
        return 0;
      }
      if ((undefined8 *)(lVar12 + 0x68) != (undefined8 *)0x0) {
        WaitForSingleObject(*(HANDLE *)(lVar12 + 0x68),0xffffffff);
      }
      if (*(int *)(lVar12 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(lVar12 + uVar15 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(lVar12 + 8 + uVar15 * 0x10),1,
                      "Failed to commit capture PCM frames to ring buffer.");
          }
          uVar9 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar12 + 0x40));
      }
      goto LAB_18000ce8c;
    }
    uVar6 = 0;
    uVar4 = uVar9 & 0x80000000 ^ 0x80000000;
    if (uVar13 != *(uint *)(param_4 + 0x50)) {
      uVar6 = uVar13;
      uVar4 = uVar9 & 0x80000000;
    }
    LOCK();
    *(uint *)(param_4 + 0x60) = uVar4 | uVar6;
    UNLOCK();
    LOCK();
    uVar9 = *(uint *)(param_4 + 0x5c);
    if (uVar9 == 0) {
      *(uint *)(param_4 + 0x5c) = 0;
      uVar9 = 0;
    }
    UNLOCK();
    LOCK();
    uVar13 = *(uint *)(param_4 + 0x60);
    if (uVar13 == 0) {
      *(uint *)(param_4 + 0x60) = 0;
      uVar13 = 0;
    }
    UNLOCK();
    if ((int)(uVar13 ^ uVar9) < 0) {
      iVar5 = *(int *)(param_4 + 0x50) - (uVar9 & 0x7fffffff);
    }
    else {
      iVar5 = -(uVar9 & 0x7fffffff);
    }
    if ((uVar13 & 0x7fffffff) + iVar5 == 0) goto LAB_18000cdc2;
    local_60[0] = 0;
    local_60[1] = 1;
    local_60[2] = 2;
    local_60[3] = 3;
    local_60[4] = 4;
    local_60[5] = 4;
    local_res18 = (undefined4 *)
                  ((longlong)local_res18 +
                  (uint)(local_60[*(int *)((longlong)param_1 + 0x9d4)] * (int)param_1[0x13b]) *
                  local_68);
    local_78 = local_78 + (int)local_68;
    uVar7 = (ulonglong)local_78;
  } while ((local_70 != 0) || (local_68 != 0));
switchD_18000c9f5_default:
  return 0;
}


