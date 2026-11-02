// rea decompile_all
// name: FUN_0042c1f4
// address: 0x42c1f4
// body: available
// range: 0x42c1f4-0x42c23c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c1f4(void)

{
  uint uVar1;
  int in_ECX;
  uint *in_EDX;
  uint uVar2;
  
  uVar1 = *in_EDX;
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x23;
  }
  if (((uVar1 & 2) != 0) && (*(char *)(in_ECX + 0x119) != '\0')) {
    uVar2 = uVar2 | 0x80;
  }
  if (((uVar1 & 4) != 0) && (*(char *)(in_ECX + 0x11a) != '\0')) {
    uVar2 = uVar2 | 0x100;
  }
  if (((uVar1 & 0x20) != 0) && (*(char *)(in_ECX + 0x25c) != '\0')) {
    uVar2 = uVar2 | 0x1000;
  }
  *in_EDX = uVar2;
  return;
}

