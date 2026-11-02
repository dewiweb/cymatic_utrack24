// rea decompile_all
// name: FUN_004b4ec0
// address: 0x4b4ec0
// body: available
// range: 0x4b4ec0-0x4b4ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4ec0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_EDX;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703ee0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 < 0x3e9) {
    local_24 = *in_EDX;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_1c = param_2;
    local_20 = param_1;
    FUN_004b6970(&local_24);
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return;
    }
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  else {
    iVar3 = param_1 / 2;
    FUN_006379a0(&local_14,0,iVar3);
    local_8 = 0;
    FUN_004b4ec0(iVar3,param_2,uVar2);
    local_8 = 0xffffffff;
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
    FUN_00637a90(&local_14,iVar3);
    local_8 = 1;
    FUN_004b4ec0(param_1 - iVar3,param_2,uVar2);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return;
    }
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    FID_conflict__free(piVar4);
  }
  ExceptionList = local_10;
  return;
}

