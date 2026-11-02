// rea decompile_all
// name: FUN_004ca39e
// address: 0x4ca39e
// body: available
// range: 0x4ca39e-0x4ca420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ca39e(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_14;
  
  if (*(int *)(in_ECX + 0x78) != 0) {
    if (0.0 < *(float *)(in_ECX + 0x7c)) {
      local_14 = 0x4ca3c8;
      cVar1 = FUN_00476205();
      if (cVar1 == '\0') {
        local_14 = *(undefined4 *)(in_ECX + 0x7c);
        FUN_0047cdee();
        local_14 = 0;
        FUN_0047d915(param_1,0,0);
      }
    }
    local_14 = 0x4ca3ee;
    cVar1 = FUN_004761fc();
    if (cVar1 == '\0') {
      FUN_00476237(&local_14,*(undefined4 *)(in_ECX + 0x7c));
      FUN_0047cda7();
      local_14 = 1;
      FUN_0047d915(param_1,0,0);
    }
  }
  return;
}

