// rea decompile_all
// name: FUN_0049caf0
// address: 0x49caf0
// body: available
// range: 0x49caf0-0x49ce45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049caf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  void *local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00702d7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = (void *)0x0;
  uStack_24 = 0;
  iStack_20 = 0;
  puStack_1c = (undefined4 *)0x0;
  local_8 = 0;
  iVar1 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_004b0700(iVar1);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      puVar2[1] = puVar2[1] + 1;
      UNLOCK();
      puStack_1c = puVar2;
    }
  }
  uVar3 = FUN_00637250();
  local_8._0_1_ = 1;
  FUN_006d13b0(1,uVar3,1,*(undefined1 *)(in_ECX + 0x136));
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((0 < iStack_20) && (*(char *)(*(int *)((int)local_28 + iStack_20 * 4 + -4) + 0x26) == '\0')) {
    FUN_006a0850();
    local_8._0_1_ = 2;
    FUN_006a06e0(extraout_ECX);
    local_8._0_1_ = 0;
    FUN_004abe20();
  }
  iVar1 = *(int *)(in_ECX + 0x18);
  if ((((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 6)) || (iVar1 == 7)) {
    local_38 = (void *)0x0;
    uStack_34 = 0;
    uStack_30 = 0;
    puStack_2c = (undefined4 *)0x0;
    local_8._0_1_ = 3;
    uVar3 = FUN_00637250();
    local_8._0_1_ = 4;
    FUN_006d13b0(2,uVar3,1,*(int *)(in_ECX + 0x18) == 4);
    local_8._0_1_ = 3;
    piVar5 = (int *)((int)local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    uVar3 = FUN_00637250();
    local_8._0_1_ = 5;
    FUN_006d13b0(3,uVar3,1,*(int *)(in_ECX + 0x18) == 5);
    local_8._0_1_ = 3;
    piVar5 = (int *)((int)local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    uVar3 = FUN_00637250();
    local_8._0_1_ = 6;
    FUN_006d13b0(4,uVar3,1,*(int *)(in_ECX + 0x18) == 6);
    local_8._0_1_ = 3;
    piVar5 = (int *)((int)local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    uVar3 = FUN_00637250();
    local_8._0_1_ = 7;
    uVar7 = 1;
    uVar6 = 5;
    FUN_006d13b0(5,uVar3,1,*(int *)(in_ECX + 0x18) == 7);
    local_8._0_1_ = 3;
    piVar5 = (int *)((int)local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        uVar7 = 0x49cd35;
        FID_conflict__free(piVar5);
      }
    }
    uVar8 = 0x49cd45;
    uVar4 = FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_006d1210(uVar4,&local_38,uVar6,uVar3,uVar7,uVar8);
    piVar5 = (int *)((int)local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_8._0_1_ = 0;
    if (puStack_2c != (undefined4 *)0x0) {
      LOCK();
      piVar5 = puStack_2c + 1;
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puStack_2c)(1);
      }
    }
    FUN_004b00e0();
    FID_conflict__free(local_38);
  }
  iVar1 = *(int *)(in_ECX + 0x14);
  puVar2 = operator_new(0xc);
  local_8._0_1_ = 10;
  local_18 = puVar2 + 2;
  *puVar2 = juce::ModalCallbackFunction::ComponentCaller1<juce::Slider>::vftable;
  puVar2[1] = FUN_0049ce50;
  local_14 = puVar2;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0040de70(iVar1);
  }
  puVar2[2] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar3 = FUN_006d1110();
  FUN_006a0120(uVar3,puVar2,0);
  if (puStack_1c != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puStack_1c + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puStack_1c)(1);
    }
  }
  FUN_004b00e0();
  FID_conflict__free(local_28);
  ExceptionList = local_10;
  return;
}

