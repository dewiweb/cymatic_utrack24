// rea decompile_all
// name: FUN_004932a0
// address: 0x4932a0
// body: available
// range: 0x4932a0-0x4934e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004932a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007022b3;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1);
  local_8 = 0;
  *in_ECX = juce::FileChooserDialogBox::ContentComponent::vftable;
  in_ECX[0x1c] = param_3;
  uVar3 = (**(code **)(*param_3 + 0xb0))(&param_1,uVar2);
  local_8._0_1_ = 1;
  param_3 = in_ECX + 0x1d;
  FUN_006e3660(uVar3);
  in_ECX[0x1d] = juce::TextButton::vftable;
  in_ECX[0x39] = juce::TextButton::vftable;
  local_8._0_1_ = 3;
  piVar5 = (int *)((int)param_1 + -8);
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
  piVar5 = in_ECX + 0x55;
  local_8._0_1_ = 4;
  param_1 = piVar5;
  FUN_006e3660(uVar3);
  *piVar5 = (int)juce::TextButton::vftable;
  in_ECX[0x71] = juce::TextButton::vftable;
  local_8._0_1_ = 6;
  piVar4 = param_3 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  uVar3 = FUN_00637250();
  param_3 = in_ECX + 0x8d;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_006e3660(uVar3);
  in_ECX[0x8d] = juce::TextButton::vftable;
  in_ECX[0xa9] = juce::TextButton::vftable;
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
  iVar1 = *param_2;
  in_ECX[0xc5] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  in_ECX[0xc6] = 0;
  in_ECX[199] = 0;
  in_ECX[200] = 0;
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 9;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar4 = (int *)in_ECX[0x1c];
  (**(code **)(*piVar4 + 0x28))(1);
  FUN_006e5050(piVar4,0xffffffff);
  (**(code **)(in_ECX[0x1d] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x1d,0xffffffff);
  local_20 = 0xd;
  local_1c = 0;
  local_18 = 0;
  FUN_006c80f0(&local_20);
  (**(code **)(*piVar5 + 0x28))(1);
  FUN_006e5050(piVar5,0xffffffff);
  local_20 = 0x1b;
  local_1c = 0;
  local_18 = 0;
  FUN_006c80f0(&local_20);
  FUN_006e5050(in_ECX + 0x8d,0xffffffff);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x18;
  ExceptionList = local_10;
  return;
}

