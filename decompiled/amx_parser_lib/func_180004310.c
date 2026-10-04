// FUN_180004310 @ 180004310

undefined8 FUN_180004310(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = FUN_180004494();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = FUN_180004494();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = FUN_180004494();
    *(int **)(lVar3 + 0x20) = piVar1;
    uVar2 = param_1[1];
    lVar3 = FUN_180004494();
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180009bcc();
  }
  return 0;
}


