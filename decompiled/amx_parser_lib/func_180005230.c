// FUN_180005230 @ 180005230

void FUN_180005230(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *UNRECOVERED_JUMPTABLE;
  longlong *plVar5;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  plVar5 = param_2;
  if (-1 < *(int *)param_3) {
    plVar5 = (longlong *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  cVar1 = FUN_18000503c(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 != 0) {
      lVar4 = FUN_180004b7c();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar4 + iVar2);
    }
    FUN_180006578(plVar5,UNRECOVERED_JUMPTABLE,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 != 0) {
      lVar4 = FUN_180004b7c();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar4 + iVar2);
    }
    FUN_180006584(plVar5,UNRECOVERED_JUMPTABLE,lVar3,1);
  }
  return;
}


