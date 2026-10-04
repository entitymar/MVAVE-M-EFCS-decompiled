// FUN_18001cf80 @ 18001cf80

undefined8 FUN_18001cf80(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 0xffffffff;
  case 2:
  case 5:
  case 10:
  case 0xb:
    return 0xfffffffe;
  case 7:
    return 0xfffffffc;
  case 0xc:
    return 0xffffffed;
  }
}


