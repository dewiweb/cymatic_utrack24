// rea decompile_all
// name: FUN_0048f340
// address: 0x48f340
// body: available
// range: 0x48f340-0x48f42f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f340(char param_1)

{
  int in_ECX;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [20];
  
  if ((param_1 == '\0') || ((*(byte *)(in_ECX + 0x20) & 0x70) == 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(undefined1 *)(in_ECX + 0x29) = 0;
  if (cVar1 != *(char *)(in_ECX + 0x28)) {
    if (cVar1 == '\0') {
      if (*(int *)(in_ECX + 0x2c) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
      }
      if (iVar2 != 0) {
        FUN_004b15b0(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
        puVar3 = local_28;
        FUN_006d2360(local_18);
        FUN_0040e4d0(puVar3);
        FUN_0048e220();
      }
    }
    *(char *)(in_ECX + 0x28) = cVar1;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    FUN_0048f720();
  }
  return;
}

