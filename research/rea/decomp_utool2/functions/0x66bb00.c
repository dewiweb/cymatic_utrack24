// rea decompile_all
// name: FUN_0066bb00
// address: 0x66bb00
// body: available
// range: 0x66bb00-0x66bba8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066bb00(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  char in_DL;
  undefined4 *puVar3;
  
  FUN_0066bbb0();
  if (*(char *)(in_ECX + 0xc) == '\0') {
    FUN_0066be00(7);
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    **(undefined1 **)(in_ECX + 0x10) = 0xff;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    piVar1 = (int *)(in_ECX + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0066bf50();
    }
    **(char **)(in_ECX + 0x10) = in_DL + -0x30;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    piVar1 = (int *)(in_ECX + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0066bf50();
    }
  }
  if (*(int *)(*(int *)(in_ECX + 0x20) + 300) == 0) {
    iVar2 = 0;
    if (0 < *(int *)(*(int *)(in_ECX + 0x20) + 0xe4)) {
      puVar3 = (undefined4 *)(in_ECX + 0x24);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(int *)(in_ECX + 0x20) + 0xe4));
      return;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x38) = 0;
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  return;
}

