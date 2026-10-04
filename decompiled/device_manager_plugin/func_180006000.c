// FUN_180006000 @ 180006000

void FUN_180006000(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  longlong local_res8 [2];
  longlong local_res18 [2];
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 == (longlong *)0x0) {
    pbVar2 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                           "Error: Only one of Success, Error, or NotImplemented can be called,");
    pbVar2 = FUN_1800010a0(pbVar2," and it can be called exactly once. Ignoring duplicate result.");
                    /* WARNING: Could not recover jumptable at 0x000180006043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,FUN_180002140);
    return;
  }
  if (((param_2 == (longlong *)0x0) || (local_res18[0] = *param_2, local_res18[0] == param_2[1])) &&
     (local_res18[0] = 0, param_2 == (longlong *)0x0)) {
    local_res8[0] = 0;
  }
  else {
    local_res8[0] = param_2[1] - *param_2;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,local_res18,local_res8);
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}


