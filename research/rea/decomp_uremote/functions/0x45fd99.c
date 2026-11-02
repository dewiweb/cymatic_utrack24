// rea decompile_all
// name: FUN_0045fd99
// address: 0x45fd99
// body: available
// range: 0x45fd99-0x460054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045fd99(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  thunk_FUN_004600f2();
  if (param_1[0x1f] != 0) {
    _free((void *)param_1[0x1e]);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  param_1[0x20] = 0;
  local_14 = 0;
  do {
    cVar1 = FUN_0045072f();
    if (cVar1 != '\0') {
      iVar2 = FUN_005af82d();
      if (local_14 == 5) {
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = FUN_0043f5eb();
        }
        FUN_00440222();
        FUN_0044bfc5();
        FUN_004d076d();
        FUN_0044bfc5();
        FUN_004d076d();
        FUN_004d076d();
        FUN_00476599();
        FUN_004d076d();
        FUN_004d076d();
        FUN_0043f8fb();
        FUN_0044bfc5();
        FUN_0043f879();
        FUN_0046537e();
        FUN_0043f850();
        FUN_004652d6();
        *(undefined4 *)(iVar3 + 0x10c) = 5;
      }
      else {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_0043f5eb();
        }
        FUN_00440222();
        FUN_0044bfc5();
        FUN_004d076d();
        FUN_0044bfc5();
        FUN_004d076d();
        FUN_004d076d();
        FUN_00476599();
        FUN_004d076d();
        FUN_004d076d();
        FUN_0043f8fb();
        FUN_0043f879();
        FUN_0043f850();
        *(int *)(iVar2 + 0x10c) = local_14;
        FUN_0043ffa6();
      }
      FUN_004481ad();
      if (param_1 != (int *)0xffffff90) {
        FUN_00472fde();
      }
      FUN_004c1064();
    }
    local_14 = local_14 + 1;
  } while (local_14 < 7);
  (**(code **)(*param_1 + 0x84))();
  return;
}

