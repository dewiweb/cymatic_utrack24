// rea decompile_all
// name: FUN_00696830
// address: 0x696830
// body: available
// range: 0x696830-0x696910 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696830(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_28;
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721eac;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00696340(local_14);
  if (0 < *(int *)(in_ECX + 0x154)) {
    FUN_006cddc0(0x10003001);
  }
  piVar2 = (int *)(*(int *)(in_ECX + 0x134) + 4);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (1 < iVar1) {
    *(undefined1 *)(in_ECX + 0xa0) = 0;
    puVar3 = (undefined4 *)FUN_006e50e0(&local_28);
    local_24[0] = &PTR_vftable_00c7ed4c;
    local_1c[0] = *puVar3;
    *puVar3 = &DAT_00bfe12c;
    local_8 = 1;
    (**(code **)(**(int **)(in_ECX + 0x134) + 8))(local_24);
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    piVar2 = (int *)(local_28 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

