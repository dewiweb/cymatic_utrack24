// rea decompile_all
// name: FUN_0041c660
// address: 0x41c660
// body: available
// range: 0x41c660-0x41c67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c660(void)

{
  int *in_EAX;
  uint *puVar1;
  int iVar2;
  
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    puVar1 = (uint *)(in_EAX[2] + 0x10);
    do {
      *puVar1 = *puVar1 & 0xfffffffb;
      puVar1[2] = 0xffffffff;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 7;
    } while (iVar2 != 0);
  }
  return;
}

