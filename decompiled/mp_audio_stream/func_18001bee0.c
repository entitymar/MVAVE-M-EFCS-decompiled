// FUN_18001bee0 @ 18001bee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18001bee0(undefined8 param_1,longlong param_2,void *param_3,uint param_4,uint *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  ulonglong in_stack_00000030;
  undefined1 auStackY_10b8 [32];
  uint local_1084;
  uint local_1080;
  uint local_107c;
  uint local_1078 [2];
  longlong *local_1070;
  longlong local_1068;
  uint *local_1060;
  undefined1 local_1058 [4096];
  ulonglong local_58;
  
  local_58 = DAT_180036c40 ^ (ulonglong)auStackY_10b8;
  iVar7 = 0;
  uVar15 = (ulonglong)param_4;
  local_1060 = param_5;
  *param_5 = 0;
  uVar14 = (ulonglong)*(byte *)(param_2 + 0x40);
  local_1080 = (uint)*(byte *)(param_2 + 0x40);
  bVar4 = false;
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  LOCK();
  plVar10 = *(longlong **)(param_2 + 0x20);
  bVar18 = plVar10 == (longlong *)0x0;
  if (bVar18) {
    *(longlong *)(param_2 + 0x20) = 0;
    plVar10 = (longlong *)0x0;
  }
  UNLOCK();
  do {
    if (bVar18) {
LAB_18001bf80:
      do {
        iVar2 = *(int *)(param_2 + 0x10);
        LOCK();
        bVar18 = iVar2 == *(int *)(param_2 + 0x10);
        if (bVar18) {
          *(int *)(param_2 + 0x10) = iVar2 + -1;
        }
        UNLOCK();
      } while (!bVar18);
      do {
        iVar2 = *(int *)(param_2 + 0x38);
        LOCK();
        bVar18 = iVar2 == *(int *)(param_2 + 0x38);
        if (bVar18) {
          *(int *)(param_2 + 0x38) = iVar2 + -1;
        }
        fVar5 = DAT_1800320cc;
        UNLOCK();
      } while (!bVar18);
      local_107c = param_4;
      local_1070 = plVar10;
      local_1068 = param_2;
      if (plVar10 == (longlong *)0x0) {
        iVar7 = 0;
      }
      else {
        do {
          uVar6 = local_107c;
          uVar16 = 0;
          local_1084 = 0;
          uVar17 = *(uint *)(*(longlong *)(*plVar10 + 8) + 0x14) & 0x10;
          if (param_3 == (void *)0x0) {
            FUN_18001c2f0(*plVar10,(uint)*(byte *)(plVar10 + 1),(void *)0x0,(uint)uVar15,
                          (int *)&local_1084,in_stack_00000030);
          }
          else {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar14;
            uVar8 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x400)) / auVar3,0);
            uVar12 = 0;
            uVar9 = (uint)uVar14;
            if ((uint)uVar15 != 0) {
              uVar15 = uVar16;
              do {
                uVar9 = uVar6 - (int)uVar15;
                uVar12 = uVar8;
                if (uVar9 <= uVar8) {
                  uVar12 = uVar9;
                }
                pvVar13 = (void *)(uVar15 * ((uint)uVar14 * 4) + (longlong)param_3);
                if (bVar4) {
                  iVar7 = FUN_18001c2f0(*plVar10,(uint)*(byte *)(plVar10 + 1),local_1058,uVar12,
                                        (int *)local_1078,in_stack_00000030 + uVar15);
                  if (((iVar7 == 0) || (iVar7 == -0x11)) && (uVar17 == 0)) {
                    FUN_1800268c0((ulonglong)pvVar13,(ulonglong)local_1058,(ulonglong)local_1078[0],
                                  local_1080,fVar5);
                  }
                }
                else {
                  iVar7 = FUN_18001c2f0(*plVar10,(uint)*(byte *)(plVar10 + 1),pvVar13,uVar12,
                                        (int *)local_1078,in_stack_00000030 + uVar15);
                }
                local_1084 = local_1084 + local_1078[0];
                uVar16 = (ulonglong)local_1084;
                param_2 = local_1068;
                uVar12 = local_107c;
                uVar9 = local_1080;
              } while (((iVar7 == 0) && (local_1078[0] != 0)) &&
                      (uVar15 = (ulonglong)local_1084, local_1084 < uVar6));
            }
            if ((plVar10 == local_1070) && ((uint)uVar16 < uVar12)) {
              pvVar13 = (void *)(uVar16 * (uVar9 * 4) + (longlong)param_3);
              for (uVar15 = (ulonglong)(uVar12 - (uint)uVar16) * (ulonglong)(uVar9 * 4); uVar15 != 0
                  ; uVar15 = uVar15 - uVar14) {
                uVar14 = uVar15;
                if (0xffffffff < uVar15) {
                  uVar14 = 0xffffffff;
                }
                if ((pvVar13 != (void *)0x0) && (uVar14 != 0)) {
                  memset(pvVar13,0,uVar14);
                }
                pvVar13 = (void *)((longlong)pvVar13 + uVar14);
              }
            }
            uVar15 = (ulonglong)local_107c;
            if (uVar17 == 0) {
              bVar4 = true;
            }
          }
          LOCK();
          *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
          UNLOCK();
          LOCK();
          plVar11 = (longlong *)plVar10[4];
          bVar18 = plVar11 == (longlong *)0x0;
          if (bVar18) {
            plVar10[4] = 0;
            plVar11 = (longlong *)0x0;
          }
          UNLOCK();
          while (!bVar18) {
            LOCK();
            bVar18 = *(int *)((longlong)plVar11 + 0x14) == 0;
            if (bVar18) {
              *(int *)((longlong)plVar11 + 0x14) = 0;
            }
            UNLOCK();
            if (!bVar18) {
              LOCK();
              *(int *)(plVar11 + 2) = (int)plVar11[2] + 1;
              UNLOCK();
              break;
            }
            plVar1 = plVar11 + 4;
            LOCK();
            plVar11 = (longlong *)*plVar1;
            bVar18 = plVar11 == (longlong *)0x0;
            if (bVar18) {
              *plVar1 = 0;
              plVar11 = (longlong *)0x0;
            }
            UNLOCK();
          }
          do {
            iVar2 = (int)plVar10[2];
            LOCK();
            bVar18 = iVar2 == (int)plVar10[2];
            if (bVar18) {
              *(int *)(plVar10 + 2) = iVar2 + -1;
            }
            UNLOCK();
          } while (!bVar18);
          do {
            iVar2 = *(int *)(param_2 + 0x38);
            LOCK();
            bVar18 = iVar2 == *(int *)(param_2 + 0x38);
            if (bVar18) {
              *(int *)(param_2 + 0x38) = iVar2 + -1;
            }
            UNLOCK();
          } while (!bVar18);
          uVar14 = (ulonglong)local_1080;
          plVar10 = plVar11;
        } while (plVar11 != (longlong *)0x0);
        if ((!bVar4) && (param_3 != (void *)0x0)) {
          for (uVar15 = (local_1080 * 4) * uVar15; uVar15 != 0; uVar15 = uVar15 - uVar14) {
            uVar14 = uVar15;
            if (0xffffffff < uVar15) {
              uVar14 = 0xffffffff;
            }
            if ((param_3 != (void *)0x0) && (uVar14 != 0)) {
              memset(param_3,0,uVar14);
            }
            param_3 = (void *)((longlong)param_3 + uVar14);
          }
        }
        *local_1060 = local_107c;
      }
      return iVar7;
    }
    LOCK();
    bVar18 = *(int *)((longlong)plVar10 + 0x14) == 0;
    if (bVar18) {
      *(int *)((longlong)plVar10 + 0x14) = 0;
    }
    UNLOCK();
    if (!bVar18) {
      LOCK();
      *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
      UNLOCK();
      goto LAB_18001bf80;
    }
    plVar11 = plVar10 + 4;
    LOCK();
    plVar10 = (longlong *)*plVar11;
    bVar18 = plVar10 == (longlong *)0x0;
    if (bVar18) {
      *plVar11 = 0;
      plVar10 = (longlong *)0x0;
    }
    UNLOCK();
  } while( true );
}


