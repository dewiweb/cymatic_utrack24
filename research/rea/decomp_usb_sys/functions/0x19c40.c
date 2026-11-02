// rea decompile_all
// name: FUN_00019c40
// address: 0x19c40
// body: available
// range: 0x19c40-0x19cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00019c40(longlong param_1)

{
  int iVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = 0;
  local_res10[1] = 1;
  local_res8[0] = 0x12;
  iVar1 = FUN_0001ba7c(param_1,local_res10,local_res8,param_1 + 0x198d);
  if (-1 < iVar1) {
    FUN_000264d0((ulonglong *)(param_1 + 0x19a6),0,0x28);
    if (*(char *)(param_1 + 0x199c) != '\0') {
      iVar1 = FUN_0001bb78(param_1,*(char *)(param_1 + 0x199c),(ulonglong *)(param_1 + 0x19a6));
    }
    FUN_000264d0((ulonglong *)(param_1 + 0x19ce),0,0x28);
    if (*(char *)(param_1 + 0x199b) != '\0') {
      iVar1 = FUN_0001bb78(param_1,*(char *)(param_1 + 0x199b),(ulonglong *)(param_1 + 0x19ce));
    }
  }
  return iVar1;
}

