// rea decompile_all
// name: FUN_00499870
// address: 0x499870
// body: available
// range: 0x499870-0x4998e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00499870(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (*(int *)(in_ECX + 0x30) + 0x14U < param_1) {
    iVar2 = 0;
    dVar4 = *(double *)(in_ECX + 0x28) * 1.04;
    iVar3 = 0;
    if (4.0 <= dVar4) {
      dVar4 = 4.0;
    }
    *(double *)(in_ECX + 0x28) = dVar4;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x14) + 0xa4);
    if (0 < iVar1) {
      do {
        if (iVar2 != 0) break;
        iVar2 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar2 = (int)dVar4 *
                *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x9c) + iVar2) + 0x1c);
      } while (iVar3 < iVar1);
    }
    FUN_00498960(iVar2 * param_2);
    *(uint *)(in_ECX + 0x30) = param_1;
  }
  return 1;
}

