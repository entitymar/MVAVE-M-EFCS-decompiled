// FUN_180017370 @ 180017370

ulonglong FUN_180017370(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = param_1 + 0x19d;
  if (plVar1 != (longlong *)0x0) {
    WaitForSingleObject((HANDLE)*plVar1,0xffffffff);
    uVar2 = FUN_1800173d0(param_1);
    SetEvent((HANDLE)*plVar1);
    return uVar2 & 0xffffffff;
  }
  uVar2 = FUN_1800173d0(param_1);
  return uVar2;
}


