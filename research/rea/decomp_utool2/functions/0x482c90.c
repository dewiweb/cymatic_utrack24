// rea decompile_all
// name: FUN_00482c90
// address: 0x482c90
// body: available
// range: 0x482c90-0x482e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482c90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar8;
  int iVar6;
  int iVar7;
  int in_ECX;
  int *piVar9;
  undefined1 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 uStack_a;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 8);
  for (piVar11 = *(int **)(in_ECX + 8); piVar11 != (int *)(iVar1 * 0x10 + iVar2);
      piVar11 = piVar11 + 4) {
    iVar7 = piVar11[1];
    iVar3 = *piVar11;
    iVar12 = piVar11[3] + iVar7;
    uVar4 = piVar11[2];
    for (; iVar7 < iVar12; iVar7 = iVar7 + 1) {
      piVar9 = (int *)*param_1;
      iVar6 = *piVar9 + piVar9[2] * iVar7;
      param_1[1] = iVar6;
      iVar15 = piVar9[3];
      piVar9 = (int *)(iVar15 * iVar3 + iVar6);
      if (*(char *)((int)param_1 + 0xb) == -1) {
        uVar13 = param_1[2];
        uVar5 = (undefined1)uVar13;
        uVar8 = (undefined1)(uVar13 >> 8);
        uStack_a = (undefined1)(uVar13 >> 0x10);
        uVar14 = uVar4;
        if (iVar15 == 3) {
          if ((char)param_1[6] == '\0') {
            uVar13 = uVar4;
            if ((uVar4 & 0xffffffe0) != 0) {
              for (; (8 < (int)uVar13 && (((uint)piVar9 & 7) != 0));
                  piVar9 = (int *)((int)piVar9 + 3)) {
                *(undefined1 *)piVar9 = uVar5;
                *(undefined1 *)((int)piVar9 + 1) = uVar8;
                *(undefined1 *)((int)piVar9 + 2) = uStack_a;
                uVar13 = uVar13 - 1;
              }
              if (4 < (int)uVar13) {
                iVar15 = (uVar13 - 5 >> 2) + 1;
                uVar13 = uVar13 + iVar15 * -4;
                do {
                  *piVar9 = param_1[3];
                  piVar9[1] = param_1[4];
                  piVar9[2] = param_1[5];
                  piVar9 = piVar9 + 3;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
            }
            iVar15 = uVar13 - 1;
            if (-1 < iVar15) {
              puVar10 = (undefined1 *)((int)piVar9 + 2);
              do {
                iVar15 = iVar15 + -1;
                puVar10[-2] = uVar5;
                puVar10[-1] = uVar8;
                *puVar10 = uStack_a;
                puVar10 = puVar10 + 3;
              } while (-1 < iVar15);
            }
          }
          else {
            _memset(piVar9,uVar13 >> 0x10 & 0xff,uVar4 * 3);
          }
        }
        else {
          do {
            *(undefined1 *)piVar9 = uVar5;
            uVar14 = uVar14 - 1;
            *(undefined1 *)((int)piVar9 + 1) = uVar8;
            *(undefined1 *)((int)piVar9 + 2) = uStack_a;
            piVar9 = (int *)((int)piVar9 + iVar15);
          } while (0 < (int)uVar14);
        }
      }
      else {
        FUN_0048b420(piVar9,param_1[2],uVar4);
      }
    }
  }
  return;
}

