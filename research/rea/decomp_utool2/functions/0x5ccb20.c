// rea decompile_all
// name: FUN_005ccb20
// address: 0x5ccb20
// body: available
// range: 0x5ccb20-0x5ccc87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ccb20(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined **ppuVar5;
  void *local_28 [3];
  void *local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b0a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_005cc860(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (piVar2 != (int *)0x0) {
    if (*(char *)*param_1 == '\0') {
      piVar3 = (int *)(**(code **)(*piVar2 + 4))(local_1c,0);
      local_8 = 0;
      uVar4 = (**(code **)(*piVar2 + 8))(0);
      if (uVar4 < (uint)piVar3[2]) {
        ppuVar5 = (undefined **)(*piVar3 + uVar4 * 4);
      }
      else {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      piVar3 = (int *)(*ppuVar5 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *param_1;
      *param_1 = (int)*ppuVar5;
      UNLOCK();
      piVar3 = (int *)(iVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      local_8 = 0xffffffff;
      FUN_0040f7f0();
      FID_conflict__free(local_1c[0]);
    }
    if (*(char *)param_1[1] == '\0') {
      piVar3 = (int *)(**(code **)(*piVar2 + 4))(local_28,1);
      local_8 = 1;
      uVar4 = (**(code **)(*piVar2 + 8))(1);
      if (uVar4 < (uint)piVar3[2]) {
        ppuVar5 = (undefined **)(*piVar3 + uVar4 * 4);
      }
      else {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      piVar2 = (int *)(*ppuVar5 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = param_1[1];
      param_1[1] = (int)*ppuVar5;
      UNLOCK();
      piVar2 = (int *)(iVar1 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_28[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

