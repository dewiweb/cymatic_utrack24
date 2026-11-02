// rea decompile_all
// name: FUN_0041b1e5
// address: 0x41b1e5
// body: available
// range: 0x41b1e5-0x41b269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b1e5(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *unaff_ESI;
  undefined4 *unaff_EDI;
  bool bVar5;
  
  pbVar4 = (byte *)*unaff_EDI;
  iVar3 = 0;
  bVar5 = false;
  if ((pbVar4 < unaff_ESI) && (param_1 - 2U < 0x23)) {
    bVar1 = *pbVar4;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      bVar5 = bVar1 == 0x2d;
      pbVar4 = pbVar4 + 1;
      if (pbVar4 == unaff_ESI) {
        return 0;
      }
    }
    while (((((((pbVar4 < unaff_ESI && (bVar1 = *pbVar4, bVar1 != 0x20)) && (bVar1 != 0xd)) &&
              ((bVar1 != 10 && (bVar1 != 9)))) &&
             ((bVar1 != 0xc && ((bVar1 != 0 && (bVar1 < 0x80)))))) &&
            (cVar2 = (&DAT_008fc4e8)[bVar1 & 0x7f], -1 < cVar2)) && (cVar2 < param_1))) {
      iVar3 = iVar3 * param_1 + (int)cVar2;
      pbVar4 = pbVar4 + 1;
    }
    if (bVar5) {
      iVar3 = -iVar3;
    }
    *unaff_EDI = pbVar4;
    return iVar3;
  }
  return 0;
}

