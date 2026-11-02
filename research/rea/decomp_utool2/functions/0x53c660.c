// rea decompile_all
// name: FUN_0053c660
// address: 0x53c660
// body: available
// range: 0x53c660-0x53c993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0053c660(undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  int in_ECX;
  int *piVar10;
  byte *pbVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  char *local_48;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  byte *local_20;
  int local_1c;
  char *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar5 = ExceptionList;
  puStack_c = &LAB_0070e081;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &DAT_00bfe12c;
  local_8 = 0;
  local_24 = 1;
  if ((((int)*(uint *)(in_ECX + 0x5c) <= (int)param_2) || (*(uint *)(in_ECX + 0x5c) <= param_2)) ||
     (*(int *)(*(int *)(in_ECX + 0x54) + param_2 * 4) == 0)) {
    ExceptionList = pvVar5;
    return param_1;
  }
  FUN_0045c990(&DAT_0073c894);
  FUN_00633930(&param_2);
  local_8 = 1;
  FUN_00411300(&local_48);
  FUN_006377c0();
  local_48 = (char *)0x53c715;
  FUN_00637730();
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar10 = (int *)(param_2 - 8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_48 = (char *)0x53c73b;
      FID_conflict__free(piVar10);
    }
  }
  local_48 = (char *)0x53c746;
  iVar6 = FID_conflict__atoi((char *)local_14);
  if (iVar6 != 0) {
    local_48 = (char *)0x53c75e;
    puVar7 = (undefined4 *)FUN_00637690();
    pbVar9 = (byte *)*puVar7;
    *puVar7 = local_14;
    pbVar11 = local_20 + -8;
    local_14 = pbVar9;
    if (pbVar11 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar6 = *(int *)pbVar11;
      *(int *)pbVar11 = *(int *)pbVar11 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_48 = (char *)0x53c78a;
        FID_conflict__free(pbVar11);
      }
    }
  }
  local_18 = "";
  local_8._0_1_ = 4;
  iVar6 = 0;
  pbVar9 = local_14;
  pcVar12 = "";
LAB_0053c79e:
  iVar14 = 0;
  pbVar11 = pbVar9;
LAB_0053c7a5:
  do {
    bVar2 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    if ((char)bVar2 < '\0') {
      if ((*pbVar11 & 0xc0) == 0x80) {
        do {
          pbVar1 = pbVar11 + 1;
          pbVar11 = pbVar11 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        iVar14 = iVar14 + 1;
        goto LAB_0053c7a5;
      }
    }
    else if (bVar2 == 0) break;
    iVar14 = iVar14 + 1;
  } while( true );
  local_1c = iVar6;
  if (iVar14 <= iVar6) {
    piVar10 = (int *)(pcVar12 + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    local_48 = (char *)0x53c8bf;
    FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,5);
    local_48 = (char *)&param_2;
    puVar7 = (undefined4 *)FUN_00635a10();
    uVar4 = *param_1;
    *param_1 = *puVar7;
    *puVar7 = uVar4;
    piVar13 = (int *)(param_2 - 8);
    if (piVar13 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_48 = (char *)0x53c905;
        FID_conflict__free(piVar13);
      }
    }
    piVar13 = (int *)(local_28 + -8);
    if (piVar13 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_48 = (char *)0x53c928;
        FID_conflict__free(piVar13);
      }
    }
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_48 = (char *)0x53c945;
        FID_conflict__free(piVar10);
      }
    }
    pbVar9 = local_14 + -8;
    if (pbVar9 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar6 = *(int *)pbVar9;
      *(int *)pbVar9 = *(int *)pbVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_48 = (char *)0x53c965;
        FID_conflict__free(pbVar9);
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_48 = (char *)0x53c7e1;
  local_20 = pbVar9;
  FUN_0044ebd0();
  uVar8 = FUN_00426f70();
  if (uVar8 < 0x80) {
    local_48 = (char *)0x53c86f;
    local_20 = pbVar9;
    FUN_0044ebd0();
    local_30 = FUN_00426f70();
    local_48 = (char *)&local_30;
    local_2c = 0;
    FUN_0045dfc0();
    iVar6 = iVar6 + 1;
    pbVar9 = local_14;
    pcVar12 = local_18;
  }
  else {
    param_2 = CONCAT22(param_2._2_2_,0x5f);
    pcVar16 = (char *)&param_2;
    do {
      pcVar15 = pcVar16;
      pcVar16 = pcVar15 + 1;
    } while (*pcVar15 != '\0');
    pcVar15 = pcVar15 + (-8 - (int)&stack0x00000000);
    if (0 < (int)pcVar15) {
      pcVar16 = pcVar12 + 1;
      do {
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      iVar6 = (int)pcVar12 - (int)pcVar16;
      local_48 = (char *)0x53c83d;
      FUN_00455850();
      pcVar12 = local_28;
      pcVar16 = local_28 + iVar6;
      local_18 = local_28;
      local_48 = pcVar15;
      FUN_004c2c30(pcVar16,&param_2);
      pcVar16[(int)pcVar15] = '\0';
      pbVar9 = local_14;
    }
    iVar6 = local_1c + 1;
  }
  goto LAB_0053c79e;
}

