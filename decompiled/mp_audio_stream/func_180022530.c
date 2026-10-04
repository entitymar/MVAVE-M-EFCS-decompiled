// FUN_180022530 @ 180022530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180022530(longlong *param_1,int param_2,char *param_3,ulonglong param_4,size_t *param_5)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined1 auStack_668 [32];
  undefined1 local_648 [256];
  char local_548 [1296];
  ulonglong local_38;
  
  local_38 = DAT_180036c40 ^ (ulonglong)auStack_668;
  if (param_5 != (size_t *)0x0) {
    *param_5 = 0;
  }
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    *param_3 = '\0';
  }
  memset(local_648,0,0x608);
  if (param_1 == (longlong *)0x0) {
    return -2;
  }
  pcVar1 = *(code **)(*param_1 + 0x60);
  if (pcVar1 == (code *)0x0) {
    if (param_2 == 1) {
      puVar4 = (undefined8 *)param_1[0x25];
    }
    else {
      puVar4 = (undefined8 *)param_1[0xd8];
    }
    iVar2 = FUN_1800206c0(*param_1,param_2,puVar4,local_648);
  }
  else {
    iVar2 = (*pcVar1)(param_1,param_2,local_648);
  }
  if (iVar2 == 0) {
    if (param_3 == (char *)0x0) {
      if (param_5 == (size_t *)0x0) {
        return 0;
      }
      param_3 = local_548;
    }
    else {
      FUN_18001d5f0(param_3,param_4,(longlong)local_548,0xffffffffffffffff);
      if (param_5 == (size_t *)0x0) {
        return 0;
      }
    }
    sVar3 = strlen(param_3);
    *param_5 = sVar3;
    return 0;
  }
  return iVar2;
}


