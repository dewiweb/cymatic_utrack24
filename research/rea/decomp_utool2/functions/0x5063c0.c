// rea decompile_all
// name: FUN_005063c0
// address: 0x5063c0
// body: available
// range: 0x5063c0-0x50657a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005063c0(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  bool bVar5;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    iVar1 = *(int *)(in_ECX + 0x134);
    if ((*(int *)(iVar1 + 0xf10) == 1) || (*(int *)(iVar1 + 0xf10) == 4)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    if ((bool)((0 < *(int *)(iVar1 + 0xeec) && **(char **)(iVar1 + 0xf14) != '\0') & bVar2)) {
      FUN_0045c990("Yes, close without saving",DAT_00c76070 ^ (uint)&stack0xfffffffc);
      local_8 = 0;
      FUN_0045c990("Cancel");
      local_8._0_1_ = 1;
      FUN_0045c990(
                  "The Playlist project is not saved. You will lost changes if you close the editor.\n\nAre you sure you want to close the editor without saving?"
                  );
      local_8._0_1_ = 2;
      FUN_0045c990("Playlist project modified");
      local_8 = CONCAT31(local_8._1_3_,3);
      iVar3 = FUN_004ed1f0(&local_18,&local_1c,0);
      LOCK();
      iVar1 = iRamfffffff8 + -1;
      UNLOCK();
      bVar5 = iRamfffffff8 == 0;
      iRamfffffff8 = iVar1;
      if (bVar5) {
        FID_conflict__free((void *)0xfffffff8);
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
      local_8 = 0xffffffff;
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
      if (iVar3 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    FUN_004eb4d0();
  }
  else if (param_1 == 1) {
    FUN_00504410();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

