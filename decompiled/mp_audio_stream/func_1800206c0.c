// FUN_1800206c0 @ 1800206c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800206c0(longlong param_1,undefined4 param_2,undefined8 *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_668 [32];
  undefined8 local_648 [194];
  ulonglong local_38;
  
  local_38 = DAT_180036c40 ^ (ulonglong)auStack_668;
  if ((param_1 == 0) || (param_4 == (void *)0x0)) {
    uVar5 = 0xfffffffe;
  }
  else {
    memset(local_648,0,0x608);
    if (param_3 != (undefined8 *)0x0) {
      lVar8 = 2;
      puVar6 = param_3;
      puVar7 = local_648;
      do {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar7 = *puVar6;
        puVar7[1] = uVar1;
        uVar1 = puVar6[4];
        uVar4 = puVar6[5];
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar2 = puVar6[6];
        uVar3 = puVar6[7];
        puVar7[4] = uVar1;
        puVar7[5] = uVar4;
        uVar1 = puVar6[8];
        uVar4 = puVar6[9];
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar2 = puVar6[10];
        uVar3 = puVar6[0xb];
        puVar7[8] = uVar1;
        puVar7[9] = uVar4;
        uVar1 = puVar6[0xc];
        uVar4 = puVar6[0xd];
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
        uVar2 = puVar6[0xe];
        uVar3 = puVar6[0xf];
        puVar7[0xc] = uVar1;
        puVar7[0xd] = uVar4;
        puVar7[0xe] = uVar2;
        puVar7[0xf] = uVar3;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 0x10;
        puVar7 = puVar7 + 0x10;
      } while (lVar8 != 0);
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar5 = 0xfffffffd;
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x128);
      if (puVar6 == (undefined8 *)0x0) {
        uVar5 = (**(code **)(param_1 + 0x18))(param_1,param_2,param_3,local_648);
      }
      else {
        WaitForSingleObject((HANDLE)*puVar6,0xffffffff);
        uVar5 = (**(code **)(param_1 + 0x18))(param_1,param_2,param_3,local_648);
        SetEvent((HANDLE)*puVar6);
      }
      memcpy(param_4,local_648,0x608);
    }
  }
  return uVar5;
}


