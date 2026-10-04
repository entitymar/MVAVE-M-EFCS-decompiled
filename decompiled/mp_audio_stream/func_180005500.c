// FUN_180005500 @ 180005500

ulonglong FUN_180005500(undefined4 param_1,uint param_2,uint param_3)

{
  ulonglong in_RAX;
  int iVar1;
  
  if ((param_2 == 0) || (param_2 <= param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  switch(param_1) {
  case 1:
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      goto switchD_1800058bf_caseD_1;
    case 2:
      goto switchD_1800058bf_caseD_2;
    case 3:
      goto switchD_1800058bf_caseD_3;
    case 4:
switchD_18000584d_caseD_4:
      if (param_3 == 0) {
        return 2;
      }
      if (param_3 == 1) {
        return 3;
      }
      if (param_3 == 2) {
        return 6;
      }
      if (param_3 != 3) {
        return 0;
      }
switchD_18000590d_caseD_5:
      return 7;
    case 5:
switchD_18000584d_caseD_5:
      if (param_3 == 0) {
        return 2;
      }
      if (param_3 == 1) {
        return 3;
      }
      if (param_3 == 2) {
        return 6;
      }
      iVar1 = param_3 - 3;
      if (iVar1 == 0) {
        return 7;
      }
      goto LAB_18000567b;
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_4;
      case 3:
        goto switchD_18000590d_caseD_5;
      case 4:
        goto switchD_18000590d_caseD_2;
      case 5:
        goto switchD_18000590d_caseD_3;
      default:
        return 0;
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_4;
      case 3:
        goto switchD_18000590d_caseD_5;
      case 4:
        goto switchD_18000590d_caseD_2;
      case 5:
        goto switchD_18000590d_caseD_3;
      case 6:
        goto switchD_18000564a_caseD_5;
      default:
        return 0;
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_4;
      case 3:
        goto switchD_18000590d_caseD_5;
      case 4:
        goto switchD_18000590d_caseD_2;
      case 5:
        goto switchD_18000590d_caseD_3;
      case 6:
        goto switchD_18000590d_caseD_6;
      case 7:
        goto switchD_18000590d_caseD_7;
      }
      goto switchD_18000590d_default;
    }
  case 2:
    switch(param_2) {
    case 0:
      goto switchD_1800058bf_caseD_0;
    case 1:
      goto switchD_1800058bf_caseD_1;
    case 2:
      goto switchD_1800058bf_caseD_2;
    case 3:
      goto switchD_1800058bf_caseD_3;
    case 4:
      goto switchD_1800058bf_caseD_4;
    case 5:
      goto switchD_1800058bf_caseD_5;
    default:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_6;
      case 2:
        goto switchD_18000590d_caseD_2;
      case 3:
        goto switchD_18000590d_caseD_1;
      case 4:
        goto switchD_18000590d_caseD_7;
      case 5:
        goto switchD_18000564a_caseD_5;
      default:
switchD_18000588f_default:
        if (param_2 < 7) {
          return 0;
        }
        if (0x1f < param_3) {
          return 0;
        }
        return (ulonglong)(byte)((char)param_3 + 0xe);
      }
    }
  case 3:
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      goto switchD_1800058bf_caseD_1;
    case 2:
      goto switchD_1800058bf_caseD_2;
    case 3:
      goto switchD_1800058bf_caseD_3;
    case 4:
      goto switchD_18000584d_caseD_4;
    case 5:
      goto switchD_1800058bf_caseD_5;
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_2;
      case 3:
        goto switchD_18000590d_caseD_3;
      case 4:
        goto switchD_18000590d_caseD_4;
      case 5:
        goto switchD_18000590d_caseD_5;
      default:
        return 0;
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_2;
      case 3:
        goto switchD_18000590d_caseD_3;
      case 4:
        goto switchD_18000564a_caseD_5;
      case 5:
        goto switchD_18000590d_caseD_6;
      case 6:
        goto switchD_18000590d_caseD_7;
      default:
        return 0;
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_2;
      case 3:
        goto switchD_18000590d_caseD_3;
      case 4:
        goto switchD_18000590d_caseD_4;
      case 5:
        goto switchD_18000590d_caseD_5;
      case 6:
        goto switchD_18000590d_caseD_6;
      case 7:
        goto switchD_18000590d_caseD_7;
      }
      goto switchD_18000590d_default;
    }
  case 4:
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      goto switchD_1800058bf_caseD_1;
    case 2:
switchD_1800058bf_caseD_2:
      if (param_3 == 0) {
switchD_18000590d_caseD_0:
        return 2;
      }
      break;
    case 3:
      if (param_3 == 0) {
        return 2;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return 4;
      }
      break;
    case 4:
      goto switchD_18000584d_caseD_4;
    case 5:
      if (param_3 == 0) {
        return 2;
      }
      if (param_3 == 1) {
        return 4;
      }
      if (param_3 == 2) {
        return 3;
      }
      if (param_3 != 3) {
        if (param_3 != 4) {
          return 0;
        }
        return 7;
      }
      return 6;
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_2;
      case 2:
        goto switchD_18000590d_caseD_1;
      case 3:
        goto switchD_18000590d_caseD_4;
      case 4:
        goto switchD_18000590d_caseD_5;
      case 5:
        goto switchD_18000590d_caseD_3;
      default:
        return 0;
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_2;
      case 2:
        goto switchD_18000590d_caseD_1;
      case 3:
        goto switchD_18000590d_caseD_6;
      case 4:
        goto switchD_18000590d_caseD_7;
      case 5:
        goto switchD_18000564a_caseD_5;
      case 6:
        goto switchD_18000590d_caseD_3;
      default:
        return 0;
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_2;
      case 2:
        goto switchD_18000590d_caseD_1;
      case 3:
        goto switchD_18000590d_caseD_6;
      case 4:
        goto switchD_18000590d_caseD_7;
      case 5:
        goto switchD_18000590d_caseD_4;
      case 6:
        goto switchD_18000590d_caseD_5;
      case 7:
        goto switchD_18000590d_caseD_3;
      }
      goto switchD_18000590d_default;
    }
    if (param_3 == 1) {
switchD_18000590d_caseD_1:
      return 3;
    }
switchD_1800058bf_caseD_0:
    return 0;
  case 5:
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      goto switchD_1800058bf_caseD_1;
    case 2:
      goto switchD_1800058bf_caseD_2;
    case 3:
      goto switchD_1800058bf_caseD_3;
    case 4:
      goto switchD_18000584d_caseD_4;
    case 5:
      goto switchD_1800058bf_caseD_5;
    case 6:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_2;
      case 2:
        goto switchD_18000590d_caseD_1;
      case 3:
        goto switchD_18000590d_caseD_4;
      case 4:
        goto switchD_18000590d_caseD_5;
      case 5:
        goto switchD_18000590d_caseD_3;
      default:
        return 0;
      }
    case 7:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_2;
      case 2:
        goto switchD_18000590d_caseD_1;
      case 3:
        goto switchD_18000590d_caseD_6;
      case 4:
        goto switchD_18000590d_caseD_7;
      case 5:
        goto switchD_18000564a_caseD_5;
      case 6:
        goto switchD_18000590d_caseD_3;
      default:
        return 0;
      }
    default:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_2;
      case 2:
        goto switchD_18000590d_caseD_1;
      case 3:
        goto switchD_18000590d_caseD_6;
      case 4:
        goto switchD_18000590d_caseD_7;
      case 5:
        goto switchD_18000590d_caseD_4;
      case 6:
        goto switchD_18000590d_caseD_5;
      case 7:
        goto switchD_18000590d_caseD_3;
      }
      goto switchD_18000590d_default;
    }
  case 6:
    switch(param_2) {
    case 0:
      goto switchD_1800058bf_caseD_0;
    case 1:
      goto switchD_1800058bf_caseD_1;
    case 2:
      goto switchD_1800058bf_caseD_2;
    case 3:
      goto switchD_1800058bf_caseD_3;
    case 4:
      goto switchD_18000584d_caseD_4;
    case 5:
      goto switchD_18000584d_caseD_5;
    default:
      switch(param_3) {
      case 0:
        goto switchD_18000590d_caseD_0;
      case 1:
        goto switchD_18000590d_caseD_1;
      case 2:
        goto switchD_18000590d_caseD_4;
      case 3:
        goto switchD_18000590d_caseD_5;
      case 4:
        goto switchD_18000590d_caseD_2;
      case 5:
        goto switchD_18000590d_caseD_3;
      default:
        goto switchD_18000588f_default;
      }
    }
  }
  switch(param_2) {
  case 0:
    goto switchD_1800058bf_caseD_0;
  case 1:
switchD_1800058bf_caseD_1:
    return 1;
  case 2:
    goto switchD_1800058bf_caseD_2;
  case 3:
switchD_1800058bf_caseD_3:
    if (param_3 == 0) {
      return 2;
    }
    iVar1 = param_3 - 1;
    if (iVar1 == 0) {
      return 3;
    }
LAB_18000567b:
    if (iVar1 != 1) {
      return 0;
    }
switchD_18000590d_caseD_2:
    return 4;
  case 4:
switchD_1800058bf_caseD_4:
    if (param_3 == 0) {
      return 2;
    }
    if (param_3 == 1) {
      return 3;
    }
    if (param_3 == 2) {
      return 4;
    }
    if (param_3 != 3) {
      return 0;
    }
switchD_18000564a_caseD_5:
    return 10;
  case 5:
switchD_1800058bf_caseD_5:
    if (param_3 == 0) {
      return 2;
    }
    if (param_3 == 1) {
      return 3;
    }
    if (param_3 == 2) {
      return 4;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        return 0;
      }
      return 7;
    }
switchD_18000590d_caseD_4:
    return 6;
  case 6:
    switch(param_3) {
    case 0:
      goto switchD_18000590d_caseD_0;
    case 1:
      goto switchD_18000590d_caseD_1;
    case 2:
      goto switchD_18000590d_caseD_2;
    case 3:
switchD_18000590d_caseD_3:
      return 5;
    case 4:
switchD_18000590d_caseD_6:
      return 0xb;
    case 5:
switchD_18000590d_caseD_7:
      return 0xc;
    default:
      goto switchD_1800058bf_caseD_0;
    }
  case 7:
    switch(param_3) {
    case 0:
      goto switchD_18000590d_caseD_0;
    case 1:
      goto switchD_18000590d_caseD_1;
    case 2:
      goto switchD_18000590d_caseD_2;
    case 3:
      goto switchD_18000590d_caseD_3;
    case 4:
      goto switchD_18000564a_caseD_5;
    case 5:
      goto switchD_18000590d_caseD_6;
    case 6:
      goto switchD_18000590d_caseD_7;
    default:
      goto switchD_1800058bf_caseD_0;
    }
  default:
    switch(param_3) {
    case 0:
      goto switchD_18000590d_caseD_0;
    case 1:
      goto switchD_18000590d_caseD_1;
    case 2:
      goto switchD_18000590d_caseD_2;
    case 3:
      goto switchD_18000590d_caseD_3;
    case 4:
      goto switchD_18000590d_caseD_4;
    case 5:
      goto switchD_18000590d_caseD_5;
    case 6:
      goto switchD_18000590d_caseD_6;
    case 7:
      goto switchD_18000590d_caseD_7;
    }
switchD_18000590d_default:
    if ((8 < param_2) && (param_3 < 0x20)) {
      return (ulonglong)(byte)((char)param_3 + 0xc);
    }
    goto switchD_1800058bf_caseD_0;
  }
}


