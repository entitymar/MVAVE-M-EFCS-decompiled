// FUN_180004700 @ 180004700

longlong * FUN_180004700(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar6 = param_2 + 2;
  plVar5 = (longlong *)*plVar6;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar4 = plVar5;
    plVar2 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar2 = param_2;
    while ((plVar4 = plVar7, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar7 = (longlong *)plVar4[1];
      plVar2 = plVar4;
    }
  }
  plVar8 = param_2 + 1;
  plVar2 = (longlong *)*param_2;
  plVar7 = plVar5;
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
      (plVar7 = plVar2, *(char *)((longlong)plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar2[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar5 = plVar4;
    if (plVar4 != (longlong *)*plVar6) {
      plVar5 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar5;
      }
      *plVar5 = (longlong)plVar7;
      plVar4[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      plVar6 = (longlong *)*plVar8;
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar4;
      }
      else {
        plVar6[2] = (longlong)plVar4;
      }
    }
    lVar3 = plVar4[3];
    plVar4[1] = *plVar8;
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar3;
  }
  else {
    plVar5 = (longlong *)*plVar8;
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar5 == param_2) {
      *plVar5 = (longlong)plVar7;
    }
    else {
      plVar5[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar5;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar4 = (longlong *)*plVar7;
        plVar6 = plVar7;
        while (plVar2 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
          plVar6 = plVar2;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar3 = *param_1;
    if (*(longlong **)(lVar3 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar6 = (longlong *)plVar7[2];
        plVar4 = plVar7;
        while (plVar2 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar2[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar4 = plVar2;
        }
        *(longlong **)(lVar3 + 0x10) = plVar4;
      }
      else {
        *(longlong **)(lVar3 + 0x10) = plVar5;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar7 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar5;
        if ((char)plVar7[3] != '\x01') break;
        plVar5 = (longlong *)*plVar6;
        if (plVar7 == plVar5) {
          plVar5 = (longlong *)plVar6[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar6;
            }
            plVar5[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
            }
            else {
              plVar4 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)*plVar4) {
                *plVar4 = (longlong)plVar5;
              }
              else {
                plVar4[2] = (longlong)plVar5;
              }
            }
            *plVar5 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar5;
            plVar5 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                *(undefined1 *)(plVar5 + 3) = 0;
                FUN_180004dd0(param_1,plVar5);
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              FUN_180004d30(param_1,(longlong)plVar6);
              break;
            }
LAB_180004a22:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar3 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar3 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
            }
            else {
              plVar5 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar5[2]) {
                plVar5[2] = lVar3;
              }
              else {
                *plVar5 = lVar3;
              }
            }
            *(longlong **)(lVar3 + 0x10) = plVar6;
            plVar6[1] = lVar3;
            plVar5 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_180004a22;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              FUN_180004d30(param_1,(longlong)plVar5);
              plVar5 = (longlong *)*plVar6;
            }
            *(char *)(plVar5 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            FUN_180004dd0(param_1,plVar6);
            break;
          }
        }
        plVar5 = (longlong *)plVar6[1];
        plVar7 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}


