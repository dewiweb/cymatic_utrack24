// rea decompile_all
// name: FUN_004a24a0
// address: 0x4a24a0
// body: available
// range: 0x4a24a0-0x4a255a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a24a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = juce::ToolbarItemComponent::ItemDragAndDropOverlayComponent::vftable;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  FUN_006d1c90(1);
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 8;
  piVar1 = (int *)FUN_00491210();
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((int *)in_ECX[0xe] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)in_ECX[0xe];
  }
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar3 != iVar2) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      piVar1[1] = piVar1[1] + 1;
      UNLOCK();
    }
    if (in_ECX[0xe] != 0) {
      FUN_004912c0();
    }
    in_ECX[0xe] = piVar1;
    if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
      FUN_006cec20();
    }
  }
  if (piVar1 != (int *)0x0) {
    FUN_004912c0();
  }
  ExceptionList = local_10;
  return;
}

