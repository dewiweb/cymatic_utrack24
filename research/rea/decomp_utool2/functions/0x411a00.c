// rea decompile_all
// name: FUN_00411a00
// address: 0x411a00
// body: available
// range: 0x411a00-0x411a95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411a00(void)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *in_ECX;
  double *pdVar4;
  double *in_EDX;
  
  pdVar3 = in_ECX;
  if (in_ECX != in_EDX) {
    while (pdVar3 = pdVar3 + 1, pdVar3 != in_EDX) {
      dVar1 = *pdVar3;
      pdVar4 = pdVar3;
      if (dVar1 < *in_ECX) {
        FUN_004c1df0(in_ECX + 1);
        *in_ECX = dVar1;
      }
      else {
        while( true ) {
          dVar2 = pdVar4[-1];
          if ((dVar2 <= dVar1) && (-1 < (int)(uint)(dVar2 < dVar1))) break;
          *pdVar4 = dVar2;
          pdVar4 = pdVar4 + -1;
        }
        *pdVar4 = dVar1;
      }
    }
  }
  return;
}

