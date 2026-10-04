// FUN_180005960 @ 180005960

void FUN_180005960(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 9) {
    FUN_1800041d0(plVar2);
  }
  return;
}


