// rea decompile_all
// name: FUN_0044f740
// address: 0x44f740
// body: available
// range: 0x44f740-0x44f7ec inclusive
// range: 0x44f7ff-0x44f827 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044f740(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar2 = *(code **)(*param_2 + 0x48);
  if (pcVar2 == FUN_006205c0) {
    local_10 = CONCAT71(local_10._1_7_,1);
    (**(code **)(*param_2 + 0x10))(&local_10,2);
  }
  else {
    (*pcVar2)(9);
  }
  pcVar2 = *(code **)(*param_2 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    local_14[0] = 4;
    (**(code **)(*param_2 + 0x10))(local_14,1);
  }
  else {
    (*pcVar2)(4);
  }
  ppuVar3 = (undefined **)*param_2;
  uVar1 = *param_1;
  if ((code *)ppuVar3[0xf] != FUN_00620490) {
    (*(code *)ppuVar3[0xf])(uVar1);
    FUN_0044f7ed();
    return;
  }
  local_10._0_4_ = (undefined4)uVar1;
  local_10._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar4 = local_10._4_4_;
  local_10 = uVar1;
  if (ppuVar3 != juce::MemoryOutputStream::vftable) {
    uVar5 = (undefined4)local_10;
    (*(code *)ppuVar3[0xb])(uVar5,uVar4);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_1c = (undefined4)local_10;
  local_18 = local_10._4_4_;
  FUN_0062ca80(&local_1c,8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

