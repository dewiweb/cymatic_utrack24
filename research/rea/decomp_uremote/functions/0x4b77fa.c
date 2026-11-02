// rea decompile_all
// name: FUN_004b77fa
// address: 0x4b77fa
// body: available
// range: 0x4b77fa-0x4b7945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b77fa(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined1 uVar11;
  int iVar10;
  int *unaff_ESI;
  int *piVar12;
  int iVar13;
  undefined1 uStack_a;
  
  piVar8 = *(int **)(in_EAX + 8);
  piVar12 = piVar8 + *(int *)(in_EAX + 0x10) * 4;
  for (; piVar8 != piVar12; piVar8 = piVar8 + 4) {
    iVar1 = *piVar8;
    uVar2 = piVar8[2];
    iVar3 = piVar8[1];
    iVar10 = piVar8[3] + iVar3;
    for (; iVar3 < iVar10; iVar3 = iVar3 + 1) {
      piVar4 = (int *)*unaff_ESI;
      iVar5 = piVar4[2] * iVar3 + *piVar4;
      unaff_ESI[1] = iVar5;
      iVar13 = piVar4[3];
      piVar4 = (int *)(iVar13 * iVar1 + iVar5);
      if (*(char *)((int)unaff_ESI + 0xb) == -1) {
        uVar6 = unaff_ESI[2];
        uVar9 = (undefined1)uVar6;
        uVar11 = (undefined1)(uVar6 >> 8);
        uStack_a = (undefined1)(uVar6 >> 0x10);
        uVar7 = uVar2;
        if (iVar13 == 3) {
          if ((char)unaff_ESI[6] == '\0') {
            uVar6 = uVar2;
            if ((uVar2 & 0xffffffe0) != 0) {
              for (; (8 < (int)uVar6 && (((uint)piVar4 & 7) != 0));
                  piVar4 = (int *)((int)piVar4 + 3)) {
                *(undefined1 *)piVar4 = uVar9;
                *(undefined1 *)((int)piVar4 + 1) = uVar11;
                *(undefined1 *)((int)piVar4 + 2) = uStack_a;
                uVar6 = uVar6 - 1;
              }
              if (4 < (int)uVar6) {
                iVar13 = (uVar6 - 5 >> 2) + 1;
                uVar6 = uVar6 + iVar13 * -4;
                do {
                  *piVar4 = unaff_ESI[3];
                  piVar4[1] = unaff_ESI[4];
                  piVar4[2] = unaff_ESI[5];
                  piVar4 = piVar4 + 3;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
            }
            while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
              *(undefined1 *)piVar4 = uVar9;
              *(undefined1 *)((int)piVar4 + 1) = uVar11;
              *(undefined1 *)((int)piVar4 + 2) = uStack_a;
              piVar4 = (int *)((int)piVar4 + 3);
            }
          }
          else {
            _memset(piVar4,uVar6 >> 0x10 & 0xff,uVar2 * 3);
          }
        }
        else {
          do {
            *(undefined1 *)piVar4 = uVar9;
            *(undefined1 *)((int)piVar4 + 1) = uVar11;
            *(undefined1 *)((int)piVar4 + 2) = uStack_a;
            piVar4 = (int *)((int)piVar4 + iVar13);
            uVar7 = uVar7 - 1;
          } while (0 < (int)uVar7);
        }
      }
      else {
        FUN_004be37c(unaff_ESI[2],uVar2);
      }
    }
  }
  return;
}

