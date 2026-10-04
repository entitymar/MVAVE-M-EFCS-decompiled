// FUN_180004540 @ 180004540

longlong FUN_180004540(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_2;
  lVar9 = 0;
  plVar3 = (longlong *)param_2[1];
  plVar7 = plVar2;
  while (plVar7 != plVar3) {
    plVar8 = (longlong *)plVar7[2];
    lVar9 = lVar9 + 1;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar7 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar7 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar1 = *(char *)(plVar7[1] + 0x19);
      plVar6 = (longlong *)plVar7[1];
      plVar8 = plVar7;
      while ((plVar7 = plVar6, cVar1 == '\0' && (plVar8 == (longlong *)plVar7[2]))) {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar8 = plVar7;
      }
    }
  }
  puVar4 = (undefined8 *)*param_1;
  if ((plVar2 == (longlong *)*puVar4) && (*(char *)((longlong)plVar3 + 0x19) != '\0')) {
    FUN_180001950(param_1,param_1,(longlong *)puVar4[1]);
    puVar4[1] = puVar4;
    *puVar4 = puVar4;
    puVar4[2] = puVar4;
    param_1[1] = 0;
  }
  else {
    while (plVar2 != plVar3) {
      plVar7 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar8 = plVar7;
        plVar6 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar8 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
        plVar7 = (longlong *)*plVar7;
        cVar1 = *(char *)((longlong)plVar7 + 0x19);
        while (cVar1 == '\0') {
          plVar7 = (longlong *)*plVar7;
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar6 = (longlong *)plVar2[1];
        plVar7 = plVar2;
        while ((plVar8 = plVar6, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar6 = (longlong *)plVar8[1];
          plVar7 = plVar8;
        }
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar6 = (longlong *)plVar2[1];
        plVar7 = plVar2;
        while ((plVar5 = plVar6, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar6 = (longlong *)plVar5[1];
          plVar7 = plVar5;
        }
      }
      plVar7 = FUN_180004700(param_1,plVar2);
      plVar2 = (longlong *)plVar7[0xc];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar7 + 5);
        plVar7[0xc] = 0;
      }
      free(plVar7);
      plVar2 = plVar8;
    }
  }
  return lVar9;
}


