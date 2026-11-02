// rea decompile_all
// name: Catch_All@0045bea4
// address: 0x45bea4
// body: available
// range: 0x45bea4-0x45bedc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45bedc with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Catch_All_0045bea4(void)

{
  code *pcVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar2[5]) {
    FUN_0045b830(*puVar2,puVar2[5] + 1);
  }
  puVar2[5] = 0xf;
  puVar2[4] = 0;
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  __CxxThrowException_8(0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

