// FUN_180019840 @ 180019840

undefined8 FUN_180019840(uint param_1,char *param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0x16;
  }
  if (param_4 - 2 < 0x23) {
    if ((-1 < (int)param_1) || (iVar6 = -1, param_4 != 10)) {
      iVar6 = 1;
    }
    uVar2 = -param_1;
    if ((int)-param_1 < 0) {
      uVar2 = param_1;
    }
    pcVar5 = param_2;
    uVar7 = (ulonglong)uVar2;
    do {
      lVar8 = param_3;
      pcVar4 = pcVar5;
      uVar1 = uVar7 / param_4;
      uVar7 = uVar7 % (ulonglong)param_4;
      cVar3 = 'W';
      if ((int)uVar7 < 10) {
        cVar3 = '0';
      }
      *pcVar4 = cVar3 + (char)uVar7;
      pcVar5 = pcVar4 + 1;
      param_3 = lVar8 + -1;
    } while ((param_3 != 0) && (uVar7 = uVar1, (int)uVar1 != 0));
    if (param_3 != 0) {
      if (iVar6 < 0) {
        *pcVar5 = '-';
        pcVar5 = pcVar4 + 2;
        if (lVar8 == 2) goto LAB_180019913;
      }
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + -1;
      if (param_2 < pcVar5) {
        do {
          cVar3 = *param_2;
          *param_2 = *pcVar5;
          param_2 = param_2 + 1;
          *pcVar5 = cVar3;
          pcVar5 = pcVar5 + -1;
        } while (param_2 < pcVar5);
      }
      return 0;
    }
  }
LAB_180019913:
  *param_2 = '\0';
  return 0x16;
}


