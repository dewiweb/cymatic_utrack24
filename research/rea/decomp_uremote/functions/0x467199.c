// rea decompile_all
// name: FUN_00467199
// address: 0x467199
// body: available
// range: 0x467199-0x4671f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00467199(undefined4 param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[2];
  iVar4 = 0;
  if (param_2 == '\0') {
    if (0 < iVar1) {
      do {
        iVar3 = FUN_0047025e(&param_1,*(undefined4 *)(*unaff_EDI + iVar4 * 4));
        if (iVar3 == 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  else if (0 < iVar1) {
    do {
      cVar2 = FUN_004659e3(param_1);
      if (cVar2 != '\0') {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return -1;
}

