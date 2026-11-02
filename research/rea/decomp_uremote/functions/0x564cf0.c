// rea decompile_all
// name: FUN_00564cf0
// address: 0x564cf0
// body: available
// range: 0x564cf0-0x564d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564cf0(char param_1)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0054f6b0();
  for (local_8 = FUN_0056a060(); local_8 != 0; local_8 = FUN_0056a0a0(local_8)) {
    FUN_0059f4e0();
  }
  if (param_1 != '\0') {
    for (local_c = *(int *)(in_ECX + -0x70); local_c != 0; local_c = *(int *)(local_c + 0x120)) {
      (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0xc)) + 0x148))(1);
    }
  }
  FUN_0054f6f0();
  return;
}

