// rea decompile_all
// name: FUN_006974a0
// address: 0x6974a0
// body: available
// range: 0x6974a0-0x697524 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006974a0(void)

{
  int iVar1;
  code *pcVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
    iVar1 = *(int *)(in_ECX + 4);
    iVar3 = *(int *)(iVar1 + 0x80) + -1;
    if (-1 < iVar3) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x78) + iVar3 * 4);
      do {
        if ((*(byte *)(*piVar5 + 8) & 0x60) != 0) {
          uVar6 = *(uint *)(*(int *)(*(int *)(iVar1 + 0x78) + iVar3 * 4) + 8) >> 5 & 0xffffff01;
          goto LAB_006974d2;
        }
        piVar5 = piVar5 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    uVar6 = 1;
LAB_006974d2:
    iVar3 = *(int *)(iVar1 + 0x80) + -1;
    if (-1 < iVar3) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x78) + iVar3 * 4);
      do {
        if ((*(byte *)(*piVar5 + 8) & 0x60) != 0) {
          uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x78) + iVar3 * 4) + 4);
          goto LAB_006974f5;
        }
        piVar5 = piVar5 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    uVar4 = 0;
LAB_006974f5:
    pcVar2 = *(code **)(**(int **)(in_ECX + 8) + 0x20);
    if (pcVar2 != FUN_006df290) {
      (*pcVar2)(uVar4,uVar6);
    }
  }
  return;
}

