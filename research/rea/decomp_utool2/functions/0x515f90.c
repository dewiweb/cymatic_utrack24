// rea decompile_all
// name: FUN_00515f90
// address: 0x515f90
// body: available
// range: 0x515f90-0x516255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515f90(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined1 *puStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 *puStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709399;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = PushButton::Listener::vftable;
  in_ECX[0x1d] = juce::ComponentListener::vftable;
  in_ECX[0x1e] = juce::ListBoxModel::vftable;
  *in_ECX = PresetSelector::vftable;
  in_ECX[0x1c] = PresetSelector::vftable;
  in_ECX[0x1d] = PresetSelector::vftable;
  in_ECX[0x1e] = PresetSelector::vftable;
  in_ECX[0x1f] = param_1;
  param_1 = &DAT_00bfe12c;
  local_8 = 5;
  puStack_34 = (undefined4 *)0x516024;
  FUN_006e8b40();
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 8;
  FUN_004f83b0();
  local_8._0_1_ = 9;
  FUN_004fa670();
  in_ECX[0xd6] = 0xffffffff;
  in_ECX[0xd7] = 0xffffffff;
  in_ECX[0xd8] = 0;
  *(undefined1 *)((int)in_ECX + 0x365) = 0;
  in_ECX[0xda] = 0;
  in_ECX[0xdb] = 0;
  in_ECX[0xdc] = 0;
  local_8._0_1_ = 0xc;
  FUN_0045c990();
  local_8._0_1_ = 0xd;
  puStack_34 = (undefined4 *)0x5160da;
  FUN_006e4900();
  local_8._0_1_ = 0xc;
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  (**(code **)(in_ECX[0x20] + 0x28))();
  puStack_34 = in_ECX + 0x20;
  piStack_38 = (int *)0x516123;
  FUN_006e5050();
  puStack_34 = (undefined4 *)0x516134;
  FUN_0045c990();
  local_8._0_1_ = 0xe;
  puStack_34 = &param_1;
  piStack_38 = (int *)0x51614b;
  FUN_004f8290();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_34 = (undefined4 *)0x516170;
      FID_conflict__free(piVar4);
    }
  }
  puStack_34 = (undefined4 *)0x516189;
  FUN_00684210();
  uVar3 = DAT_00c8a720;
  uVar2 = DAT_00c7ebb4;
  puStack_40 = (undefined1 *)&piStack_3c;
  in_ECX[0x76] = DAT_00c7ebb4;
  in_ECX[0x77] = uVar3;
  in_ECX[0x78] = uVar2;
  in_ECX[0x79] = uVar3;
  in_ECX[0x7a] = uVar3;
  in_ECX[0x7b] = param_1;
  FUN_006e6400();
  puStack_40 = (undefined1 *)0x1;
  FUN_006ce9f0();
  if (in_ECX != (undefined4 *)0xffffff90) {
    puStack_34 = (undefined4 *)0x5161e2;
    FUN_004097d0();
  }
  puStack_34 = (undefined4 *)0x5161eb;
  (**(code **)(in_ECX[0x54] + 0x28))();
  puStack_34 = (undefined4 *)0xffffffff;
  piStack_3c = (int *)0x5161f5;
  piStack_38 = in_ECX + 0x54;
  FUN_006e5050();
  puStack_34 = (undefined4 *)0x14;
  piStack_38 = (int *)0x64;
  piStack_3c = (int *)in_ECX[0xa6];
  puStack_40 = (undefined1 *)in_ECX[0xa5];
  FUN_006e9790();
  if (in_ECX[200] != 0x24) {
    in_ECX[200] = 0x24;
    FUN_006e6400(&puStack_40);
    FUN_006ce9f0(1);
  }
  puStack_34 = (undefined4 *)0x1;
  piStack_38 = (int *)0x516236;
  (**(code **)(in_ECX[0xa1] + 0x28))();
  piStack_38 = (int *)0xffffffff;
  puStack_40 = (undefined1 *)0x516240;
  piStack_3c = in_ECX + 0xa1;
  FUN_006e5050();
  ExceptionList = local_10;
  return;
}

