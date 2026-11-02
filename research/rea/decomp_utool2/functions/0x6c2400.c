// rea decompile_all
// name: FUN_006c2400
// address: 0x6c2400
// body: available
// range: 0x6c2400-0x6c2457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c2400(void)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  int *in_ECX;
  int *piVar4;
  
  iVar2 = *in_ECX;
  if (iVar2 != 0) {
    piVar4 = *(int **)(iVar2 + 0xc);
    piVar1 = piVar4 + *(int *)(iVar2 + 0x14) * 6;
    if (piVar4 != piVar1) {
      while (*piVar4 != DAT_00c8a9cc) {
        piVar4 = piVar4 + 6;
        if (piVar4 == piVar1) {
          (**(code **)(*(int *)PTR_PTR_00c7ed58 + 0x14))(&DAT_00c7ed60);
          return;
        }
      }
      ppuVar3 = (undefined **)(piVar4 + 2);
      if (ppuVar3 != (undefined **)0x0) goto LAB_006c244a;
    }
  }
  ppuVar3 = &PTR_PTR_00c7ed58;
LAB_006c244a:
  (**(code **)(*(int *)*ppuVar3 + 0x14))(ppuVar3 + 2);
  return;
}

