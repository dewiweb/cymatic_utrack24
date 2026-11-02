// rea decompile_all
// name: FUN_00548150
// address: 0x548150
// body: available
// range: 0x548150-0x5483a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00548150(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int *piVar6;
  int *piVar7;
  undefined4 **extraout_ECX;
  uint uVar8;
  undefined4 *in_EDX;
  undefined4 **local_48;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f62b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  local_1c = 0;
  local_48 = (undefined4 **)0x548191;
  iVar3 = FUN_005406f0();
  local_24 = &stack0xffffffbc;
  local_48 = (undefined4 **)&stack0xffffffbc;
  FUN_00410a10();
  local_20 = (undefined1 *)&local_48;
  local_8 = 0;
  local_48 = extraout_ECX;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0045c990("Song Project Error");
  local_8 = 0xffffffff;
  FUN_005bd5a0();
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return 1;
  }
  if (*(char *)*in_EDX != '\0') {
    puVar4 = (undefined4 *)FUN_00458890();
    local_48 = (undefined4 **)0x548205;
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if ((DVar5 & 0x10) == 0) {
      local_48 = (undefined4 **)0x548214;
      piVar6 = (int *)FUN_00410ad0();
      local_8 = 2;
      local_1c = 1;
      local_48 = (undefined4 **)0x54822f;
      piVar7 = (int *)FUN_006369b0();
      local_18 = 3;
      if (*piVar7 != *piVar6) {
        local_48 = (undefined4 **)*piVar7;
        iVar3 = FUN_0045c1e0();
        local_11 = '\x01';
        if (iVar3 != 0) goto LAB_0054825e;
      }
    }
  }
  local_11 = '\0';
LAB_0054825e:
  uVar8 = local_18;
  if ((local_18 & 2) != 0) {
    uVar8 = local_18 & 0xfffffffd;
    piVar6 = (int *)(local_20 + -8);
    local_18 = uVar8;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_48 = (undefined4 **)0x54828d;
        FID_conflict__free(piVar6);
        uVar8 = local_18;
      }
    }
  }
  local_8 = 0xffffffff;
  if (((uVar8 & 1) != 0) && (piVar6 = (int *)(local_24 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_48 = (undefined4 **)0x5482c0;
      FID_conflict__free(piVar6);
    }
  }
  if (local_11 != '\0') {
    FUN_00635980();
  }
  if ((*param_1 != 0) && (iVar3 = 0, 0 < *(int *)(*param_1 + 0x18))) {
    do {
      local_48 = &local_28;
      FUN_00410f30();
      if (local_28 != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_28 + 1;
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          local_48 = (undefined4 **)0x548316;
          (**(code **)*local_28)();
        }
      }
      cVar2 = FUN_0054ad50();
      if (cVar2 != '\0') {
        FUN_0054b040();
        local_24 = &stack0xffffffbc;
        local_48 = (undefined4 **)&stack0xffffffbc;
        FUN_00411300();
        local_20 = (undefined1 *)&local_48;
        local_8 = 3;
        FUN_0045c990();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_0045c990("Playlist Project Error");
        local_8 = 0xffffffff;
        FUN_005bd5a0();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*param_1 + 0x18));
  }
  ExceptionList = local_10;
  return 1;
}

