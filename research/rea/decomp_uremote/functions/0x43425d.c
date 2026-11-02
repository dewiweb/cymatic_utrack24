// rea decompile_all
// name: FUN_0043425d
// address: 0x43425d
// body: available
// range: 0x43425d-0x434287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043425d(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00411af4(*(undefined4 *)(param_1 + 0x2c));
  if ((int)uVar1 != 0) {
    FUN_0040f18e((int)((ulonglong)uVar1 >> 0x20));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

