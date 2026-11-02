// rea decompile_all
// name: FUN_1000eb41
// address: 0x1000eb41
// body: available
// range: 0x1000eb41-0x1000ebac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_1000eb41(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (param_3 != 0) {
    iVar3 = param_2 - (int)param_5;
    do {
      bVar1 = false;
      uVar4 = 0;
      do {
        iVar2 = lstrcmpW(*(LPCWSTR *)(iVar3 + (int)param_5),
                         *(LPCWSTR *)((int)&PTR_u_accParent_1015fb08 + uVar4));
        if (iVar2 == 0) {
          bVar1 = true;
          *param_5 = *(undefined4 *)((int)&DAT_1015fab8 + uVar4);
        }
        uVar4 = uVar4 + 4;
      } while (uVar4 < 0x4c);
      if (!bVar1) {
        return 0x80020006;
      }
      local_8 = local_8 + 1;
      param_5 = param_5 + 1;
    } while (local_8 < param_3);
  }
  return 0;
}

