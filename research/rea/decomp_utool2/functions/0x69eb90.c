// rea decompile_all
// name: FUN_0069eb90
// address: 0x69eb90
// body: available
// range: 0x69eb90-0x69ed23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0069eb90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined **local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007228e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  uVar3 = FUN_0069f1b0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  switch(uVar3) {
  case 0:
  case 4:
    FUN_00625460();
    ExceptionList = local_10;
    return param_1;
  case 1:
    break;
  case 2:
  case 5:
    FUN_00625460();
    ExceptionList = local_10;
    return param_1;
  case 3:
    break;
  case 6:
    FUN_00625460();
    ExceptionList = local_10;
    return param_1;
  case 7:
    FUN_00625460();
    ExceptionList = local_10;
    return param_1;
  default:
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0xc);
    if ((iVar1 == 0) || (iVar4 = FUN_00499c40(&param_2), iVar4 == 0)) {
      FUN_00624c90(param_1,uVar2);
      ExceptionList = local_10;
      return param_1;
    }
    local_1c = juce::MarkerListScope::vftable;
    local_8 = 0;
    local_18 = iVar1;
    FUN_006250e0(&local_1c);
  }
  FUN_00625460();
  ExceptionList = local_10;
  return param_1;
}

