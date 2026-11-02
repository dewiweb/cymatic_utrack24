// rea decompile_all
// name: FUN_006de180
// address: 0x6de180
// body: available
// range: 0x6de180-0x6de631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de180(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined1 *local_f0;
  float local_ec;
  void *local_d4;
  void *local_54;
  int local_28;
  float local_20;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727e06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_f0 = &stack0xffffff1c;
  local_ec = 2.3527106e-38;
  FUN_006e8e70();
  FUN_00684a80();
  iVar3 = *(int *)(param_2 + 0x1c) + 0x14;
  local_14 = 0;
  iVar7 = 0x82;
  if (iVar3 < 0x82) {
    iVar7 = iVar3;
  }
  if (((0 < *(int *)(param_2 + 0x13c)) || (2 < *(int *)(param_2 + 0xf4))) &&
     (iVar3 = *(int *)(param_3 + 0xc) + 0x32, iVar3 < iVar7)) {
    iVar7 = iVar3;
  }
  iVar3 = (int)((ulonglong)((longlong)iVar7 * -0x66666667) >> 0x20);
  iVar3 = (iVar3 >> 2) - (iVar3 >> 0x1f);
  local_18 = *(undefined4 **)(param_2 + 0x98);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_54 = (void *)0x0;
    local_8 = 0;
    if (local_18 == (undefined4 *)0x2) {
      local_14 = 0x55ff5555;
      local_ec = (float)(iVar3 + iVar7);
      local_f0 = (undefined1 *)0x6de2c1;
      FUN_006824f0();
      puVar4 = (undefined4 *)FUN_0067a6f0();
      local_54 = (void *)*puVar4;
      *puVar4 = 0;
      FID_conflict__free(local_d4);
    }
    else {
      local_14 = 0x40b69900;
      if (local_18 == (undefined4 *)0x3) {
        local_14 = 0x605555ff;
      }
      FUN_0040e4d0(&local_f0);
      FUN_0067bc00();
    }
    local_ec = 1.0091657e-38;
    FUN_00419e50();
    local_8._0_1_ = 1;
    uVar5 = FUN_00622070();
    local_8._0_1_ = 2;
    fVar8 = (float)iVar7 * 0.9;
    puVar4 = operator_new(0x28);
    local_20 = 0.1;
    if ((0.1 <= fVar8) && (local_20 = 10000.0, fVar8 <= 10000.0)) {
      local_20 = fVar8;
    }
    local_8._0_1_ = 3;
    *puVar4 = juce::ReferenceCountedObject::vftable;
    puVar4[1] = 0;
    *puVar4 = juce::Font::SharedFontInternal::vftable;
    puVar4[2] = 0;
    piVar6 = (int *)FUN_00643f40();
    iVar1 = *piVar6;
    puVar4[3] = iVar1;
    piVar6 = (int *)(iVar1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    FUN_0045c990();
    puVar4[5] = local_20;
    puVar4[6] = 0x3f800000;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined1 *)(puVar4 + 9) = 0;
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_f0 = (undefined1 *)(float)iVar7;
    local_ec = 5.04467e-44;
    local_18 = puVar4;
    FUN_00681150(&local_18,uVar5,(float)iVar3,local_f0);
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_18 + 1;
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*local_18)();
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar6 = (int *)(local_28 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_00641fc0();
    FUN_00684c50();
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
      local_ec = 1.0092342e-38;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
    local_14 = 0x50;
    FUN_00471b00();
    FID_conflict__free((void *)0x0);
    local_8 = 0xffffffff;
    local_ec = 1.0092395e-38;
    FID_conflict__free(local_54);
  }
  local_f0 = &stack0xffffff1c;
  local_ec = 2.352715e-38;
  FUN_006e8e70();
  FUN_00684c50();
  FUN_0040e4d0();
  local_ec = 1.0092526e-38;
  FUN_00684760();
  local_f0 = &stack0xffffff1c;
  local_ec = 2.3527196e-38;
  FUN_006e8e70();
  FUN_00684c50();
  local_ec = 0.0;
  local_f0 = (undefined1 *)0x6de609;
  FUN_00472d90();
  FUN_0040e4d0(&local_f0);
  FUN_00677150();
  ExceptionList = local_10;
  return;
}

