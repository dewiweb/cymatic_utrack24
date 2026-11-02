// rea decompile_all
// name: FUN_000205e4
// address: 0x205e4
// body: available
// range: 0x205e4-0x206c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000205e4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  while( true ) {
    lVar2 = *(longlong *)(param_1 + 0xe48);
    if (lVar2 == 0) {
      lVar2 = FUN_0001fadc(param_1 + 0x58);
      *(longlong *)(param_1 + 0xe48) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined4 *)(param_1 + 0xe78) = 0;
        *(undefined4 *)(param_1 + 0xe50) = 0;
        return;
      }
    }
    if (*(longlong *)(param_1 + 0xe8) == 0) break;
    *(int *)(param_1 + 0xe50) = *(int *)(param_1 + 0xe50) + 1;
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 0xc;
    if (*(uint *)(param_1 + 0xe50) < *(uint *)(*(longlong *)(lVar2 + 0x10) + 0xc)) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0xe60);
    plVar3 = (longlong *)(lVar2 + *(longlong *)(param_1 + 0xe68));
    lVar2 = *plVar1;
    plVar3[1] = (longlong)plVar1;
    *plVar3 = lVar2;
    *(longlong **)(*plVar1 + 8) = plVar3;
    *plVar1 = (longlong)plVar3;
    *(undefined8 *)(param_1 + 0xe48) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xe78) = 0;
    *(undefined4 *)(param_1 + 0xe50) = 0;
  }
  *(longlong *)(param_1 + 0xe8) = *(longlong *)(*(longlong *)(param_1 + 0xe48) + 0x30) + 0x8c;
  *(undefined4 *)(*(longlong *)(param_1 + 0xe48) + 0x50) = *(undefined4 *)(param_1 + 0x23c);
  return;
}

