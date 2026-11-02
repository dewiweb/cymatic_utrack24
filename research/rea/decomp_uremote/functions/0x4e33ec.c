// rea decompile_all
// name: FUN_004e33ec
// address: 0x4e33ec
// body: available
// range: 0x4e33ec-0x4e347a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e33ec(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined **local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4e33f8;
  cVar2 = FUN_00465948();
  if (cVar2 == '\0') {
    iVar3 = FUN_004e332e();
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0xc);
  }
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0xc) != 0) {
      FUN_004e3632();
    }
    FUN_004e3632();
    **(undefined1 **)(in_ECX + 0xc) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 8);
    FUN_004e3152();
    local_20[0] = juce::RelativeCoordinatePositionerBase::DependencyFinderScope::vftable;
    local_8 = 0;
    local_18 = uVar1;
    local_14 = extraout_EDX;
    (**(code **)(*param_2 + 4))(local_20);
  }
  return;
}

