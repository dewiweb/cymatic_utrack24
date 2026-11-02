// rea decompile_all
// name: FUN_006e6af0
// address: 0x6e6af0
// body: available
// range: 0x6e6af0-0x6e6cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6af0(undefined4 param_1,undefined4 *param_2,int param_3,char *param_4)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined1 local_40 [8];
  int local_38;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007288ff;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (void *)0x0;
  local_8 = 0;
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar5 = FUN_006cb680(uVar4);
  local_8 = 0xffffffff;
  if (*(char *)(iVar5 + 0x8c) != '\0') {
    operator_new(0x1c);
    local_8 = 1;
    FUN_004aaa20(in_ECX,in_EDX,param_1,param_3,0,param_4,1);
    ExceptionList = local_10;
    return;
  }
  FUN_004a4710(in_EDX,param_1,param_3,in_ECX,1,param_4,0);
  local_8 = 2;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\0') {
    piVar6 = (int *)FUN_00637250();
    bVar3 = true;
    bVar2 = false;
  }
  else {
    piVar6 = (int *)(pcVar1 + -8);
    param_4 = pcVar1;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piVar6 = (int *)&param_4;
    bVar3 = false;
    bVar2 = true;
  }
  pcVar1 = param_4;
  piVar7 = (int *)(*piVar6 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  iVar5 = *piVar6;
  LOCK();
  UNLOCK();
  piVar6 = (int *)(local_38 + -8);
  local_38 = iVar5;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (bVar2) {
    piVar6 = (int *)(pcVar1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar3) && (piVar6 = (int *)(param_3 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (DAT_00c8a658 == 0) {
    operator_new(0x28);
    DAT_00c8a658 = FUN_0063dab0();
    FUN_0063c010();
  }
  FUN_0063d7c0(FUN_004a4950,local_40);
  FUN_004acbe0();
  ExceptionList = local_10;
  return;
}

