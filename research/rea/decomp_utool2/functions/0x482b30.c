// rea decompile_all
// name: FUN_00482b30
// address: 0x482b30
// body: available
// range: 0x482b30-0x482c85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482b30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar7;
  int iVar6;
  int in_ECX;
  int *piVar8;
  undefined1 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uStack_a;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 8);
  for (piVar10 = *(int **)(in_ECX + 8); piVar10 != (int *)(iVar1 * 0x10 + iVar2);
      piVar10 = piVar10 + 4) {
    iVar3 = *piVar10;
    uVar4 = piVar10[2];
    iVar6 = piVar10[1];
    iVar11 = piVar10[3] + iVar6;
    for (; iVar6 < iVar11; iVar6 = iVar6 + 1) {
      piVar8 = (int *)*param_1;
      uVar14 = param_1[2];
      iVar12 = piVar8[2] * iVar6 + *piVar8;
      param_1[1] = iVar12;
      iVar13 = piVar8[3];
      piVar8 = (int *)(iVar13 * iVar3 + iVar12);
      uVar5 = (undefined1)uVar14;
      uVar7 = (undefined1)(uVar14 >> 8);
      uStack_a = (undefined1)(uVar14 >> 0x10);
      uVar15 = uVar4;
      if (iVar13 == 3) {
        if ((char)param_1[6] == '\0') {
          uVar14 = uVar4;
          if ((uVar4 & 0xffffffe0) != 0) {
            for (; (8 < (int)uVar14 && (((uint)piVar8 & 7) != 0)); piVar8 = (int *)((int)piVar8 + 3)
                ) {
              *(undefined1 *)piVar8 = uVar5;
              *(undefined1 *)((int)piVar8 + 1) = uVar7;
              *(undefined1 *)((int)piVar8 + 2) = uStack_a;
              uVar14 = uVar14 - 1;
            }
            if (4 < (int)uVar14) {
              iVar13 = (uVar14 - 5 >> 2) + 1;
              uVar14 = uVar14 + iVar13 * -4;
              do {
                *piVar8 = param_1[3];
                piVar8[1] = param_1[4];
                piVar8[2] = param_1[5];
                piVar8 = piVar8 + 3;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
          }
          iVar13 = uVar14 - 1;
          if (-1 < iVar13) {
            puVar9 = (undefined1 *)((int)piVar8 + 2);
            do {
              iVar13 = iVar13 + -1;
              puVar9[-2] = uVar5;
              puVar9[-1] = uVar7;
              *puVar9 = uStack_a;
              puVar9 = puVar9 + 3;
            } while (-1 < iVar13);
          }
        }
        else {
          _memset(piVar8,uVar14 >> 0x10 & 0xff,uVar4 * 3);
        }
      }
      else {
        do {
          *(undefined1 *)piVar8 = uVar5;
          uVar15 = uVar15 - 1;
          *(undefined1 *)((int)piVar8 + 1) = uVar7;
          *(undefined1 *)((int)piVar8 + 2) = uStack_a;
          piVar8 = (int *)((int)piVar8 + iVar13);
        } while (0 < (int)uVar15);
      }
    }
  }
  return;
}

