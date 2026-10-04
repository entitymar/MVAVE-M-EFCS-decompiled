// FUN_180024730 @ 180024730

int FUN_180024730(longlong param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  undefined4 local_20;
  
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x2ec), iVar2 == 1)) {
    return 0;
  }
  iVar6 = 0;
  uVar5 = 0;
  iVar4 = 0;
  if (iVar2 != 0) {
    fVar8 = DAT_180032158;
    if (iVar2 == 0) goto LAB_180024853;
    do {
      iVar4 = (int)uVar5;
      iVar2 = 0;
      lVar3 = uVar5 * 0x70 + 0x2f0 + param_1;
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar3 + 0x60);
      }
      if (iVar2 != 0) {
        if (lVar3 == 0) {
          local_28._0_4_ = 0.0;
          local_28._4_4_ = 0.0;
          local_20 = 0.0;
        }
        else {
          piVar1 = (int *)(lVar3 + 0x3c);
          if (piVar1 == (int *)0x0) {
LAB_1800247fc:
            local_28 = *(undefined8 *)(lVar3 + 0x30);
            local_20 = *(float *)(lVar3 + 0x38);
            if (piVar1 != (int *)0x0) goto LAB_180024812;
          }
          else {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = 1;
            UNLOCK();
            if (iVar2 == 0) goto LAB_1800247fc;
            do {
              LOCK();
              iVar2 = *piVar1;
              if (iVar2 == 0) {
                *piVar1 = 0;
                iVar2 = 0;
              }
              UNLOCK();
              while (iVar2 == 1) {
                LOCK();
                iVar2 = *piVar1;
                if (iVar2 == 0) {
                  *piVar1 = 0;
                  iVar2 = 0;
                }
                UNLOCK();
              }
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = 1;
              UNLOCK();
            } while (iVar2 != 0);
            local_28 = *(undefined8 *)(lVar3 + 0x30);
            local_20 = *(float *)(lVar3 + 0x38);
LAB_180024812:
            LOCK();
            *piVar1 = 0;
            UNLOCK();
          }
        }
        fVar7 = (local_28._4_4_ - param_3) * (local_28._4_4_ - param_3) +
                ((float)local_28 - param_2) * ((float)local_28 - param_2) +
                (local_20 - param_4) * (local_20 - param_4);
        if (fVar7 < fVar8) {
          fVar8 = fVar7;
          iVar6 = iVar4;
        }
      }
LAB_180024853:
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)(param_1 + 0x2ec));
  }
  return iVar6;
}


