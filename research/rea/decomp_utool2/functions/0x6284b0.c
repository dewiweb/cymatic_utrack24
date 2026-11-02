// rea decompile_all
// name: FUN_006284b0
// address: 0x6284b0
// body: available
// range: 0x6284b0-0x62850f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006284b0(void)

{
  char cVar1;
  undefined **ppuVar2;
  int *in_ECX;
  undefined4 *in_EDX;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (0 < in_ECX[2]) {
    bVar4 = in_ECX[2] != 0;
    do {
      if (bVar4) {
        ppuVar2 = (undefined **)(*in_ECX + uVar3 * 4);
      }
      else {
        ppuVar2 = &PTR_DAT_00c7ed68;
      }
      cVar1 = FUN_00458920(*ppuVar2,*in_EDX);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < (uint)in_ECX[2];
    } while ((int)uVar3 < in_ECX[2]);
  }
  return 0;
}

