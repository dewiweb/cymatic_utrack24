// rea decompile_all
// name: FUN_004fbec0
// address: 0x4fbec0
// body: available
// range: 0x4fbec0-0x4fc10e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004fbec0(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  int local_1c;
  char *local_18;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706b75;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = false;
  FUN_0040f2d0();
  local_8 = 0;
  if (*local_18 != '\0') {
    puVar1 = (undefined4 *)FUN_00458890();
    DVar2 = GetFileAttributesW((LPCWSTR)*puVar1);
    if ((DVar2 & 0x10) == 0) {
      local_8._0_1_ = 2;
      puVar1 = (undefined4 *)FUN_006358c0();
      local_8._0_1_ = 3;
      FUN_005c6d30();
      FUN_005c6c30();
      FUN_005c6e60();
      *(ulonglong *)(in_ECX + 0x2588) = CONCAT44(in_XMM0_Db,in_XMM0_Da);
      FUN_005b5190();
      local_8._0_1_ = 4;
      FUN_00637690();
      local_8 = CONCAT31(local_8._1_3_,6);
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
      FUN_004fa1d0();
      FUN_00533620();
      local_11 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) <= *(double *)(in_ECX + 0x2588) &&
                 *(double *)(in_ECX + 0x2588) != (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
      }
      FUN_00425b40();
      FID_conflict__free((void *)0x0);
      goto LAB_004fc0dc;
    }
  }
  if ((local_18 == PTR_DAT_00c7ed54) || (iVar3 = FUN_0045c1e0(local_18), iVar3 == 0)) {
    FUN_004fa1d0();
    FUN_004fa110();
  }
  else {
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004fa110();
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  *(undefined8 *)(in_ECX + 0x2588) = 0;
LAB_004fc0dc:
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
  ExceptionList = local_10;
  return local_11;
}

