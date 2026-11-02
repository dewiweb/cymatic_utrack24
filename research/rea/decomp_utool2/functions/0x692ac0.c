// rea decompile_all
// name: FUN_00692ac0
// address: 0x692ac0
// body: available
// range: 0x692ac0-0x692bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00692ac0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  
  iVar6 = 0;
  if (*(int *)(in_ECX + 0x11c) != 1 && -1 < *(int *)(in_ECX + 0x11c) + -1) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x114) + iVar6 * 4);
      piVar2 = *(int **)(*(int *)(in_ECX + 0x114) + 4 + iVar6 * 4);
      iVar5 = *piVar1;
      iVar3 = *piVar2;
      if (((iVar5 == iVar3) ||
          (((((*(float *)(iVar5 + 0x14) == *(float *)(iVar3 + 0x14) &&
              (*(char *)(iVar5 + 0x24) == *(char *)(iVar3 + 0x24))) &&
             (*(float *)(iVar5 + 0x18) == *(float *)(iVar3 + 0x18))) &&
            ((*(float *)(iVar5 + 0x1c) == *(float *)(iVar3 + 0x1c) &&
             ((*(int *)(iVar5 + 0xc) == *(int *)(iVar3 + 0xc) ||
              (iVar5 = FUN_00448730(*(undefined4 *)(iVar5 + 0xc)), iVar5 == 0)))))) &&
           (cVar4 = FUN_006356b0(), cVar4 != '\0')))) && (piVar1[1] == piVar2[1])) {
        FUN_0049ffc0(piVar2);
        FUN_004ae750(iVar6 + 1);
        iVar6 = iVar6 + -1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x11c) + -1);
  }
  return;
}

