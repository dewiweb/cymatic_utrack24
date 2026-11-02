// rea decompile_all
// name: FUN_00603f40
// address: 0x603f40
// body: available
// range: 0x603f40-0x604061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00603f40(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071bd08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar7 = 2;
  FUN_00447490(2,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_006353d0(uVar7);
  iVar2 = param_2;
  local_8 = 0;
  if (param_3 < 1) {
    piVar6 = (int *)(param_2 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    puVar5 = &param_2;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    puVar5 = (undefined4 *)FUN_006379a0(&param_3,0,param_3);
    bVar4 = true;
    bVar3 = false;
  }
  *param_1 = *puVar5;
  *puVar5 = &DAT_00bfe12c;
  if (bVar3) {
    piVar6 = (int *)(param_2 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar4) && (piVar6 = (int *)(param_3 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

