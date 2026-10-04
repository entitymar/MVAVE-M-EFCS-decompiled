// FUN_18000a190 @ 18000a190

undefined8 *
FUN_18000a190(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **local_80;
  undefined8 *local_78;
  longlong local_70 [8];
  undefined1 local_30;
  
  puVar4 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)FUN_18000b2a8(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar4 = puVar3;
  }
  *param_2 = puVar4;
  local_80 = flutter::ByteBufferStreamWriter::vftable;
  local_78 = puVar4;
  FUN_18000a910((longlong)&local_80,1);
  plVar1 = *(longlong **)(param_1 + 8);
  pcVar2 = *(code **)(*plVar1 + 8);
  FUN_1800023e0(local_70,param_3);
  local_30 = 5;
  (*pcVar2)(plVar1,local_70,&local_80);
  FUN_1800041d0(local_70);
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_4[2] == 0) {
    local_30 = 0;
    (**(code **)(*plVar1 + 8))(plVar1,local_70,&local_80);
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 8);
    FUN_1800023e0(local_70,param_4);
    local_30 = 5;
    (*pcVar2)(plVar1,local_70,&local_80);
  }
  FUN_1800041d0(local_70);
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_5 == 0) {
    local_30 = 0;
    (**(code **)(*plVar1 + 8))(plVar1,local_70,&local_80);
    FUN_1800041d0(local_70);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_5,&local_80);
  }
  return param_2;
}


