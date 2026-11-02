// rea decompile_all
// name: FUN_00472a81
// address: 0x472a81
// body: available
// range: 0x472a81-0x472af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00472a81(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_EBX;
  
  piVar5 = (int *)FUN_00472a44();
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar1 = (undefined1 *)(unaff_EBX + 0x3d);
    uVar2 = *puVar1;
    *puVar1 = 1;
    iVar3 = piVar5[2];
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + -1;
        goto LAB_00472ad5;
      }
      cVar4 = (**(code **)(**(int **)(*piVar5 + iVar3 * 4) + 8))();
    } while (cVar4 != '\0');
    FUN_004727c8();
LAB_00472ad5:
    FUN_00472a14(unaff_EBX);
    FUN_004743df();
    *puVar1 = uVar2;
    uVar6 = 1;
  }
  return uVar6;
}

