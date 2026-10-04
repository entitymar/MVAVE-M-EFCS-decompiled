// FUN_180003eb0 @ 180003eb0

void FUN_180003eb0(longlong param_1,undefined8 param_2)

{
  longlong *_Memory;
  undefined8 *puVar1;
  longlong *local_res8;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),&local_res8,param_2);
  _Memory = (longlong *)*puVar1;
  *puVar1 = 0;
  if (local_res8 != (longlong *)0x0) {
    FUN_180004eb0(local_res8);
    free(local_res8);
  }
  FUN_180006000(*(longlong **)(param_1 + 8),_Memory);
  if (_Memory != (longlong *)0x0) {
    FUN_180004eb0(_Memory);
    free(_Memory);
  }
  return;
}


