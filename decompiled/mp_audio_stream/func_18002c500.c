// FUN_18002c500 @ 18002c500

void FUN_18002c500(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  
  if (param_3 != (float *)0x0) {
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  if (param_4 != (float *)0x0) {
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = -1.0;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    LOCK();
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x14) = 0;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 != 1) {
      piVar2 = (int *)(param_1 + 0x54);
      if (piVar2 == (int *)0x0) {
LAB_18002c5eb:
        local_c8 = *(undefined8 *)(param_1 + 0x48);
        fVar4 = *(float *)(param_1 + 0x50);
        if (piVar2 != (int *)0x0) goto LAB_18002c600;
      }
      else {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        if (iVar1 == 0) goto LAB_18002c5eb;
        do {
          LOCK();
          iVar1 = *piVar2;
          if (iVar1 == 0) {
            *piVar2 = 0;
            iVar1 = 0;
          }
          UNLOCK();
          while (iVar1 == 1) {
            LOCK();
            iVar1 = *piVar2;
            if (iVar1 == 0) {
              *piVar2 = 0;
              iVar1 = 0;
            }
            UNLOCK();
          }
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = 1;
          UNLOCK();
        } while (iVar1 != 0);
        local_c8 = *(undefined8 *)(param_1 + 0x48);
        fVar4 = *(float *)(param_1 + 0x50);
LAB_18002c600:
        LOCK();
        *piVar2 = 0;
        UNLOCK();
      }
      piVar2 = (int *)(param_1 + 100);
      if (piVar2 == (int *)0x0) {
LAB_18002c65b:
        local_b8 = *(undefined8 *)(param_1 + 0x58);
        fVar3 = *(float *)(param_1 + 0x60);
        if (piVar2 != (int *)0x0) goto LAB_18002c670;
      }
      else {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        if (iVar1 == 0) goto LAB_18002c65b;
        do {
          LOCK();
          iVar1 = *piVar2;
          if (iVar1 == 0) {
            *piVar2 = 0;
            iVar1 = 0;
          }
          UNLOCK();
          while (iVar1 == 1) {
            LOCK();
            iVar1 = *piVar2;
            if (iVar1 == 0) {
              *piVar2 = 0;
              iVar1 = 0;
            }
            UNLOCK();
          }
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = 1;
          UNLOCK();
        } while (iVar1 != 0);
        local_b8 = *(undefined8 *)(param_1 + 0x58);
        fVar3 = *(float *)(param_1 + 0x60);
LAB_18002c670:
        LOCK();
        *piVar2 = 0;
        UNLOCK();
      }
      piVar2 = (int *)(param_2 + 0x3c);
      if (piVar2 == (int *)0x0) {
LAB_18002c6ca:
        local_d8 = *(undefined8 *)(param_2 + 0x30);
        fVar5 = *(float *)(param_2 + 0x38);
        if (piVar2 != (int *)0x0) goto LAB_18002c6de;
      }
      else {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        if (iVar1 == 0) goto LAB_18002c6ca;
        do {
          LOCK();
          iVar1 = *piVar2;
          if (iVar1 == 0) {
            *piVar2 = 0;
            iVar1 = 0;
          }
          UNLOCK();
          while (iVar1 == 1) {
            LOCK();
            iVar1 = *piVar2;
            if (iVar1 == 0) {
              *piVar2 = 0;
              iVar1 = 0;
            }
            UNLOCK();
          }
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = 1;
          UNLOCK();
        } while (iVar1 != 0);
        local_d8 = *(undefined8 *)(param_2 + 0x30);
        fVar5 = *(float *)(param_2 + 0x38);
LAB_18002c6de:
        LOCK();
        *piVar2 = 0;
        UNLOCK();
      }
      piVar2 = (int *)(param_2 + 0x4c);
      if (piVar2 == (int *)0x0) {
LAB_18002c739:
        local_e8 = *(undefined8 *)(param_2 + 0x40);
        fVar18 = *(float *)(param_2 + 0x48);
        if (piVar2 == (int *)0x0) goto LAB_18002c74f;
      }
      else {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        if (iVar1 == 0) goto LAB_18002c739;
        do {
          LOCK();
          iVar1 = *piVar2;
          if (iVar1 == 0) {
            *piVar2 = 0;
            iVar1 = 0;
          }
          UNLOCK();
          while (iVar1 == 1) {
            LOCK();
            iVar1 = *piVar2;
            if (iVar1 == 0) {
              *piVar2 = 0;
              iVar1 = 0;
            }
            UNLOCK();
          }
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = 1;
          UNLOCK();
        } while (iVar1 != 0);
        local_e8 = *(undefined8 *)(param_2 + 0x40);
        fVar18 = *(float *)(param_2 + 0x48);
      }
      LOCK();
      *piVar2 = 0;
      UNLOCK();
LAB_18002c74f:
      fVar9 = local_e8._4_4_ * local_e8._4_4_ + (float)local_e8 * (float)local_e8 + fVar18 * fVar18;
      if (fVar9 == 0.0) {
        fVar18 = 0.0;
        local_e8._4_4_ = 0.0;
        fVar9 = 0.0;
      }
      else {
        auVar8._4_4_ = fVar9;
        auVar8._0_4_ = fVar9;
        auVar8._8_4_ = fVar9;
        auVar8._12_4_ = fVar9;
        auVar8 = rsqrtss(auVar8,auVar8);
        fVar9 = auVar8._0_4_;
        fVar18 = fVar9 * fVar18;
        local_e8._4_4_ = fVar9 * local_e8._4_4_;
        fVar9 = fVar9 * (float)local_e8;
      }
      fVar10 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
      fVar17 = *(float *)(param_2 + 0x2c) * local_e8._4_4_ - fVar10 * fVar18;
      local_e8._0_4_ = (float)*(undefined8 *)(param_2 + 0x24);
      fVar10 = fVar10 * fVar9 - (float)local_e8 * local_e8._4_4_;
      fVar16 = (float)local_e8 * fVar18 - *(float *)(param_2 + 0x2c) * fVar9;
      fVar11 = fVar16 * fVar16 + fVar17 * fVar17 + fVar10 * fVar10;
      if (fVar11 == 0.0) {
        fVar10 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
      }
      else {
        auVar7._4_4_ = fVar11;
        auVar7._0_4_ = fVar11;
        auVar7._8_4_ = fVar11;
        auVar7._12_4_ = fVar11;
        auVar8 = rsqrtss(auVar7,auVar7);
        fVar11 = auVar8._0_4_;
        fVar16 = fVar16 * fVar11;
        fVar10 = fVar11 * fVar10;
        fVar17 = fVar17 * fVar11;
      }
      if (fVar17 * fVar17 + fVar16 * fVar16 + fVar10 * fVar10 == 0.0) {
        fVar16 = 0.0;
        fVar10 = 0.0;
        fVar17 = DAT_1800320cc;
      }
      fVar11 = fVar16 * fVar18 - fVar10 * local_e8._4_4_;
      fVar12 = fVar10 * fVar9 - fVar17 * fVar18;
      fVar13 = fVar17 * local_e8._4_4_ - fVar16 * fVar9;
      if (*(int *)(param_2 + 0x10) == 1) {
        fVar17 = (float)((uint)fVar17 ^ DAT_180032290);
        fVar16 = (float)((uint)fVar16 ^ DAT_180032290);
        fVar10 = (float)((uint)fVar10 ^ DAT_180032290);
      }
      fVar14 = (float)((uint)local_e8._4_4_ ^ DAT_180032290);
      fVar15 = (float)((uint)fVar18 ^ DAT_180032290);
      fVar9 = (float)((uint)fVar9 ^ DAT_180032290);
      if (param_3 != (float *)0x0) {
        *param_3 = (float)((uint)(fVar16 * local_d8._4_4_ + fVar17 * (float)local_d8 +
                                 fVar10 * fVar5) ^ DAT_180032290) +
                   fVar16 * local_c8._4_4_ + fVar17 * (float)local_c8 + fVar10 * fVar4;
        fVar18 = (float)((uint)((fVar9 * (float)local_d8 - local_d8._4_4_ * local_e8._4_4_) -
                               fVar5 * fVar18) ^ DAT_180032290);
        param_3[1] = (float)((uint)(fVar11 * (float)local_d8 + fVar12 * local_d8._4_4_ +
                                   fVar13 * fVar5) ^ DAT_180032290) +
                     fVar11 * (float)local_c8 + fVar12 * local_c8._4_4_ + fVar13 * fVar4;
        param_3[2] = fVar18 + (float)local_c8 * fVar9 + local_c8._4_4_ * fVar14 + fVar4 * fVar15;
      }
      if (param_4 == (float *)0x0) {
        return;
      }
      param_4[1] = local_b8._4_4_ * fVar12 + (float)local_b8 * fVar11 + fVar3 * fVar13;
      *param_4 = fVar16 * local_b8._4_4_ + fVar17 * (float)local_b8 + fVar10 * fVar3;
      param_4[2] = local_b8._4_4_ * fVar14 + fVar9 * (float)local_b8 + fVar3 * fVar15;
      return;
    }
  }
  if (param_3 == (float *)0x0) goto LAB_18002cbd2;
  piVar2 = (int *)(param_1 + 0x54);
  if (piVar2 == (int *)0x0) {
LAB_18002cbb5:
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    fVar4 = *(float *)(param_1 + 0x50);
    if (piVar2 != (int *)0x0) goto LAB_18002cbc4;
  }
  else {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 1;
    UNLOCK();
    if (iVar1 == 0) goto LAB_18002cbb5;
    do {
      LOCK();
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        *piVar2 = 0;
        iVar1 = 0;
      }
      UNLOCK();
      while (iVar1 == 1) {
        LOCK();
        iVar1 = *piVar2;
        if (iVar1 == 0) {
          *piVar2 = 0;
          iVar1 = 0;
        }
        UNLOCK();
      }
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 1;
      UNLOCK();
    } while (iVar1 != 0);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    fVar4 = *(float *)(param_1 + 0x50);
LAB_18002cbc4:
    LOCK();
    *piVar2 = 0;
    UNLOCK();
  }
  *(undefined8 *)param_3 = uVar6;
  param_3[2] = fVar4;
LAB_18002cbd2:
  if (param_4 == (float *)0x0) {
    return;
  }
  piVar2 = (int *)(param_1 + 100);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 1;
    UNLOCK();
    if (iVar1 != 0) {
      do {
        LOCK();
        iVar1 = *piVar2;
        if (iVar1 == 0) {
          *piVar2 = 0;
          iVar1 = 0;
        }
        UNLOCK();
        while (iVar1 == 1) {
          LOCK();
          iVar1 = *piVar2;
          if (iVar1 == 0) {
            *piVar2 = 0;
            iVar1 = 0;
          }
          UNLOCK();
        }
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
      } while (iVar1 != 0);
      fVar4 = *(float *)(param_1 + 0x60);
      LOCK();
      *piVar2 = 0;
      UNLOCK();
      *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x58);
      param_4[2] = fVar4;
      return;
    }
  }
  fVar4 = *(float *)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = 0;
    UNLOCK();
  }
  *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x58);
  param_4[2] = fVar4;
  return;
}


