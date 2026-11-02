// rea decompile_all
// name: FUN_0042e4e0
// address: 0x42e4e0
// body: available
// range: 0x42e4e0-0x42e519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042e4e0(void)

{
  HMIDIIN hmi;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x20;
  puVar1 = in_ECX + 0x10;
  do {
    hmi = (HMIDIIN)*in_ECX;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      *puVar1 = 0;
      midiInAddBuffer(hmi,(LPMIDIHDR)(puVar1 + -2),0x40);
    }
    puVar1 = puVar1 + 0x50;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

