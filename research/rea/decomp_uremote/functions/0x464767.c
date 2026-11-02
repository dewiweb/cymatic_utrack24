// rea decompile_all
// name: FUN_00464767
// address: 0x464767
// body: available
// range: 0x464767-0x46479e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464767(void)

{
  int iVar1;
  int *in_ECX;
  undefined1 local_10 [4];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*in_ECX + 0xc))(local_10,8);
  if (iVar1 != 8) {
    local_c = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,local_c);
  return;
}

