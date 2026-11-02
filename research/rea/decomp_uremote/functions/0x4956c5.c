// rea decompile_all
// name: FUN_004956c5
// address: 0x4956c5
// body: available
// range: 0x4956c5-0x4956f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004956c5(void)

{
  undefined1 uVar1;
  int in_EAX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  
  if ((*(char *)(unaff_ESI + 9) == '\b') && (*(char *)(unaff_ESI + 8) != '\x03')) {
    puVar2 = (undefined1 *)(in_EAX + *(int *)(unaff_ESI + 4));
    puVar3 = puVar2 + *(int *)(unaff_ESI + 4);
    while (puVar2 < puVar3) {
      puVar2 = puVar2 + -1;
      uVar1 = *puVar2;
      puVar3[-1] = uVar1;
      puVar3 = puVar3 + -2;
      *puVar3 = uVar1;
    }
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) << 1;
    *(undefined1 *)(unaff_ESI + 9) = 0x10;
    *(char *)(unaff_ESI + 0xb) = *(char *)(unaff_ESI + 10) << 4;
  }
  return;
}

