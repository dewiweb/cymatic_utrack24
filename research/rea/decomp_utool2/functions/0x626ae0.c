// rea decompile_all
// name: FUN_00626ae0
// address: 0x626ae0
// body: available
// range: 0x626ae0-0x626b8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00626ae0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20 [2];
  undefined1 local_18 [12];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_2c;
  uVar4 = *(int *)(in_ECX + 0x10) - 1;
  if (-1 < (int)uVar4) {
    iVar3 = uVar4 * 0x18;
    local_28 = in_ECX;
    do {
      if ((uVar4 < *(uint *)(in_ECX + 0x10)) &&
         (local_2c = (undefined4 *)(*(int *)(in_ECX + 8) + 8 + iVar3), in_ECX = local_28,
         local_2c != (undefined4 *)0x0)) {
        puVar2 = (undefined4 *)FUN_00628c70(local_20);
        uVar1 = *local_2c;
        *local_2c = *puVar2;
        *puVar2 = uVar1;
        local_24 = local_2c[2];
        uVar1 = local_2c[3];
        local_2c[2] = puVar2[2];
        local_2c[3] = puVar2[3];
        puVar2[3] = uVar1;
        puVar2[2] = local_24;
        (**(code **)(*local_20[0] + 0x54))(local_18);
        in_ECX = local_28;
      }
      iVar3 = iVar3 + -0x18;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  __security_check_cookie(local_c ^ (uint)&local_2c);
  return;
}

