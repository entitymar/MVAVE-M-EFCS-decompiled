// FUN_180005540 @ 180005540

void FUN_180005540(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180005540(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    plVar3 = (longlong *)param_3[0xf];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_3 + 8);
      param_3[0xf] = 0;
    }
    FUN_1800050d0(param_3 + 4);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


