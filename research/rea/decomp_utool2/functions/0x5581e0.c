// rea decompile_all
// name: FUN_005581e0
// address: 0x5581e0
// body: available
// range: 0x5581e0-0x55841b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005581e0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int *piVar6;
  undefined4 in_EDX;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00711566;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 1;
  local_18 = operator_new(0x58);
  local_8._0_1_ = 2;
  iVar4 = FUN_005569f0(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  *in_ECX = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_14 = 1;
  FUN_0045c990(&DAT_0073e718);
  iVar4 = *(int *)(*in_ECX + 0x10);
  *(void **)(*in_ECX + 0x10) = local_18;
  piVar6 = (int *)(iVar4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0045c990("cymatic audio uTool");
  iVar4 = *(int *)(*in_ECX + 0x14);
  *(void **)(*in_ECX + 0x14) = local_18;
  piVar6 = (int *)(iVar4 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  puVar5 = (undefined4 *)FUN_00635a10(&local_18,"New Playlist.play");
  uVar2 = *(undefined4 *)(*in_ECX + 8);
  *(undefined4 *)(*in_ECX + 8) = *puVar5;
  *puVar5 = uVar2;
  piVar6 = (int *)((int)local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  puVar5 = (undefined4 *)FUN_005b4ba0();
  uVar2 = *(undefined4 *)(*in_ECX + 8);
  *(undefined4 *)(*in_ECX + 8) = *puVar5;
  *puVar5 = uVar2;
  piVar6 = (int *)((int)local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  puVar5 = (undefined4 *)FUN_006369b0(&local_18);
  uVar2 = *(undefined4 *)(*in_ECX + 0x18);
  *(undefined4 *)(*in_ECX + 0x18) = *puVar5;
  *puVar5 = uVar2;
  piVar6 = (int *)((int)local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar4 = *in_ECX;
  puVar5 = (undefined4 *)FUN_00633420();
  *(undefined4 *)(iVar4 + 0x20) = *puVar5;
  *(undefined4 *)(iVar4 + 0x24) = puVar5[1];
  *(undefined4 *)(*in_ECX + 0x44) = in_EDX;
  *(undefined4 *)(*in_ECX + 0x40) = param_1;
  iVar4 = *in_ECX;
  piVar6 = (int *)(*param_3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar4 + 0xc);
  *(int *)(iVar4 + 0xc) = *param_3;
  UNLOCK();
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(param_2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

