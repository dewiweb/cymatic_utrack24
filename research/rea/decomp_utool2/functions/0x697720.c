// rea decompile_all
// name: FUN_00697720
// address: 0x697720
// body: available
// range: 0x697720-0x6977ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697720(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  
  iVar6 = 0;
  do {
    iVar4 = *(int *)(in_ECX + 0xb4);
    iVar7 = 0;
    iVar5 = *(int *)(iVar4 + 0x80) + -1;
    if (-1 < iVar5) {
      piVar9 = (int *)(*(int *)(iVar4 + 0x78) + iVar5 * 4);
      iVar8 = iVar7;
      do {
        iVar1 = *piVar9;
        piVar9 = piVar9 + -1;
        iVar7 = iVar8 + 1;
        if ((*(byte *)(iVar1 + 8) & 1) == 0) {
          iVar7 = iVar8;
        }
        iVar5 = iVar5 + -1;
        iVar8 = iVar7;
      } while (-1 < iVar5);
    }
    if (iVar7 <= iVar6) {
      return;
    }
    iVar7 = 0;
    uVar3 = 0;
    if (0 < *(int *)(iVar4 + 0x80)) {
      piVar9 = *(int **)(iVar4 + 0x78);
      do {
        if ((*(byte *)(*piVar9 + 8) & 1) != 0) {
          if (iVar7 == iVar6) goto LAB_00697798;
          iVar7 = iVar7 + 1;
        }
        uVar3 = uVar3 + 1;
        piVar9 = piVar9 + 1;
      } while ((int)uVar3 < *(int *)(iVar4 + 0x80));
    }
    uVar3 = 0xffffffff;
LAB_00697798:
    if ((uVar3 < *(uint *)(iVar4 + 0x80)) &&
       (iVar4 = *(int *)(*(int *)(iVar4 + 0x78) + uVar3 * 4), iVar4 != 0)) {
      uVar10 = *(undefined4 *)(iVar4 + 4);
    }
    else {
      uVar10 = 0;
    }
    if (((*(int **)(in_ECX + 0xb8) != (int *)0x0) &&
        (pcVar2 = *(code **)(**(int **)(in_ECX + 0xb8) + 0x24), pcVar2 != FUN_006df280)) &&
       (iVar4 = (*pcVar2)(uVar10), 0 < iVar4)) {
      FUN_00699080(uVar10,iVar4);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

