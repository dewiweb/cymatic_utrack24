// rea decompile_all
// name: FUN_00515660
// address: 0x515660
// body: available
// range: 0x515660-0x51581b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515660(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00709297;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(uint *)(in_ECX + 0x358) < *(uint *)(in_ECX + 0x370)) {
    local_14 = *(int *)(*(int *)(*(int *)(in_ECX + 0x368) + *(uint *)(in_ECX + 0x358) * 4) + 4);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 0;
    FUN_0045c990("Cancel",uVar3);
    local_8._0_1_ = 1;
    FUN_0045c990("Rename");
    local_8._0_1_ = 2;
    FUN_0045c990("Please change the preset name.");
    local_8._0_1_ = 3;
    FUN_0045c990("Preset Rename");
    local_8 = CONCAT31(local_8._1_3_,4);
    cVar2 = FUN_004ecfc0(&local_14,&local_20,&local_24);
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
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (cVar2 != '\0') {
      if (*(uint *)(in_ECX + 0x358) < *(uint *)(in_ECX + 0x370)) {
        uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x368) + *(uint *)(in_ECX + 0x358) * 4);
      }
      else {
        uVar5 = 0;
      }
      FUN_00513280(uVar5,&local_14);
    }
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

