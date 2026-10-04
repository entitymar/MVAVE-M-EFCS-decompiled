// FUN_180004e70 @ 180004e70

void FUN_180004e70(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 local_18 [3];
  
  plVar2 = FUN_1800025b0(local_18);
  FUN_180004d90(plVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


