// rea decompile_all
// name: FUN_0069e750
// address: 0x69e750
// body: available
// range: 0x69e750-0x69e7c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069e750(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  piVar2 = *(int **)(in_ECX + 0x10);
  piVar1 = piVar2 + *(int *)(in_ECX + 0x18);
  while( true ) {
    if (piVar2 == piVar1) {
      uVar3 = -(uint)(in_ECX != 0) & in_ECX + 8U;
      if (uVar3 != 0) {
        FUN_004097d0(uVar3);
      }
      iVar4 = *(int *)(in_ECX + 0x18) + 1;
      if (*(int *)(in_ECX + 0x14) < iVar4) {
        FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x18) + 9 & 0xfffffff8);
      }
      iVar4 = *(int *)(in_ECX + 0x18);
      *(int *)(in_ECX + 0x18) = iVar4 + 1;
      piVar1 = (int *)(*(int *)(in_ECX + 0x10) + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
      }
      return;
    }
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 1;
  }
  return;
}

