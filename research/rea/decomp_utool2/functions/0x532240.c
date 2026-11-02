// rea decompile_all
// name: FUN_00532240
// address: 0x532240
// body: available
// range: 0x532240-0x53255e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532240(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar8;
  undefined1 *puVar9;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58 [8];
  undefined1 local_35 [32];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d07f;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = param_1;
  local_14 = uVar1;
  if (param_3 == 0) {
    puVar2 = operator_new(400);
    local_8 = 0;
    FUN_004f67a0(in_ECX + -0x70);
    *puVar2 = TrackListItem::vftable;
    puVar2[0x1c] = TrackListItem::vftable;
    puVar2[0x1d] = TrackListItem::vftable;
    puVar2[0x5f] = in_ECX + -0x70;
    puVar2[0x62] = &DAT_00bfe12c;
    *(undefined2 *)(puVar2 + 99) = 0;
    *(undefined1 *)((int)puVar2 + 0x18e) = 0;
  }
  local_8 = 0xffffffff;
  if (local_64 + 1 < 0) {
    iVar3 = FUN_006104a0(uVar1);
    *(undefined1 *)(iVar3 + -1) = 0x2d;
    iVar3 = iVar3 + -1;
  }
  else {
    iVar3 = FUN_006104a0(uVar1);
  }
  FUN_004557e0(local_35 + -iVar3);
  local_8 = 1;
  iVar3 = FUN_005bd4e0();
  local_60 = local_60 & 0xffffff00;
  if ((1 < *(int *)(in_ECX + 0x438)) && (iVar3 != 0)) {
    iVar4 = local_64 / iVar3;
    iVar8 = local_64 % iVar3;
    if (iVar8 + 1 < 0) {
      iVar5 = FUN_006104a0();
      *(undefined1 *)(iVar5 + -1) = 0x2d;
      iVar5 = iVar5 + -1;
    }
    else {
      iVar5 = FUN_006104a0();
    }
    FUN_004557e0(&local_15 + -iVar5);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar6 = (int *)FUN_00633d10(&local_68,extraout_ECX,2);
    iVar5 = *piVar6;
    *piVar6 = local_58[0];
    piVar6 = (int *)(local_68 + -8);
    local_58[0] = iVar5;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar6 = (int *)(local_5c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    if (iVar4 == 0) {
      FUN_00621830(&DAT_0073bd9c);
    }
    else {
      if (iVar4 < 0) {
        iVar5 = FUN_006104a0();
        *(undefined1 *)(iVar5 + -1) = 0x2d;
        iVar5 = iVar5 + -1;
      }
      else {
        iVar5 = FUN_006104a0();
      }
      puVar9 = &local_15 + -iVar5;
      FUN_004557e0(puVar9);
      local_8._0_1_ = 3;
      FUN_00637690(&local_5c);
      uVar7 = FUN_006377c0(puVar9);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00636ec0(uVar7);
      piVar6 = (int *)(local_68 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar6 = (int *)(local_5c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    if (iVar8 == iVar3 + -1) {
      local_60 = CONCAT31(local_60._1_3_,1);
      if (iVar4 < *(int *)(in_ECX + 0x438) + -1) goto LAB_0053250e;
    }
    local_60 = local_60 & 0xffffff00;
  }
LAB_0053250e:
  FUN_004f6870(local_64,local_60,local_58);
  piVar6 = (int *)(local_58[0] + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

