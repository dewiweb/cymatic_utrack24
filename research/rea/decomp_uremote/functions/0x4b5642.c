// rea decompile_all
// name: FUN_004b5642
// address: 0x4b5642
// body: available
// range: 0x4b5642-0x4b57c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5642(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int *unaff_ESI;
  int iVar10;
  int iVar11;
  undefined1 uStack_2a;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  iVar11 = *(int *)*in_ECX;
  iVar9 = ((int *)*in_ECX)[2] * 0x10 + iVar11;
  for (; iVar11 != iVar9; iVar11 = iVar11 + 0x10) {
    FUN_004a4c72(&local_18);
    if ((0 < (int)local_10) && (0 < local_c)) {
      iVar3 = local_c + local_14;
      for (iVar1 = local_14; iVar1 < iVar3; iVar1 = iVar1 + 1) {
        piVar2 = (int *)*unaff_ESI;
        iVar4 = piVar2[2] * iVar1 + *piVar2;
        unaff_ESI[1] = iVar4;
        iVar10 = piVar2[3];
        piVar2 = (int *)(iVar10 * local_18 + iVar4);
        if (*(char *)((int)unaff_ESI + 0xb) == -1) {
          uVar5 = unaff_ESI[2];
          uVar7 = (undefined1)uVar5;
          uVar8 = (undefined1)(uVar5 >> 8);
          uStack_2a = (undefined1)(uVar5 >> 0x10);
          uVar6 = local_10;
          if (iVar10 == 3) {
            if ((char)unaff_ESI[6] == '\0') {
              uVar5 = local_10;
              if ((local_10 & 0xffffffe0) != 0) {
                for (; (8 < (int)uVar5 && (((uint)piVar2 & 7) != 0));
                    piVar2 = (int *)((int)piVar2 + 3)) {
                  *(undefined1 *)piVar2 = uVar7;
                  *(undefined1 *)((int)piVar2 + 1) = uVar8;
                  *(undefined1 *)((int)piVar2 + 2) = uStack_2a;
                  uVar5 = uVar5 - 1;
                }
                if (4 < (int)uVar5) {
                  iVar10 = (uVar5 - 5 >> 2) + 1;
                  uVar5 = uVar5 + iVar10 * -4;
                  do {
                    *piVar2 = unaff_ESI[3];
                    piVar2[1] = unaff_ESI[4];
                    piVar2[2] = unaff_ESI[5];
                    piVar2 = piVar2 + 3;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
              }
              while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
                *(undefined1 *)piVar2 = uVar7;
                *(undefined1 *)((int)piVar2 + 1) = uVar8;
                *(undefined1 *)((int)piVar2 + 2) = uStack_2a;
                piVar2 = (int *)((int)piVar2 + 3);
              }
            }
            else {
              _memset(piVar2,uVar5 >> 0x10 & 0xff,local_10 * 3);
            }
          }
          else {
            do {
              *(undefined1 *)piVar2 = uVar7;
              *(undefined1 *)((int)piVar2 + 1) = uVar8;
              *(undefined1 *)((int)piVar2 + 2) = uStack_2a;
              piVar2 = (int *)((int)piVar2 + iVar10);
              uVar6 = uVar6 - 1;
            } while (0 < (int)uVar6);
          }
        }
        else {
          FUN_004be37c(unaff_ESI[2],local_10);
        }
      }
    }
  }
  return;
}

