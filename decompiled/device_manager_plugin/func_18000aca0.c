// FUN_18000aca0 @ 18000aca0

void FUN_18000aca0(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  plVar2 = FUN_180009940(&local_18);
  FUN_180004d90(plVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


