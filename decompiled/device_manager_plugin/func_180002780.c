// FUN_180002780 @ 180002780

void FUN_180002780(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_1800019e0(plVar1,*param_1,*(longlong **)(*plVar1 + 8));
    free((void *)*plVar1);
    return;
  }
  return;
}


