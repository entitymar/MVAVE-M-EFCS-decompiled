// FUN_180017f90 @ 180017f90

undefined8 FUN_180017f90(longlong param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  LOCK();
  iVar4 = *(int *)(param_1 + 0xc88);
  if (iVar4 == 0) {
    *(int *)(param_1 + 0xc88) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_1 + 0xc70);
      if (uVar1 == 0) {
LAB_180018001:
        *(undefined4 *)(param_1 + 0xc70) = 0;
        LOCK();
        bVar7 = *(int *)(param_1 + 0xc88) == 0;
        if (bVar7) {
          *(int *)(param_1 + 0xc88) = 0;
        }
        UNLOCK();
        if ((bVar7) && (iVar4 == 0)) {
          FUN_180011a50(param_1,1);
          LOCK();
          *(undefined4 *)(param_1 + 0xc88) = 1;
          UNLOCK();
        }
      }
      else {
        uVar3 = param_3 - uVar6;
        if (uVar1 <= param_3 - uVar6) {
          uVar3 = uVar1;
        }
        uVar6 = uVar6 + uVar3;
        *(uint *)(param_1 + 0xc70) = uVar1 - uVar3;
        if (uVar1 - uVar3 == 0) goto LAB_180018001;
      }
      if (uVar6 == param_3) break;
      uVar2 = *(ulonglong *)(param_1 + 0xc78);
      LOCK();
      bVar7 = *(int *)(param_1 + 0xc88) == 0;
      if (bVar7) {
        *(int *)(param_1 + 0xc88) = 0;
      }
      UNLOCK();
      while ((!bVar7 && (uVar5 = FUN_180011b40(param_1), uVar5 < uVar2))) {
        Sleep(10);
        LOCK();
        bVar7 = *(int *)(param_1 + 0xc88) == 0;
        if (bVar7) {
          *(int *)(param_1 + 0xc88) = 0;
        }
        UNLOCK();
      }
      *(longlong *)(param_1 + 0xc78) =
           *(longlong *)(param_1 + 0xc78) + (ulonglong)*(uint *)(param_1 + 0x548);
      *(uint *)(param_1 + 0xc70) = *(uint *)(param_1 + 0x548);
    } while (uVar6 < param_3);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar6;
  }
  return 0;
}


