// rea decompile_all
// name: FUN_0049e1b0
// address: 0x49e1b0
// body: available
// range: 0x49e1b0-0x49e248 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049e1b0(void)

{
  double dVar1;
  int in_ECX;
  float10 fVar2;
  double dVar3;
  double in_XMM2_Qa;
  
  if (*(int *)(in_ECX + 0x18) == 8) {
    return;
  }
  fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))();
  dVar1 = (double)(fVar2 + (float10)(in_XMM2_Qa * 0.15000000596046448));
  dVar3 = 0.0;
  if ((0.0 <= dVar1) && (dVar3 = 1.0, dVar1 <= 1.0)) {
    dVar3 = dVar1;
  }
  (**(code **)(**(int **)(in_ECX + 0x14) + 0xc4))(dVar3);
  return;
}

