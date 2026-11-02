// rea decompile_all
// name: FUN_00595180
// address: 0x595180
// body: available
// range: 0x595180-0x595377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00595180(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714d4f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040f7f0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (*(int *)(in_ECX + 0x2744) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x2740));
    *(undefined4 *)(in_ECX + 0x2740) = 0;
    *(undefined4 *)(in_ECX + 0x2744) = 0;
  }
  *(undefined4 *)(in_ECX + 0x2748) = 0;
  FUN_0041c990();
  if (*(int *)(in_ECX + 0x2750) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x274c));
    *(undefined4 *)(in_ECX + 0x274c) = 0;
    *(undefined4 *)(in_ECX + 0x2750) = 0;
  }
  *(undefined4 *)(in_ECX + 0x2754) = 0;
  piVar3 = (int *)FUN_004130a0(&local_1c);
  if ((undefined *)*piVar3 == PTR_DAT_00c7ed54) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0045c1e0(*piVar3,PTR_DAT_00c7ed54);
  }
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (iVar4 != 0) {
    cVar2 = FUN_005b1230();
    if (cVar2 == '\0') {
      FUN_0045c990("Continue");
      local_8 = 0;
      FUN_0045c990("Cancel");
      local_8._0_1_ = 1;
      FUN_0045c990("Warning About Auto-Playlist");
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar4 = FUN_004ece70(&local_18,&local_1c,extraout_ECX);
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
      piVar3 = (int *)(local_18 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      local_8 = 0xffffffff;
      piVar3 = (int *)(local_1c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (iVar4 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      if ((char)iVar4 < '\0') {
        FUN_005b12d0();
      }
    }
  }
  ExceptionList = local_10;
  return 1;
}

