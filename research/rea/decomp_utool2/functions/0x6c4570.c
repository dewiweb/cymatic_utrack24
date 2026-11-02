// rea decompile_all
// name: FUN_006c4570
// address: 0x6c4570
// body: available
// range: 0x6c4570-0x6c4713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c4570(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *piVar4;
  int local_3c;
  int local_38;
  undefined **local_34 [2];
  undefined4 local_2c [2];
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725aae;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  puVar3 = (undefined4 *)FUN_0069de20(&local_38);
  local_24[0] = &PTR_vftable_00c7ed4c;
  local_1c[0] = *puVar3;
  *puVar3 = &DAT_00bfe12c;
  local_8 = 1;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8a9f0,local_24,0);
  }
  (**(code **)(*local_24[0] + 0x54))(local_1c,uVar2);
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_38 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar3 = (undefined4 *)FUN_0069de20(&local_38);
  local_24[0] = &PTR_vftable_00c7ed4c;
  local_1c[0] = *puVar3;
  *puVar3 = &DAT_00bfe12c;
  local_8 = 3;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8a9e8,local_24,0);
  }
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_38 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar3 = (undefined4 *)FUN_0069de20(&local_3c);
  local_34[0] = &PTR_vftable_00c7ed4c;
  local_2c[0] = *puVar3;
  *puVar3 = &DAT_00bfe12c;
  local_8 = 5;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8aa30,local_34,0);
  }
  (**(code **)(*local_34[0] + 0x54))(local_2c);
  piVar4 = (int *)(local_3c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

