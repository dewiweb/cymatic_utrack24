// rea decompile_all
// name: FUN_004607e3
// address: 0x4607e3
// body: available
// range: 0x4607e3-0x460809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004607e3(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_EAX;
  char *pcVar3;
  uint uVar4;
  
  cVar1 = *(char *)*in_EAX;
  pcVar3 = (char *)*in_EAX + 1;
  *in_EAX = pcVar3;
  if (cVar1 < '\0') {
    uVar4 = 0x40;
    uVar2 = (int)cVar1 & 0x40;
    while ((uVar2 != 0 && (8 < uVar4))) {
      pcVar3 = pcVar3 + 1;
      uVar4 = uVar4 >> 1;
      *in_EAX = pcVar3;
      uVar2 = uVar4 & (int)cVar1;
    }
  }
  return;
}

