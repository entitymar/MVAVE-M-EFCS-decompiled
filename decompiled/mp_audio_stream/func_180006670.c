// FUN_180006670 @ 180006670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180006670(longlong param_1,undefined *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_728 [32];
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 local_6a8;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined4 local_678;
  undefined2 local_674;
  undefined8 local_670;
  undefined8 uStack_668;
  uint local_658;
  undefined1 local_654 [508];
  undefined4 local_458;
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_728;
  uVar1 = (**(code **)(param_1 + 0x150))();
  uVar5 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      local_6a8 = 0;
      local_708 = 0;
      uStack_700 = 0;
      local_6f8 = 0;
      uStack_6f0 = 0;
      local_6e8 = 0;
      uStack_6e0 = 0;
      local_6d8 = 0;
      uStack_6d0 = 0;
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6b8 = 0;
      uStack_6b4 = 0;
      uStack_6b0 = 0;
      uStack_6ac = 0;
      iVar2 = (**(code **)(param_1 + 0x158))(uVar4,&local_708,100);
      if (iVar2 == 0) {
        memset(local_654,0,0x604);
        if (uVar4 == 0) {
          local_458 = 1;
        }
        local_698 = uStack_700;
        uStack_690 = local_6f8;
        local_678 = (undefined4)uStack_6e0;
        local_670 = CONCAT44(uStack_6b0,uStack_6b4);
        uStack_668 = CONCAT44(local_6a8,uStack_6ac);
        local_674 = uStack_6e0._4_2_;
        local_688 = uStack_6f0;
        uStack_680 = local_6e8;
        local_658 = uVar4;
        uVar3 = FUN_180008130(param_1,(longlong)&local_698,(longlong)&local_658);
        if (((int)uVar3 == 0) &&
           (iVar2 = (*(code *)param_2)(param_1,1,&local_658,param_3), iVar2 == 0)) {
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar1 = (**(code **)(param_1 + 400))();
  if (uVar1 != 0) {
    do {
      local_708 = 0;
      uStack_700 = 0;
      local_6f8 = 0;
      uStack_6f0 = 0;
      local_6e8 = 0;
      uStack_6e0 = 0;
      local_6d8 = 0;
      uStack_6d0 = 0;
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6b8 = 0;
      uStack_6b4 = 0;
      uStack_6b0 = 0;
      uStack_6ac = 0;
      iVar2 = (**(code **)(param_1 + 0x198))(uVar5,&local_708,0x60);
      if (iVar2 == 0) {
        memset(local_654,0,0x604);
        if (uVar5 == 0) {
          local_458 = 1;
        }
        local_678 = (undefined4)uStack_6e0;
        local_698 = uStack_700;
        uStack_690 = local_6f8;
        local_674 = uStack_6e0._4_2_;
        local_670 = CONCAT44(uStack_6b4,local_6b8);
        uStack_668 = CONCAT44(uStack_6ac,uStack_6b0);
        local_688 = uStack_6f0;
        uStack_680 = local_6e8;
        local_658 = uVar5;
        uVar3 = FUN_180008130(param_1,(longlong)&local_698,(longlong)&local_658);
        if (((int)uVar3 == 0) &&
           (iVar2 = (*(code *)param_2)(param_1,2,&local_658,param_3), iVar2 == 0)) {
          return 0;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return 0;
}


