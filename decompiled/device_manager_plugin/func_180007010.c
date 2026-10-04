// FUN_180007010 @ 180007010

longlong FUN_180007010(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar7 = (longlong *)*param_2;
  lVar9 = 0;
  plVar2 = (longlong *)param_2[1];
  plVar4 = plVar7;
  while (plVar4 != plVar2) {
    plVar8 = (longlong *)plVar4[2];
    lVar9 = lVar9 + 1;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar4 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar6 = (longlong *)plVar4[1];
      plVar8 = plVar4;
      while ((plVar4 = plVar6, cVar1 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar6 = (longlong *)plVar4[1];
        plVar8 = plVar4;
      }
    }
  }
  puVar3 = (undefined8 *)*param_1;
  if ((plVar7 == (longlong *)*puVar3) && (*(char *)((longlong)plVar2 + 0x19) != '\0')) {
    FUN_1800068d0(param_1,param_1,(longlong *)puVar3[1]);
    puVar3[1] = puVar3;
    *puVar3 = puVar3;
    puVar3[2] = puVar3;
    param_1[1] = 0;
  }
  else {
    while (plVar7 != plVar2) {
      plVar4 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar6 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar8 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        while (cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar8 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar6 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar5 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar6 = (longlong *)plVar5[1];
          plVar4 = plVar5;
        }
      }
      plVar7 = FUN_180004700(param_1,plVar7);
      puVar3 = (undefined8 *)plVar7[5];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      free(plVar7);
      plVar7 = plVar8;
    }
  }
  return lVar9;
}


