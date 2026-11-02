// rea decompile_all
// name: FUN_0042d260
// address: 0x42d260
// body: available
// range: 0x42d260-0x42d2ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042d260(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = 0x100;
  uVar4 = *(int *)(in_ECX + 0x7c) - 1;
  if (-1 < (int)uVar4) {
    do {
      if (uVar4 < *(uint *)(in_ECX + 0x7c)) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x74) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (*(int *)(iVar2 + 0xc) < iVar1) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  uVar4 = *(int *)(in_ECX + 0x88) - 1;
  if (-1 < (int)uVar4) {
    do {
      if (uVar4 < *(uint *)(in_ECX + 0x88)) {
        piVar3 = *(int **)(*(int *)(in_ECX + 0x80) + uVar4 * 4);
      }
      else {
        piVar3 = (int *)0x0;
      }
      if (*piVar3 < iVar1) {
        iVar1 = *piVar3;
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  if (0x20 < iVar1) {
    iVar1 = 0x10;
  }
  return iVar1;
}

