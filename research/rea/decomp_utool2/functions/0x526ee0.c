// rea decompile_all
// name: FUN_00526ee0
// address: 0x526ee0
// body: available
// range: 0x526ee0-0x5271cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526ee0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *_Memory;
  int in_ECX;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  void *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b645;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  FUN_0045c990("Multiple folder selection",uVar3);
  local_8 = 0;
  FUN_006e4900(&local_14,0);
  local_8 = 0xffffffff;
  piVar5 = (int *)((int)local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (*(int *)(in_ECX + 0x80) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = **(undefined4 **)(in_ECX + 0x78);
  }
  local_24 = operator_new(0x80);
  local_8 = 1;
  FUN_0045c990("Target Disk Location",uVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = 1;
  local_20 = (int *)FUN_00534e00(&local_14);
  local_8 = 0xffffffff;
  piVar5 = (int *)((int)local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_14 = operator_new(0xac);
  local_8 = 4;
  uVar4 = FUN_0051b7d0(&local_24);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_1c = 2;
  uVar4 = FUN_00537fb0(uVar4,&PTR_DAT_00c7ed68,&PTR_DAT_00c7ed68);
  piVar5 = local_20;
  local_8 = 6;
  FUN_00534da0(uVar4);
  local_8 = 0xffffffff;
  _Memory = (int *)((int)local_24 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
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
  uVar3 = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  if (0 < *(int *)(in_ECX + 0x80)) {
    bVar8 = *(int *)(in_ECX + 0x80) != 0;
    do {
      if (bVar8) {
        uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x78) + uVar3 * 4);
      }
      else {
        uVar4 = 0;
      }
      local_1c = FUN_006f6dd6(uVar4,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                              &ProjectExplorerItem_PlaylistSubfolder::RTTI_Type_Descriptor,0);
      iVar2 = *(int *)(in_ECX + 0x514);
      iVar6 = iVar2 + 1;
      if ((int)*(uint *)(in_ECX + 0x510) < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar2 + 2;
        }
        uVar7 = iVar2 + 9 + (iVar6 >> 1) & 0xfffffff8;
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
      iVar2 = *(int *)(in_ECX + 0x514);
      *(int *)(in_ECX + 0x514) = iVar2 + 1;
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x50c) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = local_1c;
      }
      uVar3 = uVar3 + 1;
      bVar8 = uVar3 < *(uint *)(in_ECX + 0x80);
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x80));
  }
  FUN_00525800();
  *(undefined4 *)(in_ECX + 0x4f0) = 0x1200;
  ExceptionList = local_10;
  return;
}

