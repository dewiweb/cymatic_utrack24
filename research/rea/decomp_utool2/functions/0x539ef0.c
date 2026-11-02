// rea decompile_all
// name: FUN_00539ef0
// address: 0x539ef0
// body: available
// range: 0x539ef0-0x53a010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539ef0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  int *piVar4;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ddd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FUN_0045c990("Copying Audio files",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  uVar2 = FUN_00410ad0(&local_1c);
  local_8._0_1_ = 1;
  uVar3 = extraout_ECX;
  FUN_00637690(uVar2);
  uVar3 = FUN_006377c0(uVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004edf90(&local_14,uVar3);
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
  piVar4 = local_1c + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
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
  *in_ECX = SongProjectCopyAudioFilesToLibrary::ProgressDlg::vftable;
  in_ECX[0x1c] = SongProjectCopyAudioFilesToLibrary::ProgressDlg::vftable;
  in_ECX[0x4c] = SongProjectCopyAudioFilesToLibrary::ProgressDlg::vftable;
  in_ECX[0x406] = param_1;
  ExceptionList = local_10;
  return;
}

