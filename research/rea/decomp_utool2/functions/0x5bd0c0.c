// rea decompile_all
// name: FUN_005bd0c0
// address: 0x5bd0c0
// body: available
// range: 0x5bd0c0-0x5bd267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005bd0c0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char in_CL;
  undefined1 uVar6;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071a0a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  cVar2 = FUN_005b5020();
  if (cVar2 == '\0') {
    FUN_00636040(&stack0xffffffd4);
    FUN_005bd0c0();
    puVar4 = (undefined4 *)FUN_00634890();
    piVar3 = (int *)(local_18 + -8);
    cVar2 = *(char *)*puVar4;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (cVar2 != '\0') {
      if (in_CL == '\0') {
        FUN_0045c990();
        local_8._0_1_ = 1;
        FUN_0045c990();
        local_8._0_1_ = 2;
        uVar5 = FUN_00637690();
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006d3510(uVar5,&local_18);
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
      }
      uVar6 = 0;
      goto LAB_005bd235;
    }
  }
  uVar6 = 1;
LAB_005bd235:
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return uVar6;
}

