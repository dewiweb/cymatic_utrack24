// rea decompile_all
// name: FUN_0040832d
// address: 0x40832d
// body: available
// range: 0x40832d-0x4083c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040832d(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *in_ECX;
  uint uVar2;
  
  uVar2 = (uint)*in_ECX;
  if (uVar2 == 0x1c) {
    if (in_ECX + 3 <= in_EAX) {
      bVar1 = in_ECX[2];
      uVar2 = (uint)(short)((ushort)in_ECX[1] << 8);
LAB_00408376:
      return uVar2 | bVar1;
    }
  }
  else if (uVar2 == 0x1d) {
    if (in_ECX + 5 <= in_EAX) {
      bVar1 = in_ECX[4];
      uVar2 = (uint)CONCAT21(CONCAT11(in_ECX[1],in_ECX[2]),in_ECX[3]) << 8;
      goto LAB_00408376;
    }
  }
  else {
    if (uVar2 < 0xf7) {
      return uVar2 - 0x8b;
    }
    if (uVar2 < 0xfb) {
      if (in_ECX + 2 <= in_EAX) {
        return uVar2 * 0x100 + -0xf694 + (uint)in_ECX[1];
      }
    }
    else if (in_ECX + 2 <= in_EAX) {
      return (uVar2 * -0x100 + 0xfa94) - (uint)in_ECX[1];
    }
  }
  return 0;
}

