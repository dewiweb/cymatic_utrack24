// rea decompile_all
// name: FUN_00612370
// address: 0x612370
// body: available
// range: 0x612370-0x612460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612370(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  BOOL BVar2;
  undefined8 uVar3;
  undefined1 local_2c [4];
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  puVar1 = (undefined4 *)FUN_00458890();
  BVar2 = GetFileAttributesExW((LPCWSTR)*puVar1,GetFileExInfoStandard,local_2c);
  if (BVar2 != 0) {
    uVar3 = __aulldiv(local_18 + 0x2ac18000,local_14 + -0x19db1df + (uint)(0xd53e7fff < local_18),
                      10000,0);
    *param_1 = uVar3;
    uVar3 = __aulldiv(local_28 + 0x2ac18000,local_24 + -0x19db1df + (uint)(0xd53e7fff < local_28),
                      10000,0);
    *param_3 = uVar3;
    uVar3 = __aulldiv(local_20 + 0x2ac18000,local_1c + -0x19db1df + (uint)(0xd53e7fff < local_20),
                      10000,0);
    *param_2 = uVar3;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

