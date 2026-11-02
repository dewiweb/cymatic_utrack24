// rea decompile_all
// name: FUN_0042bd4b
// address: 0x42bd4b
// body: available
// range: 0x42bd4b-0x42bd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bd4b(void)

{
  int in_EAX;
  byte *pbVar1;
  byte bVar2;
  ushort *in_ECX;
  
  if (*in_ECX < *(ushort *)(in_EAX + 0x2c)) {
    bVar2 = 0xff;
    if (*(short *)(in_EAX + 0x12a) != 0) {
      bVar2 = 0xf7;
    }
    if (*(short *)(in_EAX + 300) != 0) {
      bVar2 = bVar2 & 0xef;
    }
    pbVar1 = (byte *)(*(int *)(in_EAX + 0x3c) + (uint)*in_ECX);
    *pbVar1 = *pbVar1 & bVar2;
  }
  else if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
  }
  return;
}

