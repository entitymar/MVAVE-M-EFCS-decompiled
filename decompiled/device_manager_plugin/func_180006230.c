// FUN_180006230 @ 180006230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180006230(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180015040 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  if (param_3[7] == 0) {
    FlutterDesktopTextureRegistrarUnregisterExternalTexture
              (*(undefined8 *)(param_1 + 8),param_2,0,0);
    plVar3 = (longlong *)param_3[7];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_3);
    goto LAB_18000634d;
  }
  plVar1 = (longlong *)FUN_18000b2a8(0x40);
  plVar3 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar3 = plVar1;
  }
  if (plVar3 != param_3) {
    plVar1 = (longlong *)plVar3[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar3);
      plVar3[7] = 0;
    }
    plVar1 = (longlong *)param_3[7];
    if (plVar1 != (longlong *)0x0) {
      if (plVar1 == param_3) {
        lVar2 = (**(code **)(*plVar1 + 8))(plVar1,plVar3);
        plVar3[7] = lVar2;
        plVar1 = (longlong *)param_3[7];
        if (plVar1 == (longlong *)0x0) goto LAB_180006320;
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
      }
      else {
        plVar3[7] = (longlong)plVar1;
      }
      param_3[7] = 0;
    }
  }
LAB_180006320:
  FlutterDesktopTextureRegistrarUnregisterExternalTexture
            (*(undefined8 *)(param_1 + 8),param_2,FUN_1800052d0,plVar3);
  plVar3 = (longlong *)param_3[7];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_3);
LAB_18000634d:
  param_3[7] = 0;
  return;
}


