// rea decompile_all
// name: FUN_00452c80
// address: 0x452c80
// body: available
// range: 0x452c80-0x452e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00452c80(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  char *in_ECX;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  char *local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fff00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)(in_ECX + 8);
  if (*(int *)(in_ECX + 0x14) == 0) {
    piVar3 = (int *)(iVar7 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_006377c0(iVar7);
    ExceptionList = local_10;
    return param_1;
  }
  piVar3 = (int *)(iVar7 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  FUN_006377c0(iVar7);
  iVar7 = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      uVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + iVar7 * 4) + 0x10))(&local_14);
      local_8._0_1_ = 1;
      FUN_00636ec0(uVar4);
      local_8 = (uint)local_8._1_3_ << 8;
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
      if (iVar7 < *(int *)(in_ECX + 0x14) + -1) {
        pcVar8 = local_18 + 1;
        pcVar5 = local_18;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00455850(local_18);
        local_18 = local_1c;
        pcVar8 = local_1c + ((int)pcVar5 - (int)pcVar8);
        pcVar8[0] = ',';
        pcVar8[1] = ' ';
        pcVar8[2] = '\0';
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(in_ECX + 0x14));
  }
  local_14 = CONCAT22(local_14._2_2_,0x29);
  piVar3 = &local_14;
  do {
    piVar6 = piVar3;
    piVar3 = (int *)((int)piVar6 + 1);
  } while ((char)*piVar6 != '\0');
  pcVar8 = (char *)((int)piVar6 + (0x14 - (int)&stack0x00000000));
  if (0 < (int)pcVar8) {
    pcVar5 = local_18;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_00455850(local_18);
    FUN_004c2c30(in_ECX + ((int)pcVar5 - (int)(local_18 + 1)),&local_14,pcVar8);
    (in_ECX + ((int)pcVar5 - (int)(local_18 + 1)))[(int)pcVar8] = '\0';
    local_18 = in_ECX;
  }
  *param_1 = local_18;
  ExceptionList = local_10;
  return param_1;
}

