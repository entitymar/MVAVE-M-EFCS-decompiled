// FUN_18002cc60 @ 18002cc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18002cc60(uint *param_1,longlong param_2,float *param_3,float *param_4,ulonglong param_5)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  bool bVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  double dVar25;
  undefined4 uVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_res8;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  uint local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  byte *local_108;
  undefined8 local_100;
  undefined8 uVar24;
  
  local_108 = *(byte **)(param_2 + 8);
  local_118 = *(byte **)(param_1 + 2);
  uVar14 = 0;
  LOCK();
  bVar20 = param_1[4] == 0;
  if (bVar20) {
    param_1[4] = 0;
  }
  UNLOCK();
  if (bVar20) {
    uVar17 = param_1[1];
    if (*(int *)(param_2 + 0x60) == 0) {
      FUN_18002c430(param_3,param_5,5,uVar17);
      param_1[0x1e] = (uint)DAT_1800320cc;
      return 0;
    }
    uVar12 = *param_1;
    if (uVar12 == uVar17) {
      FUN_180021ed0(param_3,param_4,param_5,5,uVar12);
      param_1[0x1e] = (uint)DAT_1800320cc;
      return 0;
    }
    FUN_180003dc0(param_3,local_108,uVar17,param_4,local_118,uVar12,param_5,0,0);
    param_1[0x1e] = (uint)DAT_1800320cc;
    return 0;
  }
  local_128 = *param_1;
  uVar17 = param_1[1];
  LOCK();
  fVar31 = (float)param_1[9];
  if (fVar31 == 0.0) {
    param_1[9] = 0;
    fVar31 = 0.0;
  }
  UNLOCK();
  LOCK();
  fVar32 = (float)param_1[10];
  if (fVar32 == 0.0) {
    param_1[10] = 0;
    fVar32 = 0.0;
  }
  UNLOCK();
  LOCK();
  fVar29 = (float)param_1[0xb];
  if (fVar29 == 0.0) {
    param_1[0xb] = 0;
    fVar29 = 0.0;
  }
  UNLOCK();
  LOCK();
  local_124 = (float)param_1[0xf];
  if (local_124 == 0.0) {
    param_1[0xf] = 0;
    local_124 = 0.0;
  }
  UNLOCK();
  piVar13 = (int *)(param_2 + 0x5c);
  if (piVar13 == (int *)0x0) {
LAB_18002ce3f:
    local_100 = *(undefined8 *)(param_2 + 0x50);
    local_res8 = *(float *)(param_2 + 0x58);
    if (piVar13 != (int *)0x0) goto LAB_18002ce59;
  }
  else {
    LOCK();
    iVar5 = *piVar13;
    *piVar13 = 1;
    UNLOCK();
    if (iVar5 == 0) goto LAB_18002ce3f;
    do {
      LOCK();
      iVar5 = *piVar13;
      if (iVar5 == 0) {
        *piVar13 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (iVar5 == 1) {
        LOCK();
        iVar5 = *piVar13;
        if (iVar5 == 0) {
          *piVar13 = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      LOCK();
      iVar5 = *piVar13;
      *piVar13 = 1;
      UNLOCK();
    } while (iVar5 != 0);
    local_100 = *(undefined8 *)(param_2 + 0x50);
    local_res8 = *(float *)(param_2 + 0x58);
LAB_18002ce59:
    LOCK();
    *piVar13 = 0;
    UNLOCK();
  }
  local_120 = *(float *)(param_2 + 0x20);
  LOCK();
  uVar12 = param_1[5];
  if (uVar12 == 0) {
    param_1[5] = 0;
    uVar12 = 0;
  }
  UNLOCK();
  if (uVar12 == 1) {
    puVar1 = param_1 + 0x15;
    if (puVar1 == (uint *)0x0) {
LAB_18002cef2:
      local_148 = *(undefined8 *)(param_1 + 0x12);
      local_140 = (float)param_1[0x14];
      if (puVar1 != (uint *)0x0) goto LAB_18002ceff;
    }
    else {
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = 1;
      UNLOCK();
      if (uVar12 == 0) goto LAB_18002cef2;
      do {
        LOCK();
        uVar12 = *puVar1;
        if (uVar12 == 0) {
          *puVar1 = 0;
          uVar12 = 0;
        }
        UNLOCK();
        while (uVar12 == 1) {
          LOCK();
          uVar12 = *puVar1;
          if (uVar12 == 0) {
            *puVar1 = 0;
            uVar12 = 0;
          }
          UNLOCK();
        }
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = 1;
        UNLOCK();
      } while (uVar12 != 0);
      local_148 = *(undefined8 *)(param_1 + 0x12);
      local_140 = (float)param_1[0x14];
LAB_18002ceff:
      LOCK();
      *puVar1 = 0;
      UNLOCK();
    }
    puVar1 = param_1 + 0x19;
    if (puVar1 == (uint *)0x0) {
LAB_18002cf52:
      uVar24 = *(undefined8 *)(param_1 + 0x16);
      fVar22 = (float)param_1[0x18];
      if (puVar1 != (uint *)0x0) goto LAB_18002cf5f;
    }
    else {
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = 1;
      UNLOCK();
      if (uVar12 == 0) goto LAB_18002cf52;
      do {
        LOCK();
        uVar12 = *puVar1;
        if (uVar12 == 0) {
          *puVar1 = 0;
          uVar12 = 0;
        }
        UNLOCK();
        while (uVar12 == 1) {
          LOCK();
          uVar12 = *puVar1;
          if (uVar12 == 0) {
            *puVar1 = 0;
            uVar12 = 0;
          }
          UNLOCK();
        }
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = 1;
        UNLOCK();
      } while (uVar12 != 0);
      uVar24 = *(undefined8 *)(param_1 + 0x16);
      fVar22 = (float)param_1[0x18];
LAB_18002cf5f:
      LOCK();
      *puVar1 = 0;
      UNLOCK();
    }
    uVar21 = (undefined4)uVar24;
    uVar27 = (undefined4)((ulonglong)uVar24 >> 0x20);
  }
  else {
    FUN_18002c500((longlong)param_1,param_2,(float *)&local_148,(float *)&local_158);
    uVar21 = (undefined4)local_158;
    uVar27 = (undefined4)((ulonglong)local_158 >> 0x20);
    fVar22 = local_150;
  }
  fVar33 = local_148._4_4_;
  fVar34 = (float)local_148;
  auVar26._0_8_ =
       (double)(local_148._4_4_ * local_148._4_4_ + (float)local_148 * (float)local_148 +
               local_140 * local_140);
  auVar26._8_8_ = 0;
  if (auVar26._0_8_ < 0.0) {
    dVar25 = sqrt(auVar26._0_8_);
  }
  else {
    auVar26 = sqrtpd(ZEXT816(0),auVar26);
    dVar25 = auVar26._0_8_;
  }
  fVar35 = (float)dVar25;
  LOCK();
  uVar12 = param_1[4];
  if (uVar12 == 0) {
    param_1[4] = 0;
    uVar12 = 0;
  }
  uVar8 = DAT_180032290;
  fVar30 = DAT_1800320cc;
  UNLOCK();
  fVar23 = DAT_1800320cc;
  if (uVar12 != 0) {
    if (uVar12 == 1) {
      if (fVar31 < fVar32) {
        fVar23 = fVar35;
        if (fVar32 <= fVar35) {
          fVar23 = fVar32;
        }
        if (fVar23 < fVar31) {
          fVar23 = fVar31;
        }
        fVar23 = fVar31 / ((fVar23 - fVar31) * fVar29 + fVar31);
      }
    }
    else if (uVar12 == 2) {
      if (fVar31 < fVar32) {
        fVar23 = fVar35;
        if (fVar32 <= fVar35) {
          fVar23 = fVar32;
        }
        if (fVar23 < fVar31) {
          fVar23 = fVar31;
        }
        fVar23 = DAT_1800320cc - ((fVar23 - fVar31) * fVar29) / (fVar32 - fVar31);
      }
    }
    else if ((uVar12 == 3) && (fVar31 < fVar32)) {
      fVar23 = fVar35;
      if (fVar32 <= fVar35) {
        fVar23 = fVar32;
      }
      if (fVar23 < fVar31) {
        fVar23 = fVar31;
      }
      dVar25 = pow((double)(fVar23 / fVar31),(double)(float)((uint)fVar29 ^ DAT_180032290));
      fVar23 = (float)dVar25;
    }
  }
  if (fVar35 <= _DAT_1800320b0) {
    fVar35 = 0.0;
    fVar34 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
  }
  else {
    fVar31 = fVar30 / fVar35;
    fVar34 = fVar31 * fVar34;
    fVar32 = fVar31 * local_140;
    fVar31 = fVar31 * fVar33;
  }
  fVar29 = DAT_180032164;
  if (0.0 < fVar35) {
    LOCK();
    fVar29 = (float)param_1[0xc];
    if (fVar29 == 0.0) {
      param_1[0xc] = 0;
      fVar29 = 0.0;
    }
    UNLOCK();
    LOCK();
    fVar6 = (float)param_1[0xd];
    if (fVar6 == 0.0) {
      param_1[0xd] = 0;
      fVar6 = 0.0;
    }
    UNLOCK();
    LOCK();
    fVar7 = (float)param_1[0xe];
    if (fVar7 == 0.0) {
      param_1[0xe] = 0;
      fVar7 = 0.0;
    }
    UNLOCK();
    local_138 = CONCAT44(uVar27,uVar21);
    local_150 = (float)((uint)fVar32 ^ uVar8);
    local_158 = CONCAT44((uint)fVar31 ^ uVar8,(uint)fVar34 ^ uVar8);
    local_130 = fVar22;
    fVar22 = FUN_180002ab0(&local_138,&local_158,fVar29,fVar6,fVar7);
    fVar29 = DAT_180032164;
    fVar23 = fVar22 * fVar23;
    if (*(float *)(param_2 + 0x14) < DAT_180032118) {
      local_150 = fVar30;
      if (*(int *)(param_2 + 0x10) == 0) {
        local_150 = DAT_180032164;
      }
      local_138 = CONCAT44(fVar31,fVar34);
      local_158 = 0;
      local_130 = fVar32;
      fVar31 = FUN_180002ab0(&local_158,&local_138,*(float *)(param_2 + 0x14),
                             *(float *)(param_2 + 0x18),*(float *)(param_2 + 0x1c));
      fVar23 = fVar31 * fVar23;
    }
  }
  LOCK();
  fVar31 = (float)param_1[8];
  if (fVar31 == 0.0) {
    param_1[8] = 0;
    fVar31 = 0.0;
  }
  UNLOCK();
  fVar32 = fVar23;
  if (fVar31 <= fVar23) {
    LOCK();
    fVar32 = (float)param_1[8];
    if (fVar32 == 0.0) {
      param_1[8] = 0;
      fVar32 = 0.0;
    }
    UNLOCK();
  }
  LOCK();
  fVar31 = (float)param_1[7];
  if (fVar31 == 0.0) {
    param_1[7] = 0;
    fVar31 = 0.0;
  }
  UNLOCK();
  if (fVar31 <= fVar32) {
    LOCK();
    fVar31 = (float)param_1[8];
    if (fVar31 == 0.0) {
      param_1[8] = 0;
      fVar31 = 0.0;
    }
    UNLOCK();
    if (fVar31 <= fVar23) {
      LOCK();
      fVar23 = (float)param_1[8];
      if (fVar23 == 0.0) {
        param_1[8] = 0;
        fVar23 = 0.0;
      }
      UNLOCK();
    }
  }
  else {
    LOCK();
    fVar23 = (float)param_1[7];
    if (fVar23 == 0.0) {
      param_1[7] = 0;
      fVar23 = 0.0;
    }
    UNLOCK();
  }
  if (uVar17 != 0) {
    uVar10 = uVar14;
    if (3 < uVar17) {
      pfVar11 = (float *)(param_1 + 0x2c);
      pfVar15 = *(float **)pfVar11;
      if ((pfVar11 < pfVar15) || (uVar10 = 0, pfVar15 + (uVar17 - 1) < pfVar11)) {
        uVar10 = uVar14;
        do {
          uVar12 = (int)uVar10 + 4;
          uVar10 = (ulonglong)uVar12;
        } while (uVar12 < (uVar17 & 0xfffffffc));
        for (lVar9 = (ulonglong)(uVar17 >> 2) << 2; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pfVar15 = fVar23;
          pfVar15 = pfVar15 + 1;
        }
      }
    }
    uVar12 = (uint)uVar10;
    if (uVar12 < uVar17) {
      if (3 < uVar17 - uVar12) {
        uVar8 = ((uVar17 - uVar12) - 4 >> 2) + 1;
        uVar16 = (ulonglong)uVar8;
        uVar12 = uVar12 + uVar8 * 4;
        lVar9 = uVar10 * 4;
        do {
          *(float *)(lVar9 + *(longlong *)(param_1 + 0x2c)) = fVar23;
          *(float *)(*(longlong *)(param_1 + 0x2c) + 4 + uVar10 * 4) = fVar23;
          *(float *)(*(longlong *)(param_1 + 0x2c) + 8 + uVar10 * 4) = fVar23;
          *(float *)(*(longlong *)(param_1 + 0x2c) + 0xc + uVar10 * 4) = fVar23;
          uVar10 = uVar10 + 4;
          uVar16 = uVar16 - 1;
          lVar9 = lVar9 + 0x10;
        } while (uVar16 != 0);
        if (uVar17 <= uVar12) goto LAB_18002d390;
      }
      uVar16 = (ulonglong)(uVar17 - uVar12);
      lVar9 = uVar10 * 4;
      do {
        *(float *)(lVar9 + *(longlong *)(param_1 + 0x2c)) = fVar23;
        uVar16 = uVar16 - 1;
        lVar9 = lVar9 + 4;
      } while (uVar16 != 0);
    }
  }
LAB_18002d390:
  if (*(int *)(param_2 + 0x60) == 0) {
    pfVar11 = param_3;
    for (uVar10 = (param_1[1] << 2) * param_5; uVar10 != 0; uVar10 = uVar10 - uVar16) {
      uVar16 = uVar10;
      if (0xffffffff < uVar10) {
        uVar16 = 0xffffffff;
      }
      if ((pfVar11 != (float *)0x0) && (uVar16 != 0)) {
        memset(pfVar11,0,uVar16);
      }
      pfVar11 = (float *)((longlong)pfVar11 + uVar16);
    }
  }
  else {
    FUN_180003dc0(param_3,local_108,uVar17,param_4,local_118,local_128,param_5,0,0);
  }
  pbVar3 = local_108;
  fVar31 = DAT_1800320c8;
  if (0.0 < fVar35) {
    fVar35 = fVar30 / fVar35;
    fVar22 = fVar35 * (float)local_148;
    fVar32 = fVar35 * local_140;
    uVar10 = uVar14;
    uVar16 = uVar14;
    pbVar19 = local_108;
    if (uVar17 != 0) {
      do {
        uVar12 = (uint)uVar10;
        if (pbVar3 == (byte *)0x0) {
          uVar10 = FUN_180005500(0,uVar17,uVar12);
          bVar4 = (byte)uVar10;
        }
        else {
          bVar4 = *pbVar19;
        }
        fVar34 = fVar30;
        if ((((bVar4 & 0xfa) != 0) || (bVar4 == 4)) && (0x1f < (byte)(bVar4 - 0x14))) {
          uVar18 = (ulonglong)bVar4;
          pfVar11 = (float *)(&DAT_1800364c0 + uVar18 * 0x18);
          uVar10 = uVar14;
          do {
            if (*pfVar11 != 0.0) {
              if (bVar4 < 0x34) {
                fVar23 = *(float *)(&DAT_180036200 + uVar18 * 0xc);
                fVar6 = *(float *)(uVar18 * 0xc + 0x180036204);
                local_138 = *(undefined8 *)(&DAT_180036200 + uVar18 * 0xc);
                fVar34 = *(float *)(&DAT_180036208 + uVar18 * 0xc);
              }
              else {
                fVar23 = 0.0;
                fVar6 = 0.0;
                fVar34 = fVar29;
              }
              LOCK();
              fVar7 = (float)param_1[0x10];
              if (fVar7 == 0.0) {
                param_1[0x10] = 0;
                fVar7 = 0.0;
              }
              UNLOCK();
              fVar34 = ((fVar6 * fVar35 * fVar33 + fVar23 * fVar22 + fVar34 * fVar32) - fVar30) *
                       fVar7 + fVar30;
              break;
            }
            uVar10 = uVar10 + 1;
            pfVar11 = pfVar11 + 1;
          } while ((longlong)uVar10 < 6);
        }
        fVar34 = (fVar34 + fVar30) * fVar31;
        if (fVar34 <= (float)param_1[0x1f]) {
          fVar34 = (float)param_1[0x1f];
        }
        *(float *)(*(longlong *)(param_1 + 0x2c) + uVar16) =
             fVar34 * *(float *)(*(longlong *)(param_1 + 0x2c) + uVar16);
        uVar10 = (ulonglong)(uVar12 + 1);
        uVar16 = uVar16 + 4;
        pbVar19 = pbVar19 + 1;
      } while (uVar12 + 1 < uVar17);
    }
  }
  puVar1 = param_1 + 0x20;
  if (puVar1 != (uint *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x2c);
    if (lVar9 != 0) {
      if (*puVar1 != 0) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x24);
          uVar17 = (int)uVar14 + 1;
          uVar21 = *(undefined4 *)(lVar9 + uVar14 * 4);
          *(float *)(lVar2 + uVar14 * 4) =
               ((float)param_1[0x22] / (float)param_1[0x21]) *
               (*(float *)(*(longlong *)(param_1 + 0x26) + uVar14 * 4) -
               *(float *)(lVar2 + uVar14 * 4)) + *(float *)(lVar2 + uVar14 * 4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x26) + uVar14 * 4) = uVar21;
          uVar14 = (ulonglong)uVar17;
        } while (uVar17 < *puVar1);
      }
      if (param_1[0x22] == 0xffffffff) {
        param_1[0x22] = param_1[0x21];
      }
      else {
        param_1[0x22] = 0;
      }
    }
    FUN_180019090(puVar1,param_3,(longlong)param_3,param_5);
  }
  fVar31 = local_124;
  if (local_124 <= 0.0) goto LAB_18002d8ab;
  puVar1 = param_1 + 0x1d;
  if (puVar1 == (uint *)0x0) {
LAB_18002d6d7:
    local_118 = *(byte **)(param_1 + 0x1a);
    fVar32 = (float)param_1[0x1c];
    if (puVar1 != (uint *)0x0) goto LAB_18002d6e9;
  }
  else {
    LOCK();
    uVar17 = *puVar1;
    *puVar1 = 1;
    UNLOCK();
    if (uVar17 == 0) goto LAB_18002d6d7;
    do {
      LOCK();
      uVar17 = *puVar1;
      if (uVar17 == 0) {
        *puVar1 = 0;
        uVar17 = 0;
      }
      UNLOCK();
      while (uVar17 == 1) {
        LOCK();
        uVar17 = *puVar1;
        if (uVar17 == 0) {
          *puVar1 = 0;
          uVar17 = 0;
        }
        UNLOCK();
      }
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = 1;
      UNLOCK();
    } while (uVar17 != 0);
    local_118 = *(byte **)(param_1 + 0x1a);
    fVar32 = (float)param_1[0x1c];
LAB_18002d6e9:
    LOCK();
    *puVar1 = 0;
    UNLOCK();
  }
  puVar1 = param_1 + 0x15;
  if (puVar1 == (uint *)0x0) {
LAB_18002d738:
    local_148 = *(undefined8 *)(param_1 + 0x12);
    fVar29 = (float)param_1[0x14];
    if (puVar1 != (uint *)0x0) goto LAB_18002d74b;
  }
  else {
    LOCK();
    uVar17 = *puVar1;
    *puVar1 = 1;
    UNLOCK();
    if (uVar17 == 0) goto LAB_18002d738;
    do {
      LOCK();
      uVar17 = *puVar1;
      if (uVar17 == 0) {
        *puVar1 = 0;
        uVar17 = 0;
      }
      UNLOCK();
      while (uVar17 == 1) {
        LOCK();
        uVar17 = *puVar1;
        if (uVar17 == 0) {
          *puVar1 = 0;
          uVar17 = 0;
        }
        UNLOCK();
      }
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = 1;
      UNLOCK();
    } while (uVar17 != 0);
    local_148 = *(undefined8 *)(param_1 + 0x12);
    fVar29 = (float)param_1[0x14];
LAB_18002d74b:
    LOCK();
    *puVar1 = 0;
    UNLOCK();
  }
  piVar13 = (int *)(param_2 + 0x3c);
  if (piVar13 == (int *)0x0) {
LAB_18002d79a:
    local_158 = *(undefined8 *)(param_2 + 0x30);
    fVar22 = *(float *)(param_2 + 0x38);
    if (piVar13 != (int *)0x0) goto LAB_18002d7af;
  }
  else {
    LOCK();
    iVar5 = *piVar13;
    *piVar13 = 1;
    UNLOCK();
    if (iVar5 == 0) goto LAB_18002d79a;
    do {
      LOCK();
      iVar5 = *piVar13;
      if (iVar5 == 0) {
        *piVar13 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (iVar5 == 1) {
        LOCK();
        iVar5 = *piVar13;
        if (iVar5 == 0) {
          *piVar13 = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      LOCK();
      iVar5 = *piVar13;
      *piVar13 = 1;
      UNLOCK();
    } while (iVar5 != 0);
    local_158 = *(undefined8 *)(param_2 + 0x30);
    fVar22 = *(float *)(param_2 + 0x38);
LAB_18002d7af:
    LOCK();
    *piVar13 = 0;
    UNLOCK();
  }
  fVar34 = (float)local_158 - (float)local_148;
  fVar33 = local_158._4_4_ - local_148._4_4_;
  fVar22 = fVar22 - fVar29;
  auVar28._0_8_ = (double)(fVar33 * fVar33 + fVar34 * fVar34 + fVar22 * fVar22);
  auVar28._8_8_ = 0;
  if (auVar28._0_8_ < 0.0) {
    dVar25 = sqrt(auVar28._0_8_);
  }
  else {
    auVar26 = sqrtpd(ZEXT816(0),auVar28);
    dVar25 = auVar26._0_8_;
  }
  fVar29 = (float)dVar25;
  if (fVar29 != 0.0) {
    fVar23 = local_120 / fVar31;
    fVar35 = (local_100._4_4_ * fVar33 + (float)local_100 * fVar34 + local_res8 * fVar22) / fVar29;
    if (fVar23 <= fVar35) {
      fVar35 = fVar23;
    }
    fVar29 = (local_118._4_4_ * fVar33 + (float)local_118 * fVar34 + fVar32 * fVar22) / fVar29;
    if (fVar23 <= fVar29) {
      fVar29 = fVar23;
    }
    fVar30 = (local_120 - fVar35 * fVar31) / (local_120 - fVar29 * fVar31);
  }
LAB_18002d8ab:
  param_1[0x1e] = (uint)fVar30;
  return 0;
}


