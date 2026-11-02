// rea decompile_all
// name: FUN_005271d0
// address: 0x5271d0
// body: available
// range: 0x5271d0-0x5274ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005271d0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b6c6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  FUN_0045c990("Multiple Playlist selection",uVar2);
  local_8 = 0;
  FUN_006e4900(&local_14,0);
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (*(int *)(in_ECX + 0x80) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = **(undefined4 **)(in_ECX + 0x78);
  }
  operator_new(0x80);
  local_8 = 1;
  FUN_0045c990("Target Disk Location",uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = 1;
  piVar5 = (int *)FUN_00534e00(&local_14);
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  operator_new(0xac);
  local_8 = 4;
  uVar4 = FUN_0051b7d0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_1c = 2;
  uVar4 = FUN_00537fb0(uVar4,&PTR_DAT_00c7ed68,&PTR_DAT_00c7ed68);
  local_8 = 6;
  FUN_00534da0(uVar4);
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  FUN_005356e0();
  if (*(int *)(in_ECX + 0x510) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x50c));
    *(undefined4 *)(in_ECX + 0x50c) = 0;
    *(undefined4 *)(in_ECX + 0x510) = 0;
  }
  uVar2 = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  if (0 < *(int *)(in_ECX + 0x80)) {
    bVar8 = *(int *)(in_ECX + 0x80) != 0;
    do {
      if (bVar8) {
        uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x78) + uVar2 * 4);
      }
      else {
        uVar4 = 0;
      }
      local_1c = FUN_006f6dd6(uVar4,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                              &ProjectExplorerItem_Playlist::RTTI_Type_Descriptor,0);
      iVar1 = *(int *)(in_ECX + 0x514);
      iVar6 = iVar1 + 1;
      if ((int)*(uint *)(in_ECX + 0x510) < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar1 + 2;
        }
        uVar7 = iVar1 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x510) != uVar7) {
          if ((int)uVar7 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x50c));
            *(undefined4 *)(in_ECX + 0x50c) = 0;
          }
          else if (*(int *)(in_ECX + 0x50c) == 0) {
            uVar4 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x50c) = uVar4;
          }
          else {
            uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x50c),uVar7 * 4);
            *(undefined4 *)(in_ECX + 0x50c) = uVar4;
          }
          *(uint *)(in_ECX + 0x510) = uVar7;
        }
      }
      iVar1 = *(int *)(in_ECX + 0x514);
      *(int *)(in_ECX + 0x514) = iVar1 + 1;
      piVar5 = (int *)(*(int *)(in_ECX + 0x50c) + iVar1 * 4);
      if (piVar5 != (int *)0x0) {
        *piVar5 = local_1c;
      }
      uVar2 = uVar2 + 1;
      bVar8 = uVar2 < *(uint *)(in_ECX + 0x80);
    } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x80));
  }
  FUN_0045c990("selection");
  local_8 = 7;
  FUN_00525a50(&local_1c);
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  *(undefined4 *)(in_ECX + 0x4f0) = 0x1200;
  ExceptionList = local_10;
  return;
}

