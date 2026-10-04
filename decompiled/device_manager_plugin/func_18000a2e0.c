// FUN_18000a2e0 @ 18000a2e0

undefined8 * FUN_18000a2e0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **local_70;
  undefined8 *local_68;
  longlong local_60 [8];
  undefined1 local_20;
  
  puVar4 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)FUN_18000b2a8(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar4 = puVar3;
  }
  *param_2 = puVar4;
  local_70 = flutter::ByteBufferStreamWriter::vftable;
  plVar1 = *(longlong **)(param_1 + 8);
  pcVar2 = *(code **)(*plVar1 + 8);
  local_68 = puVar4;
  FUN_1800023e0(local_60,(undefined8 *)(param_3 + 8));
  local_20 = 5;
  (*pcVar2)(plVar1,local_60,&local_70);
  FUN_1800041d0(local_60);
  plVar1 = *(longlong **)(param_1 + 8);
  if (*(longlong *)(param_3 + 0x28) == 0) {
    local_20 = 0;
    (**(code **)(*plVar1 + 8))(plVar1,local_60,&local_70);
    FUN_1800041d0(local_60);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,*(longlong *)(param_3 + 0x28),&local_70);
  }
  return param_2;
}


