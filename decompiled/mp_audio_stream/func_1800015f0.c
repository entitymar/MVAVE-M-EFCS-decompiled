// FUN_1800015f0 @ 1800015f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018000179b) */

void FUN_1800015f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStackY_50d8 [32];
  uint local_50a8;
  uint local_50a4;
  int local_50a0;
  uint local_509c;
  undefined1 *local_5098;
  longlong local_5090;
  undefined8 local_5088;
  int local_5080 [6];
  longlong *local_5068;
  longlong local_5060;
  uint *local_5058;
  undefined1 local_5048 [16384];
  undefined1 local_1048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18000160e;
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_50d8;
  uVar9 = 0;
  local_5058 = param_5;
  uVar8 = 0;
  uVar1 = *param_5;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x380) != 0)) {
    LOCK();
    bVar11 = *(int *)(param_1 + 0x390) == 0;
    if (bVar11) {
      *(int *)(param_1 + 0x390) = 0;
    }
    UNLOCK();
    if (!bVar11) {
      LOCK();
      *(undefined4 *)(param_1 + 0x20) = 1;
      UNLOCK();
      *param_5 = 0;
      return;
    }
  }
  LOCK();
  uVar5 = *(ulonglong *)(param_1 + 0x388);
  if (uVar5 == 0) {
    *(ulonglong *)(param_1 + 0x388) = 0;
    uVar5 = 0;
  }
  UNLOCK();
  local_5068 = param_4;
  if (uVar5 != 0xffffffffffffffff) {
    plVar6 = *(longlong **)(param_1 + 0x380);
    if (((plVar6 != (longlong *)0x0) && (*(code **)(*plVar6 + 8) != (code *)0x0)) &&
       (uVar5 <= (ulonglong)plVar6[2])) {
      (**(code **)(*plVar6 + 8))(plVar6,plVar6[1] + uVar5);
    }
    LOCK();
    *(ulonglong *)(param_1 + 0x38) = uVar5;
    UNLOCK();
    LOCK();
    *(undefined8 *)(param_1 + 0x388) = 0xffffffffffffffff;
    UNLOCK();
  }
  FUN_180018ec0(param_1);
  plVar6 = *(longlong **)(param_1 + 0x380);
  uVar5 = uVar9;
  if (((plVar6 != (longlong *)0x0) && (uVar5 = uVar8, *(code **)(*plVar6 + 0x10) != (code *)0x0)) &&
     (iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_50a0,&local_509c,&local_50a8), iVar3 == 0)
     ) {
    local_5080[0] = 0;
    local_5080[1] = 1;
    local_5080[2] = 2;
    local_5080[3] = 3;
    local_5080[4] = 4;
    local_5080[5] = 4;
    local_5088 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) /
                        ZEXT416(local_509c * local_5080[local_50a0]),0);
    if (uVar1 != 0) {
      do {
        uVar10 = uVar1 - (int)uVar9;
        LOCK();
        bVar11 = *(int *)(param_1 + 0x348) == 0;
        if (bVar11) {
          *(int *)(param_1 + 0x348) = 0;
        }
        UNLOCK();
        uVar7 = uVar10;
        if (((bVar11) && (uVar7 = 0, param_1 != -0x1a8)) && (uVar7 = 0, uVar10 != 0)) {
          uVar7 = *(int *)(param_1 + 0x1c8) * (int)((ulonglong)uVar10 - 1) +
                  (int)(((ulonglong)*(uint *)(param_1 + 0x1cc) * ((ulonglong)uVar10 - 1) +
                        (ulonglong)*(uint *)(param_1 + 0x1d4)) /
                       (ulonglong)*(uint *)(param_1 + 0x1b4)) + *(int *)(param_1 + 0x1d0);
        }
        uVar4 = (uint)local_5088;
        if (uVar7 <= (uint)local_5088) {
          uVar4 = uVar7;
        }
        plVar6 = FUN_180022280(*(longlong **)(param_1 + 0x380),(longlong)local_1048,
                               (longlong *)(ulonglong)uVar4,&local_5060);
        if ((int)plVar6 == -0x11) {
          LOCK();
          *(undefined4 *)(param_1 + 0x390) = 1;
          UNLOCK();
          if (*(code **)(param_1 + 0x398) != (code *)0x0) {
            (**(code **)(param_1 + 0x398))(*(undefined8 *)(param_1 + 0x3a0),param_1);
          }
        }
        lVar2 = *(longlong *)(param_1 + 0x168);
        if (lVar2 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if (lVar2 != -0x168) {
            if (*(int *)(lVar2 + 0x1ac) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x1b8) + 9);
            }
          }
        }
        local_5090 = *local_5068 + uVar9 * uVar8 * 4;
        local_50a8 = (uint)local_5060;
        local_50a4 = uVar10;
        if (local_50a0 == 5) {
          local_5098 = local_1048;
        }
        else {
          FUN_180028b70((undefined1 (*) [16])local_5048,5,local_1048,local_50a0,
                        (ulonglong)local_509c * local_5060,0);
          local_5098 = local_5048;
        }
        FUN_180018800(param_1,(longlong *)&local_5098,&local_50a8,&local_5090,&local_50a4);
        uVar10 = (int)uVar9 + local_50a4;
        uVar5 = (ulonglong)uVar10;
        if ((int)plVar6 != 0) break;
        if (*(longlong *)(param_1 + 0x380) != 0) {
          LOCK();
          bVar11 = *(int *)(param_1 + 0x390) == 0;
          if (bVar11) {
            *(int *)(param_1 + 0x390) = 0;
          }
          UNLOCK();
          if (!bVar11) break;
        }
        uVar9 = uVar5;
      } while (uVar10 < uVar1);
    }
  }
  *local_5058 = (uint)uVar5;
  return;
}


