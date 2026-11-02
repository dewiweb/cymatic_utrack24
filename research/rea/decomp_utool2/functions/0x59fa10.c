// rea decompile_all
// name: FUN_0059fa10
// address: 0x59fa10
// body: available
// range: 0x59fa10-0x59fb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059fa10(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00716050;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040ebf0();
  local_8 = 0;
  FUN_00636040(&stack0xffffffcc);
  iVar1 = FUN_0054a2f0();
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    FUN_00411300();
    uVar5 = 0x811;
    local_8._0_1_ = 3;
    uVar4 = 7;
  }
  else {
    iVar2 = FUN_0054b040();
    if (iVar2 == 0) {
      FUN_00411300();
      FUN_0041cef0();
      goto LAB_0059fad5;
    }
    FUN_00411300();
    uVar5 = 0x810;
    local_8._0_1_ = 2;
    uVar4 = 5;
  }
  FUN_0059c9c0(uVar4,uVar5);
LAB_0059fad5:
  piVar3 = (int *)(local_1c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0059c7b0();
  if (iVar1 != 0) {
    FUN_0054be70();
    FUN_004bfe14(iVar1);
  }
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_18 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_18)();
    }
  }
  ExceptionList = local_10;
  return;
}

