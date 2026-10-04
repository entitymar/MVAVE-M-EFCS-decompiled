// FUN_180006530 @ 180006530

longlong * FUN_180006530(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  if ((param_2 == (longlong *)*plVar2) && (*(char *)((longlong)param_3 + 0x19) != '\0')) {
    FUN_180005540(param_1,param_1,(longlong *)plVar2[1]);
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    plVar2[2] = (longlong)plVar2;
    param_1[1] = 0;
  }
  else {
    while (param_2 != param_3) {
      plVar2 = (longlong *)param_2[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar5 = plVar2;
        plVar4 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar5 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        plVar2 = (longlong *)*plVar2;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        while (cVar1 == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar4 = (longlong *)param_2[1];
        plVar2 = param_2;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar2 = plVar5;
        }
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar4 = (longlong *)param_2[1];
        plVar2 = param_2;
        while ((plVar3 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar3[2]))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar4 = (longlong *)plVar3[1];
          plVar2 = plVar3;
        }
      }
      plVar4 = FUN_180004700(param_1,param_2);
      plVar2 = (longlong *)plVar4[0xf];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar4 + 8);
        plVar4[0xf] = 0;
      }
      FUN_1800050d0(plVar4 + 4);
      free(plVar4);
      param_2 = plVar5;
    }
  }
  return param_3;
}


