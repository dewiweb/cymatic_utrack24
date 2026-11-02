// rea decompile_all
// name: FUN_0066bbb0
// address: 0x66bbb0
// body: available
// range: 0x66bbb0-0x66bc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066bbb0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x38) != 0) {
    iVar3 = 0;
    iVar2 = *(int *)(in_ECX + 0x38) >> 1;
    if (iVar2 != 0) {
      do {
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 >> 1;
      } while (iVar2 != 0);
      if (0xe < iVar3) {
        *(undefined4 *)(**(int **)(in_ECX + 0x20) + 0x14) = 0x28;
        (**(code **)**(undefined4 **)(in_ECX + 0x20))(*(undefined4 **)(in_ECX + 0x20));
      }
    }
    if (*(char *)(in_ECX + 0xc) == '\0') {
      FUN_0066be00((int)*(char *)(*(int *)(in_ECX + 0x4c + *(int *)(in_ECX + 0x34) * 4) + 0x400 +
                                 iVar3 * 0x10));
    }
    else {
      piVar1 = (int *)(*(int *)(in_ECX + 0x5c + *(int *)(in_ECX + 0x34) * 4) + iVar3 * 0x40);
      *piVar1 = *piVar1 + 1;
    }
    if (iVar3 != 0) {
      FUN_0066be00(iVar3);
    }
    *(undefined4 *)(in_ECX + 0x38) = 0;
    FUN_0066bc50(*(undefined4 *)(in_ECX + 0x3c));
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  return;
}

