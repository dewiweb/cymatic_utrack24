// rea decompile_all
// name: FUN_004c2e5b
// address: 0x4c2e5b
// body: available
// range: 0x4c2e5b-0x4c2f1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c2e5b(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  puVar2 = &LAB_005de17a;
  local_8 = 0x4c2e67;
  if (DAT_0095d698 != param_1) {
    piVar3 = (int *)FUN_004c0453();
    puVar2 = (undefined1 *)0x0;
    if (piVar3 != (int *)0x0) {
      FUN_004f5fb6();
      local_8 = 0;
      (**(code **)(*piVar3 + 100))();
      cVar1 = (**(code **)(*piVar3 + 0x60))();
      if ((cVar1 != '\0') && (DAT_0095d698 != param_1)) {
        FUN_004f5fb6();
        local_8 = CONCAT31(local_8._1_3_,1);
        DAT_0095d698 = param_1;
        FUN_004c4e62();
        FUN_004c50fb();
        cVar1 = FUN_004f5fe9(0);
        if (cVar1 != '\0') {
          FUN_004c2d15(param_2);
        }
        if (DAT_0095d698 == param_1) {
          FUN_004c2cf1(param_2,local_14);
        }
        FUN_00474d0f();
      }
      puVar2 = (undefined1 *)FUN_00474d0f();
    }
  }
  return puVar2;
}

