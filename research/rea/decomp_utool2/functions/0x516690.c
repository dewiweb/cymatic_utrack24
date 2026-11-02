// rea decompile_all
// name: FUN_00516690
// address: 0x516690
// body: available
// range: 0x516690-0x516b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005169df) */
/* WARNING: Removing unreachable block (ram,0x005169ec) */
/* WARNING: Removing unreachable block (ram,0x005168df) */
/* WARNING: Removing unreachable block (ram,0x005168ec) */
/* WARNING: Removing unreachable block (ram,0x0051685f) */
/* WARNING: Removing unreachable block (ram,0x0051686c) */
/* WARNING: Removing unreachable block (ram,0x0051695f) */
/* WARNING: Removing unreachable block (ram,0x0051696c) */
/* WARNING: Removing unreachable block (ram,0x00516a5f) */
/* WARNING: Removing unreachable block (ram,0x00516a6c) */

void FUN_00516690(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070947f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::Button::Listener::vftable;
  *in_ECX = PresetSelectorPopup::vftable;
  *puVar1 = PresetSelectorPopup::vftable;
  in_ECX[0x1d] = param_1;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_006e8060();
  local_8._0_1_ = 5;
  FUN_006e3660();
  in_ECX[0x4d] = juce::TextButton::vftable;
  in_ECX[0x69] = juce::TextButton::vftable;
  local_8._0_1_ = 7;
  FUN_006e3660();
  in_ECX[0x85] = juce::TextButton::vftable;
  in_ECX[0xa1] = juce::TextButton::vftable;
  local_8._0_1_ = 9;
  FUN_006e3660();
  in_ECX[0xbd] = juce::TextButton::vftable;
  in_ECX[0xd9] = juce::TextButton::vftable;
  local_8._0_1_ = 0xb;
  FUN_006e3660();
  in_ECX[0xf5] = juce::TextButton::vftable;
  in_ECX[0x111] = juce::TextButton::vftable;
  local_8._0_1_ = 0xd;
  FUN_006e3660();
  in_ECX[0x12d] = juce::TextButton::vftable;
  in_ECX[0x149] = juce::TextButton::vftable;
  local_8._0_1_ = 0xe;
  FUN_0045c990();
  local_8._0_1_ = 0xf;
  FUN_006e54f0();
  local_8._0_1_ = 0xe;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x4d] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x10;
  FUN_006e54f0();
  local_8._0_1_ = 0xe;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x85] + 0x28))();
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x11;
  FUN_006e54f0();
  local_8._0_1_ = 0xe;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0xf5] + 0x28))();
  puStack_40 = (undefined4 *)0x5169a6;
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x12;
  FUN_006e54f0();
  local_8._0_1_ = 0xe;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0();
  }
  (**(code **)(in_ECX[0x12d] + 0x28))();
  puStack_40 = in_ECX + 0x12d;
  puStack_44 = (undefined4 *)0x516a26;
  FUN_006e5050();
  puStack_40 = (undefined4 *)0x516a37;
  FUN_0045c990();
  local_8._0_1_ = 0x13;
  puStack_40 = (undefined4 *)0x516a4d;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  if (puVar1 != (undefined4 *)0x0) {
    puStack_40 = (undefined4 *)0x516a85;
    FUN_004097d0();
  }
  puStack_40 = (undefined4 *)0x516a98;
  (**(code **)(in_ECX[0xbd] + 0x28))();
  puStack_40 = (undefined4 *)0xffffffff;
  piStack_48 = (int *)0x516aa2;
  puStack_44 = in_ECX + 0xbd;
  FUN_006e5050();
  uVar2 = -(uint)(param_1 != 0) & param_1 + 0x78U;
  if (in_ECX[0x40] != uVar2) {
    in_ECX[0x40] = uVar2;
    FUN_006e6400(&uStack_4c);
    FUN_006ce9f0(1);
    puStack_40 = (undefined4 *)0x516ad1;
    FUN_006e7e60();
  }
  puStack_44 = (undefined4 *)0x1002800;
  puStack_40 = (undefined4 *)DAT_00c8a71c;
  piStack_48 = (int *)0x516ae7;
  FUN_006e6170();
  puStack_40 = (undefined4 *)0x1;
  puStack_44 = (undefined4 *)0x516af0;
  (**(code **)(in_ECX[0x22] + 0x28))();
  puStack_44 = (undefined4 *)0xffffffff;
  uStack_4c = 0x516afa;
  piStack_48 = in_ECX + 0x22;
  FUN_006e5050();
  ExceptionList = local_10;
  return;
}

