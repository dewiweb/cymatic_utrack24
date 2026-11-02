// rea decompile_all
// name: FUN_00613440
// address: 0x613440
// body: available
// range: 0x613440-0x613775 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00613440(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  undefined4 uVar8;
  int *in_ECX;
  int *piVar9;
  int *piVar10;
  char *local_44;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar2 = param_2;
  puStack_c = &LAB_0071cbc4;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar9 = *(int **)(*in_ECX + (int)param_2 * 4);
  local_14 = *piVar9;
  piVar10 = (int *)(local_14 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_00635a10(&param_2,local_14);
  local_8._0_1_ = 1;
  cVar3 = FUN_00632d50(0x2f);
  if (cVar3 == '\0') {
    cVar3 = FUN_00632d50(0x5c);
    if (cVar3 == '\0') {
      puVar5 = (undefined4 *)FUN_00613910(pcVar2);
      local_8._0_1_ = 2;
      if (puVar5 != (undefined4 *)0x0) {
        if (*param_2 != '\0') {
          puVar6 = (undefined4 *)FUN_00458890(uVar4);
          DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
          if (DVar7 != 0xffffffff) {
            cVar3 = FUN_00635980();
            if (cVar3 == '\0') {
              FUN_00637690(&param_2);
              FUN_006240d0();
              FUN_00637c10();
              goto LAB_00613586;
            }
          }
        }
        FUN_00636040(&local_18);
        local_8 = CONCAT31(local_8._1_3_,3);
        puVar6 = (undefined4 *)FUN_00634890(&param_3);
        piVar10 = (int *)(param_3 + -8);
        cVar3 = *(char *)*puVar6;
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        local_8._0_1_ = 2;
        piVar10 = (int *)(local_18 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        if (cVar3 == '\0') {
          FUN_0062aec0(&param_2,0x4000);
          local_8._0_1_ = 5;
          if (*local_44 == '\0') {
            FUN_0061ff80();
            local_8._0_1_ = 2;
            FUN_0062ade0();
            FUN_00612250(0,0,0,0,piVar9[4],piVar9[5]);
            FUN_00612250(piVar9[4],piVar9[5],0,0,0,0);
            FUN_00612250(0,0,piVar9[4],piVar9[5],0,0);
            FUN_0044eef0();
          }
          else {
            FUN_00637690(&param_2);
            FUN_006240d0();
            FUN_00637c10();
            FUN_0062ade0();
          }
        }
        else {
          uVar8 = FUN_00636040(&local_18);
          local_8._0_1_ = 4;
          FUN_00637690(uVar8);
          FUN_006240d0();
          FUN_00637c10();
          FUN_0040ea50();
        }
LAB_00613586:
        (**(code **)*puVar5)(1);
        FUN_0040ea50();
        FUN_00637c10();
        ExceptionList = local_10;
        return param_1;
      }
      FUN_0045c990("Failed to open the zip file for reading");
      FUN_006240d0();
      piVar9 = (int *)(param_3 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      goto LAB_00613722;
    }
  }
  FUN_00634890(param_1);
LAB_00613722:
  piVar9 = (int *)(param_2 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

