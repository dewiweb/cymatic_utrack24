// rea decompile_all
// name: FUN_00483e3e
// address: 0x483e3e
// body: available
// range: 0x483e3e-0x483ecd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483e3e(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 **)(in_EAX + 0x144) = puVar1;
  *puVar1 = &LAB_004839fc;
  if (*(char *)(*(int *)(in_EAX + 0x154) + 8) == '\0') {
    puVar1[1] = FUN_00483a6a;
    local_8 = 0;
    if (0 < *(int *)(in_EAX + 0x3c)) {
      puVar1 = puVar1 + 2;
      do {
        uVar2 = (**(code **)(*(int *)(in_EAX + 4) + 8))();
        local_8 = local_8 + 1;
        *puVar1 = uVar2;
        puVar1 = puVar1 + 1;
      } while (local_8 < *(int *)(in_EAX + 0x3c));
    }
  }
  else {
    puVar1[1] = FUN_00483bb2;
    FUN_00483d36();
  }
  return;
}

