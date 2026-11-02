// rea decompile_all
// name: FUN_004727fe
// address: 0x4727fe
// body: available
// range: 0x4727fe-0x472965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004727fe(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  int *piVar5;
  int *local_14;
  
  piVar5 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    local_14 = param_1;
    if ((*(char *)(unaff_EBX + 0x3d) == '\0') &&
       (cVar1 = (**(code **)(*param_1 + 4))(), cVar1 != '\0')) {
      piVar2 = (int *)FUN_00472a44();
      if ((piVar2 == (int *)0x0) || (*(char *)(unaff_EBX + 0x3c) != '\0')) {
        piVar2 = (int *)FUN_005af82d(0x18);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          FUN_004652e4(unaff_EBX + 0x28);
          FUN_00467eb1(piVar2 + 4);
        }
        FUN_00472bd2(piVar2);
        *(int *)(unaff_EBX + 0x38) = *(int *)(unaff_EBX + 0x38) + 1;
      }
      else {
        if (0 < piVar2[2]) {
          piVar5 = *(int **)(*piVar2 + -4 + piVar2[2] * 4);
        }
        if ((piVar5 != (int *)0x0) &&
           (piVar3 = (int *)(**(code **)(*piVar5 + 0x10))(param_1), piVar3 != (int *)0x0)) {
          if (param_1 != piVar3) {
            (**(code **)*param_1)(1);
            local_14 = piVar3;
          }
          iVar4 = (**(code **)(*piVar5 + 0xc))();
          *(int *)(unaff_EBX + 0x2c) = *(int *)(unaff_EBX + 0x2c) - iVar4;
          if (piVar2[2] < 2) {
            thunk_FUN_004600f2();
            if (piVar2[1] != 0) {
              _free((void *)*piVar2);
              *piVar2 = 0;
              piVar2[1] = 0;
            }
            piVar2[2] = 0;
          }
          else {
            FUN_004730d4(piVar2[2] + -1);
          }
        }
      }
      iVar4 = (**(code **)(*local_14 + 0xc))();
      *(int *)(unaff_EBX + 0x2c) = *(int *)(unaff_EBX + 0x2c) + iVar4;
      if (piVar2[1] < piVar2[2] + 1) {
        FUN_004f8197();
      }
      iVar4 = piVar2[2];
      piVar2[2] = iVar4 + 1;
      *(int **)(*piVar2 + iVar4 * 4) = local_14;
      *(undefined1 *)(unaff_EBX + 0x3c) = 0;
      FUN_00472966();
      FUN_004743df();
      return 1;
    }
    (**(code **)*param_1)(1);
  }
  return 0;
}

