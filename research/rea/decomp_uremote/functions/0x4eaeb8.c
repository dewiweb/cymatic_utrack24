// rea decompile_all
// name: FUN_004eaeb8
// address: 0x4eaeb8
// body: available
// range: 0x4eaeb8-0x4eaf21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eaeb8(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int extraout_ECX;
  byte extraout_DL;
  
  FUN_004e9764();
  FUN_0047479c();
  if (((char)*(byte *)(in_ECX + 0x94) < '\0') || ((*(byte *)(in_ECX + 0x94) & 0x20) == 0)) {
    cVar1 = FUN_004c6d4a();
    if ((cVar1 != '\0') &&
       (((extraout_DL & 0x10) == 0 || ((*(uint *)(extraout_ECX + 0x10) >> 5 & 1) == 0)))) {
      uVar2 = FUN_004ea395(*(undefined4 *)(extraout_ECX + 8),*(undefined4 *)(extraout_ECX + 0xc));
      FUN_004e9e7c(uVar2);
    }
  }
  *(byte *)(in_ECX + 0x94) = *(byte *)(in_ECX + 0x94) | 0x80;
  return;
}

