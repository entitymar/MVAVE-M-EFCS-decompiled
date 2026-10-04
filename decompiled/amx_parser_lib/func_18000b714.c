// FUN_18000b714 @ 18000b714

void FUN_18000b714(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_18001145c(*param_1,param_6 + 1,1,local_18,param_4,param_5);
  uVar3 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_180010ebc(param_2 + (ulonglong)(0 < param_6) + (ulonglong)(local_18[0] == 0x2d),uVar3,
                        param_6 + 1,local_18,(int)uVar2,param_9,param_10);
  if (iVar1 == 0) {
    FUN_18000b818(param_2,param_3,param_6,param_7,param_8,local_18,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}


