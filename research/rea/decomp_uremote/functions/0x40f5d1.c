// rea decompile_all
// name: FUN_0040f5d1
// address: 0x40f5d1
// body: available
// range: 0x40f5d1-0x40f609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040f5d1(void)

{
  code *pcVar1;
  int in_EAX;
  undefined4 uVar2;
  int in_ECX;
  
  if ((in_ECX == 0) || ((*(byte *)(in_ECX + 8) & 2) == 0)) {
    return 0x23;
  }
  if ((-1 < in_EAX) && (in_EAX < *(int *)(in_ECX + 0x1c))) {
    pcVar1 = *(code **)(*(int *)(*(int *)(in_ECX + 0x60) + 0xc) + 100);
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(*(undefined4 *)(in_ECX + 0x58));
      return uVar2;
    }
    FUN_0040f38d();
    return 0;
  }
  return 6;
}

