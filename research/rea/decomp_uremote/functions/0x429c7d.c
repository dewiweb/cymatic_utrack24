// rea decompile_all
// name: FUN_00429c7d
// address: 0x429c7d
// body: available
// range: 0x429c7d-0x429cc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00429c7d(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1e0);
  iVar1 = *(int *)(param_1 + 0x1e4) - iVar3;
  if (param_2 < 0) {
    iVar1 = -((iVar1 - param_2) + param_3 & -*(int *)(param_1 + 0x1dc));
    if (0 < iVar1) {
      iVar1 = 0;
    }
    iVar3 = iVar1 - iVar3;
  }
  else {
    uVar2 = iVar1 + param_2 + param_3 & -*(int *)(param_1 + 0x1dc);
    if ((param_2 != 0) && ((int)uVar2 < 0)) {
      uVar2 = 0;
    }
    iVar3 = uVar2 + iVar3;
  }
  return iVar3;
}

