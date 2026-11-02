// rea decompile_all
// name: FUN_006d74b0
// address: 0x6d74b0
// body: available
// range: 0x6d74b0-0x6d7867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006d74b0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_006ab010();
  *in_ECX = juce::LookAndFeel_V3::vftable;
  in_ECX[1] = juce::LookAndFeel_V3::vftable;
  in_ECX[2] = juce::LookAndFeel_V3::vftable;
  in_ECX[3] = juce::LookAndFeel_V3::vftable;
  in_ECX[4] = juce::LookAndFeel_V3::vftable;
  in_ECX[5] = juce::LookAndFeel_V3::vftable;
  in_ECX[6] = juce::LookAndFeel_V3::vftable;
  in_ECX[7] = juce::LookAndFeel_V3::vftable;
  in_ECX[8] = juce::LookAndFeel_V3::vftable;
  in_ECX[9] = juce::LookAndFeel_V3::vftable;
  in_ECX[10] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xb] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xc] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xd] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xe] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xf] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x10] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x11] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x12] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x13] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x14] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x15] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x16] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x17] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x18] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x19] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x1a] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x1b] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  piVar3 = in_ECX + 0x1d;
  local_18 = 0x301111ee;
  local_20 = 0x1000503;
  local_1c = 0x301111ee;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0x301111ee;
  }
  local_18 = 0xffeeeeff;
  local_20 = 0x1000100;
  local_1c = 0xffeeeeff;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0xffeeeeff;
  }
  local_18 = 0xff000000;
  local_20 = 0x1000101;
  local_1c = 0xff000000;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0xff000000;
  }
  local_18 = 0x1000d00;
  local_14 = 0xffeeeeff;
  iVar2 = FUN_004ae580(&local_18);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_18);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0xffeeeeff;
  }
  uVar1 = DAT_00c8a948;
  local_18 = 0x1000205;
  local_14 = DAT_00c8a948;
  iVar2 = FUN_004ae580(&local_18);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_18);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = uVar1;
  }
  local_18 = 0x66000000;
  local_20 = 0x1005812;
  local_1c = 0x66000000;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0x66000000;
  }
  local_18 = 0x66000000;
  local_20 = 0x1005801;
  local_1c = 0x66000000;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0x66000000;
  }
  local_18 = 0xbbffffff;
  local_20 = 0x1001310;
  local_1c = 0xbbffffff;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0xbbffffff;
  }
  local_18 = 0xffddddff;
  local_20 = 0x1001300;
  local_1c = 0xffddddff;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0xffddddff;
  }
  local_18 = 0xeeeeeedd;
  local_20 = 0x1000af0;
  local_1c = 0xeeeeeedd;
  iVar2 = FUN_004ae580(&local_20);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_20);
  }
  else {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = 0xeeeeeedd;
  }
  puVar5 = &local_24;
  puVar4 = &local_20;
  FUN_0067f410(puVar4,puVar5);
  FUN_00680c60(puVar4);
  FUN_006842b0(puVar5);
  local_10 = 0x1000400;
  local_c = local_24;
  iVar2 = FUN_004ae580(&local_10);
  if (-1 < iVar2) {
    *(undefined4 *)(*piVar3 + 4 + iVar2 * 8) = local_24;
    return in_ECX;
  }
  FUN_004ae4f0(&local_10);
  return in_ECX;
}

