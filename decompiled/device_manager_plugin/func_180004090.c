// FUN_180004090 @ 180004090

void FUN_180004090(void *param_1,char param_2)

{
  longlong *plVar1;
  undefined7 in_register_00000011;
  
  FUN_1800050d0((longlong *)((longlong)param_1 + 0x50));
  plVar1 = *(longlong **)((longlong)param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71(in_register_00000011,plVar1 != (longlong *)((longlong)param_1 + 8)));
    *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  }
  if (param_2 != '\0') {
    free(param_1);
  }
  return;
}


