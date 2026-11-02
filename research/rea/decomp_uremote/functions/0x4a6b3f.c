// rea decompile_all
// name: FUN_004a6b3f
// address: 0x4a6b3f
// body: available
// range: 0x4a6b3f-0x4a6bd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a6b3f(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1[2];
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(iVar4 * 0xc + *param_1);
      if ((*param_2 == *piVar6) && (param_2[1] == piVar6[1])) {
        *piVar6 = *param_2;
        piVar6[1] = param_2[1];
        piVar6[2] = param_2[2];
        return 0;
      }
      iVar3 = (iVar5 + iVar4) / 2;
      piVar6 = (int *)(iVar3 * 0xc + *param_1);
      iVar1 = *piVar6;
      if ((*param_2 < iVar1) || ((*param_2 == iVar1 && (param_2[1] < piVar6[1])))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (iVar3 == iVar4) {
        if (!bVar2) {
          iVar4 = iVar4 + 1;
        }
        break;
      }
      iVar1 = iVar3;
      if (bVar2) {
        iVar1 = iVar4;
        iVar5 = iVar3;
      }
      iVar4 = iVar1;
    } while (iVar4 < iVar5);
  }
  FUN_004a81dc(iVar4);
  return 1;
}

