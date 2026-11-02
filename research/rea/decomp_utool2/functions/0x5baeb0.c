// rea decompile_all
// name: FUN_005baeb0
// address: 0x5baeb0
// body: available
// range: 0x5baeb0-0x5bb103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005baeb0(int param_1,int param_2,float param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  int iVar6;
  float in_XMM3_Da;
  undefined4 uVar7;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00719d29;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8 = 0;
  iVar2 = *(int *)(param_2 + 8);
  if (0 < iVar2) {
    do {
      local_1c = ((float)iVar6 * param_3) / (float)iVar2 + in_XMM3_Da;
      FUN_00410a10(&local_18);
      local_8._0_1_ = 1;
      uVar3 = extraout_ECX;
      uVar7 = extraout_ECX;
      FUN_00637690(&local_18);
      FUN_006377c0(uVar3);
      uVar3 = FUN_00637730(uVar7);
      local_8._0_1_ = 2;
      FUN_005ba670(uVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_00634890(&local_28);
      piVar5 = (int *)(local_28 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      puVar4 = (undefined4 *)FUN_00636a10(&local_30);
      local_8._0_1_ = 3;
      uVar3 = FUN_00635a10(&local_2c,*puVar4);
      local_8 = CONCAT31(local_8._1_3_,4);
      cVar1 = FUN_0062d1b0(uVar3);
      local_11 = cVar1 == '\0';
      piVar5 = (int *)(local_2c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8._0_1_ = 1;
      piVar5 = (int *)(local_30 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if (local_11 != '\0') {
        uVar3 = FUN_00637690(&local_18);
        local_8._0_1_ = 5;
        FUN_005ba670(uVar3);
        piVar5 = (int *)(local_34 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      local_8 = (uint)local_8._1_3_ << 8;
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = *(int *)(param_2 + 8);
    } while (iVar6 < iVar2);
  }
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

