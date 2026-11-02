// rea decompile_all
// name: FUN_00638d70
// address: 0x638d70
// body: available
// range: 0x638d70-0x638f21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00638d70(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  int in_ECX;
  int *piVar9;
  undefined1 *puVar10;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f0c0;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_1c = 0;
  local_20 = in_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  local_8 = 0;
  FUN_0063eab0(uVar5);
  puVar10 = local_24;
  if (*(char *)(in_ECX + 0x86) == '\0') {
    puVar10 = &DAT_00bfe12c;
    local_24 = &DAT_00bfe12c;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    local_18 = (undefined4 *)(local_20 + 0x70);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = 1;
    if (((undefined1 *)*local_18 != &DAT_00bfe12c) &&
       (iVar6 = FUN_0045c1e0(*local_18,&DAT_00bfe12c), iVar6 != 0)) {
      puVar7 = (undefined4 *)FUN_00458890();
      DVar8 = GetFileAttributesW((LPCWSTR)*puVar7);
      if (((DVar8 & 0x10) == 0) || (DVar8 == 0xffffffff)) {
        FUN_00636040(&local_2c);
        local_8 = 2;
        local_1c = 3;
        puVar7 = (undefined4 *)FUN_00634890(&local_28);
        bVar3 = true;
        bVar2 = true;
        bVar1 = true;
        if (*(char *)*puVar7 == '\0') {
          local_11 = '\0';
          goto LAB_00638e59;
        }
      }
    }
  }
  local_11 = '\x01';
LAB_00638e59:
  if ((bVar1) && (piVar9 = (int *)(local_28 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if ((bVar2) && (piVar9 = (int *)(local_2c + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_8 = 0;
  if ((bVar3) && (piVar9 = (int *)(puVar10 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (local_11 == '\0') {
    if (*(int *)(local_20 + 0x8c) == 2) {
      uVar4 = FUN_006386f0();
    }
    else {
      uVar4 = FUN_006381c0();
    }
  }
  else {
    uVar4 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  ExceptionList = local_10;
  return uVar4;
}

