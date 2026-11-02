// rea decompile_all
// name: FUN_0002055c
// address: 0x2055c
// body: available
// range: 0x2055c-0x205dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002055c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xe78) = 0;
  *(undefined4 *)(param_1 + 0xe50) = 0;
  if (*(longlong *)(param_1 + 0xe48) != 0) {
    FUN_0001f764(*(longlong *)(param_1 + 0xe48));
    *(undefined8 *)(param_1 + 0xe48) = 0;
  }
  while (plVar1 = *(longlong **)(param_1 + 0xe58), plVar1 != (longlong *)(param_1 + 0xe58)) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    lVar2 = (longlong)plVar1 - *(longlong *)(param_1 + 0xe68);
    if (lVar2 == 0) break;
    FUN_0001f764(lVar2);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}

