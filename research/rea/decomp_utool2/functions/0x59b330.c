// rea decompile_all
// name: FUN_0059b330
// address: 0x59b330
// body: available
// range: 0x59b330-0x59b736 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059b330(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 in_EDX;
  LPCRITICAL_SECTION p_Var5;
  void *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  void *pvStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined **local_4c;
  LPCRITICAL_SECTION local_38;
  LPCRITICAL_SECTION local_34;
  int local_30;
  int local_2c;
  LPCRITICAL_SECTION local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715932;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("MyAudioFormatWriter::Create",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_005899e0();
  local_8 = 0xffffffff;
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
  FUN_00636040(&local_30);
  local_8 = 1;
  FUN_00634890(&local_2c);
  piVar4 = (int *)(local_2c + -8);
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
  local_28 = operator_new(0x30);
  local_8 = 2;
  puVar3 = (undefined4 *)FUN_0062aec0(in_EDX,0x8000);
  local_8 = 0xffffffff;
  if (*(char *)puVar3[4] != '\0') {
    puVar2 = (undefined4 *)*puVar3;
    puVar3 = (undefined4 *)0x0;
    (*(code *)*puVar2)(1);
  }
  if (puVar3 != (undefined4 *)0x0) {
    local_4c = juce::AudioFormat::vftable;
    FUN_0045cb50("WAV file");
    local_8 = 5;
    FUN_0062b570(".wav .bwf");
    local_4c = juce::WavAudioFormat::vftable;
    local_68 = (void *)0x0;
    uStack_64 = 0;
    uStack_60 = 0;
    pvStack_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 1;
    local_8._0_1_ = 7;
    local_8._1_3_ = 0;
    local_20 = (undefined4 *)FUN_006030d0(puVar3,(double)param_1,1,param_2,&local_68,0);
    local_8._0_1_ = 6;
    FUN_0040f7f0();
    FID_conflict__free(pvStack_5c);
    FUN_0040f7f0();
    FID_conflict__free(local_68);
    if (local_20 == (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
      FUN_0045c990("MyAudioFormatWriter::Create");
      p_Var5 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
      local_38 = p_Var5;
      EnterCriticalSection(p_Var5);
      local_8 = CONCAT31(local_8._1_3_,9);
      if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
        FUN_005891b0(&local_1c,extraout_ECX_00);
        FUN_0062f940();
      }
      LeaveCriticalSection(p_Var5);
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
      *in_ECX = 0;
    }
    else {
      p_Var5 = operator_new(0xc);
      p_Var5->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)juce::ReferenceCountedObject::vftable;
      p_Var5->LockCount = 0;
      p_Var5->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)MyAudioFormatWriter::vftable;
      p_Var5->RecursionCount = 0;
      puVar3 = (undefined4 *)p_Var5->RecursionCount;
      local_38 = p_Var5;
      if ((puVar3 != local_20) &&
         (p_Var5->RecursionCount = (LONG)local_20, puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      FUN_0045c990("MyAudioFormatWriter::Create");
      local_28 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
      EnterCriticalSection(local_28);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
        FUN_005891b0(&local_24,extraout_ECX_01);
        FUN_0062f940();
      }
      LeaveCriticalSection(local_28);
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
      *in_ECX = p_Var5;
      LOCK();
      p_Var5->LockCount = p_Var5->LockCount + 1;
      UNLOCK();
    }
    FUN_00603500();
    ExceptionList = local_10;
    return;
  }
  FUN_0045c990("MyAudioFormatWriter::Create");
  local_8 = 3;
  p_Var5 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  local_34 = p_Var5;
  EnterCriticalSection(p_Var5);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    FUN_005891b0(&local_18,extraout_ECX);
    FUN_0062f940();
  }
  LeaveCriticalSection(p_Var5);
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
  *in_ECX = 0;
  ExceptionList = local_10;
  return;
}

