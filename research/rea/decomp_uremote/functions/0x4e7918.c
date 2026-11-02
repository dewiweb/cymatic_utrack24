// rea decompile_all
// name: FUN_004e7918
// address: 0x4e7918
// body: available
// range: 0x4e7918-0x4e798b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7918(undefined4 param_1,float *param_2)

{
  bool bVar1;
  int in_ECX;
  
  bVar1 = false;
  if ((*param_2 != 0.0) && ((*(byte *)(*(int *)(in_ECX + 0x7c) + 0x278) & 2) != 0)) {
    bVar1 = true;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x210) + 0x20))(param_1,param_2);
  }
  if ((param_2[1] != 0.0) && ((*(byte *)(*(int *)(in_ECX + 0x7c) + 0x178) & 2) != 0)) {
    bVar1 = true;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x110) + 0x20))(param_1,param_2);
  }
  if (!bVar1) {
    FUN_004c2091(param_1,param_2);
  }
  return;
}

