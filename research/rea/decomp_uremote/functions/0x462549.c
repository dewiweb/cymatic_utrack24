// rea decompile_all
// name: FUN_00462549
// address: 0x462549
// body: available
// range: 0x462549-0x4625c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_00462549(int *param_1,int *param_2,int param_3)

{
  int in_ECX;
  undefined **local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x462555;
  local_14 = 0;
  if (0x100 < param_3) {
    FUN_00461ce4();
  }
  local_20 = *(int *)(in_ECX + 0xc);
  local_24 = juce::Expression::Helpers::DotOperator::EvaluationVisitor::vftable;
  if (local_20 != 0) {
    *(int *)(local_20 + 4) = *(int *)(local_20 + 4) + 1;
  }
  local_1c = *(int *)(in_ECX + 0xc);
  if (local_1c != 0) {
    *(int *)(local_1c + 4) = *(int *)(local_1c + 4) + 1;
  }
  local_18 = param_3 + 1;
  local_8 = 0;
  (**(code **)(*param_2 + 0x10))(*(int *)(in_ECX + 8) + 8,&local_24);
  *param_1 = local_1c;
  if (local_1c != 0) {
    *(int *)(local_1c + 4) = *(int *)(local_1c + 4) + 1;
  }
  FUN_00463d03();
  return param_1;
}

