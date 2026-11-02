// rea decompile_all
// name: FUN_0055ebf0
// address: 0x55ebf0
// body: available
// range: 0x55ebf0-0x55ecfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0055ebf0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711c01;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_00636040(&local_14);
  local_8 = 0;
  FUN_00634890(&param_1);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  iVar4 = FUN_0055bbe0(uVar3);
  local_8 = 1;
  if (iVar4 != 0) {
    param_1 = iVar4;
    uVar2 = FUN_00634df0(iVar1,PTR_DAT_00c7ed68,"utf-8",0x78);
    FUN_00634ec0();
    FUN_004bfe14(iVar4,0x10);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return *(int *)(in_ECX + 0x40) == 2;
}

