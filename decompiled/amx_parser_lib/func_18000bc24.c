// FUN_18000bc24 @ 18000bc24

void FUN_18000bc24(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar3 = FUN_18001145c(*param_1,param_6,0,local_18,param_4,param_5);
  uVar4 = param_3 - (local_18[0] == 0x2d);
  iVar6 = local_18[1] + -1;
  pcVar1 = (char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2);
  if (param_3 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  iVar2 = FUN_180010ebc(pcVar1,uVar4,param_6,local_18,(int)uVar3,param_9,param_10);
  if (iVar2 == 0) {
    iVar2 = local_18[1] + -1;
    if ((iVar2 < -4) || (param_6 <= iVar2)) {
      FUN_18000b818((undefined1 *)param_2,param_3,param_6,param_7,param_8,local_18,1,param_10);
    }
    else {
      if (iVar6 < iVar2) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_18000bad4(param_2,param_3,param_6,local_18,'\x01',param_10);
    }
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}


