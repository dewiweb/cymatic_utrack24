// rea decompile_all
// name: FUN_00604c50
// address: 0x604c50
// body: available
// range: 0x604c50-0x604e36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604c50(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  char **ppcVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int local_30;
  int local_2c;
  char **local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071be90;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  operator_new(0x900);
  local_8 = 0;
  pcVar2 = *(char **)(local_18 + 0x234);
  if (*pcVar2 == '\0') {
    local_24 = (char **)FUN_00637250(uVar5);
    uVar9 = 2;
    local_8 = 2;
  }
  else {
    piVar8 = (int *)(pcVar2 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    local_24 = &local_1c;
    local_8 = 1;
    uVar9 = 1;
    local_1c = pcVar2;
  }
  pcVar4 = local_1c;
  pcVar2 = *(char **)(local_18 + 0x230);
  if (*pcVar2 == '\0') {
    local_14 = uVar9;
    ppcVar6 = (char **)FUN_00637250(uVar5);
    uVar9 = uVar9 | 8;
    local_8 = 4;
  }
  else {
    piVar8 = (int *)(pcVar2 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    ppcVar6 = &local_20;
    local_8 = 3;
    uVar9 = uVar9 | 4;
    local_20 = pcVar2;
  }
  pcVar2 = local_20;
  local_14 = uVar9;
  puVar7 = (undefined4 *)
           FUN_00446080(local_18,param_1,*(undefined4 *)(local_18 + 0x22c),
                        *(undefined1 *)(local_18 + 0x238),*(undefined4 *)(local_18 + 0x23c),ppcVar6,
                        local_24);
  puVar3 = *(undefined4 **)(local_18 + 0x244);
  if ((puVar3 != puVar7) &&
     (*(undefined4 **)(local_18 + 0x244) = puVar7, puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  if ((uVar9 & 8) != 0) {
    uVar9 = uVar9 & 0xfffffff7;
    piVar8 = (int *)(local_2c + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  if ((uVar9 & 4) != 0) {
    piVar8 = (int *)(pcVar2 + -8);
    uVar9 = uVar9 & 0xfffffffb;
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  if ((uVar9 & 2) != 0) {
    uVar9 = uVar9 & 0xfffffffd;
    piVar8 = (int *)(local_30 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  if (((uVar9 & 1) != 0) && (piVar8 = (int *)(pcVar4 + -8), piVar8 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

