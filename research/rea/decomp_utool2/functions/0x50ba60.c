// rea decompile_all
// name: FUN_0050ba60
// address: 0x50ba60
// body: available
// range: 0x50ba60-0x50bf6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0050beb5) */
/* WARNING: Removing unreachable block (ram,0x0050bec0) */
/* WARNING: Removing unreachable block (ram,0x0050bca7) */
/* WARNING: Removing unreachable block (ram,0x0050bcb3) */
/* WARNING: Removing unreachable block (ram,0x0050bb94) */
/* WARNING: Removing unreachable block (ram,0x0050bb9f) */
/* WARNING: Removing unreachable block (ram,0x0050bd91) */
/* WARNING: Removing unreachable block (ram,0x0050bd9e) */
/* WARNING: Removing unreachable block (ram,0x0050bf18) */
/* WARNING: Removing unreachable block (ram,0x0050bf22) */

void FUN_0050ba60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708677;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = FaderMeter::Listener::vftable;
  in_ECX[0x1d] = juce::Button::Listener::vftable;
  in_ECX[0x1e] = juce::Slider::Listener::vftable;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *in_ECX = DSPMChannelStrip::vftable;
  in_ECX[0x1c] = DSPMChannelStrip::vftable;
  in_ECX[0x1d] = DSPMChannelStrip::vftable;
  in_ECX[0x1e] = DSPMChannelStrip::vftable;
  in_ECX[0x1f] = param_1;
  FUN_0050ab40();
  local_8._0_1_ = 4;
  FUN_005839d0();
  local_8._0_1_ = 5;
  FUN_005839d0();
  local_8._0_1_ = 6;
  FUN_0050af00();
  piVar1 = in_ECX + 0x19b;
  FUN_006ea2c0();
  local_8._0_1_ = 8;
  *piVar1 = (int)StripLabel::vftable;
  operator_new(0x28);
  iVar4 = FUN_00468990();
  in_ECX[0x1b8] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x1b7] = 0xffffffff;
  *(byte *)(in_ECX + 0x1b5) = *(byte *)(in_ECX + 0x1b5) & 0xef | 8;
  local_8._0_1_ = 0xb;
  puStack_5c = (undefined4 *)0x50bb83;
  FUN_006e8b40();
  in_ECX[0x1ed] = param_2;
  in_ECX[0x1ee] = 0;
  in_ECX[0x1ef] = 0;
  in_ECX[0x1f0] = 0;
  *(undefined1 *)(in_ECX + 0x1f1) = 1;
  in_ECX[0x1f2] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0xf);
  *(undefined1 *)(in_ECX + 499) = 0;
  in_ECX[0xcb] = param_4;
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c)) != 0) {
    FUN_004097d0();
  }
  if (in_ECX + 0x20 != (int *)0x0) {
    (**(code **)(in_ECX[0x20] + 0x28))();
    puStack_5c = (undefined4 *)0x50bc32;
    FUN_006e5050();
  }
  puStack_5c = (undefined4 *)0x50bc47;
  FUN_00683790();
  local_8._0_1_ = 0x10;
  puStack_5c = (undefined4 *)0x1500;
  uStack_60 = 0x50bc5c;
  FUN_00683790();
  local_8._0_1_ = 0xf;
  puStack_5c = (undefined4 *)0x50bc6e;
  FUN_00411520();
  FUN_0045c990();
  local_8._0_1_ = 0x11;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  *(undefined1 *)(in_ECX + 0x12a) = 1;
  uVar2 = DAT_00c7ef94;
  in_ECX[0x128] = DAT_00c7ef94;
  in_ECX[0x129] = uVar2;
  FUN_006e6400(&uStack_60);
  FUN_006ce9f0(1);
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1d)) != 0) {
    FUN_004097d0();
  }
  if (in_ECX + 0xee != (int *)0x0) {
    (**(code **)(in_ECX[0xee] + 0x28))();
    puStack_5c = (undefined4 *)0x50bd1e;
    FUN_006e5050();
  }
  puStack_5c = (undefined4 *)0x50bd33;
  FUN_00683790();
  local_8._0_1_ = 0x12;
  puStack_5c = (undefined4 *)0x1500;
  uStack_60 = 0x50bd48;
  FUN_00683790();
  local_8._0_1_ = 0xf;
  puStack_5c = (undefined4 *)0x50bd5c;
  FUN_00411520();
  FUN_0045c990();
  local_8._0_1_ = 0x13;
  FUN_006e54f0();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  *(undefined1 *)(in_ECX + 0x170) = 1;
  uVar2 = DAT_00c7ef94;
  in_ECX[0x16e] = DAT_00c7ef94;
  in_ECX[0x16f] = uVar2;
  FUN_006e6400(&uStack_60);
  FUN_006ce9f0(1);
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1d)) != 0) {
    FUN_004097d0();
  }
  if (in_ECX + 0x134 != (int *)0x0) {
    (**(code **)(in_ECX[0x134] + 0x28))();
    puStack_5c = (undefined4 *)0x50be03;
    FUN_006e5050();
  }
  if ((-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1e)) != 0) {
    FUN_004097d0();
  }
  if (in_ECX + 0x17a != (int *)0x0) {
    (**(code **)(in_ECX[0x17a] + 0x28))();
    puStack_5c = (undefined4 *)0x50be3c;
    FUN_006e5050();
  }
  in_ECX[0x1b7] = 3;
  FUN_0050a050();
  if (in_ECX[0x1f] + 1 < 0) {
    iVar4 = FUN_006104a0();
    *(undefined1 *)(iVar4 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  FUN_004557e0();
  local_8._0_1_ = 0x14;
  FUN_006e9f90();
  FUN_006e6400(&uStack_60);
  FUN_006ce9f0(1);
  local_8._0_1_ = 0xf;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
    puStack_5c = (undefined4 *)0x50bee0;
    FUN_006e5050();
  }
  FUN_0045c990();
  local_8._0_1_ = 0x15;
  (**(code **)(in_ECX[0x1d5] + 8))();
  local_8 = CONCAT31(local_8._1_3_,0xf);
  puStack_5c = in_ECX + 0x1b9;
  if (puStack_5c != (undefined4 *)0x0) {
    uStack_60 = 0x50bf3f;
    FUN_006e5050();
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x18;
  puStack_5c = (undefined4 *)0x50bf4b;
  FUN_006e0f90();
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

