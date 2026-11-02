// rea decompile_all
// name: FUN_004eabf0
// address: 0x4eabf0
// body: available
// range: 0x4eabf0-0x4eadd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eabf0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined1 *local_2c;
  undefined **local_28 [2];
  undefined4 local_20 [2];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704e61;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar2;
  piVar3 = operator_new(0xe0);
  local_2c = &DAT_00bfe12c;
  local_8 = 1;
  FUN_006e3660(&local_2c);
  *piVar3 = (int)juce::TextButton::vftable;
  piVar3[0x1c] = (int)juce::TextButton::vftable;
  local_8 = 0xffffffff;
  FUN_006e54f0(param_2);
  local_28[0] = &PTR_vftable_00c7ed44;
  local_20[0] = param_1;
  ppuVar6 = &local_2c;
  local_8 = 2;
  puVar7 = &DAT_00738bf4;
  FUN_0061f730(ppuVar6,&DAT_00738bf4,uVar2);
  FUN_0061fa00(ppuVar6,puVar7);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00637060(&local_2c,local_28);
  piVar5 = (int *)(local_2c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  (**(code **)(*local_28[0] + 0x54))(local_20);
  local_28[0] = &PTR_vftable_00c7ed34;
  local_20[0] = CONCAT31(local_20[0]._1_3_,1);
  ppuVar6 = &local_2c;
  local_8 = 4;
  puVar7 = &DAT_00738bf8;
  FUN_0061f730(ppuVar6,&DAT_00738bf8);
  FUN_0061fa00(ppuVar6,puVar7);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00637060(&local_2c,local_28);
  piVar5 = (int *)(local_2c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_28[0] + 0x54))(local_20);
  uVar2 = -(uint)(in_ECX != 0) & in_ECX + 0x70U;
  if (uVar2 != 0) {
    FUN_004097d0(uVar2);
  }
  uVar4 = FUN_006c65e0(0x1e);
  FUN_006e9790(piVar3[4],piVar3[5],uVar4,0x1e);
  FUN_006e6260(-(uint)(in_ECX != 0) & in_ECX + 0x74U);
  FUN_004096e0(param_1,piVar3);
  if (param_3 != '\0') {
    (**(code **)(*piVar3 + 0x28))(1);
  }
  FUN_006e5050(piVar3,0xffffffff);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

