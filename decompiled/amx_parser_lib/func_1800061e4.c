// FUN_1800061e4 @ 1800061e4

void FUN_1800061e4(__uint64 *param_1,ulonglong *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_180004b68();
  iVar2 = FUN_180004f30((longlong *)param_1,param_2,(longlong)param_3);
  lVar4 = FUN_180004494();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = FUN_180004b68();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)((int)param_3->dispUnwindMap + lVar5 + lVar4);
    iVar1 = param_3->dispUnwindMap;
    lVar4 = FUN_180004b68();
    if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) == 0) {
      lVar4 = 0;
    }
    else {
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_180004b68();
      iVar1 = *(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1);
      lVar4 = FUN_180004b68();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      __FrameHandler3::SetState(param_1,param_3,iVar2);
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_180004b68();
      if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) != 0) {
        FUN_180004b68();
        FUN_180004b68();
      }
      _CallSettingFrame();
      FUN_180004b90(uVar3);
    }
  }
  lVar4 = FUN_180004494();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_180004494();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __FrameHandler3::SetState(param_1,param_3,iVar2);
  return;
}


