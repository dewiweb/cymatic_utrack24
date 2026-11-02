// rea decompile_all
// name: FUN_00697b50
// address: 0x697b50
// body: available
// range: 0x697b50-0x697c8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697b50(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  int iStack_1c;
  
  if ((*(char *)(in_ECX + 0x24) == '\0') && (*(char *)(in_ECX + 0x26) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(char *)(in_ECX + 0x25) != '\0') || (bVar4 = false, bVar5)) {
    bVar4 = true;
  }
  cVar1 = *(char *)(in_ECX + 0x26);
  *(undefined2 *)(in_ECX + 0x24) = 0;
  *(undefined1 *)(in_ECX + 0x26) = 0;
  if ((cVar1 != '\0') && (iVar8 = *(int *)(in_ECX + 0x1c) + -1, -1 < iVar8)) {
    do {
      uStack_20 = 0x697bac;
      iStack_1c = in_ECX + -0x70;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x14) + iVar8 * 4) + 0xc))();
      iVar6 = *(int *)(in_ECX + 0x1c) + -1;
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  if ((bVar5) && (iVar8 = *(int *)(in_ECX + 0x1c) + -1, -1 < iVar8)) {
    do {
      uStack_20 = 0x697bdc;
      iStack_1c = in_ECX + -0x70;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x14) + iVar8 * 4) + 4))();
      iVar6 = *(int *)(in_ECX + 0x1c) + -1;
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  if (bVar4) {
    iVar8 = *(int *)(in_ECX + 0x1c);
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      iStack_1c = in_ECX + -0x70;
      piVar2 = *(int **)(*(int *)(in_ECX + 0x14) + iVar8 * 4);
      if (*(code **)(*piVar2 + 8) == FUN_00697530) {
        iVar7 = 0;
        iVar6 = *(int *)(piVar2[1] + 0x80) + -1;
        if (-1 < iVar6) {
          do {
            iVar3 = *(int *)(*(int *)(piVar2[1] + 0x78) + iVar6 * 4);
            if ((*(byte *)(iVar3 + 8) & 1) != 0) {
              iVar7 = iVar7 + *(int *)(iVar3 + 0xc);
            }
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        piVar2[-8] = iVar7;
        iStack_1c = 0x697c57;
        FUN_006e7e60();
        FUN_006e6400(auStack_28);
        FUN_006ce9f0(1);
        iStack_1c = 0x697c72;
        FUN_00697320();
      }
      else {
        uStack_20 = 0x697c8d;
        (**(code **)(*piVar2 + 8))();
      }
      iVar6 = *(int *)(in_ECX + 0x1c) + -1;
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
    }
  }
  return;
}

