// rea decompile_all
// name: FUN_004626e7
// address: 0x4626e7
// body: available
// range: 0x4626e7-0x462787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004626e7(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int in_ECX;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4626f3;
  if (0x100 < param_4) {
    FUN_00461ce4();
  }
  (**(code **)(**(int **)(in_ECX + 8) + 0x34))(param_1,param_2,param_3,param_4);
  local_24 = *(undefined4 **)(in_ECX + 0xc);
  local_28 = juce::Expression::Helpers::DotOperator::SymbolRenamingVisitor::vftable;
  if (local_24 != (undefined4 *)0x0) {
    local_24[1] = local_24[1] + 1;
  }
  local_20 = param_1;
  FUN_004652e4(param_2);
  local_18 = param_4 + 1;
  local_8 = 1;
  (**(code **)(*param_3 + 0x10))(*(int *)(in_ECX + 8) + 8,&local_28);
  local_8 = 0xffffffff;
  FUN_004652d6();
  if (local_24 != (undefined4 *)0x0) {
    piVar1 = local_24 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_24)(1);
    }
  }
  return;
}

