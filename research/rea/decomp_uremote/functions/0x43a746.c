// rea decompile_all
// name: FUN_0043a746
// address: 0x43a746
// body: available
// range: 0x43a746-0x43a78a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0043a746(double param_1)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)0.5;
  fVar2 = (float10)param_1;
  if (fVar1 <= fVar2) {
    fVar2 = (((float10)*(float *)(in_ECX + 0x24) - (float10)*(float *)(in_ECX + 0x20)) *
             (fVar2 - fVar1) + (float10)*(float *)(in_ECX + 0x20)) * (fVar2 - fVar1) +
            (((float10)*(float *)(in_ECX + 0x20) - (float10)*(float *)(in_ECX + 0x1c)) * fVar1 +
            (float10)*(float *)(in_ECX + 0x1c)) * fVar1;
  }
  else {
    fVar2 = (((float10)*(float *)(in_ECX + 0x20) - (float10)*(float *)(in_ECX + 0x1c)) * fVar2 +
            (float10)*(float *)(in_ECX + 0x1c)) * fVar2;
  }
  return fVar2;
}

