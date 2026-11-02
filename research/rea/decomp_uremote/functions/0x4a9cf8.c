// rea decompile_all
// name: FUN_004a9cf8
// address: 0x4a9cf8
// body: available
// range: 0x4a9cf8-0x4a9d60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a9cf8(int param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < in_EAX) {
    do {
      iVar1 = FUN_004aacc3(param_2,*(undefined4 *)(param_1 + iVar4 * 4));
      if (iVar1 == 0) {
LAB_004a9d59:
        return iVar4 + 1;
      }
      iVar3 = iVar4 + in_EAX >> 1;
      iVar1 = FUN_004aacc3(param_2,*(undefined4 *)(param_1 + iVar3 * 4));
      if (iVar3 == iVar4) {
        if (iVar1 < 0) {
          return iVar4;
        }
        goto LAB_004a9d59;
      }
      iVar2 = iVar3;
      if (-1 < iVar1) {
        iVar2 = in_EAX;
        iVar4 = iVar3;
      }
      in_EAX = iVar2;
    } while (iVar4 < iVar2);
  }
  return iVar4;
}

