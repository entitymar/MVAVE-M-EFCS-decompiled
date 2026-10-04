// FUN_180005bf0 @ 180005bf0

uint FUN_180005bf0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    do {
      switch(*param_1) {
      case 1:
      case 4:
        uVar1 = 4;
        break;
      case 2:
        uVar1 = 1;
        break;
      case 3:
        uVar1 = 2;
        break;
      case 5:
        uVar1 = 8;
        break;
      case 6:
        uVar1 = 0x10;
        break;
      case 7:
        uVar1 = 0x20;
        break;
      case 8:
        uVar1 = 0x40;
        break;
      case 9:
        uVar1 = 0x80;
        break;
      case 10:
        uVar1 = 0x100;
        break;
      case 0xb:
        uVar1 = 0x200;
        break;
      case 0xc:
        uVar1 = 0x400;
        break;
      case 0xd:
        uVar1 = 0x800;
        break;
      case 0xe:
        uVar1 = 0x1000;
        break;
      case 0xf:
        uVar1 = 0x2000;
        break;
      case 0x10:
        uVar1 = 0x4000;
        break;
      case 0x11:
        uVar1 = 0x8000;
        break;
      case 0x12:
        uVar1 = 0x10000;
        break;
      case 0x13:
        uVar1 = 0x20000;
        break;
      default:
        uVar1 = 0;
      }
      uVar2 = uVar2 | uVar1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}


