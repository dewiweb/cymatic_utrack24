// rea decompile_all
// name: FUN_00584770
// address: 0x584770
// body: available
// range: 0x584770-0x584c4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584770(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071301c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006842b0();
  FUN_00684c50();
  iVar1 = *(int *)*param_1;
  FUN_00472d90();
  (**(code **)(iVar1 + 0x54))();
  FUN_00684c50();
  (**(code **)(*(int *)*param_1 + 0x6c))();
  FUN_00683640();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_24 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_24)();
    }
  }
  puVar2 = (undefined1 *)FUN_00587020();
  local_8 = 1;
  iStack_c8 = 0x584897;
  FUN_00472d90();
  puStack_d4 = (undefined1 *)&uStack_d0;
  puStack_d8 = (undefined1 *)0x5848ae;
  FUN_0040e4d0();
  puStack_d8 = (undefined1 *)0x5848b6;
  puStack_d4 = puVar2;
  FUN_006830c0();
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_28 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  (**(code **)(*(int *)*param_1 + 0x6c))();
  FUN_00683640();
  local_8 = 2;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_2c + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_2c)();
    }
  }
  puVar2 = (undefined1 *)FUN_00587000();
  local_8 = 3;
  iStack_c8 = 4;
  uStack_cc = 0x58497f;
  FUN_00472d90();
  puStack_d8 = (undefined1 *)&puStack_d4;
  FUN_0040e4d0();
  puStack_d8 = puVar2;
  FUN_006830c0();
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_30 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00684c50();
  if (10.0 < (float)(*(int *)(local_14 + 0x18) + -10)) {
    (**(code **)(*(int *)*param_1 + 0x50))();
  }
  if (*(char *)(local_14 + 0x2b0) != '\0') {
    puVar3 = operator_new(0x28);
    local_8 = 4;
    *puVar3 = juce::ReferenceCountedObject::vftable;
    puVar3[1] = 0;
    *puVar3 = juce::Font::SharedFontInternal::vftable;
    puVar3[2] = 0;
    piVar4 = (int *)FUN_00643f40();
    iVar1 = *piVar4;
    puVar3[3] = iVar1;
    piVar4 = (int *)(iVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    FUN_0045c990();
    fVar5 = 14.0;
    puVar3[5] = 0x41600000;
    puVar3[6] = 0x3f800000;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
    local_8 = 5;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 0x68))();
    local_8 = 0xffffffff;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar3 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        iStack_c8 = 0x584aff;
        (**(code **)*puVar3)();
      }
    }
    iStack_c8 = 0x584b10;
    FUN_0045c990();
    local_8 = 6;
    iStack_c8 = 0x584b25;
    FUN_00683fc0();
    local_8._0_1_ = 7;
    iStack_c8 = 0x584b34;
    FUN_006831f0();
    local_8 = CONCAT31(local_8._1_3_,6);
    if (local_20 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_20 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        iStack_c8 = 0x584b59;
        (**(code **)*local_20)();
      }
    }
    iStack_c8 = 0x584b6a;
    FUN_00684c50();
    puStack_d4 = (undefined1 *)0x41600000;
    puStack_d8 = (undefined1 *)0x584bb2;
    FUN_00472db0();
    puStack_d4 = (undefined1 *)0x584bc4;
    FUN_00684310();
    iStack_c8 = 0x584bd5;
    FUN_00684c50();
    iStack_c8 = (int)(fVar5 + 10.0);
    uStack_cc = 4;
    uStack_d0 = 0x584bf9;
    FUN_00472d90();
    iStack_c8 = 0x24;
    FUN_0040e4d0(&puStack_d8);
    FUN_006830c0(local_1c);
    piVar4 = (int *)(local_1c[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        iStack_c8 = 0x584c38;
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

