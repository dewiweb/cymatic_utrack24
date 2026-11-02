// rea decompile_all
// name: FUN_004ed8e5
// address: 0x4ed8e5
// body: available
// range: 0x4ed8e5-0x4ed996 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

char FUN_004ed8e5(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char local_11;
  
  FUN_004f4b4e();
  piVar3 = (int *)FUN_004ed754(param_1);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return '\0';
    }
    FUN_004f5fb6();
    local_11 = (**(code **)(*piVar3 + 0x70))(param_2);
    if ((local_11 != '\0') || (cVar2 = FUN_004f5fce(0), cVar2 != '\0')) break;
    piVar1 = (int *)piVar3[0x12];
    if (piVar1 != (int *)0x0) {
      for (iVar4 = piVar1[2]; iVar4 = iVar4 + -1, -1 < iVar4; iVar4 = FUN_00440367(iVar4)) {
        local_11 = (**(code **)(**(int **)(*piVar1 + iVar4 * 4) + 8))(param_2,piVar3);
        if ((local_11 != '\0') || (cVar2 = FUN_004f5fce(0), cVar2 != '\0')) goto LAB_004ed984;
      }
    }
    FUN_00474d0f();
    piVar3 = (int *)piVar3[3];
  }
LAB_004ed984:
  FUN_00474d0f();
  return local_11;
}

