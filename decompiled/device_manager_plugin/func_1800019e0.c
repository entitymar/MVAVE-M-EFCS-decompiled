// FUN_1800019e0 @ 1800019e0

void FUN_1800019e0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800019e0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800041d0(param_3 + 0xd);
    FUN_1800041d0(param_3 + 4);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


