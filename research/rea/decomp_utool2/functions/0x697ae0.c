// rea decompile_all
// name: FUN_00697ae0
// address: 0x697ae0
// body: available
// range: 0x697ae0-0x697b4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00697ae0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 < *(uint *)(in_ECX + 0x18)) {
    iVar4 = 0;
    iVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x80)) {
      piVar6 = *(int **)(in_ECX + 0x78);
      do {
        iVar1 = *piVar6;
        if ((*(byte *)(iVar1 + 8) & 1) != 0) {
          uVar2 = (param_1 - *(int *)(iVar1 + 0xc)) - iVar4;
          uVar3 = (int)uVar2 >> 0x1f;
          if (((int)((uVar2 ^ uVar3) - uVar3) < 4) && ((*(byte *)(iVar1 + 8) & 2) != 0)) {
            return *(undefined4 *)(iVar1 + 4);
          }
          iVar4 = iVar4 + *(int *)(iVar1 + 0xc);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < *(int *)(in_ECX + 0x80));
    }
  }
  return 0;
}

