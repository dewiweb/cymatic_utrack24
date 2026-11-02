// rea decompile_all
// name: FUN_004b9076
// address: 0x4b9076
// body: available
// range: 0x4b9076-0x4b90f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9076(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *unaff_ESI;
  int iVar6;
  
  iVar6 = *(int *)(in_ECX + 8);
  iVar4 = *(int *)(in_ECX + 0x10) * 0x10 + iVar6;
  for (; iVar6 != iVar4; iVar6 = iVar6 + 0x10) {
    uVar1 = *(undefined4 *)(iVar6 + 8);
    iVar2 = *(int *)(iVar6 + 4);
    iVar5 = *(int *)(iVar6 + 0xc) + iVar2;
    for (; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      unaff_ESI[5] = ((int *)*unaff_ESI)[2] * iVar2 + *(int *)*unaff_ESI;
      piVar3 = (int *)unaff_ESI[1];
      unaff_ESI[6] = ((iVar2 - unaff_ESI[4]) % piVar3[5]) * piVar3[2] + *piVar3;
      FUN_004be226(uVar1);
    }
  }
  return;
}

