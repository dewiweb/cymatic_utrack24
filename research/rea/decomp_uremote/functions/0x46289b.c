// rea decompile_all
// name: FUN_0046289b
// address: 0x46289b
// body: available
// range: 0x46289b-0x462936 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0046289b(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 *local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4628a7;
  local_14 = 0;
  puVar1 = (undefined4 *)FUN_005af82d(0x18);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 8) + 0xc))(&local_18,param_2,param_3);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    fVar4 = (float10)(**(code **)(*(int *)*puVar2 + 0x14))();
    *(double *)(puVar1 + 2) = (double)-fVar4;
    puVar1[1] = 0;
    *puVar1 = juce::Expression::Helpers::Constant::vftable;
    *(undefined1 *)(puVar1 + 4) = 0;
  }
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] + 1;
  }
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (local_18 != (undefined4 *)0x0)) {
    piVar3 = local_18 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      local_14 = local_14 | 2;
      (**(code **)*local_18)(1);
    }
  }
  return param_1;
}

