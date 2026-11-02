// rea decompile_all
// name: FUN_004aa980
// address: 0x4aa980
// body: available
// range: 0x4aa980-0x4aaa19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa980(HIMC param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_50 [16];
  LONG local_40;
  int local_3c;
  int local_34;
  undefined4 local_30;
  tagCANDIDATEFORM local_2c;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_30 = param_2;
  iVar1 = FUN_006f6dd6(param_3,0,&juce::TextInputTarget::RTTI_Type_Descriptor,
                       &juce::Component::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_3 + 0x1c))(local_50);
    FUN_006d37f0(&local_40,iVar1,uVar2);
    local_2c.ptCurrentPos.x = local_40;
    local_2c.ptCurrentPos.y = local_3c + local_34;
    local_2c.dwIndex = 0;
    local_2c.dwStyle = 0x40;
    local_2c.rcArea.left = 0;
    local_2c.rcArea.top = 0;
    local_2c.rcArea.right = 0;
    local_2c.rcArea.bottom = 0;
    ImmSetCandidateWindow(param_1,&local_2c);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

