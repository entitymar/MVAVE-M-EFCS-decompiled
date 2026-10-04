// FUN_180004440 @ 180004440

void FUN_180004440(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  char *pcVar3;
  
  if (*param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180004460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    return;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),*param_2,*param_3,*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    pcVar3 = (char *)(param_1 + 0x20);
    pbVar2 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                           "Unable to decode reply to method invocation on channel ");
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      pcVar3 = *(char **)pcVar3;
    }
    pbVar2 = FUN_180001a70(pbVar2,pcVar3,*(ulonglong *)(param_1 + 0x30));
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,FUN_180002140);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  }
  return;
}


