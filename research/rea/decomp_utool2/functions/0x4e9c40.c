// rea decompile_all
// name: FUN_004e9c40
// address: 0x4e9c40
// body: available
// range: 0x4e9c40-0x4e9e7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9c40(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704d65;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004eb7e0(0);
  in_ECX[0x4c] = juce::ListBoxModel::vftable;
  *in_ECX = BasePopupDialog::vftable;
  in_ECX[0x1c] = BasePopupDialog::vftable;
  in_ECX[0x4c] = BasePopupDialog::vftable;
  in_ECX[0x4d] = &DAT_00bfe12c;
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
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  FUN_006e8060(&local_14,extraout_ECX);
  local_14 = (undefined4 *)&DAT_00bfe12c;
  local_8._0_1_ = 10;
  FUN_006e5a80(&local_14,0);
  local_18 = DAT_00c7ebbc;
  local_8._0_1_ = 0xd;
  operator_new(0x28);
  local_14 = (undefined4 *)FUN_00468a40(0);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_00636ec0(param_2);
  FUN_0044ec90(&local_14,&local_18);
  FUN_00644f50();
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

