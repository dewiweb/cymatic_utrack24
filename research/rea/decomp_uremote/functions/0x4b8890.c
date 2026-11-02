// rea decompile_all
// name: FUN_004b8890
// address: 0x4b8890
// body: available
// range: 0x4b8890-0x4b8909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8890(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int *unaff_ESI;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(in_ECX + 8);
  puVar5 = puVar7 + *(int *)(in_ECX + 0x10) * 4;
  for (; puVar7 != puVar5; puVar7 = puVar7 + 4) {
    uVar1 = *puVar7;
    uVar2 = puVar7[2];
    iVar3 = puVar7[1];
    iVar6 = puVar7[3] + iVar3;
    for (; iVar3 < iVar6; iVar3 = iVar3 + 1) {
      unaff_ESI[5] = ((int *)*unaff_ESI)[2] * iVar3 + *(int *)*unaff_ESI;
      piVar4 = (int *)unaff_ESI[1];
      unaff_ESI[6] = ((iVar3 - unaff_ESI[4]) % piVar4[5]) * piVar4[2] + *piVar4;
      FUN_004bbd69(unaff_ESI,uVar1,uVar2);
    }
  }
  return;
}

