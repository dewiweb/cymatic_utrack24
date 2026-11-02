// rea decompile_all
// name: FUN_00460791
// address: 0x460791
// body: available
// range: 0x460791-0x4607e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00460791(void)

{
  byte bVar1;
  undefined4 *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)*in_EAX;
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar4 = 0x7f;
    uVar3 = 0x40;
    iVar6 = 0;
    if ((bVar1 & 0x40) != 0) {
      do {
        if (uVar3 < 9) break;
        uVar4 = uVar4 >> 1;
        uVar3 = uVar3 >> 1;
        iVar6 = iVar6 + 1;
      } while ((uVar2 & uVar3) != 0);
    }
    iVar5 = 1;
    uVar2 = uVar2 & uVar4;
    if (0 < iVar6) {
      do {
        bVar1 = ((byte *)*in_EAX)[iVar5];
        if ((bVar1 & 0xc0) != 0x80) {
          return uVar2;
        }
        uVar2 = bVar1 & 0x3f | uVar2 << 6;
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar6);
    }
  }
  return uVar2;
}

