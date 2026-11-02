// rea decompile_all
// name: FUN_006a6f40
// address: 0x6a6f40
// body: available
// range: 0x6a6f40-0x6a726b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a6f40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6,float param_7,float param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  void *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 local_6c [24];
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007231b3;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_7._0_1_ == '\0') {
    if ((char)param_6 == '\0') goto LAB_006a6f92;
    uVar10 = 0x5599aadd;
  }
  else {
    uVar10 = 0x8899aadd;
  }
  FUN_00684a80(uVar10);
LAB_006a6f92:
  local_1c = 0;
  if (0 < param_4 + -8) {
    local_1c = param_4 + -8;
  }
  local_24 = 4;
  local_18 = 0;
  if (0 < param_5) {
    local_18 = param_5;
  }
  local_20 = 0;
  if (((uint)param_8 & 0x60) != 0) {
    local_8c = (void *)0x0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_70 = 1;
    local_8 = 0;
    if (((uint)param_8 & 0x20) == 0) {
      uVar10 = 0x3f4ccccd;
    }
    else {
      uVar10 = 0xbf4ccccd;
    }
    FUN_006824f0(uVar10,0x3f800000,0);
    FUN_00684c50(0x99000000);
    puVar11 = local_34;
    local_14 = 0x24;
    uVar10 = 2;
    puVar9 = local_44;
    FUN_0040dcd0(local_54,param_5 / 2);
    FUN_00418db0(puVar9,uVar10);
    iVar6 = FUN_0040e4d0(puVar11);
    FUN_0067fe30(local_6c,*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),1,0x24);
    cVar4 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar4 == '\0') && (cVar4 = FUN_00682580(), cVar4 == '\0')) {
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_8c,local_6c);
    }
    local_8 = 0xffffffff;
    FID_conflict__free(local_8c);
  }
  iVar3 = local_18;
  iVar6 = local_1c;
  uVar2 = local_20;
  uVar10 = local_24;
  FUN_00684c50(DAT_00c7ef90);
  param_8 = (float)param_5 * 0.5;
  puVar7 = operator_new(0x28);
  param_7 = 0.1;
  if ((0.1 <= param_8) && (param_7 = 10000.0, param_8 <= 10000.0)) {
    param_7 = param_8;
  }
  local_8 = 1;
  *puVar7 = juce::ReferenceCountedObject::vftable;
  puVar7[1] = 0;
  *puVar7 = juce::Font::SharedFontInternal::vftable;
  puVar7[2] = 0;
  piVar8 = (int *)FUN_00643f40(uVar5);
  iVar1 = *piVar8;
  puVar7[3] = iVar1;
  piVar8 = (int *)(iVar1 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  FUN_0045c990(&DAT_00c187f4);
  puVar7[5] = param_7;
  puVar7[6] = 0x3f800000;
  puVar7[7] = 0;
  puVar7[8] = 0;
  *(undefined1 *)(puVar7 + 9) = 0;
  LOCK();
  puVar7[1] = puVar7[1] + 1;
  UNLOCK();
  local_8 = 2;
  param_6 = puVar7;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))(&param_6);
  local_8 = 0xffffffff;
  if (param_6 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = param_6 + 1;
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_6)(1);
    }
  }
  FUN_00682290(param_2,0x21,1,0,uVar10,uVar2,iVar6,iVar3);
  ExceptionList = local_10;
  return;
}

