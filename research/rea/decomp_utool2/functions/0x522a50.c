// rea decompile_all
// name: FUN_00522a50
// address: 0x522a50
// body: available
// range: 0x522a50-0x522c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00522a50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  undefined4 *local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070acd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = in_ECX;
  uVar4 = FUN_00410ea0(&local_24);
  FUN_00410ea0(&local_20);
  local_8._0_1_ = 2;
  uVar5 = FUN_00636a10(&local_1c);
  local_8._0_1_ = 3;
  uVar5 = FUN_00637690(uVar5);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_0051c290(uVar5,uVar4,0x3004);
  piVar6 = (int *)((int)local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)((int)local_20 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = local_24 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  *in_ECX = ProjectExplorerItem_SongSubfolder::vftable;
  in_ECX[0x1e] = param_1;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 10;
  uVar4 = 0;
  if (in_ECX[0x12] == 1) {
    uVar4 = 0x700;
    if (in_ECX[0x11] != 2) {
      uVar4 = 0x722;
    }
  }
  else if ((in_ECX[0x12] == 2) && (uVar4 = 0x721, in_ECX[0x11] == 2)) {
    uVar4 = 0x700;
  }
  iVar7 = 0;
  in_ECX[0x13] = uVar4;
  if (0 < (int)param_1[6]) {
    do {
      FUN_00410f30(&local_24,iVar7);
      puVar2 = local_24;
      local_8._0_1_ = 0xb;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 0xb;
      if (local_24[3] == 0) {
        local_8._0_1_ = uVar3;
        local_18 = operator_new(0x7c);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        LOCK();
        puVar2[1] = puVar2[1] + 1;
        UNLOCK();
        uVar5 = FUN_00522a50(puVar2);
        uVar4 = extraout_ECX_00;
      }
      else {
        local_20 = operator_new(0x7c);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        LOCK();
        puVar2[1] = puVar2[1] + 1;
        UNLOCK();
        uVar5 = FUN_00520f00(puVar2);
        uVar4 = extraout_ECX;
      }
      piVar6 = puVar2 + 1;
      local_8._0_1_ = 0xb;
      FUN_006e0040(uVar5,uVar4);
      local_8._0_1_ = 10;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1);
      }
      iVar7 = iVar7 + 1;
      in_ECX = local_14;
    } while (iVar7 < (int)param_1[6]);
  }
  LOCK();
  piVar6 = param_1 + 1;
  iVar7 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    (**(code **)*param_1)(1);
  }
  ExceptionList = local_10;
  return in_ECX;
}

