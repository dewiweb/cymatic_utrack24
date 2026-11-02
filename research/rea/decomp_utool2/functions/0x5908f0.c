// rea decompile_all
// name: FUN_005908f0
// address: 0x5908f0
// body: available
// range: 0x5908f0-0x590b58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005908f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  void *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *pvStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined **local_2c;
  int local_28;
  void *local_24;
  LPCRITICAL_SECTION local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071453f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (LPCRITICAL_SECTION)(in_ECX + 0x10);
  local_8 = 0;
  EnterCriticalSection(local_18);
  piVar5 = param_1;
  local_8._0_1_ = 1;
  FUN_00636040(&local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00634890(&param_1);
  piVar4 = param_1 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
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
  piVar4 = (int *)(*piVar5 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar5;
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  param_1 = operator_new(0x30);
  local_8._0_1_ = 3;
  puVar2 = (undefined4 *)FUN_0062aec0(piVar5,0x20000);
  local_8._0_1_ = 1;
  if (*(char *)puVar2[4] != '\0') {
    puVar3 = (undefined4 *)*puVar2;
    puVar2 = (undefined4 *)0x0;
    (*(code *)*puVar3)(1);
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    local_2c = juce::AudioFormat::vftable;
    FUN_0045cb50("WAV file");
    local_8._0_1_ = 4;
    FUN_0062b570(".wav .bwf");
    local_2c = juce::WavAudioFormat::vftable;
    local_38 = 0;
    local_48 = (void *)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
    pvStack_3c = (void *)0x0;
    local_34 = 0;
    local_30 = 1;
    local_8._0_1_ = 6;
    puVar3 = (undefined4 *)
             FUN_006030d0(*(undefined4 *)(in_ECX + 0xc),(double)(int)param_2[0xe],param_2[0x19],
                          param_2[0xf],&local_48,0);
    puVar2 = *(undefined4 **)(in_ECX + 0x28);
    if ((puVar2 != puVar3) &&
       (*(undefined4 **)(in_ECX + 0x28) = puVar3, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    FUN_0040f7f0();
    FID_conflict__free(pvStack_3c);
    FUN_0040f7f0();
    FID_conflict__free(local_48);
    if (*(int *)(in_ECX + 0x28) == 0) {
      if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0xc))(1);
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    local_2c = juce::AudioFormat::vftable;
    FUN_0040f7f0();
    FID_conflict__free(local_24);
    piVar5 = (int *)(local_28 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  LeaveCriticalSection(local_18);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_2 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return uVar6;
}

