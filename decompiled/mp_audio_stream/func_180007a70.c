// FUN_180007a70 @ 180007a70

undefined8 FUN_180007a70(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_4;
  if (((plVar1 == (longlong *)0x0) || ((*plVar1 == DAT_180036cd0 && (plVar1[1] == DAT_180036cd8))))
     && ((param_1 == (longlong *)0x0 ||
         ((*param_1 == DAT_180036cd0 && (param_1[1] == DAT_180036cd8)))))) {
    FUN_18001d5f0((char *)(param_4[1] + 0x100),0x100,param_2,0xffffffffffffffff);
    *(undefined4 *)(param_4[1] + 0x200) = 1;
    *(undefined4 *)(param_4 + 2) = 1;
    return 0;
  }
  if ((((param_1 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) && (*plVar1 == *param_1)) &&
     (plVar1[1] == param_1[1])) {
    FUN_18001d5f0((char *)(param_4[1] + 0x100),0x100,param_2,0xffffffffffffffff);
    *(undefined4 *)(param_4 + 2) = 1;
    return 0;
  }
  return 1;
}


