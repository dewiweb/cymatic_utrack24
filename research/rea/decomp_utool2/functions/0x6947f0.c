// rea decompile_all
// name: FUN_006947f0
// address: 0x6947f0
// body: available
// range: 0x6947f0-0x694866 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006947f0(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != '\0') {
    uVar4 = 1;
    uVar2 = FUN_00692c20(*(undefined4 *)(in_ECX + 0x110));
    FUN_00696020(uVar2,uVar4);
    FUN_00695ba0();
    return 1;
  }
  if ((*(int *)(in_ECX + 0xf4) == *(int *)(in_ECX + 0xf8)) && (0 < *(int *)(in_ECX + 0xf4))) {
    iVar1 = *(int *)(in_ECX + 0xf8);
    iVar3 = iVar1 + -1;
    *(int *)(in_ECX + 0xf4) = iVar3;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    *(int *)(in_ECX + 0xf8) = iVar3;
  }
  FUN_00695ba0();
  return 1;
}

