// rea decompile_all
// name: FUN_00526570
// address: 0x526570
// body: available
// range: 0x526570-0x526651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526570(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined *local_24;
  int local_8;
  
  local_8 = FUN_005270a0();
  while (local_8 != 0) {
    (*(code *)**(undefined4 **)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)))();
    if (*(int *)(local_8 + 0x118) == 0) {
      local_24 = &DAT_0095c848;
    }
    else {
      local_24 = (undefined *)(*(int *)(local_8 + 0x118) + 0x48);
    }
    FUN_005033e0(local_24);
    cVar1 = FUN_005034a0(param_1);
    if (cVar1 != '\0') {
      FUN_00562eb0(0,3);
    }
    iVar2 = FUN_005270f0(local_8);
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
    local_8 = iVar2;
  }
  return;
}

