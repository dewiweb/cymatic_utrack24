// rea decompile_all
// name: FUN_0041e1e0
// address: 0x41e1e0
// body: available
// range: 0x41e1e0-0x41e27a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041e1e0(void)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int unaff_EDI;
  
  uVar1 = *(ushort *)(unaff_EDI + 0x54);
  iVar2 = *(int *)(unaff_EDI + 0x5c);
  if ((uVar1 < 2) || (iVar2 == 0)) {
    *(undefined4 *)(unaff_EDI + 0x5c) = 0;
  }
  else {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (uVar1 < 2) {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      else {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10) * 4;
      }
      if ((*(byte *)(iVar2 + 0xc) & 8) == 0) {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x10) * 4 + -4;
        *(int *)(iVar2 + 0x14) = (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10)) + 1;
      }
      cVar3 = FUN_0041e17c();
      if ((cVar3 != '\0') || (cVar3 = FUN_0041e17c(), cVar3 != '\0')) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return 0;
}

