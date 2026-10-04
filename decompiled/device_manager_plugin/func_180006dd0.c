// FUN_180006dd0 @ 180006dd0

void FUN_180006dd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_180006950(param_1 + 0x20,param_1 + 0x20,*(longlong **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


