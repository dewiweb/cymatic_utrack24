// rea decompile_all
// name: FUN_006e6760
// address: 0x6e6760
// body: available
// range: 0x6e6760-0x6e6810 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e6760(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)(in_ECX + 0xf4);
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      if (((*param_1 == 0x1b) && (*(char *)(in_ECX + 0x15c) != '\0')) &&
         (*(int *)(in_ECX + 0xf4) == 0)) {
        FUN_006e8fd0(0);
        return 1;
      }
      if ((*param_1 != 0xd) || (*(int *)(in_ECX + 0xf4) != 1)) {
        return 0;
      }
      iVar3 = *(int *)**(undefined4 **)(in_ECX + 0xec);
      goto LAB_006e67c1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0xec) + iVar3 * 4);
    cVar2 = FUN_006c7fa0(param_1);
  } while (cVar2 == '\0');
  iVar3 = *piVar1;
LAB_006e67c1:
  if (*(code **)(iVar3 + 0xb0) == FUN_006e3460) {
    FUN_006cddc0(0x2f3f4f99);
    return 1;
  }
  (**(code **)(iVar3 + 0xb0))();
  return 1;
}

