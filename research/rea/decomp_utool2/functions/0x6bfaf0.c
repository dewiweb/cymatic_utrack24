// rea decompile_all
// name: FUN_006bfaf0
// address: 0x6bfaf0
// body: available
// range: 0x6bfaf0-0x6bfb5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006bfaf0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  
  if ((0.0 < *(float *)(in_ECX + 0x78)) && (*(char *)(in_ECX + 0x10f) != '\0')) {
    iVar1 = *(int *)(in_ECX + 0x110);
    if (iVar1 == 0) {
LAB_006bfb49:
      FUN_00683770(param_1);
      return param_1;
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x1c)) {
      pcVar2 = (char *)(*(int *)(iVar1 + 0x14) + 0xb);
      do {
        if (*pcVar2 != '\0') goto LAB_006bfb49;
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0x10;
      } while (iVar3 < *(int *)(iVar1 + 0x1c));
    }
  }
  FUN_00683770(param_1);
  return param_1;
}

