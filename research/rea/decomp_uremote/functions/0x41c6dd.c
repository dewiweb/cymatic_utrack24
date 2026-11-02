// rea decompile_all
// name: FUN_0041c6dd
// address: 0x41c6dd
// body: available
// range: 0x41c6dd-0x41c730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c6dd(void)

{
  uint uVar1;
  uint *in_EAX;
  byte *pbVar2;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar1 = *in_EAX;
  pbVar2 = (byte *)in_EAX[2];
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  if (uVar1 != 0) {
    do {
      if (local_8 == 0) {
        local_10 = (uint)*pbVar2;
        pbVar2 = pbVar2 + 1;
        local_8 = 0x80;
      }
      if ((local_10 & local_8) != 0) {
        FUN_0041c67c();
      }
      local_8 = (int)local_8 >> 1;
      local_c = local_c + 1;
    } while (local_c < uVar1);
  }
  return;
}

