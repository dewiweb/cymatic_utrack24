// rea decompile_all
// name: FUN_0061dea0
// address: 0x61dea0
// body: available
// range: 0x61dea0-0x61df1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061dea0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_34 = __alldiv(param_1,param_2,1000,0);
  iVar1 = FUN_004ce0c3(&local_58,&local_34);
  if (iVar1 != 0) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  local_c = 0xffffffff;
  local_2c = local_58;
  uStack_28 = uStack_54;
  uStack_24 = uStack_50;
  uStack_20 = uStack_4c;
  local_1c = local_48;
  uStack_18 = uStack_44;
  uStack_14 = uStack_40;
  uStack_10 = uStack_3c;
  FUN_004ce85b(&local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

