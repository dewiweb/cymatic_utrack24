// rea decompile_all
// name: FUN_00531000
// address: 0x531000
// body: available
// range: 0x531000-0x531105 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00531000(undefined4 *param_1,char param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0070ce29;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  uStack_7 = 0;
  local_18 = in_ECX;
  uVar2 = FUN_005537d0(&local_18);
  local_8 = 2;
  uVar2 = FUN_00637690(uVar2);
  _local_8 = CONCAT31(uStack_7,3);
  FUN_005300f0(uVar2);
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = local_18 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *in_ECX = TargetExplorerItem_MTSong::vftable;
  uVar3 = (param_2 != '\0') + 2;
  if (param_3 == '\0') {
    uVar3 = (uint)(param_2 != '\0');
  }
  in_ECX[0x11] = uVar3;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

