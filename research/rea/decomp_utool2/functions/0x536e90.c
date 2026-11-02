// rea decompile_all
// name: FUN_00536e90
// address: 0x536e90
// body: available
// range: 0x536e90-0x5370ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00536e90(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  uint uVar3;
  int extraout_EDX;
  undefined4 uStack_68;
  int *piStack_64;
  undefined4 *puStack_60;
  undefined1 **ppuStack_5c;
  undefined1 *local_3c;
  undefined1 *local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d76f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::ListBoxModel::vftable;
  *in_ECX = ViewPort_TargetSonglist::vftable;
  in_ECX[0x1c] = ViewPort_TargetSonglist::vftable;
  in_ECX[0x1e] = ViewPort_TargetSonglist::vftable;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = extraout_EDX;
  if (extraout_EDX != 0) {
    LOCK();
    *(int *)(extraout_EDX + 4) = *(int *)(extraout_EDX + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x21] = &DAT_00bfe12c;
  local_38[0] = &DAT_00bfe12c;
  local_3c = &DAT_00bfe12c;
  local_8 = 5;
  ppuStack_5c = &local_3c;
  puStack_60 = (undefined4 *)0x536f42;
  FUN_006e8b40();
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_5c = (undefined1 **)0x536f64;
      FID_conflict__free(piVar2);
    }
  }
  local_38[0] = &DAT_00bfe12c;
  ppuStack_5c = local_38;
  local_8._0_1_ = 9;
  puStack_60 = (undefined4 *)0x536f84;
  FUN_006e8060();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (*(int *)(param_1 + 0x30) < 0) {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  ppuStack_5c = (undefined1 **)0x536fba;
  FUN_004557e0();
  local_8._0_1_ = 0xc;
  ppuStack_5c = (undefined1 **)0x536fd2;
  ppuStack_5c = (undefined1 **)FUN_00637690();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  puStack_60 = (undefined4 *)0x536fe4;
  FUN_006e4900();
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_5c = (undefined1 **)0x537004;
      FID_conflict__free(piVar2);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0xb);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_5c = (undefined1 **)0x537028;
      FID_conflict__free(piVar2);
    }
  }
  ppuStack_5c = (undefined1 **)0x53703e;
  (**(code **)(in_ECX[0x22] + 0x28))();
  ppuStack_5c = (undefined1 **)0xffffffff;
  piStack_64 = (int *)0x537048;
  puStack_60 = in_ECX + 0x22;
  FUN_006e5050();
  uVar3 = -(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1e);
  if (in_ECX[0x74] != uVar3) {
    in_ECX[0x74] = uVar3;
    FUN_006e6400(&uStack_68);
    FUN_006ce9f0(1);
    ppuStack_5c = (undefined1 **)0x537076;
    FUN_006e7e60();
  }
  ppuStack_5c = (undefined1 **)0x1;
  puStack_60 = (undefined4 *)0x53707f;
  (**(code **)(in_ECX[0x56] + 0x28))();
  puStack_60 = (undefined4 *)0xffffffff;
  uStack_68 = 0x537089;
  piStack_64 = in_ECX + 0x56;
  FUN_006e5050();
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0x30)) {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  puStack_60 = (undefined4 *)(iVar1 * in_ECX[0x79]);
  piStack_64 = (int *)in_ECX[6];
  uStack_68 = 0x14;
  FUN_006e9790(0);
  puStack_60 = (undefined4 *)(in_ECX[0x5d] + in_ECX[0x5b]);
  piStack_64 = (int *)0x64;
  uStack_68 = in_ECX[5];
  FUN_006e9790(in_ECX[4]);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

