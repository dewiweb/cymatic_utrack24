// rea decompile_all
// name: FUN_005b1f90
// address: 0x5b1f90
// body: available
// range: 0x5b1f90-0x5b20f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b1f90(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  undefined4 in_ECX;
  int *in_EDX;
  int local_20;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718d99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c[1] = 0;
  if (DAT_00c8a5e0 == '\0') {
    FUN_005b2a40();
    local_8 = 1;
    local_1c[1] = 2;
    piVar6 = (int *)FUN_00633060(local_1c,"{$ProjectLib}");
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
  }
  else {
    local_1c[2] = *in_EDX;
    piVar6 = (int *)(*in_EDX + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piVar6 = local_1c + 2;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
  }
  iVar2 = *piVar6;
  *piVar6 = (int)&DAT_00bfe12c;
  local_8 = 2;
  if (bVar3) {
    piVar6 = (int *)(local_1c[0] + -8);
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
  if (bVar4) {
    piVar6 = (int *)(local_20 + -8);
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
  local_8 = CONCAT31(local_8._1_3_,4);
  if ((bVar5) && (piVar6 = (int *)(local_1c[2] + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_00627bf0();
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
  return in_ECX;
}

