// rea decompile_all
// name: FUN_00464190
// address: 0x464190
// body: available
// range: 0x464190-0x464207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464190(ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *in_ECX;
  ushort _C;
  _locale_t unaff_EDI;
  
  puVar2 = param_1;
  while( true ) {
    param_1 = puVar2;
    _C = *param_1;
    if ((_C - 0xd800 < 0x800) && (0xdbff < param_1[1])) {
      _C = param_1[1] + 0x2400 | (short)(_C - 0xd800) * 0x400;
    }
    iVar1 = FID_conflict___iswspace_l(_C,unaff_EDI);
    if (iVar1 == 0) break;
    puVar2 = param_1 + 1;
    if ((*param_1 - 0xd800 < 0x800) && (0xdbff < *puVar2)) {
      puVar2 = param_1 + 2;
    }
  }
  *in_ECX = param_1;
  return;
}

