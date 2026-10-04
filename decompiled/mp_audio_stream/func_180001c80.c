// FUN_180001c80 @ 180001c80

undefined8 FUN_180001c80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  local_28 = *param_2;
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_20 = param_2[1];
  uStack_30 = (undefined4)DAT_1800320e0;
  uStack_2c = (undefined4)((ulonglong)DAT_1800320e0 >> 0x20);
  local_38 = (ulonglong)*(uint *)(param_2 + 5);
  uStack_10 = DAT_1800320e0;
  local_18 = local_38;
  if (param_3 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  *param_3 = 0;
  uVar1 = FUN_180019930((int *)&local_28,(ulonglong *)&local_48);
  if ((int)uVar1 == 0) {
    *param_3 = CONCAT44(uStack_44,local_48);
  }
  return uVar1;
}


