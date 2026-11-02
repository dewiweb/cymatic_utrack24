// rea decompile_all
// name: FUN_005790c0
// address: 0x5790c0
// body: available
// range: 0x5790c0-0x57912e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005790c0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 local_10;
  
  FUN_0054f6b0();
  iVar1 = FUN_005a22f0(param_1,param_2,param_3);
  FUN_0054f6f0();
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc);
  }
  return local_10;
}

