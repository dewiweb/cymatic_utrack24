// rea decompile_all
// name: FUN_00637300
// address: 0x637300
// body: available
// range: 0x637300-0x637338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00637300(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  piVar4 = (int *)*in_ECX;
  if (piVar4 == (int *)0x0) {
    piVar4 = in_ECX + 1;
  }
  iVar3 = in_ECX[6] >> 5;
  while( true ) {
    if (iVar3 < 0) {
      return -1;
    }
    uVar1 = piVar4[iVar3];
    if (uVar1 != 0) break;
    iVar3 = iVar3 + -1;
  }
  iVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  return iVar3 * 0x20 + iVar2;
}

