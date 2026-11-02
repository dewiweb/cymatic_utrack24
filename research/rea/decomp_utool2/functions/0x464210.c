// rea decompile_all
// name: FUN_00464210
// address: 0x464210
// body: available
// range: 0x464210-0x4642ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464210(ushort *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *in_ECX;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_1;
  uVar5 = 0;
  puVar2 = param_1;
  if (uVar3 != 0) {
    while( true ) {
      uVar4 = (uint)uVar3;
      puVar2 = param_1 + 1;
      if ((uVar4 - 0xd800 < 0x800) && (0xdbff < *puVar2)) {
        uVar4 = (*puVar2 - 0xdc00 | (uVar4 - 0xd800) * 0x400) + 0x10000;
        puVar2 = param_1 + 2;
      }
      param_1 = puVar2;
      if ((uVar5 == 0) && (iVar1 = FUN_00464110(param_2), -1 < iVar1)) break;
      iVar1 = FUN_00464110(param_3);
      uVar6 = uVar5;
      if (((-1 < iVar1) && (uVar6 = uVar4, uVar5 != 0)) && (uVar6 = uVar5, uVar5 == uVar4)) {
        uVar6 = 0;
      }
      uVar3 = *param_1;
      uVar5 = uVar6;
      if (uVar3 == 0) {
        *in_ECX = param_1;
        return;
      }
    }
    puVar2 = param_1 + -1;
    if (*puVar2 - 0xdc00 < 0x400) {
      puVar2 = param_1 + -2;
    }
  }
  *in_ECX = puVar2;
  return;
}

