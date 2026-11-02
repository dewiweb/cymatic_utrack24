// rea decompile_all
// name: FUN_005d0080
// address: 0x5d0080
// body: available
// range: 0x5d0080-0x5d0221 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005d0080(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  void **ppvVar5;
  void *pvVar6;
  int *_Memory;
  undefined4 in_EDX;
  undefined **ppuVar7;
  undefined4 *puVar8;
  int local_4c;
  int local_48;
  void **local_44;
  void *local_40 [4];
  void *local_30;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b56b;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = 0;
  local_20 = in_EDX;
  FUN_0062cb00(0x100);
  local_8 = 0;
  local_18 = 0x4f464e49;
  (**(code **)(local_4c + 0x10))(&local_18,4,uVar4);
  bVar2 = false;
  ppuVar7 = &PTR_DAT_00c7ebf0;
  do {
    cVar3 = FUN_005d0230(*ppuVar7);
    if (cVar3 != '\0') {
      bVar2 = true;
    }
    ppuVar7 = ppuVar7 + 1;
  } while ((int)ppuVar7 < 0xc7ed28);
  if (!bVar2) {
    local_24 = (void *)0x0;
    ppvVar5 = &local_24;
    local_20 = 0;
  }
  else {
    ppvVar5 = (void **)FUN_0062ac80(&local_1c);
  }
  puVar8 = local_14;
  *local_14 = *ppvVar5;
  *ppvVar5 = (void *)0x0;
  puVar8[1] = ppvVar5[1];
  if (!bVar2) {
    FID_conflict__free(local_24);
  }
  else {
    FID_conflict__free(local_1c);
  }
  if (((local_44 != local_40) && (local_44 != (void **)0x0)) &&
     (puVar8 = local_14, local_44[1] != local_30)) {
    if (local_30 == (void *)0x0) {
      FID_conflict__free(*local_44);
      *local_44 = (void *)0x0;
      local_44[1] = (void *)0x0;
      puVar8 = local_14;
    }
    else {
      if (*local_44 == (void *)0x0) {
        FID_conflict__free((void *)0x0);
        pvVar6 = (void *)FUN_004c554b(local_30);
      }
      else {
        pvVar6 = (void *)FUN_004c553b(*local_44,local_30);
      }
      *local_44 = pvVar6;
      local_44[1] = local_30;
      puVar8 = local_14;
    }
  }
  FID_conflict__free(local_40[0]);
  _Memory = (int *)(local_48 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return puVar8;
}

