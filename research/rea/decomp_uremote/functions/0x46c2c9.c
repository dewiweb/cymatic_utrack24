// rea decompile_all
// name: FUN_0046c2c9
// address: 0x46c2c9
// body: available
// range: 0x46c2c9-0x46c329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c2c9(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_0046bd67();
  FUN_0046bd67();
  FUN_0046bb7c(in_EAX + 0xb30);
  iVar1 = 0x12;
  do {
    if (*(short *)(in_EAX + 0xa7e + (uint)(byte)(&DAT_005ffc54)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(in_EAX + 0x16a8) = *(int *)(in_EAX + 0x16a8) + iVar1 * 3 + 0x11;
  return;
}

