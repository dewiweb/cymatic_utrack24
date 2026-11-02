// rea decompile_all
// name: FUN_0052f620
// address: 0x52f620
// body: available
// range: 0x52f620-0x52f6a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052f620(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_9;
  
  if (*(short *)(in_ECX + 0x4c) == 0) {
    uVar1 = 2;
  }
  else {
    *(ushort *)(in_ECX + 0x4c) = *(ushort *)(in_ECX + 0x4c) | 0x20;
    if (param_1 == '\0') {
      *(byte *)(in_ECX + 0x50) = *(byte *)(in_ECX + 0x50) & 0x7f;
      local_9 = *(undefined1 *)(in_ECX + 0x50);
    }
    else {
      *(byte *)(in_ECX + 0x50) = *(byte *)(in_ECX + 0x50) | 0x80;
      local_9 = *(undefined1 *)(in_ECX + 0x50);
    }
    *(undefined1 *)(in_ECX + 0x50) = local_9;
    *(undefined1 *)(in_ECX + 0x51) = 1;
    uVar1 = 0;
  }
  return uVar1;
}

