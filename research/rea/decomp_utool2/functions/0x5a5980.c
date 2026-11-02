// rea decompile_all
// name: FUN_005a5980
// address: 0x5a5980
// body: available
// range: 0x5a5980-0x5a5a18 inclusive
// range: 0x5a5a20-0x5a5ee7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a5980(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  byte bVar11;
  int in_ECX;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  int local_78;
  int local_74;
  undefined4 *local_60;
  void *local_54;
  uint local_4c;
  undefined8 local_40;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717568;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = false;
  local_28 = in_ECX;
  FUN_0052d8f0();
  iVar13 = local_28;
  local_8 = 0;
  bVar2 = false;
  uVar15 = 0;
  local_40 = 0;
  bVar4 = false;
  local_40._0_4_ = 0;
  if ((int)local_4c < 1) {
    local_2c = 0;
    local_34 = 0;
  }
  else {
    local_2c = 0;
    uVar14 = (uint)local_40;
    bVar2 = false;
    do {
      FUN_0040ec10();
      local_8._0_1_ = 2;
      lVar16 = FUN_0054f610();
      uVar18 = (undefined4)((ulonglong)lVar16 >> 0x20);
      local_30 = (undefined4)lVar16;
      lVar16 = lVar16 + CONCAT44(local_2c,uVar14);
      local_34 = (uint)lVar16;
      local_2c = (int)((ulonglong)lVar16 >> 0x20);
      uVar7 = FUN_005a1240();
      local_8._0_1_ = 3;
      uVar8 = FUN_005a1140();
      local_8._0_1_ = 5;
      puVar9 = (undefined4 *)FUN_0063bf80();
      (**(code **)(*(int *)*puVar9 + 0x14))();
      (**(code **)(*local_24 + 0x54))(local_1c);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_38 = 0;
      if (*(int *)(iVar13 + 0x1e0c) == 1) {
        local_38 = 1;
      }
      else if (*(int *)(iVar13 + 8000) == 1) {
        local_38 = 2;
      }
      bVar1 = false;
      iVar10 = FUN_0054ef10(uVar8,uVar7);
      if ((iVar10 != 0) && (local_38 != 1)) {
        bVar1 = true;
      }
      piVar12 = (int *)(local_74 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_8._0_1_ = 2;
      piVar12 = (int *)(local_78 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      if (bVar1) {
        bVar4 = true;
      }
      if (uVar15 < local_4c) {
        iVar10 = *(int *)((int)local_54 + uVar15 * 4);
      }
      else {
        iVar10 = 0;
      }
      if (*(int *)(iVar10 + 0x5c) < 1) {
        FUN_0045c990("This item will be imported as a Playlist related resource.");
        FUN_0052fd50(DAT_00c7ef94);
      }
      else {
        uVar7 = FUN_00636d50(local_30,uVar18);
        local_8._0_1_ = 6;
        FUN_00637690(uVar7);
        FUN_006377c0(uVar18);
        FUN_0052fd50(DAT_00c7ef94);
        piVar12 = (int *)(local_40._4_4_ + -8);
        if (piVar12 != &DAT_00bfe124) {
          LOCK();
          iVar10 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            FID_conflict__free(piVar12);
          }
        }
      }
      if ((local_60[0xc] == 0) || (*(int *)(local_60[0xc] + 0x2c) == 0)) {
        bVar11 = 0;
      }
      else {
        bVar11 = 1;
      }
      bVar2 = (bool)(bVar2 | bVar11);
      local_8 = (uint)local_8._1_3_ << 8;
      LOCK();
      piVar12 = local_60 + 1;
      iVar10 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)*local_60)();
      }
      uVar15 = uVar15 + 1;
      uVar14 = local_34;
    } while ((int)uVar15 < (int)local_4c);
  }
  iVar13 = local_28;
  FUN_005a13a0(local_34,local_2c);
  if ((*(int *)(in_ECX + 0x2274) != 0) && (iVar10 = FUN_0068fb00(), iVar10 != 0)) {
    FUN_005a2c30();
  }
  local_8._0_1_ = 7;
  puVar9 = (undefined4 *)FUN_0063bf80();
  uVar5 = (**(code **)(*(int *)*puVar9 + 0x14))();
  (**(code **)(*local_24 + 0x54))(local_1c);
  local_8._0_1_ = 0;
  *(undefined1 *)(local_28 + 0x27a8) = uVar5;
  FUN_005a2c30(*(undefined4 *)(local_28 + 0x2344));
  if (((bVar2) && (*(int *)(iVar13 + 0x1e0c) != 1)) && (*(int *)(iVar13 + 8000) != 1)) {
    bVar4 = true;
    FUN_0045c990("Please select a Synched Unit Mode");
    local_8._0_1_ = 8;
    FUN_006e4900(&local_38,0);
    local_8._0_1_ = 0;
    piVar12 = (int *)(local_38 + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar13 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        FID_conflict__free(piVar12);
      }
    }
  }
  else {
    FUN_006e4900(&PTR_DAT_00c7ed68,0);
    if (((!bVar4) && (-1 < local_2c)) && ((0 < local_2c || (local_34 != 0)))) {
      FUN_005a1240((int)&local_40 + 4);
      local_8._0_1_ = 9;
      bVar3 = true;
      uVar17 = FUN_00612d20();
      iVar13 = (int)((ulonglong)uVar17 >> 0x20) - (uint)((uint)uVar17 < 0x20000000);
      if ((local_2c <= iVar13) && ((local_2c < iVar13 || (local_34 < (uint)uVar17 + 0xe0000000)))) {
        bVar11 = 1;
        goto LAB_005a5d78;
      }
    }
  }
  bVar11 = 0;
LAB_005a5d78:
  uVar15 = CONCAT11(*(byte *)(local_28 + 0x2b0d),*(byte *)(local_28 + 0x2b0d) >> 4) & 0xffffff01;
  if ((byte)uVar15 == bVar11) {
    iVar13 = *(int *)(local_28 + 0x2ab0);
    *(byte *)(local_28 + 0x2b0d) = (bVar11 ^ 1) << 4 | (byte)(uVar15 >> 8) & 0xef;
    if ((iVar13 == 0) ||
       (((*(byte *)(iVar13 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar13 + 0xc) == 0 || (cVar6 = FUN_006e6320(), cVar6 != '\0')))))) {
      FUN_006cc240();
    }
  }
  local_8 = 0;
  if (bVar3) {
    piVar12 = (int *)(local_40._4_4_ + -8);
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar13 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        FID_conflict__free(piVar12);
      }
    }
  }
  if ((bool)(*(byte *)(local_28 + 0x294d) >> 4 & 1) == bVar4) {
    iVar13 = *(int *)(local_28 + 0x28f0);
    *(byte *)(local_28 + 0x294d) = !bVar4 << 4 | *(byte *)(local_28 + 0x294d) & 0xef;
    if ((iVar13 == 0) ||
       (((*(byte *)(iVar13 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar13 + 0xc) == 0 || (cVar6 = FUN_006e6320(), cVar6 != '\0')))))) {
      FUN_006cc240();
    }
  }
  FID_conflict__free(local_54);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

