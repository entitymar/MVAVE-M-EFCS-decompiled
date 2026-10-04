// FUN_180015b50 @ 180015b50

undefined8
FUN_180015b50(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffffc4;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_180013050(param_5,param_4,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffc4,uVar3),
                param_1,0,1);
  return param_2;
}


