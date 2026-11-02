// rea decompile_all
// name: FUN_0041a973
// address: 0x41a973
// body: available
// range: 0x41a973-0x41a9d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041a973(void)

{
  byte *pbVar1;
  int iVar2;
  int *extraout_ECX;
  uint uVar3;
  
  FUN_0041a918();
  if (0 < extraout_ECX[3]) {
    return 0;
  }
  iVar2 = *extraout_ECX + -1;
  while( true ) {
    pbVar1 = (byte *)*extraout_ECX;
    if (pbVar1 < (byte *)extraout_ECX[2]) {
      uVar3 = (uint)*pbVar1;
      *extraout_ECX = (int)(pbVar1 + 1);
    }
    else {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0x20) {
      return iVar2;
    }
    if (uVar3 == 9) {
      return iVar2;
    }
    if ((uVar3 == 0xd) || (uVar3 == 10)) break;
    if (uVar3 == 0x3b) {
      extraout_ECX[3] = 1;
      return iVar2;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) {
      extraout_ECX[3] = 3;
      return iVar2;
    }
  }
  extraout_ECX[3] = 2;
  return iVar2;
}

