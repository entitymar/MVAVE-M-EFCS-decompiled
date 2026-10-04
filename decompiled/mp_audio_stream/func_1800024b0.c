// FUN_1800024b0 @ 1800024b0

undefined8 FUN_1800024b0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_18001e630(param_1,param_2,param_3,0);
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = uVar1;
  }
  uVar2 = 0xffffffef;
  if ((param_3 <= uVar1) && (uVar2 = 0xffffffef, uVar1 != 0)) {
    uVar2 = 0;
  }
  return uVar2;
}


