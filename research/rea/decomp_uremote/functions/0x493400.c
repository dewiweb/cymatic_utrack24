// rea decompile_all
// name: FUN_00493400
// address: 0x493400
// body: available
// range: 0x493400-0x493450 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493400(void)

{
  byte *in_EAX;
  byte *pbVar1;
  int *in_ECX;
  byte *pbVar2;
  
  if (*(char *)((int)in_ECX + 9) == '\x10') {
    pbVar1 = in_EAX + in_ECX[1];
    pbVar2 = in_EAX;
    for (; in_EAX < pbVar1; in_EAX = in_EAX + 2) {
      *pbVar2 = *in_EAX + (char)((((uint)in_EAX[1] - (uint)*in_EAX) + 0x80) * 0xffff >> 0x18);
      pbVar2 = pbVar2 + 1;
    }
    *(undefined1 *)((int)in_ECX + 9) = 8;
    *(byte *)((int)in_ECX + 0xb) = *(byte *)((int)in_ECX + 10) << 3;
    in_ECX[1] = (uint)*(byte *)((int)in_ECX + 10) * *in_ECX;
  }
  return;
}

