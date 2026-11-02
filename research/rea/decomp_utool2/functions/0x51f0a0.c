// rea decompile_all
// name: FUN_0051f0a0
// address: 0x51f0a0
// body: available
// range: 0x51f0a0-0x51f290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0051f0a0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined8 uVar5;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a4fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_006f6dd6(param_1,0,&juce::ReferenceCountedObject::RTTI_Type_Descriptor,
                       &PlaylistProjectLibraryNode::RTTI_Type_Descriptor);
  if (iVar3 != 0) {
    if (*(int *)(in_ECX + 0x78) != 0) {
      LOCK();
      piVar4 = (int *)(*(int *)(in_ECX + 0x78) + 4);
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    cVar2 = FUN_0054cfd0();
    if (cVar2 != '\0') {
      FUN_00410ea0();
      uVar5 = FUN_00410ea0();
      if (*(int *)uVar5 == *(int *)((ulonglong)uVar5 >> 0x20)) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0045c1e0(*(int *)uVar5);
      }
      piVar4 = (int *)(param_1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (iVar3 != 0) {
        FUN_00410ea0();
        local_8 = 0;
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,1);
        cVar2 = FUN_00635500();
        piVar4 = (int *)(in_ECX + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        local_8 = 0xffffffff;
        piVar4 = (int *)(local_18 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        if (cVar2 == '\0') {
          FUN_00410ea0();
          local_8 = 2;
          FUN_00410ea0();
          local_8 = CONCAT31(local_8._1_3_,3);
          cVar2 = FUN_00635500();
          FUN_0040ea50();
          FUN_0040ea50();
          ExceptionList = local_10;
          return cVar2 == '\0';
        }
      }
    }
  }
  ExceptionList = local_10;
  return false;
}

