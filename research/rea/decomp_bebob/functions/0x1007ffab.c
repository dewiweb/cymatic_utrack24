// rea decompile_all
// name: FUN_1007ffab
// address: 0x1007ffab
// body: available
// range: 0x1007ffab-0x100800b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1007ffab(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)_DAT_101614c0;
  if ((_DAT_10168960 & 1) == 0) {
    _DAT_10168960 = _DAT_10168960 | 1;
    _DAT_10168958 = _DAT_101614c0;
    fVar2 = fVar1;
  }
  else {
    fVar2 = (float10)_DAT_10168958;
  }
  fVar3 = (float10)param_1;
  if (fVar3 < (float10)0) {
    fVar3 = -fVar3;
  }
  fVar4 = fVar3 * fVar3;
  if (fVar3 < (float10)1) {
    fVar5 = (float10)6.0;
    return ((fVar5 - (fVar1 + fVar1)) +
           (((float10)12.0 - fVar1 * (float10)9.0) - fVar2 * fVar5) * fVar4 * fVar3 +
           ((fVar1 * (float10)12.0 - (float10)18.0) + fVar2 * fVar5) * fVar4) / fVar5;
  }
  if (fVar3 < (float10)2.0) {
    fVar5 = (float10)6.0;
    return (fVar4 * fVar3 * (fVar1 * (float10)-1.0 - fVar2 * fVar5) +
            (fVar2 * (float10)30.0 + fVar1 * fVar5) * fVar4 +
            (fVar1 * (float10)-12.0 - fVar2 * (float10)48.0) * fVar3 +
           fVar2 * (float10)24.0 + fVar1 * (float10)8.0) / fVar5;
  }
  return (float10)0;
}

