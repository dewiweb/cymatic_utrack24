// rea decompile_all
// name: FUN_005035b0
// address: 0x5035b0
// body: available
// range: 0x5035b0-0x503649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005035b0(ushort *param_1)

{
  uint uVar1;
  ushort *in_ECX;
  
  if (*param_1 < *in_ECX) {
    uVar1 = CONCAT31((uint3)(byte)(*param_1 >> 8),1);
  }
  else if (*in_ECX < *param_1) {
    uVar1 = (uint)param_1 & 0xffffff00;
  }
  else if (param_1[1] < in_ECX[1]) {
    uVar1 = CONCAT31((uint3)(byte)(in_ECX[1] >> 8),1);
  }
  else if (in_ECX[1] < param_1[1]) {
    uVar1 = (uint)(byte)(param_1[1] >> 8) << 8;
  }
  else if (*(uint *)(param_1 + 2) < *(uint *)(in_ECX + 2)) {
    uVar1 = CONCAT31((int3)(*(uint *)(in_ECX + 2) >> 8),1);
  }
  else if (*(uint *)(in_ECX + 2) < *(uint *)(param_1 + 2)) {
    uVar1 = *(uint *)(in_ECX + 2) & 0xffffff00;
  }
  else {
    uVar1 = (uint)(param_1[4] < in_ECX[4]);
  }
  return uVar1;
}

