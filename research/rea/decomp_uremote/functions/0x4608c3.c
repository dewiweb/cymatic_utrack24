// rea decompile_all
// name: FUN_004608c3
// address: 0x4608c3
// body: available
// range: 0x4608c3-0x460925 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004608c3(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *unaff_ESI;
  int iVar4;
  
  iVar4 = 1;
  if (0x7ff < param_1) {
    iVar4 = 2;
    if (0xffff < param_1) {
      iVar4 = 3;
    }
  }
  *(byte *)*unaff_ESI = (byte)(param_1 >> (char)iVar4 * '\x06') | -1 << (7U - (char)iVar4 & 0x1f);
  *unaff_ESI = *unaff_ESI + 1;
  iVar4 = iVar4 + -1;
  pbVar1 = (byte *)*unaff_ESI;
  if (-1 < iVar4) {
    iVar3 = iVar4 * 6;
    do {
      bVar2 = (byte)iVar3;
      iVar3 = iVar3 + -6;
      *pbVar1 = (byte)(param_1 >> (bVar2 & 0x1f)) & 0x3f | 0x80;
      *unaff_ESI = *unaff_ESI + 1;
      pbVar1 = (byte *)*unaff_ESI;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

