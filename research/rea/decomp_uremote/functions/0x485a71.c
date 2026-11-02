// rea decompile_all
// name: FUN_00485a71
// address: 0x485a71
// body: available
// range: 0x485a71-0x485ad6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485a71(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  param_5 = param_5 + -1;
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    do {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          puVar5 = *(undefined1 **)(param_3 + *(int *)(param_2 + iVar6 * 4));
          puVar4 = (undefined1 *)(*param_4 + iVar6);
          for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = *puVar5;
            puVar4 = puVar4 + iVar2;
            puVar5 = puVar5 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

