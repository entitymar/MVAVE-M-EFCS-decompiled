// FUN_180006470 @ 180006470

void FUN_180006470(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  basic_ostream<char,std::char_traits<char>_> *this;
  code *pcVar5;
  longlong lVar6;
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  lVar4 = FlutterDesktopMessengerLock(*(undefined8 *)(param_1 + 8));
  pcVar5 = FlutterDesktopMessengerUnlock_exref;
  lVar6 = lVar4;
  cVar3 = FlutterDesktopMessengerIsAvailable(*(undefined8 *)(param_1 + 8));
  if (cVar3 != '\0') {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                           "Error: Response can be set only once. Ignoring duplicate response.");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_180002140);
    }
    else {
      FlutterDesktopMessengerSendResponse
                (*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x18),uVar2,uVar1,pcVar5,lVar6
                );
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  if (lVar4 != 0) {
    FlutterDesktopMessengerUnlock(lVar4);
  }
  return;
}


