// rea decompile_all
// name: FUN_0043a5ca
// address: 0x43a5ca
// body: available
// range: 0x43a5ca-0x43a676 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a5ca(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float *unaff_ESI;
  
  fVar1 = (float)*(int *)(*(int *)(in_ECX + 4) + 0x18);
  param_1 = fVar1 * param_1 - *(float *)(in_ECX + 0x18) * 0.5;
  if (0.0 <= param_1) {
    if (fVar1 < *(float *)(in_ECX + 0x18) + param_1) {
      param_1 = fVar1 - *(float *)(in_ECX + 0x18);
    }
  }
  else {
    param_1 = 0.0;
  }
  fVar2 = (float)*(int *)(*(int *)(in_ECX + 4) + 0x1c);
  fVar1 = fVar2 * param_2 - *(float *)(in_ECX + 0x1c) * 0.5;
  param_2 = 0.0;
  if ((0.0 <= fVar1) && (param_2 = fVar1, fVar2 < *(float *)(in_ECX + 0x1c) + fVar1)) {
    param_2 = fVar2 - *(float *)(in_ECX + 0x1c);
  }
  *unaff_ESI = param_1;
  unaff_ESI[1] = param_2;
  unaff_ESI[2] = *(float *)(in_ECX + 0x18);
  unaff_ESI[3] = *(float *)(in_ECX + 0x1c);
  return;
}

