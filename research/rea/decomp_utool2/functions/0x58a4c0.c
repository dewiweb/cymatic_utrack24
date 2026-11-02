// rea decompile_all
// name: FUN_0058a4c0
// address: 0x58a4c0
// body: available
// range: 0x58a4c0-0x58a681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0058a4c0(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713a96;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 0x90) == '\0') {
    iVar1 = *param_2;
    *param_1 = iVar1;
    piVar5 = (int *)(iVar1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      return param_1;
    }
  }
  else {
    ExceptionList = &local_10;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
    iVar1 = *param_2;
    piVar5 = (int *)(iVar1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8 = 1;
    local_14 = iVar1;
    iVar4 = FUN_006325e0(0,DAT_00c8a8e8);
    piVar5 = (int *)FUN_00637a90(&local_1c,iVar4 + 1);
    iVar4 = *piVar5;
    *piVar5 = iVar1;
    piVar5 = (int *)(local_1c + -8);
    local_14 = iVar4;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_005b17a0(uVar3);
    local_8._0_1_ = 2;
    FUN_00635a10(&local_1c,*(undefined4 *)(in_ECX + 0x94));
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00635a10(&local_18,iVar4);
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    piVar5 = (int *)(local_20 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_0041abc0(&local_18,param_2);
    puVar2 = local_18;
    piVar5 = (int *)(iVar4 + -8);
    local_18 = &DAT_00bfe12c;
    *param_1 = (int)puVar2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
  }
  ExceptionList = local_10;
  return param_1;
}

