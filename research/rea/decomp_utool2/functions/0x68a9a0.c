// rea decompile_all
// name: FUN_0068a9a0
// address: 0x68a9a0
// body: available
// range: 0x68a9a0-0x68ac9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a9a0(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  float local_30;
  float local_2c;
  int local_24;
  undefined4 local_20;
  char *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072123a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar8 = DAT_00c8a67c;
  local_8 = 0xffffffff;
  FUN_006cb390();
  if ((DAT_00c8a644 == 0) &&
     ((DVar4 = timeGetTime(), DAT_00c8a644 <= DVar4 || (DVar4 < DAT_00c8a644 - 1000)))) {
    DAT_00c8a644 = DVar4;
  }
  uVar3 = DAT_00c8a644;
  if ((*(char *)(local_24 + 0xc) == '\0') || (*(int *)(local_24 + 0x2c) == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(local_24 + 0x2c) + 8);
  }
  FUN_0068acf0();
  local_8 = 1;
  if (((local_18 == *(char **)(in_ECX + 0x24)) || (iVar6 = FUN_00448730(local_18), iVar6 == 0)) &&
     (iVar5 == *(int *)(in_ECX + 0x1c))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(int *)(in_ECX + 0x1c) = iVar5;
  piVar7 = (int *)(local_18 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  LOCK();
  iVar6 = *(int *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x24) = (int)local_18;
  UNLOCK();
  piVar7 = (int *)(iVar6 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  iVar6 = *(int *)(iVar8 + 0x60);
  iVar8 = *(int *)(iVar8 + 100);
  if ((*(int *)(in_ECX + 0x2c) < iVar6) || (bVar2 = false, *(int *)(in_ECX + 0x30) < iVar8)) {
    bVar2 = true;
  }
  *(int *)(in_ECX + 0x30) = iVar8;
  *(int *)(in_ECX + 0x2c) = iVar6;
  FUN_0048e190();
  fVar9 = (float10)FUN_004c5561(local_30 - *(float *)(in_ECX + 0x14));
  *(float *)(in_ECX + 0x14) = local_30;
  *(float *)(in_ECX + 0x18) = local_2c;
  if (((bVar1) || (bVar2)) || (12.0 < (float)fVar9)) {
    *(uint *)(in_ECX + 0x34) = uVar3;
  }
  if (((*(byte *)(in_ECX + -8) & 2) == 0) && (*(int *)(in_ECX + 0x38) + 500U <= uVar3)) {
    if ((((*local_18 != '\0') && (local_18 != *(char **)(in_ECX + 0x20))) &&
        (iVar8 = FUN_00448730(local_18), iVar8 != 0)) &&
       ((uint)(*(int *)(in_ECX + 0x34) + *(int *)(in_ECX + 0x28)) < uVar3)) {
      local_20 = SUB84((double)local_30 + 6755399441055744.0,0);
      local_38 = SUB84((double)local_2c + 6755399441055744.0,0);
      FUN_0068ad70(local_20,local_38);
    }
  }
  else if ((iVar5 == 0) || ((bVar2 || (*local_18 == '\0')))) {
    if ((*(byte *)(in_ECX + -8) & 2) != 0) {
      *(uint *)(in_ECX + 0x38) = uVar3;
      FUN_0068aca0();
    }
  }
  else if (bVar1) {
    local_40 = SUB84((double)local_30 + 6755399441055744.0,0);
    local_48 = SUB84((double)local_2c + 6755399441055744.0,0);
    FUN_0068ad70(local_40,local_48);
  }
  piVar7 = (int *)(local_18 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

