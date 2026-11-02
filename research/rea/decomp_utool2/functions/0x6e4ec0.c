// rea decompile_all
// name: FUN_006e4ec0
// address: 0x6e4ec0
// body: available
// range: 0x6e4ec0-0x6e504e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e4ec0(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728660;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1);
  local_8 = 0;
  in_ECX[0x1c] = juce::ComponentListener::vftable;
  puVar1 = in_ECX + 0x1d;
  *puVar1 = juce::ScrollBar::Listener::vftable;
  *in_ECX = juce::Viewport::vftable;
  in_ECX[0x1c] = juce::Viewport::vftable;
  *puVar1 = juce::Viewport::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0x10;
  in_ECX[0x25] = 0x10;
  in_ECX[0x26] = 0x10101;
  *(undefined2 *)(in_ECX + 0x27) = 0;
  FUN_006ea2c0(uVar2);
  local_8._0_1_ = 4;
  FUN_006d29d0(1);
  local_8._0_1_ = 5;
  FUN_006d29d0(0);
  in_ECX[0xc4] = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  (**(code **)(in_ECX[0x28] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x28,0xffffffff);
  *(byte *)(in_ECX + 0x42) = *(byte *)(in_ECX + 0x42) | 0x18;
  piVar3 = (int *)FUN_006e9580();
  if (*(code **)(*piVar3 + 0x18) == FUN_006dd700) {
    uVar4 = 0x12;
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 0x18))();
  }
  in_ECX[0x23] = uVar4;
  FUN_006e5050(in_ECX + 0x44,0xffffffff);
  FUN_006e5050(in_ECX + 0x84,0xffffffff);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004097d0(puVar1);
    }
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x38;
  ExceptionList = local_10;
  return;
}

