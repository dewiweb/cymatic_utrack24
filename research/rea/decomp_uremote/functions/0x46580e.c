// rea decompile_all
// name: FUN_0046580e
// address: 0x46580e
// body: available
// range: 0x46580e-0x465857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046580e(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_40 [52];
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_00470ab0(param_1,local_40,param_2);
  FUN_00465710(uVar1);
  FUN_004651fd();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

