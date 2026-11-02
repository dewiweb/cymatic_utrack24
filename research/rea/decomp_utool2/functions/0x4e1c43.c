// rea decompile_all
// name: GetTableIndexFromLocaleName
// address: 0x4e1c43
// body: available
// range: 0x4e1c43-0x4e1cfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl GetTableIndexFromLocaleName(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int __cdecl GetTableIndexFromLocaleName(wchar_t *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0xe3;
  while( true ) {
    local_8 = 0x55;
    iVar2 = (local_c + local_10) / 2;
    puVar5 = (ushort *)(&PTR_PTR_00734188)[iVar2 * 2];
    iVar3 = (int)param_1 - (int)puVar5;
    do {
      uVar4 = *(ushort *)(iVar3 + (int)puVar5);
      if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
        uVar4 = uVar4 + 0x20;
      }
      uVar1 = *puVar5;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20;
      }
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (((local_8 != 0) && (uVar4 != 0)) && (uVar4 == uVar1));
    if ((uint)uVar4 == (uint)uVar1) break;
    if ((int)((uint)uVar4 - (uint)uVar1) < 0) {
      local_c = iVar2 + -1;
    }
    else {
      local_10 = iVar2 + 1;
    }
    if (local_c < local_10) {
      return -1;
    }
  }
  return *(int *)(&DAT_0073418c + iVar2 * 8);
}

