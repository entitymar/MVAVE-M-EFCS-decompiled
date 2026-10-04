// FUN_180009b00 @ 180009b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180009b00(longlong param_1,char *param_2,ulonglong param_3,longlong *param_4)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  ulonglong uVar7;
  void **ppvVar8;
  undefined8 uVar9;
  void *pvVar10;
  longlong *plVar11;
  undefined1 auStackY_1e8 [32];
  undefined **local_1b0;
  char *local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_188 [8];
  char local_148;
  longlong local_138 [8];
  char local_f8;
  longlong local_e8 [10];
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180015040 ^ (ulonglong)auStackY_1e8;
  local_1b0 = flutter::ByteBufferStreamReader::vftable;
  local_198 = 0;
  local_1a8 = param_2;
  local_1a0 = param_3;
  if (param_3 == 0) {
    pbVar5 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                           "Invalid read in StandardCodecByteStreamReader");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,FUN_180002140);
    uVar7 = (ulonglong)pbVar6 & 0xffffffffffffff00;
  }
  else {
    uVar7 = (ulonglong)(byte)*param_2;
    local_198 = 1;
  }
  if ((char)uVar7 == '\0') {
    plVar11 = *(longlong **)(param_1 + 8);
    if ((code *)local_1b0[1] == FUN_18000a780) {
      if (local_198 < local_1a0) {
        cVar4 = local_1a8[local_198];
        local_198 = local_198 + 1;
      }
      else {
        pbVar5 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                               "Invalid read in StandardCodecByteStreamReader");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,FUN_180002140);
        cVar4 = '\0';
      }
    }
    else {
      cVar4 = (*(code *)local_1b0[1])(&local_1b0);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,local_188,cVar4,&local_1b0);
    if (local_148 == '\0') {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = local_188;
    }
    (**(code **)(*param_4 + 8))(param_4,plVar11);
    plVar11 = local_188;
  }
  else {
    if (((uint)uVar7 & 0xff) != 1) {
      return uVar7 & 0xffffffffffffff00;
    }
    plVar11 = *(longlong **)(param_1 + 8);
    if ((code *)local_1b0[1] == FUN_18000a780) {
      if (local_198 < local_1a0) {
        cVar4 = local_1a8[local_198];
        local_198 = local_198 + 1;
      }
      else {
        pbVar5 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                               "Invalid read in StandardCodecByteStreamReader");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,FUN_180002140);
        cVar4 = '\0';
      }
    }
    else {
      cVar4 = (*(code *)local_1b0[1])(&local_1b0);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,local_138,cVar4,&local_1b0);
    plVar11 = *(longlong **)(param_1 + 8);
    if ((code *)local_1b0[1] == FUN_18000a780) {
      if (local_198 < local_1a0) {
        cVar4 = local_1a8[local_198];
        local_198 = local_198 + 1;
      }
      else {
        pbVar5 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                               "Invalid read in StandardCodecByteStreamReader");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,FUN_180002140);
        cVar4 = '\0';
      }
    }
    else {
      cVar4 = (*(code *)local_1b0[1])(&local_1b0);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,local_188,cVar4,&local_1b0);
    plVar11 = *(longlong **)(param_1 + 8);
    if ((code *)local_1b0[1] == FUN_18000a780) {
      if (local_198 < local_1a0) {
        local_198 = local_198 + 1;
      }
      else {
        pbVar5 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                               "Invalid read in StandardCodecByteStreamReader");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,FUN_180002140);
      }
    }
    else {
      (*(code *)local_1b0[1])(&local_1b0);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,local_e8);
    if (local_148 == '\0') {
      uStack_70 = 0;
      local_68 = _DAT_18000d680;
      uStack_60 = _UNK_18000d688;
      local_78 = (void *)0x0;
      ppvVar8 = &local_78;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      if (local_148 != '\x05') {
                    /* WARNING: Subroutine does not return */
        FUN_18000aca0();
      }
      ppvVar8 = (void **)FUN_1800023e0((undefined8 *)&local_58,local_188);
      bVar3 = false;
      bVar2 = true;
    }
    FUN_1800023e0((undefined8 *)&local_98,ppvVar8);
    if (bVar2) {
      if (0xf < uStack_40) {
        pvVar1 = (void *)CONCAT71(uStack_57,local_58);
        pvVar10 = pvVar1;
        if ((0xfff < uStack_40 + 1) &&
           (pvVar10 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar10);
      }
      local_48 = _DAT_18000d680;
      uStack_40 = _UNK_18000d688;
      local_58 = 0;
    }
    if ((bVar3) && (0xf < uStack_60)) {
      pvVar10 = local_78;
      if ((0xfff < uStack_60 + 1) &&
         (pvVar10 = *(void **)((longlong)local_78 + -8),
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar10);
    }
    if (local_f8 != '\x05') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    (**(code **)(*param_4 + 0x10))(param_4,local_138);
    if (0xf < uStack_80) {
      pvVar1 = (void *)CONCAT71(uStack_97,local_98);
      pvVar10 = pvVar1;
      if ((0xfff < uStack_80 + 1) &&
         (pvVar10 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar10);
    }
    local_88 = _DAT_18000d680;
    uStack_80 = _UNK_18000d688;
    local_98 = 0;
    thunk_FUN_1800041d0(local_e8);
    thunk_FUN_1800041d0(local_188);
    plVar11 = local_138;
  }
  uVar9 = thunk_FUN_1800041d0(plVar11);
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}


