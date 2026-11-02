// rea decompile_all
// name: FUN_0043a520
// address: 0x43a520
// body: available
// range: 0x43a520-0x43a5c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a520(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float *in_EDX;
  float local_c;
  float local_8;
  
  local_8 = *(float *)(in_ECX + 8) - *(float *)(in_ECX + 0x18) * 0.5;
  if (0.0 <= local_8) {
    fVar1 = (float)*(int *)(*(int *)(in_ECX + 4) + 0x18);
    if (fVar1 < local_8 + *(float *)(in_ECX + 0x18)) {
      local_8 = fVar1 - *(float *)(in_ECX + 0x18);
    }
  }
  else {
    local_8 = 0.0;
  }
  local_c = 0.0;
  fVar1 = *(float *)(in_ECX + 0xc) - *(float *)(in_ECX + 0x1c) * 0.5;
  if ((0.0 <= fVar1) &&
     (fVar2 = (float)*(int *)(*(int *)(in_ECX + 4) + 0x1c), local_c = fVar1,
     fVar2 < *(float *)(in_ECX + 0x1c) + fVar1)) {
    local_c = fVar2 - *(float *)(in_ECX + 0x1c);
  }
  *in_EDX = local_8;
  in_EDX[1] = local_c;
  in_EDX[2] = *(float *)(in_ECX + 0x18);
  in_EDX[3] = *(float *)(in_ECX + 0x1c);
  return;
}

