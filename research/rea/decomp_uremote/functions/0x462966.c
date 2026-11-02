// rea decompile_all
// name: FUN_00462966
// address: 0x462966
// body: available
// range: 0x462966-0x462a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00462966(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x462972;
  local_14 = 0;
  piVar4 = (int *)FUN_00463004();
  puVar5 = (undefined4 *)FUN_005af82d(0xc);
  local_8 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (piVar4 == (int *)0x0) {
      param_5 = (undefined4 *)FUN_005af82d(0x18);
      if (param_5 == (undefined4 *)0x0) {
        param_5 = (undefined4 *)0x0;
      }
      else {
        param_5[1] = 0;
        *(undefined8 *)(param_5 + 2) = param_4;
        *param_5 = juce::Expression::Helpers::Constant::vftable;
        *(undefined1 *)(param_5 + 4) = 0;
      }
      if (param_5 != (undefined4 *)0x0) {
        param_5[1] = param_5[1] + 1;
      }
      piVar4 = (int *)&param_5;
      local_14 = 1;
    }
    else {
      piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))(&local_18,param_2);
      local_14 = 2;
    }
    puVar5[1] = 0;
    *puVar5 = juce::Expression::Helpers::Negate::vftable;
    iVar1 = *piVar4;
    puVar5[2] = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
  }
  puVar2 = param_5;
  local_8 = 2;
  *param_1 = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = puVar5[1] + 1;
  }
  uVar3 = local_14 | 4;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd | 4;
    uVar3 = local_14;
    if (local_18 != (undefined4 *)0x0) {
      piVar4 = local_18 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*local_18)(1);
        uVar3 = local_14;
      }
    }
  }
  local_14 = uVar3;
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (puVar2 != (undefined4 *)0x0)) {
    piVar4 = puVar2 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return param_1;
}

