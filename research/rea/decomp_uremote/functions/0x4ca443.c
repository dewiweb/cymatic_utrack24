// rea decompile_all
// name: FUN_004ca443
// address: 0x4ca443
// body: available
// range: 0x4ca443-0x4ca483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ca443(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  cVar1 = FUN_004c0da9(param_1,param_2);
  if (((cVar1 != '\0') && (*(int *)(in_ECX + 0x78) != 0)) &&
     (iVar2 = FUN_0047e8f9(param_1,param_2), 0x7e < *(byte *)(iVar2 + 3))) {
    return 1;
  }
  return 0;
}

