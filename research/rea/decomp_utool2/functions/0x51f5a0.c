// rea decompile_all
// name: FUN_0051f5a0
// address: 0x51f5a0
// body: available
// range: 0x51f5a0-0x51f7c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f5a0(undefined4 *param_1,undefined4 param_2)

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
  undefined4 *local_20;
  void *local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070a5b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar4 = FUN_00410ea0(&local_20);
  FUN_00410ea0(&local_1c);
  local_8._0_1_ = 2;
  uVar5 = FUN_00636a10(&local_18);
  local_8._0_1_ = 3;
  uVar5 = FUN_00637690(uVar5);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_0051c290(uVar5,uVar4,0x3007);
  piVar6 = (int *)((int)local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)((int)local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = local_20 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  *in_ECX = ProjectExplorerItem_PlaylistSubfolder::vftable;
  in_ECX[0x1e] = param_1;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 10;
  if (in_ECX[0x11] != 2) {
    iVar7 = in_ECX[0x12];
    if (iVar7 == 3) {
      in_ECX[0x13] = 0x1728;
    }
    else if (iVar7 == 4) {
      in_ECX[0x13] = 0x1724;
    }
    else if (iVar7 == 5) {
      in_ECX[0x13] = 0x1730;
    }
  }
  iVar7 = 0;
  if (0 < (int)param_1[6]) {
    do {
      FUN_00410f30(&local_20,iVar7);
      puVar2 = local_20;
      local_8._0_1_ = 0xb;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 0xb;
      if (local_20[3] == 0) {
        local_8._0_1_ = uVar3;
        local_14 = operator_new(0x7c);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        LOCK();
        puVar2[1] = puVar2[1] + 1;
        UNLOCK();
        uVar5 = FUN_0051f5a0(puVar2,param_2);
        uVar4 = extraout_ECX_00;
      }
      else {
        local_1c = operator_new(0x7c);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        LOCK();
        puVar2[1] = puVar2[1] + 1;
        UNLOCK();
        uVar5 = FUN_0051dd50(puVar2,param_2);
        uVar4 = extraout_ECX;
      }
      local_8._0_1_ = 0xb;
      FUN_006e0040(uVar5,uVar4);
      local_8._0_1_ = 10;
      piVar6 = puVar2 + 1;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1);
      }
      iVar7 = iVar7 + 1;
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
  return;
}

