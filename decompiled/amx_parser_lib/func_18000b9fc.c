// FUN_18000b9fc @ 18000b9fc

void FUN_18000b9fc(ulonglong *param_1,undefined8 *param_2,longlong param_3,char *param_4,
                  longlong param_5,int param_6,int param_7,longlong *param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_18001145c(*param_1,param_6,0,local_18,param_4,param_5);
  uVar3 = param_3 - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == -1) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_180010ebc((char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2),uVar3,
                        local_18[1] + param_6,local_18,(int)uVar2,param_7,param_8);
  if (iVar1 == 0) {
    FUN_18000bad4(param_2,param_3,param_6,local_18,'\0',param_8);
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}


