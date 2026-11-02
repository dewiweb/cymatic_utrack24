// rea decompile_all
// name: FUN_00461e8d
// address: 0x461e8d
// body: available
// range: 0x461e8d-0x461f99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00461e8d(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *in_ECX;
  float10 fVar7;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x461e99;
  local_14 = 0;
  puVar4 = (undefined4 *)FUN_005af82d(0x18);
  local_8 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(int *)in_ECX[3] + 0xc))(&local_1c,param_2,param_3);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar6 = (int *)*puVar5;
    local_14 = 1;
    puVar5 = (undefined4 *)(**(code **)(*(int *)in_ECX[2] + 0xc))(&local_18,param_2,param_3);
    local_8 = 2;
    piVar1 = (int *)*puVar5;
    iVar2 = *in_ECX;
    local_14 = 3;
    fVar7 = (float10)(**(code **)(*piVar6 + 0x14))();
    fVar7 = (float10)(**(code **)(*piVar1 + 0x14))((double)fVar7);
    fVar7 = (float10)(**(code **)(iVar2 + 0x3c))((double)fVar7);
    *(double *)(puVar4 + 2) = (double)fVar7;
    puVar4[1] = 0;
    *puVar4 = juce::Expression::Helpers::Constant::vftable;
    *(undefined1 *)(puVar4 + 4) = 0;
  }
  *param_1 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = puVar4[1] + 1;
  }
  local_8 = 3;
  uVar3 = local_14 | 4;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd | 4;
    uVar3 = local_14;
    if (local_18 != (undefined4 *)0x0) {
      piVar6 = local_18 + 1;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*local_18)(1);
        uVar3 = local_14;
      }
    }
  }
  local_14 = uVar3;
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (local_1c != (undefined4 *)0x0)) {
    piVar6 = local_1c + 1;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*local_1c)(1);
    }
  }
  return param_1;
}

