// rea decompile_all
// name: FUN_005d9760
// address: 0x5d9760
// body: available
// range: 0x5d9760-0x5d97ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d9760(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  
  iVar1 = *in_ECX;
  iVar2 = in_ECX[1];
  fVar7 = (float10)FUN_00412480((float)iVar2,1.0 / (float)iVar1);
  fVar8 = (float)fVar7;
  FUN_00436410();
  iVar4 = (int)fVar8;
  while( true ) {
    iVar3 = 1;
    iVar5 = 1;
    if (0 < iVar1) {
      iVar6 = iVar1;
      do {
        iVar3 = iVar3 * iVar4;
        iVar5 = iVar5 * (iVar4 + 1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((iVar3 <= iVar2) && (iVar2 < iVar5)) break;
    iVar5 = iVar4 + 1;
    iVar4 = iVar4 + -1;
    if (iVar3 <= iVar2) {
      iVar4 = iVar5;
    }
  }
  return iVar4;
}

