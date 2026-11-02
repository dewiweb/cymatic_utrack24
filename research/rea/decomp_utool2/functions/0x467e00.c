// rea decompile_all
// name: FUN_00467e00
// address: 0x467e00
// body: available
// range: 0x467e00-0x468034 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00467e00(void)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_ECX;
  int *piVar6;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined1 local_40 [16];
  void *local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007011e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  FUN_00419e50(200,in_ECX);
  local_20 = 200;
  local_8 = 0;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00642ff0(in_ECX,&local_14,0,0x501502f9,0);
  piVar6 = (int *)((int)local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  uVar8 = 0;
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8._0_1_ = 2;
  iVar10 = local_1c;
  if (0 < local_1c) {
    do {
      local_60 = (void *)0x0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      local_44 = 1;
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_006432a0(&local_60);
      FUN_00683770(local_40);
      cVar3 = FUN_00682580();
      if (cVar3 == '\0') {
        uVar4 = FUN_0063ed30(extraout_ECX,uVar8);
        FUN_00474400(uVar4);
        uVar8 = local_28;
      }
      local_8._0_1_ = 2;
      FID_conflict__free(local_60);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = local_1c;
  _Memory = local_30;
  fVar16 = 0.0;
  if ((uint)((int)uVar8 / 2) < uVar8) {
    fVar14 = *(float *)((int)local_30 + ((int)uVar8 / 2) * 4);
  }
  else {
    fVar14 = 0.0;
  }
  iVar5 = 0;
  fVar13 = 0.0;
  local_14 = fVar16;
  if (0 < (int)uVar8) {
    fVar15 = 5.0;
    do {
      fVar12 = *(float *)((int)_Memory + iVar5 * 4);
      fVar11 = fVar14 - fVar12;
      iVar5 = FUN_00411660();
      iVar7 = extraout_ECX_00;
      if (fVar11 < fVar15) {
        fVar13 = fVar13 + fVar12;
        iVar7 = extraout_ECX_00 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar8);
    local_14 = fVar16;
    if (3 < iVar7) {
      local_14 = fVar13 / ((float)iVar7 * 100.0);
    }
  }
  FID_conflict__free(_Memory);
  piVar6 = local_24;
  piVar9 = local_24;
  if (0 < iVar10) {
    do {
      puVar2 = (undefined4 *)*piVar9;
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar2 + 1;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar2)(1);
        }
      }
      iVar10 = iVar10 + -1;
      piVar9 = piVar9 + 7;
    } while (iVar10 != 0);
  }
  FID_conflict__free(piVar6);
  ExceptionList = local_10;
  return;
}

