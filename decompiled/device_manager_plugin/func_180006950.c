// FUN_180006950 @ 180006950

void FUN_180006950(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006950(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    puVar3 = (undefined8 *)param_3[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


