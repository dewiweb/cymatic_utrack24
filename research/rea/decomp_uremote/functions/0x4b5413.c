// rea decompile_all
// name: FUN_004b5413
// address: 0x4b5413
// body: available
// range: 0x4b5413-0x4b54d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5413(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_ESI;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar8 = *(int *)*in_ECX;
  iVar6 = ((int *)*in_ECX)[2] * 0x10 + iVar8;
  for (; iVar8 != iVar6; iVar8 = iVar8 + 0x10) {
    FUN_004a4c72(&local_18);
    if ((0 < local_10) && (0 < local_c)) {
      iVar4 = local_c + local_14;
      for (iVar1 = local_14; iVar1 < iVar4; iVar1 = iVar1 + 1) {
        piVar3 = (int *)*unaff_ESI;
        iVar5 = piVar3[2] * iVar1 + *piVar3;
        unaff_ESI[1] = iVar5;
        iVar2 = piVar3[3];
        piVar3 = (int *)(iVar2 * local_18 + iVar5);
        if (*(char *)((int)unaff_ESI + 0xb) == -1) {
          iVar5 = unaff_ESI[2];
          iVar7 = local_10;
          do {
            *piVar3 = iVar5;
            piVar3 = (int *)((int)piVar3 + iVar2);
            iVar7 = iVar7 + -1;
          } while (0 < iVar7);
        }
        else {
          FUN_004be2cb(piVar3,unaff_ESI[2],local_10);
        }
      }
    }
  }
  return;
}

