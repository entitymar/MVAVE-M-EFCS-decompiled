// FUN_1800060b0 @ 1800060b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800060b0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58 [2];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_180015040 ^ (ulonglong)auStack_78;
  local_48[0] = param_3;
  if (param_3[7] == 0) {
    plVar3 = FUN_180005320((longlong *)(param_1 + 0x10),(longlong *)local_48,param_2);
    FUN_180006530((longlong *)(param_1 + 0x10),(longlong *)*plVar3,(longlong *)plVar3[1]);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FlutterDesktopMessengerSetCallback(*(undefined8 *)(param_1 + 8),param_2,0,0);
    plVar3 = (longlong *)param_3[7];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_3);
    goto LAB_1800061fd;
  }
  plVar3 = FUN_1800055e0((longlong *)(param_1 + 0x10),local_58,param_2);
  lVar1 = *plVar3;
  plVar3 = (longlong *)(lVar1 + 0x40);
  if (plVar3 != param_3) {
    plVar2 = *(longlong **)(lVar1 + 0x78);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar3);
      *(undefined8 *)(lVar1 + 0x78) = 0;
    }
    plVar2 = (longlong *)param_3[7];
    if (plVar2 != (longlong *)0x0) {
      if (plVar2 == param_3) {
        uVar4 = (**(code **)(*plVar2 + 8))(plVar2,plVar3);
        *(undefined8 *)(lVar1 + 0x78) = uVar4;
        plVar2 = (longlong *)param_3[7];
        if (plVar2 == (longlong *)0x0) goto LAB_1800061b1;
        (**(code **)(*plVar2 + 0x20))
                  (plVar2,CONCAT71((int7)((ulonglong)plVar3 >> 8),plVar2 == param_3) ^ 1);
      }
      else {
        *(longlong **)(lVar1 + 0x78) = plVar2;
      }
      param_3[7] = 0;
    }
  }
LAB_1800061b1:
  plVar3 = FUN_1800055e0((longlong *)(param_1 + 0x10),local_58,param_2);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FlutterDesktopMessengerSetCallback
            (*(undefined8 *)(param_1 + 8),param_2,FUN_180005bf0,*plVar3 + 0x40);
  plVar3 = (longlong *)param_3[7];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_3);
LAB_1800061fd:
  param_3[7] = 0;
  return;
}


