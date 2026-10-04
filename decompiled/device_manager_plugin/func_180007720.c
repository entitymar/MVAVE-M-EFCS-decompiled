// FUN_180007720 @ 180007720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong ******
FUN_180007720(longlong *param_1,ulonglong ******param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  ulonglong ********ppppppppuVar2;
  ulonglong *********pppppppppuVar3;
  ulonglong ********_Memory;
  undefined1 uVar4;
  uint uVar5;
  undefined4 extraout_var;
  ulonglong *****pppppuVar6;
  undefined4 extraout_var_00;
  ulonglong uVar7;
  undefined4 extraout_var_01;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *this_00;
  ulonglong **********ppppppppppuVar8;
  ulonglong *****pppppuVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_158 [32];
  ulonglong *********local_138 [2];
  ulonglong *********local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  longlong local_108 [8];
  char local_c8;
  longlong local_b8 [10];
  ulonglong *********local_68;
  ulonglong *********pppppppppuStack_60;
  ulonglong *********local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180015040 ^ (ulonglong)auStack_158;
  uVar12 = (ulonglong)param_3 & 0xff;
  local_138[0] = (ulonglong *********)param_2;
  if ((uint)uVar12 < 0xf) {
    switch(uVar12) {
    case 0:
      goto switchD_180007774_caseD_0;
    case 1:
      *(undefined1 *)param_2 = 1;
      *(undefined1 *)(param_2 + 8) = 1;
      break;
    case 2:
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)(param_2 + 8) = 1;
      break;
    case 3:
      local_138[0] = (ulonglong *********)((ulonglong)param_2 & 0xffffffff00000000);
      (**(code **)(*param_4 + 0x10))(param_4,local_138,4);
      *(undefined4 *)param_2 = local_138[0]._0_4_;
      *(undefined1 *)(param_2 + 8) = 2;
      break;
    case 4:
      local_138[0] = (ulonglong *********)0x0;
      (**(code **)(*param_4 + 0x10))(param_4,local_138,8);
      *param_2 = (ulonglong *****)local_138[0];
      *(undefined1 *)(param_2 + 8) = 3;
      break;
    default:
      uVar5 = FUN_18000a840(param_1,param_4);
      uVar12 = CONCAT44(extraout_var,uVar5);
      pppppppppuStack_60 = (ulonglong *********)0x0;
      local_58 = (ulonglong *********)0x0;
      local_50 = 0xf;
      local_68 = (ulonglong *********)0x0;
      if (uVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_68._0_1_ = (char)uVar5;
        local_58 = (ulonglong *********)0x0;
      }
      else {
        FUN_18000acc0(&local_68,uVar12,'\0');
      }
      ppppppppppuVar8 = &local_68;
      if (0xf < local_50) {
        ppppppppppuVar8 = (ulonglong **********)local_68;
      }
      (**(code **)(*param_4 + 0x10))(param_4,ppppppppppuVar8,uVar12);
      pppppppppuVar3 = local_58;
      *param_2 = (ulonglong *****)0x0;
      param_2[1] = (ulonglong *****)0x0;
      param_2[2] = (ulonglong *****)0x0;
      param_2[3] = (ulonglong *****)0x0;
      ppppppppppuVar8 = &local_68;
      if (0xf < local_50) {
        ppppppppppuVar8 = (ulonglong **********)local_68;
      }
      if ((ulonglong *****)0x7fffffffffffffff < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_180005150();
      }
      if (local_58 < (ulonglong *****)0x10) {
        param_2[2] = (ulonglong *****)local_58;
        param_2[3] = (ulonglong *****)0xf;
        pppppppppuVar3 = ppppppppppuVar8[1];
        *param_2 = (ulonglong *****)*ppppppppppuVar8;
        param_2[1] = (ulonglong *****)pppppppppuVar3;
      }
      else {
        pppppuVar6 = (ulonglong *****)((ulonglong)local_58 | 0xf);
        pppppuVar9 = (ulonglong *****)0x7fffffffffffffff;
        if ((pppppuVar6 < (ulonglong *****)0x8000000000000000) &&
           (pppppuVar9 = pppppuVar6, pppppuVar6 < (ulonglong *****)0x16)) {
          pppppuVar9 = (ulonglong *****)0x16;
        }
        pppppuVar6 = (ulonglong *****)FUN_1800015d0((longlong)pppppuVar9 + 1);
        *param_2 = pppppuVar6;
        param_2[2] = (ulonglong *****)pppppppppuVar3;
        param_2[3] = pppppuVar9;
        memcpy(pppppuVar6,ppppppppppuVar8,(longlong)pppppppppuVar3 + 1);
      }
      *(undefined1 *)(param_2 + 8) = 5;
      if (0xf < local_50) {
        FUN_18000ac40(&local_68,local_68,local_50);
      }
      break;
    case 6:
      (**(code **)(*param_4 + 0x18))
                (param_4,CONCAT71((int7)((ulonglong)
                                         (&switchD_180007774::switchdataD_180007c1c)[uVar12] +
                                         0x180000000 >> 8),8));
      local_138[0] = (ulonglong *********)0x0;
      (**(code **)(*param_4 + 0x10))(param_4,local_138,8);
      *param_2 = (ulonglong *****)local_138[0];
      *(undefined1 *)(param_2 + 8) = 4;
      break;
    case 8:
      FUN_180007ce0(param_1,param_2,param_4);
      break;
    case 9:
      FUN_180007f10(param_1,param_2,param_4);
      break;
    case 10:
      FUN_180008330(param_1,param_2,param_4);
      break;
    case 0xb:
      FUN_1800081d0(param_1,param_2,param_4);
      break;
    case 0xc:
      uVar5 = FUN_18000a840(param_1,param_4);
      uVar12 = CONCAT44(extraout_var_00,uVar5);
      local_68 = (ulonglong *********)0x0;
      pppppppppuStack_60 = (ulonglong *********)0x0;
      local_58 = (ulonglong *********)0x0;
      if (uVar12 != 0) {
        if (0x38e38e38e38e38e < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180005170();
        }
        uVar7 = FUN_1800015d0(uVar12 * 0x48);
        local_128 = (ulonglong *********)&local_68;
        uStack_120 = uVar7;
        local_118 = uVar12;
        FUN_180008d20((longlong)local_68,(longlong)pppppppppuStack_60,uVar7);
        FUN_18000ab50((longlong *)&local_68,uVar7,0,uVar12);
      }
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        uVar4 = (**(code **)(*param_4 + 8))(param_4);
        (**(code **)(*param_1 + 0x10))(param_1,local_108,uVar4,param_4);
        if (pppppppppuStack_60 == local_58) {
          FUN_180008670((longlong *)&local_68,(longlong)pppppppppuStack_60,(longlong)local_108);
        }
        else {
          local_128 = pppppppppuStack_60;
          *(undefined1 *)(pppppppppuStack_60 + 8) = 0xff;
          local_138[0] = pppppppppuStack_60;
          FUN_180008df0((longlong)local_c8 + 1);
          pppppppppuStack_60 = pppppppppuStack_60 + 9;
        }
        FUN_1800041d0(local_108);
      }
      FUN_180005760((ulonglong *)param_2,(longlong *)&local_68);
      *(undefined1 *)(param_2 + 8) = 10;
      FUN_180005000((longlong *)&local_68);
      break;
    case 0xd:
      plVar11 = param_4;
      uVar5 = FUN_18000a840(param_1,param_4);
      local_128 = (ulonglong *********)0x0;
      uStack_120 = 0;
      local_128 = (ulonglong *********)FUN_18000b2a8(0xb0);
      *local_128 = (ulonglong ********)local_128;
      local_128[1] = (ulonglong ********)local_128;
      local_128[2] = (ulonglong ********)local_128;
      *(undefined2 *)(local_128 + 3) = 0x101;
      for (lVar10 = CONCAT44(extraout_var_01,uVar5); lVar10 != 0; lVar10 = lVar10 + -1) {
        uVar4 = (**(code **)(*param_4 + 8))(param_4);
        (**(code **)(*param_1 + 0x10))(param_1,local_b8,uVar4,param_4);
        uVar4 = (**(code **)(*param_4 + 8))(param_4);
        (**(code **)(*param_1 + 0x10))(param_1,local_108,uVar4,param_4);
        plVar11 = local_108;
        param_3 = local_b8;
        FUN_180008490((longlong *)&local_128,local_138,(longlong)param_3,(longlong)plVar11);
        FUN_1800041d0(local_108);
        FUN_1800041d0(local_b8);
      }
      FUN_1800095d0((longlong *)param_2,(longlong *)&local_128,param_3,plVar11);
      *(undefined1 *)(param_2 + 8) = 0xb;
      cVar1 = *(char *)((longlong)local_128[1] + 0x19);
      _Memory = local_128[1];
      while (cVar1 == '\0') {
        FUN_1800019e0(&local_128,&local_128,(longlong *)_Memory[2]);
        ppppppppuVar2 = (ulonglong ********)*_Memory;
        FUN_1800041d0((longlong *)(_Memory + 0xd));
        FUN_1800041d0((longlong *)(_Memory + 4));
        free(_Memory);
        _Memory = ppppppppuVar2;
        cVar1 = *(char *)((longlong)ppppppppuVar2 + 0x19);
      }
      free(local_128);
      break;
    case 0xe:
      FUN_180008070(param_1,param_2,param_4);
    }
  }
  else {
    this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                         "Unknown type in StandardCodecSerializer::ReadValueOfType: ");
    this_00 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,(uint)uVar12);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)this_00,FUN_180002140);
switchD_180007774_caseD_0:
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return param_2;
}


