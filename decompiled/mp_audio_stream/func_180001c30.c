// FUN_180001c30 @ 180001c30

undefined8 FUN_180001c30(longlong param_1,uint param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  
  FUN_180018ec0(param_1);
  uVar1 = FUN_180018780(param_1,(ulonglong)param_2);
  if (0xffffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  *param_3 = (int)uVar1;
  return 0;
}


