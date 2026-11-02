// rea decompile_all
// name: FUN_004b76ca
// address: 0x4b76ca
// body: available
// range: 0x4b76ca-0x4b77f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b76ca(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined1 uVar8;
  int in_ECX;
  int iVar7;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_ESI;
  int iVar13;
  undefined1 uStack_e;
  
  piVar5 = *(int **)(in_ECX + 8);
  piVar9 = piVar5 + *(int *)(in_ECX + 0x10) * 4;
  for (; piVar5 != piVar9; piVar5 = piVar5 + 4) {
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    uVar3 = piVar5[2];
    iVar7 = piVar5[3] + iVar2;
    for (; iVar2 < iVar7; iVar2 = iVar2 + 1) {
      piVar4 = (int *)*unaff_ESI;
      iVar10 = *piVar4 + piVar4[2] * iVar2;
      uVar11 = unaff_ESI[2];
      unaff_ESI[1] = iVar10;
      iVar13 = piVar4[3];
      piVar4 = (int *)(iVar13 * iVar1 + iVar10);
      uVar6 = (undefined1)uVar11;
      uVar8 = (undefined1)(uVar11 >> 8);
      uStack_e = (undefined1)(uVar11 >> 0x10);
      uVar12 = uVar3;
      if (iVar13 == 3) {
        if ((char)unaff_ESI[6] == '\0') {
          uVar11 = uVar3;
          if ((uVar3 & 0xffffffe0) != 0) {
            for (; (8 < (int)uVar11 && (((uint)piVar4 & 7) != 0)); piVar4 = (int *)((int)piVar4 + 3)
                ) {
              *(undefined1 *)piVar4 = uVar6;
              *(undefined1 *)((int)piVar4 + 1) = uVar8;
              *(undefined1 *)((int)piVar4 + 2) = uStack_e;
              uVar11 = uVar11 - 1;
            }
            if (4 < (int)uVar11) {
              iVar13 = (uVar11 - 5 >> 2) + 1;
              uVar11 = uVar11 + iVar13 * -4;
              do {
                *piVar4 = unaff_ESI[3];
                piVar4[1] = unaff_ESI[4];
                piVar4[2] = unaff_ESI[5];
                piVar4 = piVar4 + 3;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
          }
          while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
            *(undefined1 *)piVar4 = uVar6;
            *(undefined1 *)((int)piVar4 + 1) = uVar8;
            *(undefined1 *)((int)piVar4 + 2) = uStack_e;
            piVar4 = (int *)((int)piVar4 + 3);
          }
        }
        else {
          _memset(piVar4,uVar11 >> 0x10 & 0xff,uVar3 * 3);
        }
      }
      else {
        do {
          *(undefined1 *)piVar4 = uVar6;
          *(undefined1 *)((int)piVar4 + 1) = uVar8;
          *(undefined1 *)((int)piVar4 + 2) = uStack_e;
          piVar4 = (int *)((int)piVar4 + iVar13);
          uVar12 = uVar12 - 1;
        } while (0 < (int)uVar12);
      }
    }
  }
  return;
}

