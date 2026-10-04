// FUN_180007970 @ 180007970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180007970(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_180036c40 ^ (ulonglong)auStack_e8;
  iVar1 = 0;
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
  }
  *param_4 = iVar1;
  if (iVar1 == 0) {
    param_4[0x80] = 1;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (param_2 == 1) {
    local_68 = 0;
    iVar1 = (**(code **)(param_1 + 0x158))(iVar1,&local_c8,100);
    if (iVar1 != 0) {
      return 0xffffff34;
    }
    local_30 = local_78._4_4_;
    uStack_2c = (undefined4)uStack_70;
    uStack_28 = uStack_70._4_4_;
    uStack_24 = local_68;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x198))(iVar1,&local_c8,0x60);
    if (iVar1 != 0) {
      return 0xffffff34;
    }
    local_30 = (undefined4)local_78;
    uStack_2c = local_78._4_4_;
    uStack_28 = (undefined4)uStack_70;
    uStack_24 = uStack_70._4_4_;
  }
  local_38 = (undefined4)uStack_a0;
  local_34 = uStack_a0._4_2_;
  local_48 = uStack_b0;
  uStack_40 = local_a8;
  local_58 = uStack_c0;
  uStack_50 = local_b8;
  uVar2 = FUN_180008130(param_1,(longlong)&local_58,(longlong)param_4);
  return uVar2;
}


