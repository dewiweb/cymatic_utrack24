// rea decompile_all
// name: FUN_004f08d0
// address: 0x4f08d0
// body: available
// range: 0x4f08d0-0x4f0976 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f08d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705c08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b1810(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  }
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::DragAndDropContainer::RTTI_Type_Descriptor,
                       &DragDropHelper_Container::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    *(undefined1 *)(in_ECX + 9) = param_1._0_1_;
    FUN_004f09a0(&param_1);
    local_8 = 0;
    if (*(int *)(iVar3 + 4) != 0) {
      FUN_004908f0(&param_1);
    }
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*param_1)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

