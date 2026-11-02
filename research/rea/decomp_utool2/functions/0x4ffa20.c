// rea decompile_all
// name: FUN_004ffa20
// address: 0x4ffa20
// body: available
// range: 0x4ffa20-0x4fffc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ffa20(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  undefined4 extraout_EDX;
  undefined1 auStack_7c [4];
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined1 **ppuStack_70;
  undefined1 *local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070729e;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::ComponentListener::vftable;
  in_ECX[0x1d] = juce::Button::Listener::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *in_ECX = PopupStartModeSelector::vftable;
  in_ECX[0x1c] = PopupStartModeSelector::vftable;
  in_ECX[0x1d] = PopupStartModeSelector::vftable;
  in_ECX[0x1e] = extraout_EDX;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  FUN_004f7780();
  local_8._0_1_ = 3;
  FUN_004f7780();
  local_8._0_1_ = 4;
  FUN_004f7780();
  local_38[0] = &DAT_00bfe12c;
  local_8._0_1_ = 6;
  FUN_006e5a80();
  local_38[0] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_006e8b40();
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8._0_1_ = 0xe;
  FUN_006e3660();
  in_ECX[0x167] = juce::TextButton::vftable;
  in_ECX[0x183] = juce::TextButton::vftable;
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_006e5050();
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c)) != 0) {
    FUN_004097d0();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x10;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_004f7640();
  if ((in_ECX[0x50] != 1) && (in_ECX[0x50] = 1, *(char *)(in_ECX + 0x59) != '\0')) {
    FUN_006c8780();
  }
  (**(code **)(in_ECX[0x23] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x11;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_004f7640();
  if ((in_ECX[0x8d] != 1) && (in_ECX[0x8d] = 1, *(char *)(in_ECX + 0x96) != '\0')) {
    FUN_006c8780();
  }
  (**(code **)(in_ECX[0x60] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x12;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_004f7640();
  if ((in_ECX[0xca] != 1) && (in_ECX[0xca] = 1, *(char *)(in_ECX + 0xd3) != '\0')) {
    FUN_006c8780();
  }
  (**(code **)(in_ECX[0x9d] + 0x28))();
  FUN_006e5050();
  iVar1 = FUN_004ae6c0();
  if (iVar1 == 0) {
    FUN_0045c990();
    local_8._0_1_ = 0x13;
  }
  else {
    FUN_0045c990();
    local_8._0_1_ = 0x14;
  }
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_006c65e0();
  ppuStack_70 = (undefined1 **)in_ECX[0x16b];
  puStack_74 = (undefined4 *)0x4ffdfc;
  FUN_006e9790();
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1d)) != 0) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x167] + 0x28))();
  ppuStack_70 = (undefined1 **)0x4ffe36;
  FUN_006e5050();
  if (*(int *)(in_ECX[0x1e] + 0x7c) < 0) {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  FUN_004557e0();
  local_8._0_1_ = 0x15;
  ppuStack_70 = (undefined1 **)0x4ffe80;
  FUN_006e55f0();
  local_8._0_1_ = 0xf;
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  (**(code **)(in_ECX[0xda] + 0x28))();
  ppuStack_70 = (undefined1 **)(in_ECX + 0xda);
  puStack_74 = (undefined4 *)0x4ffec9;
  FUN_006e5050();
  ppuStack_70 = (undefined1 **)0x4ffeda;
  FUN_0045c990();
  ppuStack_70 = local_38;
  local_8._0_1_ = 0x16;
  puStack_74 = (undefined4 *)0x4ffef2;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  piVar2 = (int *)(local_38[0] + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_70 = (undefined1 **)0x4fff17;
      FID_conflict__free(piVar2);
    }
  }
  ppuStack_70 = (undefined1 **)0x4fff2b;
  (**(code **)(in_ECX[0x133] + 0x28))();
  ppuStack_70 = (undefined1 **)0xffffffff;
  puStack_74 = in_ECX + 0x133;
  uStack_78 = 0x4fff3b;
  FUN_006e5050();
  iVar1 = *(int *)(in_ECX[0x1e] + 0x78);
  if (iVar1 == 1) {
    in_ECX[0x9b] = 2;
    FUN_006e6400(auStack_7c);
  }
  else if (iVar1 == 2) {
    in_ECX[0xd8] = 2;
    FUN_006e6400(auStack_7c);
  }
  else {
    if (iVar1 != 3) goto LAB_004fffa8;
    in_ECX[0x5e] = 2;
    FUN_006e6400(auStack_7c);
  }
  FUN_006ce9f0(1);
LAB_004fffa8:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

