// rea decompile_all
// name: FUN_005e5fe0
// address: 0x5e5fe0
// body: available
// range: 0x5e5fe0-0x5e60a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e5fe0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  
  iVar1 = **(int **)(in_ECX + 0x68);
  piVar4 = *(int **)(*(int *)(in_ECX + 4) + 0x1c);
  iVar2 = (int)(piVar4[*(int *)(in_ECX + 0x28)] + (piVar4[*(int *)(in_ECX + 0x28)] >> 0x1f & 3U)) >>
          2;
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar3 = (int)(*piVar4 + (*piVar4 >> 0x1f & 3U)) >> 2;
    iVar5 = iVar3;
  }
  else {
    iVar3 = (int)(piVar4[*(int *)(in_ECX + 0x2c)] + (piVar4[*(int *)(in_ECX + 0x2c)] >> 0x1f & 3U))
            >> 2;
    iVar5 = (int)(piVar4[*(int *)(in_ECX + 0x24)] + (piVar4[*(int *)(in_ECX + 0x24)] >> 0x1f & 3U))
            >> 2;
  }
  iVar5 = (*(int *)(in_ECX + 0x30) - iVar2) - iVar5;
  iVar3 = iVar2 + *(int *)(in_ECX + 0x30) + iVar3;
  if ((iVar5 <= *(int *)(iVar1 + 0xac)) && (*(int *)(iVar1 + 0xac) < iVar3)) {
    return 1;
  }
  iVar3 = iVar3 / *(int *)(iVar1 + 8);
  iVar5 = iVar5 / *(int *)(iVar1 + 8);
  if (iVar5 < iVar3) {
    piVar4 = (int *)(*(int *)(iVar1 + 0xa0) + iVar5 * 4);
    do {
      if (*piVar4 != 0) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}

