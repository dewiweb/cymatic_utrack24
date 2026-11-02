// rea decompile_all
// name: FUN_004a7012
// address: 0x4a7012
// body: available
// range: 0x4a7012-0x4a7094 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004a7012(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  float10 fVar4;
  
  fVar1 = in_ECX[2] - *in_ECX;
  fVar2 = in_ECX[3] - in_ECX[1];
  fVar3 = fVar1 * fVar1 + fVar2 * fVar2;
  if (0.0 < fVar3) {
    fVar4 = (float10)FUN_004a8e90(0,0x3f800000,
                                  ((param_1 - *in_ECX) * fVar1 + (param_2 - in_ECX[1]) * fVar2) /
                                  fVar3);
  }
  else {
    fVar4 = (float10)0;
  }
  return (float10)(float)fVar4;
}

