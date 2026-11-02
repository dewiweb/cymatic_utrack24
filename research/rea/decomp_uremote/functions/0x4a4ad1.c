// rea decompile_all
// name: FUN_004a4ad1
// address: 0x4a4ad1
// body: available
// range: 0x4a4ad1-0x4a4b32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004a4ad1(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *unaff_EBX;
  int iVar3;
  
  piVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_EBX[2];
  FUN_0046ebd7();
  iVar3 = 0;
  piVar1 = param_1 + 2;
  param_1 = (int *)0x0;
  if (0 < *piVar1) {
    do {
      if ((undefined8 *)(*piVar2 + iVar3) != (undefined8 *)0x0) {
        *(undefined8 *)(*piVar2 + iVar3) = *(undefined8 *)(*unaff_EBX + iVar3);
        FUN_004d076d();
      }
      param_1 = (int *)((int)param_1 + 1);
      iVar3 = iVar3 + 0x10;
    } while ((int)param_1 < piVar2[2]);
  }
  return piVar2;
}

