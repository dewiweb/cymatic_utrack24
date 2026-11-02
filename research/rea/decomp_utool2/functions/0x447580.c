// rea decompile_all
// name: FUN_00447580
// address: 0x447580
// body: available
// range: 0x447580-0x447641 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447580(void)

{
  float *in_ECX;
  float in_XMM1_Da;
  float fVar1;
  float fVar2;
  
  fVar2 = in_ECX[3];
  fVar1 = (in_XMM1_Da - *in_ECX) / (in_ECX[1] - *in_ECX);
  if (fVar2 == 1.0) {
    return;
  }
  if (*(char *)(in_ECX + 4) == '\0') {
    FUN_00412480(fVar1,fVar2);
    return;
  }
  fVar1 = (fVar1 + fVar1) - 1.0;
  FUN_00411660();
  FUN_00412480(fVar1,fVar2);
  return;
}

