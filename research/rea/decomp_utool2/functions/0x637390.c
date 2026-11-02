// rea decompile_all
// name: FUN_00637390
// address: 0x637390
// body: available
// range: 0x637390-0x6373f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00637390(void)

{
  int *in_ECX;
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)*in_ECX;
  iVar4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = in_ECX + 1;
  }
  for (iVar3 = in_ECX[6] >> 5; -1 < iVar3; iVar3 = iVar3 + -1) {
    uVar1 = piVar2[iVar3] - ((uint)piVar2[iVar3] >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = (uVar1 >> 4) + uVar1 & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    iVar4 = iVar4 + ((uVar1 >> 0x10) + uVar1 & 0x3f);
  }
  return iVar4;
}

