// rea decompile_all
// name: FUN_004e9900
// address: 0x4e9900
// body: available
// range: 0x4e9900-0x4e9c36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_004e9900(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *_Memory;
  undefined4 *in_ECX;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 **ppuStack_4c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704cb5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppuStack_4c = (undefined4 **)0x4e9934;
  FUN_004eb7e0();
  puVar2 = in_ECX + 0x4c;
  *puVar2 = juce::ListBoxModel::vftable;
  *puVar2 = BasePopupDialog::vftable;
  local_14 = in_ECX + 0x4d;
  *in_ECX = BasePopupDialog::vftable;
  in_ECX[0x1c] = BasePopupDialog::vftable;
  *local_14 = &DAT_00bfe12c;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 1;
  in_ECX[0x50] = 1;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 9;
  in_ECX[0x5b] = &DAT_00bfe12c;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 1;
  in_ECX[0x5e] = 1;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 9;
  puVar3 = in_ECX + 0x69;
  *puVar3 = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  local_18 = (undefined4 *)&DAT_00bfe12c;
  ppuStack_4c = &local_18;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  piStack_50 = (int *)0x4e9a8c;
  FUN_006e8060();
  local_18 = (undefined4 *)&DAT_00bfe12c;
  ppuStack_4c = &local_18;
  local_8._0_1_ = 10;
  piStack_50 = (int *)0x4e9aa8;
  FUN_006e5a80();
  local_8._0_1_ = 0xd;
  ppuStack_4c = (undefined4 **)0x4e9abb;
  operator_new(0x28);
  ppuStack_4c = (undefined4 **)0x4e9acf;
  local_18 = (undefined4 *)FUN_00468a40();
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    local_18[1] = local_18[1] + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,0xf);
  ppuStack_4c = (undefined4 **)0x4e9aea;
  FUN_00636ec0();
  FUN_0044ec90();
  ppuStack_4c = &local_18;
  piStack_50 = (int *)0x4e9b06;
  FUN_00644f50();
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ppuStack_4c = (undefined4 **)0x4e9b26;
      (**(code **)*local_18)();
    }
  }
  local_8._0_1_ = 0x10;
  ppuStack_4c = (undefined4 **)0x4e9b39;
  operator_new(0x28);
  ppuStack_4c = (undefined4 **)0x4e9b4d;
  param_2 = (undefined4 *)FUN_00468a40();
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0x12;
  ppuStack_4c = (undefined4 **)0x4e9b68;
  FUN_00636ec0();
  FUN_0044ec90();
  ppuStack_4c = &param_2;
  piStack_50 = (int *)0x4e9b84;
  FUN_00644f50();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ppuStack_4c = (undefined4 **)0x4e9ba3;
      (**(code **)*param_2)();
    }
  }
  if (puVar3 != param_3) {
    ppuStack_4c = (undefined4 **)0x4e9bb3;
    FUN_0041b050();
    _Memory = (void *)*puVar3;
    *puVar3 = local_34;
    in_ECX[0x6a] = local_30;
    in_ECX[0x6b] = local_2c;
    FUN_0040f7f0();
    ppuStack_4c = (undefined4 **)0x4e9be3;
    FID_conflict__free(_Memory);
  }
  if ((undefined4 *)in_ECX[0x8a] != puVar2) {
    in_ECX[0x8a] = puVar2;
    FUN_006e6400(&uStack_54);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  ppuStack_4c = (undefined4 **)0x4e9c15;
  (**(code **)(in_ECX[0x6c] + 0x28))();
  ppuStack_4c = (undefined4 **)0xffffffff;
  uStack_54 = 0x4e9c20;
  piStack_50 = in_ECX + 0x6c;
  FUN_006e5050();
  ExceptionList = local_10;
  return in_ECX;
}

