// FUN_1800071d0 @ 1800071d0

void FUN_1800071d0(longlong *param_1,longlong **param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *local_res10;
  undefined8 local_28 [4];
  
  switch(*(undefined1 *)(param_2 + 8)) {
  default:
    iVar6 = 0;
    break;
  case 1:
    iVar6 = 2 - (uint)(*(char *)param_2 != '\0');
    break;
  case 2:
    iVar6 = 3;
    break;
  case 3:
    iVar6 = 4;
    break;
  case 4:
    iVar6 = 6;
    break;
  case 5:
    iVar6 = 7;
    break;
  case 6:
    iVar6 = 8;
    break;
  case 7:
    iVar6 = 9;
    break;
  case 8:
    iVar6 = 10;
    break;
  case 9:
    iVar6 = 0xb;
    break;
  case 10:
    iVar6 = 0xc;
    break;
  case 0xb:
    iVar6 = 0xd;
    break;
  case 0xd:
    iVar6 = 0xe;
  }
  (**(code **)(*param_3 + 8))(param_3,iVar6);
  cVar1 = *(char *)(param_2 + 8);
  switch(cVar1) {
  case '\x02':
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,*(undefined4 *)param_2);
    lVar3 = *param_3;
    plVar5 = (longlong *)0x4;
    param_2 = &local_res10;
    goto LAB_1800072a3;
  case '\x03':
    if (cVar1 != '\x03') {
LAB_180007686:
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    local_res10 = *param_2;
    lVar3 = *param_3;
    plVar5 = (longlong *)0x8;
    param_2 = &local_res10;
    goto LAB_1800072a3;
  case '\x04':
    (**(code **)(*param_3 + 0x18))(param_3,8);
    if (*(char *)(param_2 + 8) != '\x04') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    local_res10 = *param_2;
    lVar3 = *param_3;
    plVar5 = (longlong *)0x8;
    param_2 = &local_res10;
    goto LAB_1800072a3;
  case '\x05':
    if (cVar1 != '\x05') goto LAB_180007686;
    plVar5 = param_2[2];
    FUN_18000aa30(param_1,(ulonglong)plVar5,param_3);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    lVar3 = *param_3;
    if ((longlong *)0xf < param_2[3]) {
      param_2 = (longlong **)*param_2;
    }
LAB_1800072a3:
    (**(code **)(lVar3 + 0x10))(param_3,param_2,plVar5);
    break;
  case '\x06':
    if (cVar1 != '\x06') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    plVar5 = FUN_1800096a0(local_28,(longlong *)param_2);
    uVar8 = plVar5[1] - *plVar5;
    local_res10 = plVar5;
    FUN_18000aa30(param_1,uVar8,param_3);
    if (uVar8 != 0) {
      (**(code **)(*param_3 + 0x10))(param_3,*plVar5,uVar8);
    }
    FUN_180004eb0(plVar5);
    break;
  case '\a':
    if (cVar1 != '\a') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    plVar5 = FUN_180009740(local_28,(longlong *)param_2);
    uVar8 = plVar5[1] - *plVar5 >> 2;
    local_res10 = plVar5;
    FUN_18000aa30(param_1,uVar8,param_3);
    if (uVar8 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,4);
      (**(code **)(*param_3 + 0x10))(param_3,*plVar5,uVar8 * 4);
    }
    FUN_180004f20(plVar5);
    break;
  case '\b':
    if (cVar1 != '\b') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    plVar5 = FUN_1800097f0(local_28,(longlong *)param_2);
    uVar8 = plVar5[1] - *plVar5 >> 3;
    local_res10 = plVar5;
    FUN_18000aa30(param_1,uVar8,param_3);
    if (uVar8 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,8);
      (**(code **)(*param_3 + 0x10))(param_3,*plVar5,uVar8 * 8);
    }
    FUN_180004f90(plVar5);
    break;
  case '\t':
    if (cVar1 != '\t') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    plVar5 = FUN_1800097f0(local_28,(longlong *)param_2);
    uVar8 = plVar5[1] - *plVar5 >> 3;
    local_res10 = plVar5;
    FUN_18000aa30(param_1,uVar8,param_3);
    if (uVar8 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,8);
      (**(code **)(*param_3 + 0x10))(param_3,*plVar5,uVar8 * 8);
    }
    FUN_180004f90(plVar5);
    break;
  case '\n':
    if (cVar1 != '\n') goto LAB_180007686;
    FUN_18000aa30(param_1,((longlong)param_2[1] - (longlong)*param_2) / 0x48,param_3);
    plVar5 = param_2[1];
    for (plVar7 = *param_2; plVar7 != plVar5; plVar7 = plVar7 + 9) {
      (**(code **)(*param_1 + 8))(param_1,plVar7,param_3);
    }
    break;
  case '\v':
    if (cVar1 != '\v') goto LAB_180007686;
    FUN_18000aa30(param_1,(ulonglong)param_2[1],param_3);
    plVar5 = (longlong *)**param_2;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    while (cVar1 == '\0') {
      (**(code **)(*param_1 + 8))(param_1,plVar5 + 4,param_3);
      (**(code **)(*param_1 + 8))(param_1,plVar5 + 0xd,param_3);
      plVar7 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar5 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar5 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar2 = (longlong *)plVar5[1];
        plVar7 = plVar5;
        while ((plVar5 = plVar2, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar2 = (longlong *)plVar5[1];
          plVar7 = plVar5;
        }
      }
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    break;
  case '\f':
    pbVar4 = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                           "Unhandled custom type in StandardCodecSerializer::WriteValue. ");
    pbVar4 = FUN_1800010a0(pbVar4,"Custom types require codec extensions.");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,FUN_180002140);
    break;
  case '\r':
    if (cVar1 != '\r') {
                    /* WARNING: Subroutine does not return */
      FUN_18000aca0();
    }
    plVar5 = FUN_180009740(local_28,(longlong *)param_2);
    uVar8 = plVar5[1] - *plVar5 >> 2;
    local_res10 = plVar5;
    FUN_18000aa30(param_1,uVar8,param_3);
    if (uVar8 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,4);
      (**(code **)(*param_3 + 0x10))(param_3,*plVar5,uVar8 * 4);
    }
    FUN_180004f20(plVar5);
  }
  return;
}


