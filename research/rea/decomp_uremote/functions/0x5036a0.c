// rea decompile_all
// name: FUN_005036a0
// address: 0x5036a0
// body: available
// range: 0x5036a0-0x50374d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005036a0(ushort *param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 < *param_2) {
    uVar1 = 0xff;
  }
  else if (*param_2 < *param_1) {
    uVar1 = 1;
  }
  else if (param_1[1] < param_2[1]) {
    uVar1 = 0xff;
  }
  else if (param_2[1] < param_1[1]) {
    uVar1 = 1;
  }
  else if (*(uint *)(param_1 + 2) < *(uint *)(param_2 + 2)) {
    uVar1 = 0xff;
  }
  else if (*(uint *)(param_2 + 2) < *(uint *)(param_1 + 2)) {
    uVar1 = 1;
  }
  else if (param_1[4] < param_2[4]) {
    uVar1 = 0xff;
  }
  else if (param_2[4] < param_1[4]) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

