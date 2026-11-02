// rea decompile_all
// name: FUN_0069eae0
// address: 0x69eae0
// body: available
// range: 0x69eae0-0x69eb8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x69eb89 to 0x624950 FUN_00624950 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069eae0(int *param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  undefined **local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007228c4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_1 != DAT_00c8aa8c) {
    iVar1 = FUN_00448730(*param_1,DAT_00c8aa8c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(in_ECX + 4) + 0xc) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = FUN_006cefb0(*param_1);
      }
      goto LAB_0069eb4f;
    }
  }
  local_14 = *(int *)(*(int *)(in_ECX + 4) + 0xc);
LAB_0069eb4f:
  if (local_14 != 0) {
    local_18 = juce::RelativeCoordinatePositionerBase::ComponentScope::vftable;
    local_8 = 0;
    (**(code **)(*param_2 + 4))(&local_18);
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00624950(param_1,param_2);
}

