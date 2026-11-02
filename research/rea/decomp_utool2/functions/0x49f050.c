// rea decompile_all
// name: FUN_0049f050
// address: 0x49f050
// body: available
// range: 0x49f050-0x49f10e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f050(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702fe3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = juce::TableHeaderComponent::DragOverlayComp::vftable;
  iVar3 = *param_1;
  in_ECX[0x1c] = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  local_8 = 1;
  if ((int *)in_ECX[0x1c] != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)in_ECX[0x1c] + 0x14))();
    if (1 < iVar3) {
      puVar4 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x1c] + 8))(&param_1);
      uVar2 = in_ECX[0x1c];
      in_ECX[0x1c] = *puVar4;
      *puVar4 = uVar2;
      if (param_1 != (int *)0x0) {
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
  }
  FUN_00672cb0();
  FUN_006d1c90(1);
  ExceptionList = local_10;
  return;
}

