// rea decompile_all
// name: FUN_004a6acf
// address: 0x4a6acf
// body: available
// range: 0x4a6acf-0x4a6b3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a6acf(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < in_EAX[2]) {
    iVar1 = *param_1;
    iVar6 = in_EAX[2];
    do {
      piVar3 = (int *)(iVar5 * 0xc + *in_EAX);
      if ((iVar1 == *piVar3) && (param_1[1] == piVar3[1])) {
        return iVar5;
      }
      iVar4 = (iVar6 + iVar5) / 2;
      if (iVar4 == iVar5) {
        return -1;
      }
      piVar3 = (int *)(iVar4 * 0xc + *in_EAX);
      iVar2 = *piVar3;
      if ((iVar2 <= iVar1) && ((iVar1 != iVar2 || (piVar3[1] <= param_1[1])))) {
        iVar5 = iVar4;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar5 < iVar4);
  }
  return -1;
}

