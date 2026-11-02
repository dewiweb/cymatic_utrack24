// rea decompile_all
// name: FUN_004c0af3
// address: 0x4c0af3
// body: available
// range: 0x4c0af3-0x4c0be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c0af3(char param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  FUN_004c3456();
  if (param_1 != '\0') {
    (**(code **)(*in_ECX + 0x88))();
    cVar1 = FUN_004c3462();
    if (cVar1 != '\0') goto LAB_004c0bd5;
  }
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0x84))();
    cVar1 = FUN_004c3462();
    if (cVar1 != '\0') goto LAB_004c0bd5;
    for (iVar2 = in_ECX[0xc]; iVar2 = iVar2 + -1, -1 < iVar2; iVar2 = FUN_00440367(iVar2)) {
      (**(code **)(**(int **)(in_ECX[10] + iVar2 * 4) + 0x90))();
      cVar1 = FUN_004c3462();
      if (cVar1 != '\0') goto LAB_004c0bd5;
    }
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)in_ECX[3] + 0x8c))();
  }
  cVar1 = FUN_004c3462();
  if (cVar1 == '\0') {
    iVar2 = in_ECX[0x15];
    while ((cVar1 = FUN_004c3462(), cVar1 == '\0' && (0 < iVar2))) {
      iVar2 = iVar2 + -1;
      if ((in_ECX[0x15] <= iVar2) && (iVar2 = in_ECX[0x15] + -1, iVar2 < 0)) break;
      FUN_004f9b3e();
    }
  }
LAB_004c0bd5:
  FUN_00474d0f();
  return;
}

