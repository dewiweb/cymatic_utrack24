// rea decompile_all
// name: FUN_0046f991
// address: 0x46f991
// body: available
// range: 0x46f991-0x46f9f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f991(void)

{
  char *pcVar1;
  byte bVar2;
  uint in_EDX;
  char *unaff_EBX;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = 0x25;
  pcVar1 = unaff_EDI + 1;
  if ((in_EDX & 0x20) != 0) {
    *pcVar1 = '+';
    pcVar1 = unaff_EDI + 2;
  }
  if ((in_EDX & 8) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*unaff_EBX == 'L') {
    *pcVar1 = 'I';
    pcVar1[1] = '6';
    pcVar1 = pcVar1 + 2;
    *pcVar1 = '4';
  }
  else {
    *pcVar1 = *unaff_EBX;
  }
  if ((in_EDX & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((in_EDX & 0xe00) == 0x800) {
    bVar2 = ~((char)in_EDX << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = unaff_EBX[1];
  }
  pcVar1[1] = bVar2;
  pcVar1[2] = '\0';
  return;
}

