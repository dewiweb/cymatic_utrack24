// rea decompile_all
// name: FUN_0068f070
// address: 0x68f070
// body: available
// range: 0x68f070-0x68f0f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0068f070(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(in_ECX + 0x100) + -1;
  if (-1 < iVar6) {
    iVar1 = *(int *)(in_ECX + 0xf8);
    piVar5 = (int *)(iVar1 + iVar6 * 4);
    iVar2 = *param_1;
    do {
      if (*(int *)(*piVar5 + 4) == iVar2) {
LAB_0068f0ce:
        return *(undefined4 *)(iVar1 + iVar6 * 4);
      }
      while( true ) {
        iVar3 = FUN_00443260();
        iVar4 = FUN_00443260();
        if ((iVar3 - iVar4 != 0) && ((iVar3 - iVar4 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar3 == 0) goto LAB_0068f0ce;
      }
      piVar5 = piVar5 + -1;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return 0;
}

