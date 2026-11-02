// rea decompile_all
// name: FUN_0069fc30
// address: 0x69fc30
// body: available
// range: 0x69fc30-0x69fcac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0069fc30(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = in_ECX[2];
  iVar7 = 0;
  if (0 < iVar1) {
    puVar6 = (undefined4 *)*in_ECX;
    iVar2 = *param_1;
    do {
      piVar3 = (int *)*puVar6;
      if (*piVar3 == iVar2) {
        return piVar3;
      }
      while( true ) {
        iVar4 = FUN_00443260();
        iVar5 = FUN_00443260();
        if ((iVar4 - iVar5 != 0) && ((iVar4 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar4 == 0) {
          return piVar3;
        }
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < iVar1);
  }
  return (int *)0x0;
}

