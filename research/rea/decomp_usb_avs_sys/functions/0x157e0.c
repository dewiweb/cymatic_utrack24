// rea decompile_all
// name: FUN_000157e0
// address: 0x157e0
// body: available
// range: 0x157e0-0x15848 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000157e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xc00000bb;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return 0xc0000010;
  }
  lVar1 = KsGetPinFromIrp();
  if (lVar1 != 0) {
    if ((*(int *)(param_3 + 4) == 0) && (*(int *)(param_3 + 0xc) == 0)) {
      *(undefined1 *)(*(longlong *)(lVar1 + 0x10) + 0x50) = 0;
      return 0;
    }
    *(undefined1 *)(*(longlong *)(lVar1 + 0x10) + 0x50) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

