// rea decompile_all
// name: FUN_00513490
// address: 0x513490
// body: available
// range: 0x513490-0x5134ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513490(undefined4 *param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  FUN_00504c70();
  local_8 = &local_1c;
  FUN_00507c90(&local_8);
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  param_1[3] = local_10;
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

