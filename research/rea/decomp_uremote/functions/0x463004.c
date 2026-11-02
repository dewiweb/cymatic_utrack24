// rea decompile_all
// name: FUN_00463004
// address: 0x463004
// body: available
// range: 0x463004-0x463047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00463004(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_2);
  if (-1 < iVar1) {
    return param_1;
  }
  iVar1 = (**(code **)(*param_1 + 0x20))();
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return (int *)0x0;
    }
    uVar2 = (**(code **)(*param_1 + 0x24))(iVar1,param_1);
    piVar3 = (int *)FUN_00463004(uVar2);
  } while (piVar3 == (int *)0x0);
  return piVar3;
}

