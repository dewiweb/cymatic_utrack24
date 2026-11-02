// rea decompile_all
// name: FUN_00423b50
// address: 0x423b50
// body: available
// range: 0x423b50-0x423bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423b50(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  pbVar5 = *(byte **)(param_1 + 0x10);
  iVar2 = FUN_00411976(1,0,&param_1);
  if (param_1 == 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (bVar3 == 0) break;
        if ((bVar3 < 0x20) || (0x7f < bVar3)) {
          bVar3 = 0x3f;
        }
        *(byte *)(uVar4 + iVar2) = bVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    *(undefined1 *)(uVar4 + iVar2) = 0;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

