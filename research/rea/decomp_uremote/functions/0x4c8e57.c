// rea decompile_all
// name: FUN_004c8e57
// address: 0x4c8e57
// body: available
// range: 0x4c8e57-0x4c8e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8e57(int *param_1)

{
  char cVar1;
  undefined1 local_2c [24];
  undefined1 local_14 [16];
  
  cVar1 = FUN_004a4daa();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb8))(local_14);
    FUN_0047caee(&stack0x00000008,local_2c);
    FUN_004c0cff();
  }
  return;
}

