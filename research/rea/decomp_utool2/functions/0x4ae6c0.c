// rea decompile_all
// name: FUN_004ae6c0
// address: 0x4ae6c0
// body: available
// range: 0x4ae6c0-0x4ae743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ae6c0(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = 0;
  iVar1 = in_ECX[2];
  iVar6 = 0;
  iVar3 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  if (3 < iVar1 + 1) {
    iVar4 = (iVar1 - 3U >> 2) + 1;
    iVar3 = iVar4 * 4;
    piVar2 = (int *)(*in_ECX + 0xc);
    do {
      iVar7 = iVar7 + (piVar2[-2] - piVar2[-3]);
      iVar5 = iVar5 + (*piVar2 - piVar2[-1]);
      iVar4 = iVar4 + -1;
      piVar2 = piVar2 + 4;
    } while (iVar4 != 0);
  }
  if (iVar3 < iVar1) {
    iVar6 = *(int *)(*in_ECX + 4 + iVar3 * 4) - *(int *)(*in_ECX + iVar3 * 4);
  }
  return iVar5 + iVar7 + iVar6;
}

