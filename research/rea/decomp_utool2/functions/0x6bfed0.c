// rea decompile_all
// name: FUN_006bfed0
// address: 0x6bfed0
// body: available
// range: 0x6bfed0-0x6bff12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006bfed0(void)

{
  int *piVar1;
  char *in_EAX;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  
  if ((0.0 < *(float *)(in_ECX + 0x78)) && (*(char *)(in_ECX + 0x10f) != '\0')) {
    in_EAX = *(char **)(in_ECX + 0x110);
    pcVar2 = (char *)0x0;
    if (in_EAX == (char *)0x0) {
LAB_006bff10:
      return CONCAT31((int3)((uint)pcVar2 >> 8),1);
    }
    piVar1 = (int *)(in_EAX + 0x1c);
    iVar3 = 0;
    if (0 < *piVar1) {
      in_EAX = (char *)(*(int *)(in_EAX + 0x14) + 0xb);
      do {
        pcVar2 = in_EAX;
        if (*in_EAX != '\0') goto LAB_006bff10;
        iVar3 = iVar3 + 1;
        in_EAX = in_EAX + 0x10;
      } while (iVar3 < *piVar1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

