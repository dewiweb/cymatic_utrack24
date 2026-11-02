// rea decompile_all
// name: FUN_005050b0
// address: 0x5050b0
// body: available
// range: 0x5050b0-0x5053be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005050b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007079f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_005b4120(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(in_ECX + 0x94) = uVar2;
  if (local_24 == 5) {
    FUN_0045c990("Cancel");
    local_8 = 0;
    FUN_0045c990("uTrackX32");
    local_8._0_1_ = 1;
    FUN_0045c990("uTrack24");
    local_8._0_1_ = 2;
    FUN_0045c990("Please specify the target device for which you want to create a Playlist.");
    local_8._0_1_ = 3;
    FUN_0045c990("Device type ?");
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar3 = FUN_004ed490(&local_1c,&local_20,&local_24);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (iVar3 == 0) {
      local_24 = 3;
    }
    else {
      if (iVar3 != 1) {
        ExceptionList = local_10;
        return;
      }
      local_24 = 4;
    }
  }
  iVar3 = *param_1;
  piVar4 = (int *)(iVar3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  puVar5 = (undefined4 *)FUN_005581e0(local_24,iVar3,param_3);
  uVar2 = *(undefined4 *)(in_ECX + 0x90);
  *(undefined4 *)(in_ECX + 0x90) = *puVar5;
  *puVar5 = uVar2;
  if (param_1 != (int *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  param_1 = operator_new(0xf4);
  local_8 = 5;
  puVar6 = (undefined4 *)FUN_0052df40(param_2);
  local_8 = 0xffffffff;
  puVar5 = *(undefined4 **)(in_ECX + 0xab8);
  if ((puVar5 != puVar6) && (*(undefined4 **)(in_ECX + 0xab8) = puVar6, puVar5 != (undefined4 *)0x0)
     ) {
    (**(code **)*puVar5)(1);
  }
  FUN_004f9700(*(undefined4 *)(in_ECX + 0xab8),0,0,0xbff00000,0,0xbff00000);
  FUN_00504a40();
  *(undefined4 *)(in_ECX + 0xf10) = 0;
  FUN_0045c990(&DAT_00739f6c);
  local_8 = 6;
  FUN_006e4900(&param_1,0);
  local_8 = 0xffffffff;
  FUN_00637c10();
  FUN_006e6170(0x1000280,DAT_00c7ef78);
  FUN_006e6170(0x1000281,DAT_00c7ef94);
  FUN_00503b80();
  if (*(int *)(in_ECX + 0xab4) != 0) {
    FUN_00518eb0();
  }
  if (*(int *)(in_ECX + 0xab8) != 0) {
    FUN_0052ddf0();
  }
  ExceptionList = local_10;
  return;
}

