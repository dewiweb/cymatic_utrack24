// rea decompile_all
// name: FUN_00631af0
// address: 0x631af0
// body: available
// range: 0x631af0-0x631ce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00631af0(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7,undefined4 param_8,char *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071e644;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_8 = 2;
  cVar5 = FUN_00632d50(10);
  if (cVar5 == '\0') {
    FUN_00621830(&DAT_00c01e74);
  }
  pcVar3 = param_1;
  cVar5 = (char)param_1;
  if (cVar5 != '\0') {
    FUN_00610a70(&param_4,&local_24);
  }
  cVar6 = FUN_00632d50(10);
  if (cVar6 == '\0') {
    FUN_00621830(&DAT_00c01e70);
  }
  if (*param_9 == '\0') {
    puVar7 = &DAT_00c01e7c;
    if (cVar5 == '\0') {
      puVar7 = &DAT_00c01e78;
    }
    FUN_0045c990(puVar7);
    pcVar4 = param_9;
    param_9 = param_1;
    piVar10 = (int *)(pcVar4 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar10);
      }
    }
  }
  local_1c = operator_new(0x38);
  local_8._0_1_ = 3;
  uVar8 = FUN_00631e00(&param_1,cVar5 == '\0');
  local_8 = CONCAT31(local_8._1_3_,4);
  local_18 = 1;
  puVar9 = (undefined4 *)
           FUN_00457740(uVar8,pcVar3,&local_24,param_2,param_3,&param_4,param_5,param_6,param_8,
                        &param_9);
  piVar10 = (int *)(param_1 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = puVar9[1];
  }
  if (puVar9[3] == 0) {
    puVar2 = (undefined4 *)*puVar9;
    puVar9 = (undefined4 *)0x0;
    (*(code *)*puVar2)(1);
  }
  FID_conflict__free(local_24);
  piVar10 = (int *)(param_4 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  piVar10 = (int *)(param_9 + -8);
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
  return puVar9;
}

