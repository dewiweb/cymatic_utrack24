// rea decompile_all
// name: FUN_004e8b32
// address: 0x4e8b32
// body: available
// range: 0x4e8b32-0x4e8b7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e8b32(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  float10 fVar1;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  fVar1 = (float10)FUN_004e8de3(param_2);
  local_c = (float)fVar1;
  fVar1 = (float10)FUN_004e8de3(param_3);
  local_10 = (float)fVar1;
  local_20 = local_c;
  local_1c = *(undefined4 *)(in_EAX + 4);
  local_18 = local_10 - local_c;
  local_14 = *(undefined4 *)(in_EAX + 8);
  FUN_004f7660(&local_20);
  return;
}

