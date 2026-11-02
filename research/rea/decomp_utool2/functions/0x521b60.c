// rea decompile_all
// name: FUN_00521b60
// address: 0x521b60
// body: available
// range: 0x521b60-0x521d82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521b60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *extraout_ECX;
  int local_48;
  int local_3c;
  undefined4 local_38;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070aa73;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_2;
  uVar1 = FUN_005b2560(param_1,local_14);
  local_8 = 0;
  if (param_1 < 0) {
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar2);
  local_8._0_1_ = 1;
  uVar3 = FUN_00637690(&local_3c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0051c290(uVar3,uVar1,0x7002);
  piVar4 = (int *)(local_48 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_3c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = in_ECX + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
      piVar4 = extraout_ECX;
    }
  }
  FUN_00543510(local_38,param_1,piVar4);
  *in_ECX = ProjectExplorerItem_SongSection::vftable;
  in_ECX[0x1e] = ProjectExplorerItem_SongSection::vftable;
  in_ECX[0x23] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,8);
  if (param_1 == 1) {
    FUN_0045c990("Stereo Songs");
    piVar4 = (int *)(in_ECX[0x23] + -8);
    in_ECX[0x23] = local_38;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    uVar1 = 0x800;
    if (in_ECX[0x11] != 2) {
      uVar1 = 0x822;
    }
    in_ECX[0x13] = uVar1;
  }
  else if (param_1 == 2) {
    FUN_0045c990("Multitrack Songs");
    piVar4 = (int *)(in_ECX[0x23] + -8);
    in_ECX[0x23] = local_38;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    uVar1 = 0x821;
    if (in_ECX[0x11] == 2) {
      uVar1 = 0x800;
    }
    in_ECX[0x13] = uVar1;
  }
  else {
    in_ECX[0x13] = 0;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

