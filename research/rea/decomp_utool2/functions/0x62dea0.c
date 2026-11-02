// rea decompile_all
// name: FUN_0062dea0
// address: 0x62dea0
// body: available
// range: 0x62dea0-0x62e1aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0062dea0(int *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  wint_t wVar4;
  uint uVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int iVar8;
  int *in_ECX;
  undefined4 extraout_ECX;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *local_3c;
  int local_34;
  char *local_30;
  int local_2c;
  undefined4 *local_28;
  char *local_24;
  uint local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071e1b2;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  pcVar13 = (char *)*in_ECX;
  piVar9 = (int *)(pcVar13 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_1c = pcVar13;
  while (pcVar3 = pcVar13, *pcVar13 != '\0') {
    do {
      local_30 = pcVar3;
      pcVar3 = local_30 + 1;
    } while (*local_30 != '\0');
    iVar11 = 0;
    do {
      pbVar1 = (byte *)(local_30 + -1);
      local_30 = local_30 + -1;
      if ((*pbVar1 & 0xc0) != 0x80) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    iVar11 = FUN_00426f70(uVar5);
    if (iVar11 != 0x5c) break;
    puVar6 = (undefined4 *)FUN_00637960(&local_2c,extraout_ECX);
    local_1c = (char *)*puVar6;
    *puVar6 = pcVar13;
    piVar9 = (int *)(local_2c + -8);
    pcVar13 = local_1c;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar11 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  local_30 = pcVar13;
  if (*(char *)*param_2 != '\0') {
    puVar6 = (undefined4 *)FUN_00458890();
    DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
    if ((DVar7 & 0x10) == 0) {
      FUN_00636040(&local_34);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_20 = 1;
    }
  }
  FUN_00634140();
  local_8 = 3;
  if (((local_20 & 1) != 0) && (piVar9 = (int *)(local_34 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar11 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_2c = 0;
  iVar11 = 0;
  local_28 = param_2;
  puVar6 = param_2;
  local_24 = pcVar13;
LAB_0062e000:
  local_18 = FUN_00443260();
  iVar8 = FUN_00443260();
  if (local_18 != iVar8) {
    wVar4 = _towlower((wint_t)local_18);
    local_3c = (char *)(uint)wVar4;
    wVar4 = _towlower((wint_t)iVar8);
    if (local_3c != (char *)(uint)wVar4) goto LAB_0062e056;
  }
  if (local_18 == 0) goto LAB_0062e056;
  iVar11 = iVar11 + 1;
  if (local_18 == 0x5c) {
    puVar6 = local_28;
    pcVar13 = local_24;
    local_2c = iVar11;
  }
  goto LAB_0062e000;
LAB_0062e056:
  pcVar3 = local_30;
  if (local_2c == 0) {
LAB_0062e13b:
    iVar11 = *in_ECX;
    *param_1 = iVar11;
    piVar9 = (int *)(iVar11 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
  }
  else {
    if (local_2c == 1) {
      FUN_0044ebd0(1);
      iVar11 = FUN_00426f70();
      if (iVar11 == 0x5c) goto LAB_0062e13b;
    }
    iVar11 = FUN_00627660(puVar6);
    if (iVar11 == 0) {
      FUN_0045cb50(pcVar13);
    }
    else {
      FUN_00635430(&DAT_00c00dac);
      local_8 = CONCAT31(local_8._1_3_,4);
      pcVar10 = pcVar13;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      local_18 = (int)pcVar10 - (int)(pcVar13 + 1);
      if (0 < local_18) {
        pcVar10 = local_14 + 1;
        pcVar12 = local_14;
        do {
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_00455850(local_14);
        local_14 = local_3c;
        FUN_004c2c30(local_3c + ((int)pcVar12 - (int)pcVar10),pcVar13,local_18);
        (local_3c + ((int)pcVar12 - (int)pcVar10))[local_18] = '\0';
      }
      pcVar13 = local_14;
      local_14 = "";
      *param_1 = (int)pcVar13;
    }
  }
  piVar9 = param_2 + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar11 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = (int *)(pcVar3 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar11 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

