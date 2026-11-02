// rea decompile_all
// name: FUN_00019cfc
// address: 0x19cfc
// body: available
// range: 0x19cfc-0x19dcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00019cfc(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint local_res10 [2];
  undefined1 local_18 [2];
  ushort local_16;
  
  local_res10[0] = 9;
  iVar1 = FUN_0001be20(param_1,0,local_res10,local_18);
  if (-1 < iVar1) {
    local_res10[0] = (uint)local_16;
    puVar2 = (ulonglong *)ExAllocatePoolWithTag(0,(ulonglong)local_16,0x5f6e6577);
    if (puVar2 == (ulonglong *)0x0) {
      iVar1 = -0x3fffffe9;
    }
    else {
      FUN_000264d0(puVar2,0,(ulonglong)local_16);
      iVar1 = FUN_0001be20(param_1,0,local_res10,puVar2);
      if (-1 < iVar1) {
        lVar3 = USBD_ParseConfigurationDescriptorEx
                          (puVar2,puVar2,0xffffffff,0xffffffff,1,1,0xffffffff);
        iVar1 = 0;
        *(bool *)(param_1 + 0x1bb9) = lVar3 == 0;
      }
      ExFreePoolWithTag(puVar2,0);
    }
  }
  return iVar1;
}

