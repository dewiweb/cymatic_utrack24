// rea decompile_all
// name: FUN_00526450
// address: 0x526450
// body: available
// range: 0x526450-0x526563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00526450(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_c;
  undefined1 local_5;
  
  local_5 = 0;
  local_c = FUN_005270a0();
  while (local_c != 0) {
    (*(code *)**(undefined4 **)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 8)))();
    cVar1 = FUN_0055b830(param_1);
    if (cVar1 != '\0') {
      FUN_00560e50();
      FUN_00569780(param_1);
      FUN_00569780(param_1);
      local_5 = 1;
    }
    cVar1 = FUN_005797a0(param_1);
    if (cVar1 != '\0') {
      FUN_00560ea0();
      local_5 = 1;
    }
    FUN_00570740(param_1);
    iVar2 = FUN_005270f0(local_c);
    (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 8)) + 4))();
    local_c = iVar2;
  }
  return local_5;
}

