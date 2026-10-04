// FUN_180017d90 @ 180017d90

undefined8 FUN_180017d90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xc58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0xc60);
    (**(code **)(**(longlong **)(param_1 + 0xc58) + 0x10))();
  }
  plVar1 = *(longlong **)(param_1 + 0xc48);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0xcb8) != 0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 0xcc0),0);
      *(undefined8 *)(param_1 + 0xcb8) = 0;
      *(undefined8 *)(param_1 + 0xcc0) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0xc48) + 0x10))();
  }
  plVar1 = *(longlong **)(param_1 + 0xc50);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0xca8) != 0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 0xcb0));
      *(undefined8 *)(param_1 + 0xca8) = 0;
      *(undefined8 *)(param_1 + 0xcb0) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0xc50) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xc38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xc40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc40) + 0x10))();
  }
  if (*(HANDLE *)(param_1 + 0xc78) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc78));
  }
  if (*(HANDLE *)(param_1 + 0xc80) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc80));
  }
  return 0;
}


