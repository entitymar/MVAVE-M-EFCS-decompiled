// FUN_180010060 @ 180010060

ulonglong FUN_180010060(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint local_res10 [6];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  uint *puStack_10;
  
  local_38 = 2;
  local_28 = (ulonglong)param_2;
  uStack_30 = 0;
  puStack_10 = local_res10;
  uStack_20 = param_3;
  local_18 = param_4;
  uVar1 = FUN_18000a4d0(param_1,&local_38);
  uVar2 = (ulonglong)local_res10[0];
  if ((int)uVar1 != 0) {
    uVar2 = uVar1 & 0xffffffff;
  }
  return uVar2;
}


