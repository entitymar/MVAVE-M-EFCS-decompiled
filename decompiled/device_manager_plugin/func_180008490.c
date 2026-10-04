// FUN_180008490 @ 180008490

undefined8 * FUN_180008490(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar4 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar4[1];
  uStack_40 = 0;
  cVar3 = *(char *)((longlong)plVar7 + 0x19);
  local_48 = plVar7;
  while (plVar2 = plVar7, cVar3 == '\0') {
    uVar6 = (longlong)(char)plVar2[0xc] + 1;
    uVar5 = (longlong)*(char *)(param_3 + 0x40) + 1;
    if ((uVar6 < uVar5) || ((uVar6 == uVar5 && (cVar3 = FUN_1800090f0(uVar5), cVar3 != '\0')))) {
      uStack_40 = 0;
      plVar7 = plVar2 + 2;
    }
    else {
      uStack_40 = 1;
      plVar7 = plVar2;
      plVar4 = plVar2;
    }
    cVar3 = *(char *)(*plVar7 + 0x19);
    plVar7 = (longlong *)*plVar7;
    local_48 = plVar2;
  }
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    uVar6 = (longlong)*(char *)(param_3 + 0x40) + 1;
    uVar5 = (longlong)(char)plVar4[0xc] + 1;
    if ((uVar5 <= uVar6) && ((uVar6 != uVar5 || (cVar3 = FUN_1800090f0(uVar5), cVar3 == '\0')))) {
      *param_2 = plVar4;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  if (param_1[1] != 0x1745d1745d1745d) {
    lVar1 = *param_1;
    plStack_50 = (longlong *)0x0;
    local_58 = param_1;
    plVar4 = (longlong *)FUN_18000b2a8(0xb0);
    *(undefined1 *)(plVar4 + 0xc) = 0xff;
    plStack_50 = plVar4;
    FUN_180008df0((longlong)*(char *)(param_3 + 0x40) + 1);
    *(undefined1 *)(plVar4 + 0x15) = 0xff;
    FUN_180008df0((longlong)*(char *)(param_4 + 0x40) + 1);
    *plVar4 = lVar1;
    plVar4[1] = lVar1;
    plVar4[2] = lVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    plStack_50 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    local_58 = local_48;
    plVar4 = FUN_180004ad0(param_1,(longlong *)&local_58,plVar4);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180004e90();
}


