// rea decompile_all
// name: FUN_0048c150
// address: 0x48c150
// body: available
// range: 0x48c150-0x48c1cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c150(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *in_ECX;
  int *in_EDX;
  
  piVar7 = in_ECX;
  if (in_ECX != in_EDX) {
    while (piVar4 = piVar7 + 2, piVar4 != in_EDX) {
      iVar2 = *piVar4;
      iVar3 = piVar7[3];
      if (iVar2 < *in_ECX) {
        FUN_004c1df0(in_ECX + 2);
        *in_ECX = iVar2;
        in_ECX[1] = iVar3;
        piVar7 = piVar4;
      }
      else {
        iVar1 = *piVar7;
        piVar6 = piVar4;
        while (piVar5 = piVar7, iVar2 < iVar1) {
          *piVar6 = *piVar5;
          piVar6[1] = piVar5[1];
          piVar7 = piVar5 + -2;
          piVar6 = piVar5;
          iVar1 = piVar5[-2];
        }
        *piVar6 = iVar2;
        piVar6[1] = iVar3;
        piVar7 = piVar4;
      }
    }
  }
  return;
}

