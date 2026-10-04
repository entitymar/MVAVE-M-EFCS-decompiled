// FUN_1800068d0 @ 1800068d0

void FUN_1800068d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800068d0(param_1,param_2,(longlong *)param_3[2]);
    puVar2 = (undefined8 *)param_3[5];
    plVar3 = (longlong *)*param_3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    free(param_3);
    param_3 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  return;
}


