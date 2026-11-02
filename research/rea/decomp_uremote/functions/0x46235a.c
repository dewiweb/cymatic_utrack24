// rea decompile_all
// name: FUN_0046235a
// address: 0x46235a
// body: available
// range: 0x46235a-0x462459 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0046235a(undefined4 *param_1,int *param_2,int param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  double local_20;
  undefined4 *local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x462366;
  iVar3 = 0;
  local_18 = (undefined4 *)0x0;
  if (0x100 < param_3) {
    FUN_00461ce4();
  }
  local_14 = *(int *)(in_ECX + 0x14);
  if (local_14 < 1) {
    fVar4 = (float10)(**(code **)(*param_2 + 0xc))(in_ECX + 8,0,0);
  }
  else {
    _Memory = _malloc(local_14 << 3);
    local_8 = 0;
    if (0 < local_14) {
      do {
        puVar1 = (undefined4 *)
                 (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + iVar3 * 4) + 0xc))
                           (&local_18,param_2,param_3 + 1);
        local_8._0_1_ = 1;
        fVar4 = (float10)(**(code **)(*(int *)*puVar1 + 0x14))();
        *(double *)((int)_Memory + iVar3 * 8) = (double)fVar4;
        local_8 = (uint)local_8._1_3_ << 8;
        if (local_18 != (undefined4 *)0x0) {
          piVar2 = local_18 + 1;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_14);
    }
    fVar4 = (float10)(**(code **)(*param_2 + 0xc))(in_ECX + 8,_Memory,local_14);
    local_8 = 0xffffffff;
    _free(_Memory);
  }
  local_20 = (double)fVar4;
  puVar1 = (undefined4 *)FUN_005af82d(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *(double *)(puVar1 + 2) = local_20;
    *puVar1 = juce::Expression::Helpers::Constant::vftable;
    *(undefined1 *)(puVar1 + 4) = 0;
  }
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] + 1;
  }
  return param_1;
}

