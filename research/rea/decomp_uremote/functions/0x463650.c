// rea decompile_all
// name: FUN_00463650
// address: 0x463650
// body: available
// range: 0x463650-0x463768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_00463650(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int **appiStack_3c [6];
  undefined1 *local_24;
  int *local_20;
  undefined1 local_1c [4];
  int *local_18;
  char local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x46365c;
  local_20 = (int *)0x0;
  appiStack_3c[0] = (int **)local_11;
  cVar1 = FUN_004631a5(&DAT_00917354);
  if (cVar1 == '\0') {
    FUN_00463769();
  }
  else {
    appiStack_3c[0] = &local_18;
    FUN_00463650();
    local_8 = 0;
    if (local_18 == (int *)0x0) {
      appiStack_3c[0] = (int **)0x46369c;
      uVar2 = FUN_00465544();
      local_24 = (undefined1 *)appiStack_3c;
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00465bec(appiStack_3c,uVar2);
      appiStack_3c[0] = (int **)FUN_00465c6b(local_1c);
      iVar3 = FUN_0046318f();
      *param_1 = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      appiStack_3c[0] = (int **)0x4636dc;
      FUN_004652d6();
      appiStack_3c[0] = (int **)0x4636e4;
      FUN_004652d6();
      if (local_18 == (int *)0x0) {
        return param_1;
      }
    }
    else {
      if (local_11[0] == '-') {
        appiStack_3c[0] = &local_20;
        (**(code **)(*local_18 + 0x28))();
        appiStack_3c[0] = (int **)0x46371e;
        FUN_0046e4a0();
        if (local_20 != (int *)0x0) {
          piVar4 = local_20 + 1;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            appiStack_3c[0] = (int **)0x1;
            (**(code **)*local_20)();
          }
        }
      }
      *param_1 = (int)local_18;
      if (local_18 == (int *)0x0) {
        return param_1;
      }
      local_18[1] = local_18[1] + 1;
    }
    local_8 = 0xffffffff;
    piVar4 = local_18 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      appiStack_3c[0] = (int **)0x1;
      (**(code **)*local_18)();
    }
  }
  return param_1;
}

