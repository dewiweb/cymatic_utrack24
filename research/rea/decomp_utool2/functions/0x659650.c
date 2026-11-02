// rea decompile_all
// name: FUN_00659650
// address: 0x659650
// body: available
// range: 0x659650-0x65973e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659650(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_2e0 [22];
  code *pcStack_288;
  code *pcStack_284;
  undefined4 *puStack_280;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)local_2e0;
  _memset(local_2e0,0,0x2d0);
  local_a8 = 0x7fffffff;
  local_a4 = 0x7fffffff;
  local_a0 = 0;
  local_9c = 0;
  local_2e0[2] = 0;
  local_2e0[0] = 0;
  local_2e0[1] = 0;
  iVar1 = FUN_00659740();
  if (iVar1 != 0) {
    puStack_280 = (undefined4 *)FUN_004c554b(0x2d0);
    if (puStack_280 != (undefined4 *)0x0) {
      pcStack_288 = FUN_00659960;
      pcStack_284 = FUN_00659940;
      puVar2 = local_2e0;
      puVar3 = puStack_280;
      for (iVar1 = 0xb4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      __security_check_cookie(local_c ^ (uint)local_2e0);
      return;
    }
    FUN_006563b0();
  }
  __security_check_cookie(local_c ^ (uint)local_2e0);
  return;
}

