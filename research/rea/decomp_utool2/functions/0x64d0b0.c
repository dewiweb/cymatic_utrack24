// rea decompile_all
// name: FUN_0064d0b0
// address: 0x64d0b0
// body: available
// range: 0x64d0b0-0x64d0e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d0b0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = *(byte *)(param_1 + 0xb) + 7 >> 3;
  if (uVar3 < uVar1) {
    uVar2 = (int)(uVar3 + param_2) - param_2;
    pcVar4 = (char *)(uVar3 + param_2);
    do {
      *pcVar4 = *pcVar4 + *(char *)((param_2 - uVar3) + uVar2);
      uVar2 = uVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

