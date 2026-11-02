// rea decompile_all
// name: FUN_004a8f39
// address: 0x4a8f39
// body: available
// range: 0x4a8f39-0x4a8f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8f39(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  fVar1 = *unaff_EDI;
  fVar2 = *unaff_ESI;
  *unaff_EDI = *param_1 * fVar1 + *in_EDX * param_1[1] + param_1[2];
  *in_EDX = *in_EDX * param_1[4] + fVar1 * param_1[3] + param_1[5];
  *unaff_ESI = *param_1 * fVar2 + *in_ECX * param_1[1] + param_1[2];
  *in_ECX = fVar2 * param_1[3] + param_1[4] * *in_ECX + param_1[5];
  return;
}

