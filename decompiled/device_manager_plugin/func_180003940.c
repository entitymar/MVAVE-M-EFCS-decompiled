// FUN_180003940 @ 180003940

char FUN_180003940(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 *param_6)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  char cStack_10;
  
  plVar6 = (longlong *)**(longlong **)(param_5 + 0x40);
  cVar1 = *(char *)((longlong)plVar6 + 0x19);
  cVar4 = '\0';
  cVar3 = cStack_10;
  while (cStack_10 = cVar4, cVar1 == '\0') {
    plVar2 = (longlong *)plVar6[0xc];
    param_5._0_4_ = param_2;
    local_38 = param_4;
    local_30 = param_3;
    local_28 = param_1;
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    cStack_10 = cVar3;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_18,&local_28,&param_5,&local_30,&local_38);
    local_28 = CONCAT17(uStack_11,
                        CONCAT16(uStack_12,
                                 CONCAT15(uStack_13,
                                          CONCAT14(uStack_14,
                                                   CONCAT13(uStack_15,
                                                            CONCAT12(uStack_16,
                                                                     CONCAT11(uStack_17,local_18))))
                                         )));
    if (cStack_10 != '\0') break;
    plVar2 = (longlong *)plVar6[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar6 = plVar2;
      plVar2 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar6 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(plVar6[1] + 0x19);
      plVar5 = (longlong *)plVar6[1];
      plVar2 = plVar6;
      while ((plVar6 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar6[2]))) {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar5 = (longlong *)plVar6[1];
        plVar2 = plVar6;
      }
    }
    cVar4 = cStack_10;
    cVar3 = cStack_10;
    cVar1 = *(char *)((longlong)plVar6 + 0x19);
  }
  if (cStack_10 != '\0') {
    *param_6 = local_28;
  }
  return cStack_10;
}


