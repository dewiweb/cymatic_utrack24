// rea decompile_all
// name: FUN_00565130
// address: 0x565130
// body: available
// range: 0x565130-0x5651aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00565130(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = 0x27;
  iVar2 = FUN_0052c9b0(param_1);
  if (iVar2 != 0) {
    sVar1 = FUN_005446e0();
    if (sVar1 == 0x1004) {
      local_c = FUN_005a6bf0(param_2,param_3,param_4);
    }
    FUN_00544620();
  }
  return local_c;
}

