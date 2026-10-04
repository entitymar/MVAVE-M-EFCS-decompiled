// FUN_180005eb0 @ 180005eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180005eb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  code *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_180015040 ^ (ulonglong)auStack_78;
  local_48 = param_5;
  if (param_5[7] == 0) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FlutterDesktopMessengerSend(*(undefined8 *)(param_1 + 8),param_2);
    plVar3 = (longlong *)param_5[7];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_5);
  }
  else {
    plVar2 = (longlong *)FUN_18000b2a8(0x40);
    plVar3 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar3 = plVar2;
    }
    FUN_180005a30(plVar3,(longlong)param_5);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    local_58 = FUN_180005220;
    local_50 = plVar3;
    cVar1 = FlutterDesktopMessengerSendWithReply
                      (*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    if ((cVar1 == '\0') && (plVar3 != (longlong *)0x0)) {
      plVar2 = (longlong *)plVar3[7];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar3);
        plVar3[7] = 0;
      }
      free(plVar3);
    }
    plVar3 = (longlong *)param_5[7];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_5);
  }
  param_5[7] = 0;
  return;
}


