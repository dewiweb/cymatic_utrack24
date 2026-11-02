// rea decompile_all
// name: FUN_00459790
// address: 0x459790
// body: available
// range: 0x459790-0x4597be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00459790(void)

{
  byte *pbVar1;
  int iVar2;
  int *in_ECX;
  
  if (*(code **)(*in_ECX + 0x18) != FUN_00412fb0) {
    iVar2 = (**(code **)(*in_ECX + 0x18))();
    if (iVar2 != -1) {
      *(int *)in_ECX[0xb] = *(int *)in_ECX[0xb] + -1;
      pbVar1 = *(byte **)in_ECX[7];
      *(byte **)in_ECX[7] = pbVar1 + 1;
      return (uint)*pbVar1;
    }
  }
  return 0xffffffff;
}

