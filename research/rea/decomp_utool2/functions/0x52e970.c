// rea decompile_all
// name: FUN_0052e970
// address: 0x52e970
// body: available
// range: 0x52e970-0x52ed18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e970(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  char *pcVar5;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ca73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(in_ECX + 0x90) + 0x1c) == '\0') {
    uVar1 = FUN_0057f460(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 2;
    FUN_006e4890(uVar1);
  }
  else {
    FUN_0057f460(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    uVar1 = FUN_00681f20(&local_18,2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_006e4890(uVar1);
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_18 + 1;
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_18)(1);
      }
    }
  }
  local_8 = 0xffffffff;
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_1c + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_1c)(1);
    }
  }
  FUN_005537d0(&local_14);
  local_8 = 3;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x90) + 0x30);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2c) != 0)) {
    uVar1 = FUN_005bd550();
    local_8._0_1_ = 4;
    uVar1 = FUN_00637690(uVar1);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00636ec0(uVar1);
    piVar4 = local_1c + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar4 = local_18 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  FUN_006e4900(&local_14,0);
  if (*(int *)(*(int *)(in_ECX + 0x90) + 0x44) == 0) {
    if (*(int *)(*(int *)(in_ECX + 0x98) + 0x9c) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0068f6f0(in_ECX + 0x9c);
    }
    iVar2 = FUN_006f6dd6(uVar1,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                         &TargetExplorerBaseItem::RTTI_Type_Descriptor,0);
    iVar2 = FUN_006f6dd6(*(undefined4 *)(iVar2 + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                         &TargetExplorer::RTTI_Type_Descriptor,0);
    if ((*(uint *)(iVar2 + 0xd8) >> 4 & 1) == 0) goto LAB_0052ece7;
    if (*(int *)(*(int *)(in_ECX + 0x90) + 0x20) < 4) {
      FUN_00637b90(&PTR_DAT_00c7ed68);
      puVar3 = (undefined4 *)FUN_005536c0(&local_1c);
      uVar1 = *(undefined4 *)(in_ECX + 0x170);
      *(undefined4 *)(in_ECX + 0x170) = *puVar3;
      *puVar3 = uVar1;
      piVar4 = local_1c + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_005536c0(&local_1c);
      uVar1 = *(undefined4 *)(in_ECX + 0x174);
      *(undefined4 *)(in_ECX + 0x174) = *puVar3;
      *puVar3 = uVar1;
      piVar4 = local_1c + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      FUN_00637b90(&PTR_DAT_00c7ed68);
    }
    uVar1 = FUN_00553590(&local_1c);
    local_8 = CONCAT31(local_8._1_3_,7);
  }
  else {
    pcVar5 = "Error";
    uVar1 = 0x52eafc;
    FUN_0045c990("Error");
    iVar2 = *(int *)(in_ECX + 0x174);
    *(undefined4 **)(in_ECX + 0x174) = local_1c;
    piVar4 = (int *)(iVar2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        uVar1 = 0x52eb2b;
        FID_conflict__free(piVar4);
        pcVar5 = (char *)piVar4;
      }
    }
    piVar4 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    LOCK();
    iVar2 = *(int *)(in_ECX + 0x170);
    *(int *)(in_ECX + 0x170) = (int)PTR_DAT_00c7ed68;
    UNLOCK();
    piVar4 = (int *)(iVar2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        uVar1 = 0x52eb6b;
        FID_conflict__free(piVar4);
        pcVar5 = (char *)piVar4;
      }
    }
    uVar1 = FUN_00636260(&local_1c,&DAT_0073bc3c,uVar1,pcVar5);
    local_8 = CONCAT31(local_8._1_3_,6);
  }
  (**(code **)(*(int *)(in_ECX + 0x110) + 8))(uVar1);
  piVar4 = local_1c + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
LAB_0052ece7:
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

