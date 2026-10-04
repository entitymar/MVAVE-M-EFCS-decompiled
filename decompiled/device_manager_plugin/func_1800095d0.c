// FUN_1800095d0 @ 1800095d0

longlong * FUN_1800095d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_18000b2a8(0xb0);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *param_1 = lVar6;
  puVar7 = FUN_180001700(param_1,*(undefined8 **)(*param_2 + 8),lVar6,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  param_1[1] = param_2[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(*param_1 + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}


