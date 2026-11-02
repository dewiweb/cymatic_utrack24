// rea decompile_all
// name: FUN_00522250
// address: 0x522250
// body: available
// range: 0x522250-0x52243d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00522250(int param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined8 uVar4;
  int local_18;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070abcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = false;
  iVar2 = FUN_006f6dd6(param_1,0,&juce::ReferenceCountedObject::RTTI_Type_Descriptor,
                       &SongProjectLibraryNode::RTTI_Type_Descriptor);
  if (iVar2 != 0) {
    if (*(int *)(in_ECX + 0x78) != 0) {
      LOCK();
      piVar3 = (int *)(*(int *)(in_ECX + 0x78) + 4);
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    cVar1 = FUN_00542da0();
    if (cVar1 == '\0') {
      *param_2 = 1;
      if (*(int *)(in_ECX + 0x48) != 1) {
        ExceptionList = local_10;
        return true;
      }
    }
    else {
      FUN_00410ea0();
      uVar4 = FUN_00410ea0();
      if (*(int *)uVar4 == *(int *)((ulonglong)uVar4 >> 0x20)) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_0045c1e0(*(int *)uVar4);
      }
      piVar3 = (int *)(param_2 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(local_18 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (param_1 != 0) {
        FUN_00410ea0();
        local_8 = 0;
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,1);
        cVar1 = FUN_00635500();
        piVar3 = (int *)(param_2 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        local_8 = 0xffffffff;
        piVar3 = (int *)(local_18 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        if (cVar1 == '\0') {
          FUN_00410ea0();
          local_8 = 2;
          FUN_00410ea0();
          local_8 = CONCAT31(local_8._1_3_,3);
          cVar1 = FUN_00635500();
          local_11 = cVar1 == '\0';
          FUN_0040ea50();
          FUN_0040ea50();
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_11;
}

