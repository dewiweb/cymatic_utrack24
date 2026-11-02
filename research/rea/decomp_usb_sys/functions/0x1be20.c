// rea decompile_all
// name: FUN_0001be20
// address: 0x1be20
// body: available
// range: 0x1be20-0x1bec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001be20(longlong param_1,undefined1 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_26;
  undefined1 local_25;
  
  FUN_000264d0((ulonglong *)&local_a8,0,0x98);
  local_84 = *param_3;
  local_a8 = 0x88;
  local_a6 = 0xb;
  local_25 = 2;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    iVar1 = -0x3fffff63;
  }
  else {
    local_80 = param_4;
    local_26 = param_2;
    iVar1 = FUN_0001a36c(param_1,&local_a8,*(uint *)(DAT_00029268 + 0x748));
    if (-1 < iVar1) {
      *param_3 = local_84;
    }
  }
  return iVar1;
}

