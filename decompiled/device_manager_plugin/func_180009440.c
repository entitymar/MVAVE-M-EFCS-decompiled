// FUN_180009440 @ 180009440

ulonglong FUN_180009440(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *in_RAX;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  ulonglong uVar4;
  
  while (param_1 != param_2) {
    if (param_3 == param_4) goto LAB_1800095a1;
    cVar3 = FUN_180007c90((longlong)(param_1 + 4),(longlong)(param_3 + 4));
    in_RAX = (longlong *)CONCAT71(extraout_var,cVar3);
    if (cVar3 != '\0') goto LAB_18000959d;
    cVar3 = FUN_180007c90((longlong)(param_3 + 4),(longlong)(param_1 + 4));
    if (cVar3 == '\0') {
      cVar3 = FUN_180007c90((longlong)(param_1 + 0xd),(longlong)(param_3 + 0xd));
      in_RAX = (longlong *)CONCAT71(extraout_var_00,cVar3);
      if (cVar3 != '\0') goto LAB_18000959d;
    }
    cVar3 = FUN_180007c90((longlong)(param_3 + 4),(longlong)(param_1 + 4));
    in_RAX = (longlong *)CONCAT71(extraout_var_01,cVar3);
    if (cVar3 != '\0') goto LAB_1800095a1;
    cVar3 = FUN_180007c90((longlong)(param_1 + 4),(longlong)(param_3 + 4));
    in_RAX = (longlong *)CONCAT71(extraout_var_02,cVar3);
    if (cVar3 == '\0') {
      cVar3 = FUN_180007c90((longlong)(param_3 + 0xd),(longlong)(param_1 + 0xd));
      in_RAX = (longlong *)CONCAT71(extraout_var_03,cVar3);
      if (cVar3 != '\0') goto LAB_1800095a1;
    }
    plVar1 = (longlong *)param_1[2];
    if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar1 + 0x19);
      plVar2 = (longlong *)*plVar1;
      while (param_1 = plVar1, cVar3 == '\0') {
        in_RAX = (longlong *)*plVar2;
        plVar1 = plVar2;
        plVar2 = in_RAX;
        cVar3 = *(char *)((longlong)in_RAX + 0x19);
      }
    }
    else {
      cVar3 = *(char *)(param_1[1] + 0x19);
      plVar2 = (longlong *)param_1[1];
      plVar1 = param_1;
      while ((in_RAX = plVar2, param_1 = in_RAX, cVar3 == '\0' && (plVar1 == (longlong *)in_RAX[2]))
            ) {
        cVar3 = *(char *)(in_RAX[1] + 0x19);
        plVar2 = (longlong *)in_RAX[1];
        plVar1 = in_RAX;
      }
    }
    plVar1 = (longlong *)param_3[2];
    if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar1 + 0x19);
      param_3 = plVar1;
      plVar1 = (longlong *)*plVar1;
      while (cVar3 == '\0') {
        in_RAX = (longlong *)*plVar1;
        param_3 = plVar1;
        plVar1 = in_RAX;
        cVar3 = *(char *)((longlong)in_RAX + 0x19);
      }
    }
    else {
      cVar3 = *(char *)(param_3[1] + 0x19);
      plVar2 = (longlong *)param_3[1];
      plVar1 = param_3;
      while ((param_3 = plVar2, in_RAX = param_3, cVar3 == '\0' &&
             (plVar1 == (longlong *)param_3[2]))) {
        cVar3 = *(char *)(param_3[1] + 0x19);
        plVar2 = (longlong *)param_3[1];
        plVar1 = param_3;
      }
    }
  }
  if (param_3 == param_4) {
LAB_1800095a1:
    uVar4 = (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  else {
LAB_18000959d:
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  return uVar4;
}


