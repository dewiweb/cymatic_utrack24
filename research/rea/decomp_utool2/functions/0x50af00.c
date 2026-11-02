// rea decompile_all
// name: FUN_0050af00
// address: 0x50af00
// body: available
// range: 0x50af00-0x50b01e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050af00(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070855e;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_2c = 0x50af32;
  FUN_00583cb0();
  uStack_2c = 0xff;
  local_8 = 0;
  uStack_34 = 0x267c7;
  *in_ECX = DSPMChannelStrip::PanRotarySlider::vftable;
  in_ECX[0x1c] = DSPMChannelStrip::PanRotarySlider::vftable;
  uStack_38 = 0x50af5d;
  uStack_30 = extraout_ECX;
  FUN_00683790();
  uStack_34 = 0x50af67;
  FUN_00583c00();
  iVar1 = in_ECX[0x1e];
  if (*(int *)(iVar1 + 0x18) != 7) {
    *(undefined4 *)(iVar1 + 0x18) = 7;
    FUN_006e6400(&uStack_38);
    FUN_006ce9f0(1);
    pcVar2 = *(code **)(**(int **)(iVar1 + 0x14) + 0x4c);
    if (pcVar2 == FUN_006e10b0) {
      uStack_2c = 0x50afa5;
      uStack_2c = FUN_006e9580();
      uStack_30 = 0x50afad;
      FUN_0049c530();
    }
    else {
      uStack_2c = 0x50afb1;
      (*pcVar2)();
    }
  }
  *(undefined1 *)(in_ECX[0x1e] + 0x135) = 1;
  *(undefined8 *)(in_ECX[0x1e] + 0x88) = 0;
  FUN_0049c410();
  *(undefined1 *)(in_ECX[0x1e] + 0x13a) = 1;
  *(undefined4 *)(in_ECX[0x1e] + 0x150) = param_1;
  uStack_2c = 0x50b009;
  FUN_006e17c0();
  ExceptionList = local_10;
  return;
}

