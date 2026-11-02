// rea decompile_all
// name: FUN_0040d240
// address: 0x40d240
// body: available
// range: 0x40d240-0x40d52c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040d240(void)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  wint_t _C;
  _locale_t _Locale;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_ECX;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *in_EDX;
  int iVar8;
  byte *pbVar9;
  int *local_4c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  byte *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006fc810;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1c = &DAT_00bfe12c;
  local_18 = (byte *)0x0;
  local_8 = 0;
  pbVar9 = &DAT_00bfe12c;
  local_14 = in_EDX;
  do {
    pbVar6 = (byte *)*local_14;
    iVar8 = 0;
    while( true ) {
      while( true ) {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (-1 < (char)bVar2) break;
        if ((*pbVar6 & 0xc0) != 0x80) goto LAB_0040d2b3;
        do {
          pbVar7 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
        } while ((*pbVar7 & 0xc0) == 0x80);
        iVar8 = iVar8 + 1;
      }
      if (bVar2 == 0) break;
LAB_0040d2b3:
      iVar8 = iVar8 + 1;
    }
    if (iVar8 <= (int)local_18) break;
    local_4c = (int *)0x0;
    piVar4 = (int *)FUN_006379a0(&local_24);
    local_4c = (int *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    local_4c = (int *)FUN_006379a0(&local_20);
    if (*local_4c == *piVar4) {
LAB_0040d304:
      bVar3 = true;
    }
    else {
      local_4c = (int *)*local_4c;
      iVar8 = FUN_0045c1e0();
      if (iVar8 == 0) goto LAB_0040d304;
      bVar3 = false;
    }
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_4c = (int *)0x40d328;
        FID_conflict__free(piVar4);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_4c = (int *)0x40d34f;
        FID_conflict__free(piVar4);
      }
    }
    pbVar7 = local_18;
    pbVar6 = pbVar9;
    if (bVar3) {
      local_4c = (int *)0x0;
      puVar5 = (undefined4 *)FUN_006379a0(&local_28);
      pbVar6 = (byte *)*puVar5;
      *puVar5 = pbVar9;
      piVar4 = (int *)(local_28 + -8);
      local_1c = pbVar6;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          local_4c = (int *)0x40d391;
          FID_conflict__free(piVar4);
        }
      }
    }
    local_18 = pbVar7 + 1;
    pbVar9 = pbVar6;
  } while( true );
  bVar2 = *pbVar9;
  while (pbVar6 = pbVar9, pbVar7 = pbVar9, bVar2 != 0) {
    do {
      while( true ) {
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (-1 < (char)bVar2) break;
        bVar2 = *pbVar6;
        while ((bVar2 & 0xc0) == 0x80) {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar1;
        }
      }
    } while (bVar2 != 0);
    local_4c = (int *)0x40d3e7;
    local_18 = pbVar9;
    FUN_0044ebd0();
    _C = FUN_00426f70();
    local_4c = (int *)0x40d3f5;
    iVar8 = FID_conflict___iswspace_l(_C,_Locale);
    if (iVar8 != 0) break;
    local_4c = &local_28;
    puVar5 = (undefined4 *)FUN_00637960();
    pbVar6 = (byte *)*puVar5;
    *puVar5 = pbVar9;
    piVar4 = (int *)(local_28 + -8);
    local_1c = pbVar6;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        local_4c = (int *)0x40d437;
        FID_conflict__free(piVar4);
      }
    }
    pbVar9 = pbVar6;
    bVar2 = *pbVar6;
  }
  do {
    while( true ) {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      if (-1 < (char)bVar2) break;
      bVar2 = *pbVar7;
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar6 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        bVar2 = *pbVar6;
      }
    }
  } while (bVar2 != 0);
  local_4c = &local_24;
  FUN_00637a90();
  local_8._0_1_ = 2;
  local_4c = (int *)0x40d488;
  FUN_006378b0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_006378b0(&local_4c);
  FUN_006377c0();
  local_4c = (int *)0x40d4b3;
  FUN_00637730();
  piVar4 = (int *)(local_28 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_4c = (int *)0x40d4d5;
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_4c = (int *)0x40d4f8;
      FID_conflict__free(piVar4);
    }
  }
  pbVar9 = pbVar9 + -8;
  if (pbVar9 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      local_4c = (int *)0x40d516;
      FID_conflict__free(pbVar9);
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

