// rea decompile_all
// name: FUN_0045ddd0
// address: 0x45ddd0
// body: available
// range: 0x45ddd0-0x45de54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045ddd0(ushort *param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = (uint)*param_1;
    puVar1 = param_1 + 1;
    if ((uVar2 - 0xd800 < 0x800) && (0xdbff < *puVar1)) {
      uVar2 = (*puVar1 - 0xdc00 | (uVar2 - 0xd800) * 0x400) + 0x10000;
      puVar1 = param_1 + 2;
    }
    if (uVar2 == 0) break;
    iVar3 = 1;
    if (((0x7f < uVar2) && (iVar3 = 2, 0x7ff < uVar2)) && (iVar3 = 3, 0xffff < uVar2)) {
      iVar3 = 4;
    }
    iVar4 = iVar4 + iVar3;
    param_1 = puVar1;
  }
  return iVar4;
}

