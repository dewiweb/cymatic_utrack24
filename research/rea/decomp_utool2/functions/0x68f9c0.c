// rea decompile_all
// name: FUN_0068f9c0
// address: 0x68f9c0
// body: available
// range: 0x68f9c0-0x68fa5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0068f9c0(char param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  
  do {
    if (param_1 != '\0') {
      uVar3 = *(uint *)(in_ECX + 0x34) & 3;
      if (uVar3 == 0) {
        if ((*(int *)(in_ECX + 4) != 0) && (*(char *)(*(int *)(in_ECX + 4) + 0xac) != '\0')) {
LAB_0068f9f8:
          if (0 < *(int *)(in_ECX + 0x14)) {
            if (*(int *)(in_ECX + 0x14) == 0) {
              return 0;
            }
            return **(undefined4 **)(in_ECX + 0xc);
          }
        }
      }
      else if (uVar3 == 2) goto LAB_0068f9f8;
    }
    iVar1 = *(int *)(in_ECX + 8);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = *(int **)(iVar1 + 0xc);
    for (piVar4 = piVar2; piVar4 != piVar2 + *(int *)(iVar1 + 0x14); piVar4 = piVar4 + 1) {
      if (in_ECX == *piVar4) {
        iVar5 = (int)piVar4 - (int)piVar2 >> 2;
        goto LAB_0068fa22;
      }
    }
    iVar5 = -1;
LAB_0068fa22:
    uVar3 = iVar5 + 1;
    if ((int)uVar3 < *(int *)(iVar1 + 0x14)) {
      if (*(uint *)(iVar1 + 0x14) <= uVar3) {
        return 0;
      }
      return *(undefined4 *)(*(int *)(iVar1 + 0xc) + uVar3 * 4);
    }
    param_1 = '\0';
    in_ECX = iVar1;
  } while( true );
}

