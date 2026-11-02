// rea decompile_all
// name: FUN_006af6a0
// address: 0x6af6a0
// body: available
// range: 0x6af6a0-0x6af72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006af6a0(undefined4 param_1,float *param_2)

{
  float fVar1;
  int in_ECX;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(in_ECX + 0xe4) != '\0') {
    param_2 = param_2 + 1;
  }
  fVar2 = *param_2 * 10.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
    if ((0.0 < fVar2) && (fVar1 = 1.0, 1.0 <= fVar2)) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = -1.0;
    if (fVar2 <= -1.0) {
      fVar1 = fVar2;
    }
  }
  dVar4 = (double)fVar1 * *(double *)(in_ECX + 0xb0);
  dVar3 = *(double *)(in_ECX + 0xa0) - dVar4;
  dVar4 = *(double *)(in_ECX + 0xa8) - dVar4;
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  FUN_006b03b0(in_ECX,dVar3,dVar4);
  return;
}

