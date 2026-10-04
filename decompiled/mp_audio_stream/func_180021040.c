// FUN_180021040 @ 180021040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180021040(undefined4 *param_1,ulonglong param_2,longlong param_3,int param_4,uint param_5,
                  float param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  float fVar9;
  
  if (param_6 == DAT_1800320cc) {
    uVar7 = (ulonglong)param_5 * param_3;
    if (param_4 == 1) {
      FUN_180020540((ulonglong)param_1,param_2,uVar7);
      return;
    }
    if (param_4 == 2) {
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          iVar4 = 0x7fff;
          if (*(int *)(param_2 + uVar6 * 4) < 0x7fff) {
            iVar4 = *(int *)(param_2 + uVar6 * 4);
          }
          if (iVar4 < -0x8000) {
            iVar4 = 0x8000;
          }
          *(short *)((longlong)param_1 + uVar6 * 2) = (short)iVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
        return;
      }
    }
    else if (param_4 == 3) {
      uVar6 = 0;
      if (uVar7 != 0) {
        puVar8 = (undefined1 *)((longlong)param_1 + 2);
        do {
          lVar5 = 0x7fffff;
          if (*(longlong *)(param_2 + uVar6 * 8) < 0x7fffff) {
            lVar5 = *(longlong *)(param_2 + uVar6 * 8);
          }
          if (lVar5 < -0x800000) {
            lVar5 = -0x800000;
          }
          uVar6 = uVar6 + 1;
          puVar8[-2] = (char)lVar5;
          puVar8[-1] = (char)((ulonglong)lVar5 >> 8);
          *puVar8 = (char)((ulonglong)lVar5 >> 0x10);
          puVar8 = puVar8 + 3;
        } while (uVar6 < uVar7);
        return;
      }
    }
    else if (param_4 == 4) {
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          lVar5 = 0x7fffffff;
          if (*(longlong *)(param_2 + uVar6 * 8) < 0x7fffffff) {
            lVar5 = *(longlong *)(param_2 + uVar6 * 8);
          }
          uVar3 = (undefined4)lVar5;
          if (lVar5 < -0x80000000) {
            uVar3 = 0x80000000;
          }
          uVar6 = uVar6 + 1;
          *param_1 = uVar3;
          param_1 = param_1 + 1;
        } while (uVar6 < uVar7);
        return;
      }
    }
    else if (param_4 == 5) {
      FUN_180020390((ulonglong)param_1,param_2,uVar7);
      return;
    }
  }
  else {
    if (param_6 == 0.0) {
      FUN_18002c430(param_1,param_3,param_4,param_5);
      return;
    }
    uVar7 = (ulonglong)param_5 * param_3;
    if (param_4 == 1) {
      FUN_180021510((ulonglong)param_1,param_2,uVar7);
      return;
    }
    if (param_4 == 2) {
      fVar9 = param_6 * _DAT_18003213c;
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          iVar1 = (int)(short)(int)fVar9 * *(int *)(param_2 + uVar6 * 4) >> 8;
          iVar4 = 0x7fff;
          if (iVar1 < 0x7fff) {
            iVar4 = iVar1;
          }
          if (iVar4 < -0x8000) {
            iVar4 = 0x8000;
          }
          *(short *)((longlong)param_1 + uVar6 * 2) = (short)iVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
        return;
      }
    }
    else if (param_4 == 3) {
      fVar9 = param_6 * _DAT_18003213c;
      uVar6 = 0;
      if (uVar7 != 0) {
        puVar8 = (undefined1 *)((longlong)param_1 + 2);
        do {
          lVar2 = (longlong)(short)(int)fVar9 * *(longlong *)(param_2 + uVar6 * 8) >> 8;
          lVar5 = 0x7fffff;
          if (lVar2 < 0x7fffff) {
            lVar5 = lVar2;
          }
          if (lVar5 < -0x800000) {
            lVar5 = -0x800000;
          }
          uVar6 = uVar6 + 1;
          puVar8[-2] = (char)lVar5;
          puVar8[-1] = (char)((ulonglong)lVar5 >> 8);
          *puVar8 = (char)((ulonglong)lVar5 >> 0x10);
          puVar8 = puVar8 + 3;
        } while (uVar6 < uVar7);
        return;
      }
    }
    else if (param_4 == 4) {
      fVar9 = param_6 * _DAT_18003213c;
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          lVar2 = (longlong)(short)(int)fVar9 * *(longlong *)(param_2 + uVar6 * 8) >> 8;
          lVar5 = 0x7fffffff;
          if (lVar2 < 0x7fffffff) {
            lVar5 = lVar2;
          }
          uVar3 = (undefined4)lVar5;
          if (lVar5 < -0x80000000) {
            uVar3 = 0x80000000;
          }
          uVar6 = uVar6 + 1;
          *param_1 = uVar3;
          param_1 = param_1 + 1;
        } while (uVar6 < uVar7);
        return;
      }
    }
    else if (param_4 == 5) {
      FUN_180021320((ulonglong)param_1,param_2,uVar7,param_6);
      return;
    }
  }
  return;
}


