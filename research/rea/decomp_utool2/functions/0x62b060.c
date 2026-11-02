// rea decompile_all
// name: FUN_0062b060
// address: 0x62b060
// body: available
// range: 0x62b060-0x62b133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062b060(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  undefined4 *in_ECX;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_34;
  uint uStack_30;
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  *in_ECX = 0;
  puVar2 = (undefined4 *)FUN_00458890();
  BVar3 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_2c);
  local_34 = local_c;
  uStack_30 = local_10;
  if (BVar3 == 0) {
    uStack_30 = 0;
    local_34 = 0;
  }
  FUN_00440b00(0,0,local_34,uStack_30);
  uStack_30 = local_40;
  uVar1 = param_2[3];
  if (((int)uVar1 < (int)local_40) || (((int)uVar1 <= (int)local_40 && (param_2[2] <= local_44)))) {
    local_44 = param_2[2];
    uStack_30 = uVar1;
  }
  uVar1 = param_2[1];
  if (((int)local_48 < (int)uVar1) || (((int)local_48 <= (int)uVar1 && (local_4c <= *param_2)))) {
    local_4c = *param_2;
    local_48 = uVar1;
  }
  FUN_00440b00(local_4c,local_48,local_44,uStack_30);
  in_ECX[6] = 0;
  FUN_00612470(param_1,local_44,uStack_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

