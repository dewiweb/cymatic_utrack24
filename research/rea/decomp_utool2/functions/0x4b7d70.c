// rea decompile_all
// name: FUN_004b7d70
// address: 0x4b7d70
// body: available
// range: 0x4b7d70-0x4b7e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004b7d70(void)

{
  int *piVar1;
  wint_t _C;
  int iVar2;
  int iVar3;
  int *in_ECX;
  _locale_t unaff_EDI;
  
  iVar2 = FUN_006f2ff0();
  if (iVar2 == 0x2d) {
    FUN_006f30b0();
  }
  iVar2 = 0;
  do {
    if (in_ECX[1] == 0) {
      if (((uint)((int *)*in_ECX)[2] <= (uint)in_ECX[2]) ||
         (piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4), piVar1 == (int *)0x0)) {
LAB_004b7ded:
        if (iVar2 == 0) {
          return false;
        }
        iVar2 = FUN_006f2ff0();
        if ((((iVar2 == 0x6c) || (iVar2 == 0x4c)) || (iVar2 == 0x75)) || (iVar2 == 0x55)) {
          FUN_006f30b0();
        }
        _C = FUN_006f2ff0();
        iVar2 = FID_conflict__iswalnum(_C,unaff_EDI);
        return iVar2 == 0;
      }
      in_ECX[1] = *piVar1;
    }
    iVar3 = FUN_00426f70();
    if (iVar3 == 0) {
      if (((uint)((int *)*in_ECX)[2] <= in_ECX[2] + 1U) ||
         (*(int *)(*(int *)*in_ECX + (in_ECX[2] + 1U) * 4) == 0)) goto LAB_004b7ded;
      iVar3 = FUN_00426f70();
    }
    if (9 < iVar3 - 0x30U) goto LAB_004b7ded;
    iVar2 = iVar2 + 1;
    FUN_006f30b0();
  } while( true );
}

