// rea decompile_all
// name: FUN_004105b0
// address: 0x4105b0
// body: available
// range: 0x4105b0-0x4105fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004105b0(void)

{
  int iVar1;
  short *in_ECX;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (in_ECX != (short *)0x0) {
    iVar4 = (int)in_ECX[1];
    iVar3 = (int)*in_ECX;
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        return 6;
      }
      if (iVar3 < 1) {
        return 6;
      }
      iVar6 = 0;
      iVar1 = -1;
      if (0 < iVar3) {
        psVar2 = *(short **)(in_ECX + 6);
        iVar5 = -1;
        do {
          iVar1 = (int)*psVar2;
          if (iVar1 <= iVar5) {
            return 6;
          }
          if (iVar4 <= iVar1) {
            return 6;
          }
          iVar6 = iVar6 + 1;
          psVar2 = psVar2 + 1;
          iVar5 = iVar1;
        } while (iVar6 < iVar3);
      }
      iVar3 = iVar1 - (iVar4 + -1);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 6;
}

