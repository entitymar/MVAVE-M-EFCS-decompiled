// FUN_18000d290 @ 18000d290

float FUN_18000d290(float param_1,float param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_ffffffffffffffc4;
  
  if (param_3 == 2) {
    iVar1 = 4;
    uVar2 = 0x12;
  }
  else {
    if (param_3 != 3) {
      return param_2;
    }
    uVar2 = 0x11;
    iVar1 = 3;
  }
  FUN_180013190(&DAT_18001a9d0,0x14,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffc4,0x22),
                param_1,0.0,1);
  return param_2;
}


