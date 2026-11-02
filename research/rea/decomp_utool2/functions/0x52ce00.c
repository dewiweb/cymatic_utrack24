// rea decompile_all
// name: FUN_0052ce00
// address: 0x52ce00
// body: available
// range: 0x52ce00-0x52cfb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0052ce00(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  TypeDescriptor *pTStack_34;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070c783;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &DAT_00bfe12c;
  local_8 = 0;
  if (param_2 != 0) {
    pTStack_34 = (TypeDescriptor *)0x52ce65;
    FUN_00530500();
    local_8 = 1;
    pTStack_34 = (TypeDescriptor *)0x52ce77;
    puVar3 = (undefined4 *)FUN_00636040();
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    piVar4 = (int *)(param_2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        pTStack_34 = (TypeDescriptor *)0x52cea3;
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        pTStack_34 = (TypeDescriptor *)0x52cec7;
        FID_conflict__free(piVar4);
      }
    }
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 < 0x1007) {
      if (iVar1 == 0x1006) {
        pTStack_34 = &TargetExplorerItem_Playlist::RTTI_Type_Descriptor;
        FUN_006f6dd6(param_2,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor);
        FUN_0040ec10(&pTStack_34);
        FUN_00553af0();
      }
      else if (iVar1 == 0x1003) {
        pTStack_34 = &TargetExplorerItem_STSong::RTTI_Type_Descriptor;
        FUN_006f6dd6(param_2,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor);
        FUN_0040ec10(&pTStack_34);
        FUN_00553d40();
      }
      else if (iVar1 == 0x1004) {
        pTStack_34 = &TargetExplorerItem_MTSong::RTTI_Type_Descriptor;
        FUN_006f6dd6(param_2,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor);
        FUN_0040ec10(&pTStack_34);
        FUN_00554460();
      }
    }
    else if (iVar1 == 0x3002) {
      pTStack_34 = &TargetExplorerItem_Folder::RTTI_Type_Descriptor;
      FUN_006f6dd6(param_2,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor);
      FUN_0040ec10(&pTStack_34);
      FUN_00553860();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

