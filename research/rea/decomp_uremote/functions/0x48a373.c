// rea decompile_all
// name: FUN_0048a373
// address: 0x48a373
// body: available
// range: 0x48a373-0x48a3ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a373(char param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_EDI + 4))();
  *(undefined4 **)(unaff_EDI + 0x18c) = puVar1;
  *puVar1 = &LAB_0048a14c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (*(char *)(unaff_EDI + 0x4a) != '\0') {
    uVar2 = *(undefined4 *)(unaff_EDI + 0x114);
    puVar1[4] = uVar2;
    if (param_1 == '\0') {
      uVar2 = (**(code **)(*(int *)(unaff_EDI + 4) + 8))();
      puVar1[3] = uVar2;
    }
    else {
      FUN_0048e6c7(uVar2);
      uVar2 = (**(code **)(*(int *)(unaff_EDI + 4) + 0x10))();
      puVar1[2] = uVar2;
    }
  }
  return;
}

