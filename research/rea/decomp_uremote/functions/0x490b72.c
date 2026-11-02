// rea decompile_all
// name: FUN_00490b72
// address: 0x490b72
// body: available
// range: 0x490b72-0x490b8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x490b8a to 0x490b14 FUN_00490b14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_00490b72(undefined4 param_1)

{
  ushort uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x10c) == '\b') {
    uVar1 = FUN_00490ab6(param_1);
    return uVar1 & 0xff;
  }
  uVar1 = FUN_00490b14();
  return uVar1;
}

