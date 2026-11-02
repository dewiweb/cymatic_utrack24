// rea decompile_all
// name: FUN_004a92ac
// address: 0x4a92ac
// body: available
// range: 0x4a92ac-0x4a9341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a92ac(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  float *in_EAX;
  int in_ECX;
  float local_8;
  
  local_8 = *in_EAX;
  uVar1 = *param_1;
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) != 0) {
      fVar2 = in_EAX[2] - *(float *)(in_ECX + 8);
      goto LAB_004a92f8;
    }
  }
  else {
    fVar2 = (in_EAX[2] - *(float *)(in_ECX + 8)) * 0.5;
LAB_004a92f8:
    local_8 = fVar2 + local_8;
  }
  if ((uVar1 & 0x20) == 0) {
    param_1 = (uint *)in_EAX[1];
    if ((uVar1 & 0x10) == 0) goto LAB_004a9324;
    fVar2 = in_EAX[3] - *(float *)(in_ECX + 0xc);
  }
  else {
    fVar2 = (in_EAX[3] - *(float *)(in_ECX + 0xc)) * 0.5;
  }
  param_1 = (uint *)(fVar2 + in_EAX[1]);
LAB_004a9324:
  FUN_004a9946(local_8,param_1);
  return param_2;
}

