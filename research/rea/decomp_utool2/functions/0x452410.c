// rea decompile_all
// name: FUN_00452410
// address: 0x452410
// body: available
// range: 0x452410-0x4525c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00452410(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int local_28 [3];
  int *local_1c;
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006ffe21;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &DAT_00bfe12c;
  local_8 = 0;
  local_28[1] = 1;
  local_1c = in_ECX;
  local_28[2] = (**(code **)(*in_ECX + 0x1c))(uVar1);
  iVar2 = (**(code **)(*(int *)in_ECX[2] + 0x1c))();
  if (local_28[2] < iVar2) {
    uVar3 = (**(code **)(*(int *)in_ECX[2] + 0x10))();
    local_8 = 1;
    local_14[0] = 0x28;
    FUN_00621830(local_14);
    FUN_00636ec0(uVar3);
    local_18[0] = 0x29;
    FUN_00621830(local_18);
    local_8 = local_8 & 0xffffff00;
    piVar5 = (int *)(local_28[0] + -8);
    in_ECX = local_1c;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
        in_ECX = local_1c;
      }
    }
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*(int *)in_ECX[2] + 0x10))(local_28);
    uVar3 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar3;
    piVar5 = (int *)(local_28[0] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  (**(code **)(*in_ECX + 0x40))(param_1);
  iVar2 = (**(code **)(*(int *)in_ECX[3] + 0x1c))();
  if (iVar2 < local_28[2]) {
    uVar3 = (**(code **)(*(int *)in_ECX[3] + 0x10))(local_28);
    local_8 = 3;
    FUN_00636ec0(uVar3);
  }
  else {
    uVar3 = (**(code **)(*(int *)in_ECX[3] + 0x10))();
    local_8 = 2;
    local_18[0] = 0x28;
    FUN_00621830(local_18);
    FUN_00636ec0(uVar3);
    local_14[0] = 0x29;
    FUN_00621830(local_14);
  }
  piVar5 = (int *)(local_28[0] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

