// rea decompile_all
// name: FUN_00423096
// address: 0x423096
// body: available
// range: 0x423096-0x4230cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423096(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_EDX;
  byte *pbVar4;
  
  iVar2 = 0;
  pbVar4 = in_EDX + 7;
  for (iVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]); iVar3 != 0;
      iVar3 = iVar3 + -1) {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 4;
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}

