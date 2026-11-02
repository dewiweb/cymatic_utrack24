// rea decompile_all
// name: FUN_006e5ec0
// address: 0x6e5ec0
// body: available
// range: 0x6e5ec0-0x6e5f21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006e5ec0(uint *param_1)

{
  wint_t wVar1;
  wint_t wVar2;
  uint uVar3;
  uint *in_ECX;
  
  uVar3 = in_ECX[1];
  if (uVar3 == param_1[1]) {
    uVar3 = param_1[2];
    if (((in_ECX[2] == uVar3) || (in_ECX[2] == 0)) || (uVar3 == 0)) {
      uVar3 = *in_ECX;
      if (uVar3 == *param_1) {
LAB_006e5f14:
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      if (((int)uVar3 < 0x100) && ((int)*param_1 < 0x100)) {
        wVar1 = _towlower((wint_t)uVar3);
        wVar2 = _towlower((wint_t)*param_1);
        uVar3 = (uint)wVar2;
        if (wVar1 == uVar3) goto LAB_006e5f14;
      }
    }
  }
  return uVar3 & 0xffffff00;
}

