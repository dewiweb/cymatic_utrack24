// rea decompile_all
// name: FUN_0044eba8
// address: 0x44eba8
// body: available
// range: 0x44eba8-0x44ec03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0044eba8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *unaff_EDI;
  uint local_8;
  
  bVar1 = *(byte *)*unaff_EDI;
  pbVar5 = (byte *)*unaff_EDI + 1;
  *unaff_EDI = (int)pbVar5;
  uVar2 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar3 = 0x40;
    iVar4 = 0;
    local_8 = 0x7f;
    if ((bVar1 & 0x40) != 0) {
      do {
        if (uVar3 < 9) break;
        local_8 = local_8 >> 1;
        uVar3 = uVar3 >> 1;
        iVar4 = iVar4 + 1;
      } while ((uVar2 & uVar3) != 0);
    }
    uVar2 = uVar2 & local_8;
    while ((iVar4 = iVar4 + -1, -1 < iVar4 && (bVar1 = *pbVar5, (bVar1 & 0xc0) == 0x80))) {
      pbVar5 = pbVar5 + 1;
      uVar2 = bVar1 & 0x3f | uVar2 << 6;
      *unaff_EDI = (int)pbVar5;
    }
  }
  return uVar2;
}

