// rea decompile_all
// name: FUN_004a70e8
// address: 0x4a70e8
// body: available
// range: 0x4a70e8-0x4a7150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004a70e8(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_EBX;
  
  piVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_EBX[2];
  FUN_0046ebd7();
  iVar5 = 0;
  piVar1 = param_1 + 2;
  param_1 = (int *)0x0;
  if (0 < *piVar1) {
    do {
      puVar4 = (undefined4 *)(*piVar2 + iVar5);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*unaff_EBX + iVar5);
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
        puVar4[3] = puVar3[3];
      }
      param_1 = (int *)((int)param_1 + 1);
      iVar5 = iVar5 + 0x10;
    } while ((int)param_1 < piVar2[2]);
  }
  return piVar2;
}

