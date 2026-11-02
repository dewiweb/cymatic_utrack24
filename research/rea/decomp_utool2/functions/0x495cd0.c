// rea decompile_all
// name: FUN_00495cd0
// address: 0x495cd0
// body: available
// range: 0x495cd0-0x495dbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495cd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd660;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006e3660(param_1);
  *in_ECX = juce::LookAndFeel_V2::GlassWindowButton::vftable;
  in_ECX[0x1c] = juce::LookAndFeel_V2::GlassWindowButton::vftable;
  in_ECX[0x38] = param_2;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  iVar1 = param_3[2];
  in_ECX[0x3b] = iVar1;
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  in_ECX[0x3c] = param_3[3];
  in_ECX[0x3d] = uVar2;
  in_ECX[0x3e] = uVar3;
  in_ECX[0x3f] = uVar4;
  *(undefined1 *)(in_ECX + 0x40) = *(undefined1 *)(param_3 + 7);
  if (iVar1 != 0) {
    FUN_00409cf0(iVar1);
    FUN_004c2c30(in_ECX[0x39],*param_3,in_ECX[0x3b] << 2,uVar5);
  }
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  iVar1 = param_4[2];
  in_ECX[0x43] = iVar1;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[6];
  in_ECX[0x44] = param_4[3];
  in_ECX[0x45] = uVar2;
  in_ECX[0x46] = uVar3;
  in_ECX[0x47] = uVar4;
  *(undefined1 *)(in_ECX + 0x48) = *(undefined1 *)(param_4 + 7);
  if (iVar1 != 0) {
    FUN_00409cf0(iVar1);
    FUN_004c2c30(in_ECX[0x41],*param_4,in_ECX[0x43] << 2,uVar5);
  }
  ExceptionList = local_10;
  return;
}

