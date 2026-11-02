// rea decompile_all
// name: FUN_004818ee
// address: 0x4818ee
// body: available
// range: 0x4818ee-0x48194d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004818ee(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_ESI + 4))();
  *(undefined4 **)(unaff_ESI + 0x140) = puVar1;
  *puVar1 = &LAB_0048181e;
  if ((*(char *)(unaff_ESI + 0xb0) == '\0') && (iVar3 = 0, 0 < *(int *)(unaff_ESI + 0x3c))) {
    puVar1 = puVar1 + 6;
    do {
      uVar2 = (**(code **)(*(int *)(unaff_ESI + 4) + 8))();
      *puVar1 = uVar2;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 0x3c));
  }
  return;
}

