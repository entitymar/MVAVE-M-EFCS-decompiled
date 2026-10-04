// FUN_1800068a0 @ 1800068a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800068a0(longlong param_1,longlong *param_2,int param_3,undefined *param_4,
                       undefined8 param_5)

{
  int iVar1;
  short *psVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong **pplVar7;
  undefined1 auStackY_6a8 [32];
  uint local_678;
  longlong *local_670;
  longlong *local_668 [2];
  longlong local_658 [194];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_6a8;
  uVar3 = 0;
  local_670 = (longlong *)0x0;
  psVar2 = (short *)FUN_180006b10(param_1,param_2,param_3);
  uVar5 = uVar3;
  if (param_3 != 1) {
    uVar5 = (ulonglong)(param_3 == 2);
  }
  pplVar7 = &local_670;
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,uVar5,1);
  uVar5 = uVar3;
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_670 + 0x18))();
    if (iVar1 < 0) {
      if (param_1 != 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x70);
      }
      FUN_180025970(uVar3,1,"[WASAPI] Failed to get device count.\n",pplVar7);
      uVar3 = FUN_18001cc60(iVar1);
      uVar5 = uVar3 & 0xffffffff;
    }
    else if (local_678 != 0) {
      do {
        memset(local_658,0,0x608);
        iVar1 = (**(code **)(*local_670 + 0x20))(local_670,uVar3,local_668);
        if (-1 < iVar1) {
          uVar4 = FUN_180007f60(param_1,local_668[0],psVar2,1,local_658);
          uVar5 = uVar4 & 0xffffffff;
          (**(code **)(*local_668[0] + 0x10))();
          if (((int)uVar4 == 0) &&
             (iVar1 = (*(code *)param_4)(param_1,param_3,local_658,param_5), iVar1 == 0)) break;
        }
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
      } while (uVar6 < local_678);
    }
  }
  if (psVar2 != (short *)0x0) {
    (**(code **)(param_1 + 0x278))(psVar2);
  }
  if (local_670 != (longlong *)0x0) {
    (**(code **)(*local_670 + 0x10))();
  }
  return uVar5;
}


