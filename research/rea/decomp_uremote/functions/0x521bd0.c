// rea decompile_all
// name: FUN_00521bd0
// address: 0x521bd0
// body: available
// range: 0x521bd0-0x521c64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521bd0(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  puVar2 = local_20;
  (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98))
            (puVar2,local_14);
  FUN_00503b30(puVar2);
  for (local_8 = FUN_00512850(); local_8 != 0; local_8 = FUN_00512890(local_8)) {
    cVar1 = FUN_005034a0(local_14);
    if (cVar1 != '\0') {
      *(undefined1 *)(local_8 + 0x1a) = 1;
    }
  }
  FUN_00522210();
  return;
}

