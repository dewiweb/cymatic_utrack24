// rea decompile_all
// name: FUN_00408693
// address: 0x408693
// body: available
// range: 0x408693-0x408719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408693(int *param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  int iVar2;
  
  if (*(char *)*in_EAX == '\x1e') {
    iVar1 = FUN_004083c3(in_EAX[1],0,param_1);
  }
  else {
    iVar1 = FUN_0040832d();
    if (iVar1 < 0x8000) {
      *param_1 = 0;
      iVar1 = iVar1 << 0x10;
    }
    else {
      iVar2 = 5;
      do {
        if (iVar1 < *(int *)(&DAT_008fa5d8 + iVar2 * 4)) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      if (iVar1 / *(int *)(&DAT_008fa5d8 + (iVar2 + -5) * 4) < 0x8000) {
        *param_1 = iVar2 + -5;
      }
      else {
        *param_1 = iVar2 + -4;
      }
      iVar1 = FUN_0040d2d8();
    }
  }
  return iVar1;
}

