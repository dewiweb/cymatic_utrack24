// rea decompile_all
// name: FUN_1007fe9e
// address: 0x1007fe9e
// body: available
// range: 0x1007fe9e-0x1007fef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl FUN_1007fe9e(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < (float10)0.5) {
    return (float10)0.75 - fVar1 * fVar1;
  }
  if (fVar1 < (float10)1.5) {
    fVar1 = fVar1 - (float10)1.5;
    return fVar1 * (float10)0.5 * fVar1;
  }
  return (float10)0;
}

