// FUN_180018800 @ 180018800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180018800(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4,uint *param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_1148 [32];
  uint local_10f4;
  uint local_10f0;
  ulonglong local_10d8;
  ulonglong local_10d0;
  uint local_10c8;
  uint local_10c4;
  uint local_10c0;
  uint *local_10b8;
  uint *local_10b0;
  longlong *local_10a8;
  undefined8 local_10a0;
  ulonglong local_1098;
  ulonglong local_1090;
  longlong *local_1088;
  undefined8 local_1080;
  float local_1068 [1024];
  ulonglong local_68;
  ulonglong uVar22;
  
  local_68 = DAT_180036c40 ^ (ulonglong)auStackY_1148;
  uVar14 = *param_3;
  uVar19 = 0;
  uVar3 = *param_5;
  local_10b0 = param_5;
  if ((uint *)(param_1 + 0x230) == (uint *)0x0) {
    local_10f0 = 0;
    uVar18 = uVar19;
    uVar22 = uVar19;
  }
  else {
    local_10f0 = *(uint *)(param_1 + 0x234);
    uVar18 = (ulonglong)local_10f0;
    uVar22 = (ulonglong)*(uint *)(param_1 + 0x230);
  }
  uVar23 = (uint)uVar22;
  local_10f4 = 0;
  LOCK();
  uVar11 = *(ulonglong *)(param_1 + 0x360);
  if (uVar11 == 0) {
    *(ulonglong *)(param_1 + 0x360) = 0;
    uVar11 = 0;
  }
  UNLOCK();
  local_10c0 = uVar14;
  local_10b8 = param_3;
  local_10a8 = param_4;
  local_1088 = param_2;
  if (uVar11 != 0xffffffffffffffff) {
    LOCK();
    fVar8 = *(float *)(param_1 + 0x358);
    if (fVar8 == 0.0) {
      *(float *)(param_1 + 0x358) = 0.0;
      fVar8 = 0.0;
    }
    UNLOCK();
    LOCK();
    iVar9 = *(int *)(param_1 + 0x35c);
    if (iVar9 == 0) {
      *(int *)(param_1 + 0x35c) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    LOCK();
    lVar12 = *(longlong *)(param_1 + 0x368);
    if (lVar12 == 0) {
      *(longlong *)(param_1 + 0x368) = 0;
      lVar12 = 0;
    }
    UNLOCK();
    uVar13 = uVar19;
    if (lVar12 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x168);
      if ((lVar5 != 0) && (lVar5 != -0x168)) {
        LOCK();
        uVar13 = *(ulonglong *)(lVar5 + 0x1a0);
        if (uVar13 == 0) {
          *(ulonglong *)(lVar5 + 0x1a0) = 0;
          uVar13 = 0;
        }
        UNLOCK();
      }
      uVar13 = lVar12 - uVar13;
    }
    FUN_180024b10(param_1 + 0x180,fVar8,iVar9,uVar11,uVar13);
    LOCK();
    *(undefined8 *)(param_1 + 0x360) = 0xffffffffffffffff;
    UNLOCK();
  }
  LOCK();
  bVar25 = *(int *)(param_1 + 0x348) == 0;
  if (bVar25) {
    *(int *)(param_1 + 0x348) = 0;
  }
  UNLOCK();
  local_10c4 = (uint)bVar25;
  if ((*(float *)(param_1 + 0x18c) != DAT_1800320cc) ||
     (bVar25 = false, *(float *)(param_1 + 400) != DAT_1800320cc)) {
    bVar25 = true;
  }
  LOCK();
  bVar26 = *(int *)(param_1 + 0x34c) == 0;
  if (bVar26) {
    *(int *)(param_1 + 0x34c) = 0;
  }
  UNLOCK();
  local_10c8 = (uint)bVar26;
  if ((*(float *)(param_1 + 0x304) == 0.0) || (bVar26 = true, (int)uVar18 == 1)) {
    bVar26 = false;
  }
  iVar9 = *(int *)(param_1 + 0x174);
  if (uVar3 == 0) {
    *local_10b8 = 0;
    *local_10b0 = 0;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar22;
    local_10a0 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x400)) / auVar6,0);
    local_1098 = (ulonglong)(uVar23 * 4);
    local_1090 = (ulonglong)(uint)((int)uVar18 * 4);
    uVar22 = uVar19;
    do {
      bVar7 = false;
      uVar14 = uVar14 - (int)uVar19;
      uVar20 = uVar3 - (int)uVar22;
      pfVar16 = (float *)(uVar19 * local_1098 + *param_2);
      pfVar17 = (float *)(uVar22 * local_1090 + *local_10a8);
      pfVar15 = pfVar17;
      if (uVar23 != (uint)uVar18) {
        pfVar15 = local_1068;
        if ((uint)local_10a0 < uVar20) {
          uVar20 = (uint)local_10a0;
        }
      }
      if (local_10c4 == 0) {
        uVar24 = uVar20;
        if (uVar14 < uVar20) {
          uVar20 = uVar14;
          uVar24 = uVar14;
        }
      }
      else {
        local_10d8 = (ulonglong)uVar14;
        piVar1 = (int *)(param_1 + 0x1a8);
        local_10d0 = (ulonglong)uVar20;
        if (piVar1 != (int *)0x0) {
          if (*piVar1 == 2) {
            if (*(uint *)(param_1 + 0x1b4) < *(uint *)(param_1 + 0x1b0)) {
              FUN_18001ab80((longlong)piVar1,(longlong)pfVar16,&local_10d8,(longlong)pfVar15,
                            &local_10d0);
              bVar7 = true;
              uVar20 = (uint)local_10d8;
              uVar24 = (uint)local_10d0;
            }
            else {
              FUN_18001af30((longlong)piVar1,(longlong)pfVar16,&local_10d8,(short *)pfVar15,
                            &local_10d0);
              bVar7 = true;
              uVar20 = (uint)local_10d8;
              uVar24 = (uint)local_10d0;
            }
            goto LAB_180018b51;
          }
          if (*piVar1 == 5) {
            if (*(uint *)(param_1 + 0x1b4) < *(uint *)(param_1 + 0x1b0)) {
              FUN_180019e10((longlong)piVar1,(longlong)pfVar16,&local_10d8,(longlong)pfVar15,
                            &local_10d0);
              bVar7 = true;
              uVar20 = (uint)local_10d8;
              uVar24 = (uint)local_10d0;
              goto LAB_180018b51;
            }
            FUN_18001a4e0((longlong)piVar1,(longlong)pfVar16,&local_10d8,pfVar15,&local_10d0);
          }
        }
        bVar7 = true;
        uVar20 = (uint)local_10d8;
        uVar24 = (uint)local_10d0;
      }
LAB_180018b51:
      if (bVar25) {
        if (bVar7) {
          FUN_180024880((int *)(param_1 + 0x180),pfVar15,pfVar15,(ulonglong)uVar24);
        }
        else {
          FUN_180024880((int *)(param_1 + 0x180),pfVar15,pfVar16,(ulonglong)uVar24);
          bVar7 = true;
        }
      }
      if (iVar9 == 0) {
        if (!bVar7) {
          pfVar15 = pfVar16;
        }
      }
      else {
        puVar2 = (uint *)(param_1 + 0x308);
        if (puVar2 != (uint *)0x0) {
          if (bVar7) {
            FUN_180019090(puVar2,pfVar15,(longlong)pfVar15,(ulonglong)uVar24);
          }
          else {
            FUN_180019090(puVar2,pfVar15,(longlong)pfVar16,(ulonglong)uVar24);
          }
        }
      }
      if (local_10c8 == 0) {
        LOCK();
        fVar8 = *(float *)(param_1 + 0x338);
        if (fVar8 == 0.0) {
          *(float *)(param_1 + 0x338) = 0.0;
          fVar8 = 0.0;
        }
        UNLOCK();
        if (uVar23 == local_10f0) {
          uVar19 = (ulonglong)(local_10f0 * uVar24);
          if (iVar9 == 0) {
LAB_180018d53:
            FUN_1800216d0(pfVar17,pfVar15,uVar19,fVar8);
          }
          else {
            FUN_180021ed0(pfVar17,pfVar15,uVar19,5,local_10f0);
          }
        }
        else {
          FUN_180003dc0(pfVar17,(byte *)0x0,local_10f0,pfVar15,(byte *)0x0,uVar23,(ulonglong)uVar24,
                        1,*(int *)(param_1 + 0x178));
          if (iVar9 == 0) {
            uVar19 = (ulonglong)(local_10f0 * uVar24);
            pfVar15 = pfVar17;
            goto LAB_180018d53;
          }
        }
      }
      else {
        uVar14 = *(uint *)(param_1 + 0x350);
        if (((uVar14 == 0xff) || (*(longlong *)(param_1 + 0x168) == 0)) ||
           (*(uint *)(*(longlong *)(param_1 + 0x168) + 0x2ec) <= uVar14)) {
          if (param_1 == -0x230) {
            fVar27 = 0.0;
            fVar8 = 0.0;
            fVar28 = 0.0;
          }
          else {
            piVar1 = (int *)(param_1 + 0x284);
            if (piVar1 == (int *)0x0) {
LAB_180018c53:
              local_1080 = *(undefined8 *)(param_1 + 0x278);
              fVar8 = *(float *)(param_1 + 0x280);
              if (piVar1 != (int *)0x0) goto LAB_180018c63;
            }
            else {
              LOCK();
              iVar10 = *piVar1;
              *piVar1 = 1;
              UNLOCK();
              if (iVar10 == 0) goto LAB_180018c53;
              do {
                LOCK();
                iVar10 = *piVar1;
                if (iVar10 == 0) {
                  *piVar1 = 0;
                  iVar10 = 0;
                }
                UNLOCK();
                while (iVar10 == 1) {
                  LOCK();
                  iVar10 = *piVar1;
                  if (iVar10 == 0) {
                    *piVar1 = 0;
                    iVar10 = 0;
                  }
                  UNLOCK();
                }
                LOCK();
                iVar10 = *piVar1;
                *piVar1 = 1;
                UNLOCK();
              } while (iVar10 != 0);
              local_1080 = *(undefined8 *)(param_1 + 0x278);
              fVar8 = *(float *)(param_1 + 0x280);
LAB_180018c63:
              LOCK();
              *piVar1 = 0;
              UNLOCK();
            }
            fVar27 = (float)((ulonglong)local_1080 >> 0x20);
            fVar28 = (float)local_1080;
          }
          uVar14 = FUN_180024730(*(longlong *)(param_1 + 0x168),fVar28,fVar27,fVar8);
        }
        FUN_18002cc60((uint *)(param_1 + 0x230),
                      *(longlong *)(param_1 + 0x168) + 0x2f0 + (ulonglong)uVar14 * 0x70,pfVar17,
                      pfVar15,(ulonglong)uVar24);
      }
      if (bVar26) {
        uVar19 = (ulonglong)uVar24;
        if (((int *)(param_1 + 0x2f8) != (int *)0x0) && (pfVar17 != (float *)0x0)) {
          iVar10 = *(int *)(param_1 + 0x2fc);
          iVar4 = *(int *)(param_1 + 0x2f8);
          if (iVar10 == 2) {
            fVar8 = *(float *)(param_1 + 0x304);
            if (*(int *)(param_1 + 0x300) == 0) {
              if (fVar8 != 0.0) {
                if (iVar4 != 5) {
                  iVar10 = 2;
                  goto LAB_180018dfe;
                }
                FUN_18001cff0((longlong)pfVar17,(longlong)pfVar17,uVar19,fVar8);
              }
            }
            else if (fVar8 != 0.0) {
              if (iVar4 != 5) {
                iVar10 = 2;
                goto LAB_180018dfe;
              }
              FUN_18001d300((longlong)pfVar17,(longlong)pfVar17,uVar19,fVar8);
            }
          }
          else {
LAB_180018dfe:
            FUN_180021ed0(pfVar17,pfVar17,uVar19,iVar4,iVar10);
          }
        }
      }
      uVar21 = (int)uVar22 + uVar24;
      uVar22 = (ulonglong)uVar21;
      local_10f4 = local_10f4 + uVar20;
      uVar19 = (ulonglong)local_10f4;
    } while ((uVar24 != 0) &&
            (uVar18 = (ulonglong)local_10f0, param_2 = local_1088, uVar14 = local_10c0,
            uVar21 < uVar3));
    *local_10b8 = local_10f4;
    *local_10b0 = uVar21;
  }
  return;
}


