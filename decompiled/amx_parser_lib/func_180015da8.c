// FUN_180015da8 @ 180015da8

void FUN_180015da8(int *param_1,__uint64 param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_180015d08(param_2,(longlong)param_4);
  if ((*(uint *)(lVar1 + 4) & ((param_1[1] & 0x66U) != 0) + 1) != 0) {
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}


