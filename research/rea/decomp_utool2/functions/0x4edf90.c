// rea decompile_all
// name: FUN_004edf90
// address: 0x4edf90
// body: available
// range: 0x4edf90-0x4ee248 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004edf90(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  int *piVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705404;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004eb7e0(0);
  local_8 = 0;
  FUN_0063ea10(uVar2);
  piVar4 = in_ECX + 0x4e;
  *in_ECX = PopupDialogProgress::vftable;
  in_ECX[0x1c] = PopupDialogProgress::vftable;
  in_ECX[0x4c] = PopupDialogProgress::vftable;
  *piVar4 = (int)&DAT_00bfe12c;
  local_14 = &DAT_00bfe12c;
  local_8._0_1_ = 3;
  FUN_006e4ec0(&local_14);
  FUN_004ed840();
  local_8._0_1_ = 6;
  *(undefined1 *)(in_ECX + 0x146) = 0;
  FUN_004ecb70();
  FUN_006ea2c0();
  extraout_ECX[0x1c] = juce::Timer::vftable;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  *extraout_ECX = AnimatedFlower::vftable;
  extraout_ECX[0x1c] = AnimatedFlower::vftable;
  extraout_ECX[0x21] = 0;
  local_8._0_1_ = 8;
  piVar3 = (int *)(*param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *param_1;
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
  FUN_0045c990("Cancel");
  local_8._0_1_ = 9;
  FUN_004eabf0(0,&param_1,1);
  local_8._0_1_ = 8;
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
  FUN_0045c990(&DAT_00738d2c);
  local_8._0_1_ = 10;
  FUN_004eabf0(1,&param_1,0);
  local_8._0_1_ = 8;
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
  (**(code **)(in_ECX[0x148] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x148,0xffffffff);
  local_14 = DAT_00c7ebbc;
  local_8._0_1_ = 0xb;
  operator_new(0x28);
  param_1 = (int *)FUN_00468a40(0);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0xd;
  FUN_00636ec0(param_2);
  FUN_0044ec90();
  FUN_00644f50(&param_1,&local_14);
  local_8 = CONCAT31(local_8._1_3_,8);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  FUN_006e4cd0(in_ECX + 0x116,0);
  (**(code **)(in_ECX[0x50] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x50,0xffffffff);
  FUN_006e5050(in_ECX + 0x3e2,0xffffffff);
  ExceptionList = local_10;
  return in_ECX;
}

