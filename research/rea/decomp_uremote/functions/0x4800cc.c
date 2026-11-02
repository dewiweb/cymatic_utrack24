// rea decompile_all
// name: FUN_004800cc
// address: 0x4800cc
// body: available
// range: 0x4800cc-0x480171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004800cc(char param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  int local_8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_EDI + 4))();
  *(undefined4 **)(unaff_EDI + 0x148) = puVar1;
  *puVar1 = FUN_0047fb0e;
  if (param_1 == '\0') {
    iVar3 = (**(code **)(*(int *)(unaff_EDI + 4) + 4))();
    piVar4 = puVar1 + 6;
    iVar5 = 10;
    do {
      *piVar4 = iVar3;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 0x80;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar1[0x10] = 0;
  }
  else {
    local_8 = 0;
    if (0 < *(int *)(unaff_EDI + 0x3c)) {
      puVar6 = (undefined4 *)(*(int *)(unaff_EDI + 0x44) + 0xc);
      _param_1 = puVar1 + 0x10;
      do {
        uVar2 = FUN_0048e6c7(*puVar6);
        FUN_0048e6c7(uVar2);
        uVar2 = (**(code **)(*(int *)(unaff_EDI + 4) + 0x14))();
        local_8 = local_8 + 1;
        *_param_1 = uVar2;
        puVar6 = puVar6 + 0x15;
        _param_1 = _param_1 + 1;
      } while (local_8 < *(int *)(unaff_EDI + 0x3c));
    }
  }
  return;
}

