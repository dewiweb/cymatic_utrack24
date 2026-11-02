// rea decompile_all
// name: FUN_00413c8a
// address: 0x413c8a
// body: available
// range: 0x413c8a-0x413cd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00413c8a(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = __setjmp3(param_1 + 0x4e8,0);
  if (iVar1 == 0) {
    local_8 = FUN_00410273(param_1);
    FUN_00413153();
  }
  else {
    local_8 = 0x40;
  }
  return local_8;
}

