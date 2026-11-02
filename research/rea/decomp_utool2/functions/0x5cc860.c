// rea decompile_all
// name: FUN_005cc860
// address: 0x5cc860
// body: available
// range: 0x5cc860-0x5cc900 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005cc860(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  iVar7 = 0;
  iVar1 = *(int *)(in_ECX + 0x24);
  if (0 < iVar1) {
    piVar2 = *(int **)(in_ECX + 0x1c);
    iVar3 = *(int *)(in_ECX + 0xb0);
    piVar4 = piVar2;
    do {
      if (*(int *)(*piVar4 + 4) == iVar3) {
LAB_005cc8c7:
        return piVar2[iVar7];
      }
      while( true ) {
        iVar5 = FUN_00443260();
        iVar6 = FUN_00443260();
        if ((iVar5 - iVar6 != 0) && ((iVar5 - iVar6 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar5 == 0) goto LAB_005cc8c7;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar7 < iVar1);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    return 0;
  }
  return **(int **)(in_ECX + 0x1c);
}

