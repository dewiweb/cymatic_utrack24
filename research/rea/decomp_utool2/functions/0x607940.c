// rea decompile_all
// name: FUN_00607940
// address: 0x607940
// body: available
// range: 0x607940-0x607b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607940(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  int *local_8;
  
  local_8 = in_ECX;
  piVar1 = (int *)(**(code **)(*in_ECX + 4))(&local_8);
  piVar3 = (int *)(*piVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = *piVar1;
  UNLOCK();
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  local_8 = local_8 + -2;
  if (local_8 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *local_8;
    *local_8 = *local_8 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(local_8);
    }
  }
  iVar2 = FUN_0045cfe0(*param_1);
  param_1[0xc] = iVar2;
  FUN_0045c990("I/O devices");
  iVar2 = param_1[3];
  param_1[3] = (int)param_1;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  FUN_0045c990("Internal");
  iVar2 = param_1[2];
  param_1[2] = (int)param_1;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  FUN_0045c990("ROLI Ltd.");
  iVar2 = param_1[4];
  param_1[4] = (int)param_1;
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  FUN_0045c990(&DAT_00bfdc48);
  piVar1 = (int *)(param_1[5] + -8);
  param_1[5] = (int)param_1;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (in_ECX[4] < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00637390();
  }
  param_1[0xe] = iVar2;
  if ((in_ECX[0x26] == 1) && (in_ECX[0x27] != 0)) {
    if (*(int *)(in_ECX[0x27] + 0x10) < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00637390();
    }
    param_1[0xe] = iVar2;
  }
  if (in_ECX[7] < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00637390();
  }
  param_1[0xf] = iVar2;
  if ((in_ECX[0x26] == 0) && (in_ECX[0x27] != 0)) {
    if (0 < *(int *)(in_ECX[0x27] + 0x1c)) {
      iVar2 = FUN_00637390();
      param_1[0xf] = iVar2;
      return;
    }
    param_1[0xf] = 0;
  }
  return;
}

