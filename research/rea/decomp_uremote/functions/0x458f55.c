// rea decompile_all
// name: FUN_00458f55
// address: 0x458f55
// body: available
// range: 0x458f55-0x458fea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458f55(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_0045f6ee();
  if (cVar1 != '\0') {
    cVar1 = FUN_0045f710();
    if (cVar1 == '\0') {
      if (*(int *)(in_ECX + 0x3f8) == 1) {
        *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(in_ECX + 0xb4);
        FUN_0045d259(*(undefined4 *)(in_ECX + 0xb4));
        if (*(int *)(in_ECX + 0x410) == 1) {
          FUN_00456f0c();
        }
        if (*(int *)(in_ECX + 0x410) == 2) {
          FUN_00456f22();
        }
      }
      *(undefined4 *)(in_ECX + 0x3f8) = 0;
      FUN_004c1613(in_ECX);
    }
  }
  FUN_00457ad5();
  return;
}

