// rea decompile_all
// name: FUN_0051dd50
// address: 0x51dd50
// body: available
// range: 0x51dd50-0x51ded6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051dd50(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070a1a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = in_ECX;
  uVar2 = FUN_00410ea0(&local_20);
  FUN_00410ea0(&local_1c);
  local_8._0_1_ = 2;
  uVar3 = FUN_00636a10(&local_18);
  local_8._0_1_ = 3;
  uVar3 = FUN_00637690(uVar3);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_0051c290(uVar3,uVar2,0x1006);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
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
  piVar5 = local_20 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  *in_ECX = ProjectExplorerItem_Playlist::vftable;
  in_ECX[0x1e] = param_1;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  if (in_ECX[0x11] != 2) {
    uVar4 = 0;
    if (param_2 != '\0') {
      uVar4 = 0x2000;
    }
    iVar1 = in_ECX[0x12];
    if (iVar1 == 3) {
      uVar4 = uVar4 | 0x1768;
    }
    else if (iVar1 == 4) {
      uVar4 = uVar4 | 0x1764;
    }
    else {
      if (iVar1 != 5) goto LAB_0051deb0;
      uVar4 = uVar4 | 6000;
    }
    in_ECX[0x13] = uVar4;
  }
LAB_0051deb0:
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

