// rea decompile_all
// name: FUN_004b890a
// address: 0x4b890a
// body: available
// range: 0x4b890a-0x4b897f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b890a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int *unaff_ESI;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  puVar4 = puVar6 + *(int *)(in_ECX + 0x10) * 4;
  for (; puVar6 != puVar4; puVar6 = puVar6 + 4) {
    uVar1 = *puVar6;
    uVar2 = puVar6[2];
    iVar3 = puVar6[1];
    iVar5 = puVar6[3] + iVar3;
    for (; iVar3 < iVar5; iVar3 = iVar3 + 1) {
      unaff_ESI[5] = ((int *)*unaff_ESI)[2] * iVar3 + *(int *)*unaff_ESI;
      unaff_ESI[6] = (iVar3 - unaff_ESI[4]) * ((int *)unaff_ESI[1])[2] + *(int *)unaff_ESI[1];
      FUN_004b9368(unaff_ESI,uVar1,uVar2);
    }
  }
  return;
}

