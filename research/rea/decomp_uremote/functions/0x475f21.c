// rea decompile_all
// name: FUN_00475f21
// address: 0x475f21
// body: available
// range: 0x475f21-0x475fbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00475f21(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *extraout_ECX;
  int extraout_ECX_00;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00476314();
  fVar1 = (float)fVar4;
  fVar4 = (float10)FUN_00476330();
  fVar2 = (float)fVar4;
  fVar4 = (float10)FUN_0047634c();
  fVar3 = (float)fVar4;
  *extraout_ECX = fVar3 * 0.114 + fVar1 * 0.2999 + fVar2 * 0.587;
  extraout_ECX[1] = (fVar1 * 0.5957 - fVar2 * 0.2744) - fVar3 * 0.3212;
  extraout_ECX[2] = (fVar1 * 0.2114 - fVar2 * 0.5225) - fVar3 * 0.3113;
  fVar4 = (float10)FUN_00476367();
  *(float *)(extraout_ECX_00 + 0xc) = (float)fVar4;
  return extraout_ECX_00;
}

