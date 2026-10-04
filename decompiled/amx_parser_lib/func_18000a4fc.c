// FUN_18000a4fc @ 18000a4fc

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_18000a4fc(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1800290d0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1800290d0;
  if ((DAT_1800290d0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_18000a348(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_18001a03c,
                             (uint *)"AppPolicyGetProcessTerminationMethod"), pFVar1 == (FARPROC)0x0
     )) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}


