// rea decompile_all
// name: FUN_0062f7d0
// address: 0x62f7d0
// body: available
// range: 0x62f7d0-0x62f877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f7d0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined1 auStack_98 [12];
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint local_14;
  
  local_14 = DAT_00c76070 ^ (uint)auStack_98;
  local_84 = 0;
  local_8c = __alldiv(*in_ECX,in_ECX[1],1000,0);
  iVar1 = FUN_004ce358(&local_80,&local_8c);
  if (iVar1 != 0) {
    local_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_60 = 0;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
  }
  local_50 = local_80;
  uStack_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  local_40 = local_70;
  uStack_3c = uStack_6c;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  local_30 = local_60;
  FUN_0061dd10(&local_50);
  __security_check_cookie(local_14 ^ (uint)auStack_98);
  return;
}

