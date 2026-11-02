// rea decompile_all
// name: FUN_004a8b77
// address: 0x4a8b77
// body: available
// range: 0x4a8b77-0x4a8bd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004a8b77(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = unaff_EBX[2];
  FUN_0046ebd7();
  iVar4 = 0;
  if (0 < param_1[2]) {
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(*param_1 + iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(*unaff_EBX + iVar3);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < param_1[2]);
  }
  return param_1;
}

