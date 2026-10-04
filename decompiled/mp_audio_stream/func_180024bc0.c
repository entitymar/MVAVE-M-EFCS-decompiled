// FUN_180024bc0 @ 180024bc0

char * FUN_180024bc0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "Unknown";
  case 1:
    return "8-bit Unsigned Integer";
  case 2:
    return "16-bit Signed Integer";
  case 3:
    return "24-bit Signed Integer (Tightly Packed)";
  case 4:
    return "32-bit Signed Integer";
  case 5:
    return "32-bit IEEE Floating Point";
  default:
    return "Invalid";
  }
}


