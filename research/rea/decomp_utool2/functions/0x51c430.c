// rea decompile_all
// name: FUN_0051c430
// address: 0x51c430
// body: available
// range: 0x51c430-0x51c57a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c430(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00709eb0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = ProjectExplorerBaseItem::vftable;
  iVar3 = FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
  iVar3 = *(int *)(iVar3 + 0xd8);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x7c) != 0) {
      FID_conflict__free(*(void **)(iVar3 + 0x78));
      *(undefined4 *)(iVar3 + 0x78) = 0;
      *(undefined4 *)(iVar3 + 0x7c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x80) = 0;
    FUN_00529fc0();
  }
  puVar1 = (undefined4 *)in_ECX[0x1d];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  piVar4 = (int *)(in_ECX[0x1c] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x17];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_004b00e0();
  FID_conflict__free((void *)in_ECX[0x14]);
  piVar4 = (int *)(in_ECX[0xf] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[0xe] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *in_ECX = juce::TreeViewItem::vftable;
  FUN_00407640();
  ExceptionList = local_10;
  return;
}

