// rea decompile_all
// name: FUN_006d3250
// address: 0x6d3250
// body: available
// range: 0x6d3250-0x6d3501 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_006d3250(int param_1,undefined4 *param_2,undefined4 *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_ECX;
  uint uVar7;
  undefined4 in_EDX;
  undefined1 local_40 [8];
  int local_38;
  int local_34;
  int local_24;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007270fd;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (void *)0x0;
  local_8 = 0;
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar4 = FUN_006cb680(uVar3);
  local_8 = 0xffffffff;
  if (*(char *)(iVar4 + 0x8c) != '\0') {
    uVar2 = FUN_00686d30(param_1,param_4,param_5);
    ExceptionList = local_10;
    return uVar2;
  }
  FUN_004a4710(in_EDX,param_1,param_4,in_ECX,2,param_5,param_5 == (char *)0x0);
  local_8 = 1;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\0') {
    piVar5 = (int *)FUN_00637250();
    uVar3 = 1;
  }
  else {
    piVar5 = (int *)(pcVar1 + -8);
    param_5 = pcVar1;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    piVar5 = (int *)&param_5;
    uVar3 = 2;
  }
  pcVar1 = param_5;
  piVar6 = (int *)(*piVar5 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  iVar4 = *piVar5;
  LOCK();
  UNLOCK();
  piVar5 = (int *)(local_38 + -8);
  local_38 = iVar4;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((uVar3 & 2) != 0) {
    piVar5 = (int *)(pcVar1 + -8);
    uVar3 = uVar3 & 0xfffffffd;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 & 0xfffffffe;
    piVar5 = (int *)(param_4 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  pcVar1 = (char *)*param_3;
  if (*pcVar1 == '\0') {
    piVar5 = (int *)FUN_00637250();
    uVar7 = 4;
  }
  else {
    piVar5 = (int *)(pcVar1 + -8);
    param_4 = pcVar1;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    piVar5 = (int *)&param_4;
    uVar7 = 8;
  }
  pcVar1 = param_4;
  piVar6 = (int *)(*piVar5 + -8);
  param_5 = (char *)(uVar7 | uVar3);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  iVar4 = *piVar5;
  LOCK();
  UNLOCK();
  piVar5 = (int *)(local_34 + -8);
  local_34 = iVar4;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (((uint)param_5 & 8) != 0) {
    param_5 = (char *)((uint)param_5 & 0xfffffff7);
    piVar5 = (int *)(pcVar1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if ((((uint)param_5 & 4) != 0) && (piVar5 = (int *)(param_1 + -8), piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
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
  return local_24 != 0;
}

