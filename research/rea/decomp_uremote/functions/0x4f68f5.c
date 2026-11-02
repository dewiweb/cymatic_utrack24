// rea decompile_all
// name: FUN_004f68f5
// address: 0x4f68f5
// body: available
// range: 0x4f68f5-0x4f6964 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f68f5(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[2];
  iVar6 = 0;
  if (0 < iVar5) {
    iVar2 = *param_2;
    do {
      piVar1 = (int *)(*param_1 + iVar6 * 8);
      if (iVar2 == *piVar1) {
        *piVar1 = iVar2;
        FUN_004d076d();
        return 0;
      }
      iVar4 = (iVar5 + iVar6) / 2;
      bVar3 = *(int *)(*param_1 + iVar4 * 8) <= iVar2;
      if (iVar4 == iVar6) {
        if (bVar3) {
          iVar6 = iVar6 + 1;
        }
        break;
      }
      if (!bVar3) {
        iVar5 = iVar4;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar6 < iVar5);
  }
  FUN_004f799d(iVar6,param_2);
  return 1;
}

