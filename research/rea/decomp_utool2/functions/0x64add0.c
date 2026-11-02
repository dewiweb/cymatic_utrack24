// rea decompile_all
// name: FUN_0064add0
// address: 0x64add0
// body: available
// range: 0x64add0-0x64aec2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064add0(byte param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int in_EDX;
  int *piVar5;
  
  if ((*(int *)(in_EDX + 0xf0) != 0) &&
     (uVar1 = *(uint *)(in_EDX + 0xec), uVar1 < uVar1 + *(int *)(in_EDX + 0xf0) * 0x14)) {
    piVar5 = (int *)(uVar1 + 0xc);
    do {
      if ((*(byte *)(piVar5 + 1) & param_1) != 0) {
        if ((in_ECX != 0) && (*(int *)(in_ECX + 0x20c) != 0)) {
          piVar3 = (int *)((int)*(int **)(in_ECX + 0x210) + *(int *)(in_ECX + 0x20c) * 5);
          do {
            piVar4 = (int *)((int)piVar3 + -5);
            if (piVar5[-3] == *piVar4) {
              cVar2 = *(char *)((int)piVar3 + -1);
              if (cVar2 != '\x01') goto LAB_0064ae39;
              goto LAB_0064ae90;
            }
            piVar3 = piVar4;
          } while (*(int **)(in_ECX + 0x210) < piVar4);
        }
        cVar2 = '\0';
LAB_0064ae39:
        if ((((*(byte *)((int)piVar5 + -9) & 0x20) != 0) || (cVar2 == '\x03')) ||
           ((cVar2 == '\0' && (*(int *)(in_ECX + 0x208) == 3)))) {
          if (*piVar5 == 0) {
            FUN_006563b0();
          }
          FUN_00649680(piVar5[-1],*piVar5);
        }
      }
LAB_0064ae90:
      piVar3 = piVar5 + 2;
      piVar5 = piVar5 + 5;
    } while (piVar3 < (int *)(*(int *)(in_EDX + 0xec) + *(int *)(in_EDX + 0xf0) * 0x14));
  }
  return;
}

