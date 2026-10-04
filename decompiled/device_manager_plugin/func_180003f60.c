// FUN_180003f60 @ 180003f60

undefined8 * FUN_180003f60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_18000b2a8(0x70);
  *puVar2 = std::
            _Func_impl_no_alloc<<lambda_7f1a937f2a091b23c858f0d24ff7078e>,void,unsigned_char_const*___ptr64,unsigned___int64,std::function<void___cdecl(unsigned_char_const*___ptr64,unsigned___int64)>_>
            ::vftable;
  puVar2[8] = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,puVar2 + 1);
    puVar2[8] = uVar3;
  }
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  FUN_1800023e0(puVar2 + 10,(undefined8 *)(param_1 + 0x50));
  return puVar2;
}


