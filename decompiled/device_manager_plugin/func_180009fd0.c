// FUN_180009fd0 @ 180009fd0

/* WARNING: Removing unreachable block (ram,0x00018000a136) */

undefined8 *
FUN_180009fd0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_res8 [2];
  longlong *local_res18;
  undefined8 *local_res20;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong **local_d0;
  longlong local_c8 [8];
  char local_88;
  longlong local_78 [8];
  char local_38;
  
  local_f8 = flutter::ByteBufferStreamReader::vftable;
  local_e0 = 0;
  plVar5 = *(longlong **)(param_1 + 8);
  local_f0 = param_3;
  local_e8 = param_4;
  uVar2 = FUN_18000a780((longlong)&local_f8);
  (**(code **)(*plVar5 + 0x10))(plVar5,local_c8,uVar2 & 0xff,&local_f8);
  if (local_88 == '\x05') {
    plVar5 = *(longlong **)(param_1 + 8);
    if ((code *)local_f8[1] == FUN_18000a780) {
      uVar2 = FUN_18000a780((longlong)&local_f8);
      uVar1 = (undefined1)uVar2;
    }
    else {
      uVar1 = (*(code *)local_f8[1])();
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,local_78,uVar1,&local_f8);
    plVar3 = (longlong *)FUN_18000b2a8(0x48);
    plVar5 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      *(undefined1 *)(plVar3 + 8) = 0xff;
      local_res8[0] = plVar3;
      local_res18 = plVar3;
      FUN_180008df0((longlong)local_38 + 1);
      plVar5 = plVar3;
    }
    local_res18 = plVar5;
    FUN_1800041d0(local_78);
    puVar4 = (undefined8 *)FUN_18000b2a8(0x30);
    local_res20 = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      local_res18 = (longlong *)0x0;
      local_d0 = local_res8;
      *puVar4 = flutter::MethodCall<flutter::EncodableValue>::vftable;
      local_res8[0] = plVar5;
      FUN_1800023e0(puVar4 + 1,local_c8);
      plVar5 = local_res8[0];
      local_res8[0] = (longlong *)0x0;
      puVar4[5] = plVar5;
      plVar5 = (longlong *)0x0;
    }
    *param_2 = puVar4;
    if (plVar5 != (longlong *)0x0) {
      FUN_1800041d0(plVar5);
      free(plVar5);
    }
  }
  else {
    this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                         "Invalid method call; method name is not a string.");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_180002140);
    *param_2 = 0;
  }
  FUN_1800041d0(local_c8);
  return param_2;
}


