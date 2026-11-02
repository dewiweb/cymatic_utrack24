// rea decompile_all
// name: FUN_006d2530
// address: 0x6d2530
// body: available
// range: 0x6d2530-0x6d257b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006d2530(int param_1)

{
  uint in_EAX;
  int in_ECX;
  uint *puVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(in_ECX + 0x90) + -1, -1 < iVar2)) {
    puVar1 = (uint *)(*(int *)(in_ECX + 0x88) + iVar2 * 4);
    do {
      in_EAX = *puVar1;
      if (*(int *)(in_EAX + 4) == param_1) {
        in_EAX = *(uint *)(*(int *)(in_ECX + 0x88) + iVar2 * 4);
        if ((in_EAX != 0) && ((*(byte *)(in_EAX + 8) & 1) != 0)) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
        break;
      }
      puVar1 = puVar1 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return in_EAX & 0xffffff00;
}

