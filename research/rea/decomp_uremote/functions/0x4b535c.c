// rea decompile_all
// name: FUN_004b535c
// address: 0x4b535c
// body: available
// range: 0x4b535c-0x4b5412 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b535c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)*in_ECX;
  iVar7 = ((int *)*in_ECX)[2] * 0x10 + iVar2;
  for (; iVar2 != iVar7; iVar2 = iVar2 + 0x10) {
    FUN_004a4c72(&local_18);
    if ((0 < local_10) && (0 < local_c)) {
      for (iVar1 = local_14; iVar1 < local_c + local_14; iVar1 = iVar1 + 1) {
        piVar5 = (int *)*unaff_ESI;
        iVar6 = piVar5[2] * iVar1 + *piVar5;
        unaff_ESI[1] = iVar6;
        iVar3 = piVar5[3];
        local_24 = local_10;
        iVar4 = unaff_ESI[2];
        piVar5 = (int *)(iVar3 * local_18 + iVar6);
        do {
          *piVar5 = iVar4;
          piVar5 = (int *)((int)piVar5 + iVar3);
          local_24 = local_24 + -1;
        } while (0 < local_24);
      }
    }
  }
  return;
}

