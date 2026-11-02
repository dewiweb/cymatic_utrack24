// rea decompile_all
// name: FUN_00624280
// address: 0x624280
// body: available
// range: 0x624280-0x62439e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00624280(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar4;
  undefined1 *local_38;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071d54a;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar4 = (*(int *)(in_ECX + 4) * 8 + 5U) / 6;
  iVar1 = FUN_006104a0(local_14);
  FUN_004557e0(&local_15 + -iVar1);
  local_8 = 0;
  uVar2 = FUN_0044ec90();
  FUN_00455850(*param_1);
  *param_1 = local_38;
  FUN_0044ebd0(uVar2);
  *local_38 = 0x2e;
  if (uVar4 == 0) {
    local_38[1] = 0;
  }
  else {
    iVar1 = 0;
    uVar2 = extraout_ECX;
    do {
      iVar3 = FUN_006243a0(iVar1,uVar2);
      FUN_0044ecc0(".ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+"[iVar3]);
      iVar1 = iVar1 + 6;
      uVar4 = uVar4 - 1;
      uVar2 = extraout_ECX_00;
    } while (uVar4 != 0);
    local_38[1] = 0;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

