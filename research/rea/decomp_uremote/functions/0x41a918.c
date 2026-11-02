// rea decompile_all
// name: FUN_0041a918
// address: 0x41a918
// body: available
// range: 0x41a918-0x41a972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041a918(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  if (0 < (int)in_ECX[3]) {
    return 0x3b;
  }
  do {
    pbVar1 = (byte *)*in_ECX;
    if (pbVar1 < (byte *)in_ECX[2]) {
      uVar2 = (uint)*pbVar1;
      *in_ECX = pbVar1 + 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
  } while ((uVar2 == 0x20) || (uVar2 == 9));
  if ((uVar2 == 0xd) || (uVar2 == 10)) {
    in_ECX[3] = 2;
  }
  else {
    if (uVar2 == 0x3b) {
      in_ECX[3] = 1;
      return 0x3b;
    }
    if ((uVar2 == 0xffffffff) || (uVar2 == 0x1a)) {
      in_ECX[3] = 3;
      return uVar2;
    }
  }
  return uVar2;
}

