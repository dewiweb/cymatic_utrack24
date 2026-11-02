// rea decompile_all
// name: FUN_006b6fe0
// address: 0x6b6fe0
// body: available
// range: 0x6b6fe0-0x6b71c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b6fe0(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007240b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00634530(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (*local_14 != '\0') {
    local_18 = *(int *)(*(int *)(*(int *)(in_ECX + 0xe8) + 0x70) + 0xa8);
    piVar2 = (int *)(local_18 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_00635a10(&local_20,local_14);
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar3 = (undefined4 *)FUN_00634890(&local_1c);
    piVar2 = (int *)(local_1c + -8);
    param_1 = (undefined1 *)CONCAT13(*(undefined1 *)*puVar3,param_1._0_3_);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    local_8._0_1_ = 1;
    piVar2 = (int *)(local_20 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    if (param_1._3_1_ != '\0') {
      param_1 = &DAT_00bfe12c;
      local_8._0_1_ = 3;
      uVar4 = FUN_00637250();
      local_8._0_1_ = 4;
      FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_006e6af0(uVar4,&param_1,0,0);
      piVar2 = (int *)(local_20 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(local_1c + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      local_8._0_1_ = 1;
    }
    FUN_006bb630();
    piVar2 = (int *)(local_18 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

