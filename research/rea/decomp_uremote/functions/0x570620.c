// rea decompile_all
// name: FUN_00570620
// address: 0x570620
// body: available
// range: 0x570620-0x570671 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_00570620(void)

{
  int iVar1;
  undefined2 local_8;
  
  local_8 = 0;
  for (iVar1 = FUN_005740c0(); iVar1 != 0; iVar1 = FUN_00574150(iVar1)) {
    local_8 = local_8 + *(short *)(iVar1 + 0x6c);
  }
  return local_8;
}

