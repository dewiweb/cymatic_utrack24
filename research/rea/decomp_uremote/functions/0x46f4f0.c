// rea decompile_all
// name: FUN_0046f4f0
// address: 0x46f4f0
// body: available
// range: 0x46f4f0-0x46f54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f4f0(void)

{
  char in_AL;
  uint in_ECX;
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined1 *unaff_ESI;
  
  *unaff_ESI = 0x25;
  puVar1 = unaff_ESI + 1;
  if ((in_ECX & 0x20) != 0) {
    *puVar1 = 0x2b;
    puVar1 = unaff_ESI + 2;
  }
  if ((in_ECX & 0x10) != 0) {
    *puVar1 = 0x23;
    puVar1 = puVar1 + 1;
  }
  *puVar1 = 0x2e;
  puVar1[1] = 0x2a;
  pcVar2 = puVar1 + 2;
  if (in_AL != '\0') {
    *pcVar2 = in_AL;
    pcVar2 = puVar1 + 3;
  }
  uVar4 = in_ECX & 0x3000;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *pcVar2 = cVar3;
  pcVar2[1] = '\0';
  return;
}

