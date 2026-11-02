// rea decompile_all
// name: FUN_0050a570
// address: 0x50a570
// body: available
// range: 0x50a570-0x50a62c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0050a570(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xac) == '\0') {
    cVar1 = FUN_0052eb20(in_ECX,1,in_ECX + 0x3b8,"CHAI Thread",*(undefined4 *)(in_ECX + 0x70));
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0xa0) = 0xfa;
      FUN_0052eb90();
      FUN_005173b0();
      FUN_00515ad0(in_ECX);
      FUN_0050e7f0(1);
      *(undefined4 *)(in_ECX + 300) = 0;
      *(undefined4 *)(in_ECX + 0x130) = 0;
      *(undefined1 *)(in_ECX + 0xac) = 1;
    }
  }
  else {
    cVar1 = '\x01';
  }
  return cVar1;
}

