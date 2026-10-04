// FUN_1800029b0 @ 1800029b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800029b0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  basic_ostream<char,std::char_traits<char>_> *pbVar9;
  char *pcVar10;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 *local_100;
  longlong **local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_180015040 ^ (ulonglong)auStack_128;
  plVar8 = param_4;
  local_100 = param_2;
  local_e8 = param_3;
  local_58 = param_4;
  plVar3 = (longlong *)FUN_18000b2a8(0x18);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x40);
    local_f0 = plVar3;
    plVar4 = (longlong *)FUN_1800024f0((longlong)local_d8,param_4);
    *plVar3 = (longlong)flutter::EngineMethodResult<flutter::EncodableValue>::vftable;
    local_108 = plVar4;
    local_f8 = (longlong **)(plVar3 + 1);
    pplVar5 = (longlong **)FUN_18000b2a8(0x40);
    local_f8 = pplVar5;
    if (pplVar5 == (longlong **)0x0) {
      lVar7 = 0;
    }
    else {
      plVar6 = (longlong *)FUN_1800024f0((longlong)local_98,plVar4);
      lVar7 = FUN_1800058a0((longlong)pplVar5,plVar6,param_3,plVar8);
    }
    plVar3[1] = lVar7;
    plVar3[2] = lVar1;
    plVar8 = (longlong *)plVar4[7];
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != plVar4);
      plVar4[7] = 0;
    }
  }
  local_f0 = plVar3;
  plVar8 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
                     (*(longlong **)(param_1 + 0x40),&local_100,local_100,local_e8);
  puVar2 = (undefined8 *)*plVar8;
  *plVar8 = 0;
  local_e0 = puVar2;
  if (local_100 != (undefined8 *)0x0) {
    (**(code **)*local_100)(local_100,1);
  }
  if (puVar2 == (undefined8 *)0x0) {
    pcVar10 = (char *)(param_1 + 0x48);
    pbVar9 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                           "Unable to construct method call from message on channel ");
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      pcVar10 = *(char **)pcVar10;
    }
    pbVar9 = FUN_180001a70(pbVar9,pcVar10,*(ulonglong *)(param_1 + 0x58));
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,FUN_180002140);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)*plVar3)(plVar3,1);
  }
  else {
    local_f0 = (longlong *)0x0;
    local_f8 = &local_108;
    plVar8 = *(longlong **)(param_1 + 0x38);
    local_108 = plVar3;
    if (plVar8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,puVar2,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)*local_108)(local_108,1);
    }
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar8 = (longlong *)param_4[7];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != param_4);
    param_4[7] = 0;
  }
  return;
}


