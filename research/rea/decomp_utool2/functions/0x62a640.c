// rea decompile_all
// name: FUN_0062a640
// address: 0x62a640
// body: available
// range: 0x62a640-0x62a879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0062a640(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  bool bVar6;
  int local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ddf3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (*param_1 == '\0') {
    iVar2 = FUN_006215b0(0x5c);
    iVar3 = FUN_006215b0(0x2e);
    ExceptionList = local_10;
    return iVar3 <= iVar2;
  }
  iVar2 = FUN_0045c230(param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar2 < 0) {
    cVar1 = FUN_00632c80(param_1);
    if (cVar1 != '\0') {
      local_1c = param_1;
      FUN_0044ebd0(0);
      iVar2 = FUN_00426f70();
      if (iVar2 == 0x2e) {
        ExceptionList = local_10;
        return true;
      }
      iVar2 = FUN_0044ec90();
      iVar3 = FUN_0044ec90();
      iVar3 = (-1 - iVar2) + iVar3;
      if (-1 < iVar3) {
        iVar2 = FUN_006354d0(iVar3);
        ExceptionList = local_10;
        return iVar2 == 0x2e;
      }
    }
    ExceptionList = local_10;
    return false;
  }
  FUN_0045cb50(param_1);
  local_8 = 0;
  local_14 = 1;
  FUN_006379a0(&local_24,0,iVar2);
  local_8 = 1;
  local_14 = 3;
  puVar4 = (undefined4 *)FUN_0062cce0(&local_20);
  local_8 = 2;
  local_14 = 7;
  cVar1 = FUN_0062a640(*puVar4);
  if (cVar1 == '\0') {
    local_18 = param_1;
    FUN_0044ebd0(iVar2 + 1);
    FUN_0045c2c0(local_18,extraout_ECX);
    cVar1 = FUN_0062a640(local_18);
    if (cVar1 == '\0') {
      bVar6 = false;
      goto LAB_0062a767;
    }
  }
  bVar6 = true;
LAB_0062a767:
  piVar5 = (int *)(local_20 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_24 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)((int)local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return bVar6;
}

