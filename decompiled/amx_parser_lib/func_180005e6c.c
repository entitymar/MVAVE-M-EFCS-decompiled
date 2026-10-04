// thunk_FUN_180005c3c @ 180005e6c

undefined8
thunk_FUN_180005c3c(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
                   _s_FuncInfo *param_5,int param_6,longlong param_7,byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffd0;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  __except_validate_context_record(param_3);
  lVar2 = FUN_180004494();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*param_1 != -0x1f928c9d)) {
    if (*param_1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar4 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_180005caa;
      }
    }
    else {
      bVar4 = *param_1 == -0x7fffffda;
LAB_180005caa:
      if (bVar4) goto LAB_180005cc1;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_180005cc1:
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (iVar1 = param_5->dispESTypeList, iVar1 == 0)) ||
        (lVar2 = FUN_180004b68(), lVar2 + iVar1 == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5->EHFlags & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        ((iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0 &&
         (lVar2 = FUN_180004b7c(), lVar2 + iVar1 != 0)))))) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_180018270)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar6,(uint)param_8));
      return uVar3;
    }
    FUN_1800053c8(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar5,param_6),param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
LAB_180005d47:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*param_1 == -0x7fffffda) {
      iVar1 = FUN_180004fd4((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_180005e63:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (*param_1 != -0x7fffffd7) goto LAB_180005d47;
      iVar1 = param_1[0xe];
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_180005e63;
      param_2 = *(__uint64 **)(param_1 + 10);
    }
    FUN_1800061e4(param_2,(ulonglong *)param_4,param_5,iVar1);
  }
  return 1;
}


