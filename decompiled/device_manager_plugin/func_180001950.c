// FUN_180001950 @ 180001950

void FUN_180001950(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180001950(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    plVar3 = (longlong *)param_3[0xc];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_3 + 5);
      param_3[0xc] = 0;
    }
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


