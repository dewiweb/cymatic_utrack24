// rea decompile_all
// name: FUN_0040e3ca
// address: 0x40e3ca
// body: available
// range: 0x40e3ca-0x40e402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040e3ca(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  
  if (in_EAX == 0) {
    return 6;
  }
  local_18 = 0;
  local_20 = param_2;
  local_28[0] = 1;
  uVar1 = FUN_0040ed53(param_1,local_28,0,param_3);
  return uVar1;
}

