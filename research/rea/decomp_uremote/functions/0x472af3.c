// rea decompile_all
// name: FUN_00472af3
// address: 0x472af3
// body: available
// range: 0x472af3-0x472b6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00472af3(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_EBX;
  int local_14;
  
  piVar4 = (int *)FUN_00472a57();
  if (piVar4 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar1 = (undefined1 *)(unaff_EBX + 0x3d);
    uVar2 = *puVar1;
    *puVar1 = 1;
    local_14 = 0;
    if (0 < piVar4[2]) {
      do {
        cVar3 = (**(code **)(**(int **)(*piVar4 + local_14 * 4) + 4))();
        if (cVar3 == '\0') {
          FUN_004727c8();
          goto LAB_00472b4f;
        }
        local_14 = local_14 + 1;
      } while (local_14 < piVar4[2]);
    }
    *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
LAB_00472b4f:
    FUN_00472a14(unaff_EBX);
    FUN_004743df();
    *puVar1 = uVar2;
    uVar5 = 1;
  }
  return uVar5;
}

