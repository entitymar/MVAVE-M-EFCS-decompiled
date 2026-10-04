// FUN_18000a3d0 @ 18000a3d0

undefined8 * FUN_18000a3d0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **local_60;
  undefined8 *local_58;
  longlong local_50 [8];
  undefined1 local_10;
  
  puVar3 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)FUN_18000b2a8(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  local_60 = flutter::ByteBufferStreamWriter::vftable;
  local_58 = puVar3;
  FUN_18000a910((longlong)&local_60,0);
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_3 == 0) {
    local_10 = 0;
    (**(code **)(*plVar1 + 8))(plVar1,local_50,&local_60);
    FUN_1800041d0(local_50);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_3,&local_60);
  }
  return param_2;
}


