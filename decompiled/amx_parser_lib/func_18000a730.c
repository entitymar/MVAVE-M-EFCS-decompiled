// FUN_18000a730 @ 18000a730

bool FUN_18000a730(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_180029000,0x100,2,local_res8);
  return BVar1 != 0;
}


