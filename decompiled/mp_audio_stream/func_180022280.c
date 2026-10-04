// FUN_180022280 @ 180022280

longlong * FUN_180022280(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar10;
  int local_res10 [2];
  int local_res18 [2];
  ulonglong *local_res20;
  longlong local_68;
  int local_60 [8];
  longlong *plVar9;
  
  plVar6 = (longlong *)0x0;
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if ((param_3 == (longlong *)0x0) || (param_1 == (longlong *)0x0)) {
    return (longlong *)0xfffffffe;
  }
  LOCK();
  iVar2 = (int)param_1[8];
  if (iVar2 == 0) {
    *(int *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  local_res20 = (ulonglong *)param_4;
  if ((*(code **)(*param_1 + 0x10) == (code *)0x0) ||
     (iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_res18,local_res10,&local_68,0,0),
     iVar3 != 0)) {
    plVar6 = (longlong *)param_1[5];
    if ((plVar6 == (longlong *)0x0) && ((param_1[6] != 0 || (plVar6 = param_1, param_1[7] != 0)))) {
      plVar6 = (longlong *)
               FUN_18000c110((longlong *)0x0,param_2,(ulonglong)param_3,(longlong *)local_res20);
      return plVar6;
    }
    plVar6 = (longlong *)FUN_18000c110(plVar6,param_2,(ulonglong)param_3,(longlong *)local_res20);
    return plVar6;
  }
  plVar9 = plVar6;
  plVar10 = plVar6;
  if (param_3 != (longlong *)0x0) {
    do {
      plVar6 = (longlong *)0x0;
      plVar7 = (longlong *)param_1[5];
      if (plVar7 == (longlong *)0x0) {
        if ((param_1[6] != 0) || (plVar7 = param_1, param_1[7] != 0)) {
          plVar7 = plVar6;
        }
        if (plVar7 == (longlong *)0x0) break;
      }
      uVar4 = FUN_18000c110(plVar7,param_2,(longlong)param_3 - (longlong)plVar10,&local_68);
      lVar1 = local_68;
      plVar6 = (longlong *)(uVar4 & 0xffffffff);
      plVar10 = (longlong *)((longlong)plVar10 + local_68);
      if ((int)uVar4 != 0) {
        if ((int)uVar4 != -0x11) break;
        plVar6 = (longlong *)0x0;
        if (iVar2 == 0) {
          plVar5 = (longlong *)plVar7[6];
          if (plVar5 == (longlong *)0x0) {
            if ((code *)plVar7[7] == (code *)0x0) break;
            plVar5 = (longlong *)(*(code *)plVar7[7])(plVar7);
            param_1[5] = (longlong)plVar5;
            if (plVar5 == (longlong *)0x0) break;
          }
          else {
            param_1[5] = (longlong)plVar5;
          }
          if (*(code **)(*plVar5 + 8) == (code *)0x0) goto LAB_18002247f;
          uVar8 = (**(code **)(*plVar5 + 8))(plVar5,plVar5[1]);
        }
        else {
          if (local_68 == 0) {
            uVar8 = (int)plVar9 + 1;
            plVar9 = (longlong *)(ulonglong)uVar8;
            if (1 < uVar8) break;
          }
          else {
            plVar9 = (longlong *)0x0;
          }
          if (*(code **)(*plVar7 + 8) == (code *)0x0) {
LAB_18002247f:
            plVar6 = (longlong *)0xffffffe3;
            break;
          }
          if ((ulonglong)plVar7[2] < (ulonglong)plVar7[3]) {
            plVar6 = (longlong *)0xfffffffd;
            break;
          }
          uVar8 = (**(code **)(*plVar7 + 8))(plVar7,plVar7[1] + plVar7[3]);
        }
        plVar6 = (longlong *)(ulonglong)uVar8;
        if (uVar8 != 0) break;
      }
      if (param_2 != 0) {
        local_60[0] = 0;
        local_60[1] = 1;
        local_60[2] = 2;
        local_60[3] = 3;
        local_60[4] = 4;
        local_60[5] = 4;
        param_2 = param_2 + (ulonglong)(uint)(local_res10[0] * local_60[local_res18[0]]) * lVar1;
      }
    } while (plVar10 < param_3);
  }
  if (local_res20 != (ulonglong *)0x0) {
    *local_res20 = (ulonglong)plVar10;
  }
  if (((int)plVar6 == 0) && (plVar10 == (longlong *)0x0)) {
    plVar6 = (longlong *)0xffffffef;
  }
  return plVar6;
}


