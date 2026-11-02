// rea decompile_all
// name: FUN_006bd860
// address: 0x6bd860
// body: available
// range: 0x6bd860-0x6bd9f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bd860(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724cb1;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006c6110(param_1);
  *in_ECX = juce::DrawableText::vftable;
  iVar2 = *(int *)(param_1 + 0x78);
  in_ECX[0x1e] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  in_ECX[0x1f] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x80);
  in_ECX[0x20] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x84);
  in_ECX[0x21] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x88);
  in_ECX[0x22] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x8c);
  in_ECX[0x23] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  in_ECX[0x24] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x94);
  in_ECX[0x25] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  iVar2 = *(int *)(param_1 + 0xb0);
  in_ECX[0x2c] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  operator_new(0x28);
  iVar2 = FUN_00468990(uVar1);
  in_ECX[0x2d] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  in_ECX[0x2e] = iVar2;
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  in_ECX[0x2f] = *(undefined4 *)(param_1 + 0xbc);
  in_ECX[0x30] = *(undefined4 *)(param_1 + 0xc0);
  FUN_006bd3a0();
  ExceptionList = local_10;
  return;
}

