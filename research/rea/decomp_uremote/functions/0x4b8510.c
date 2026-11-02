// rea decompile_all
// name: FUN_004b8510
// address: 0x4b8510
// body: available
// range: 0x4b8510-0x4b857f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8510(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int unaff_EBX;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = *(undefined4 **)(in_ECX + 8);
  puVar4 = puVar5 + *(int *)(in_ECX + 0x10) * 4;
  for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
    uVar1 = *puVar5;
    uVar2 = puVar5[2];
    iVar3 = puVar5[1];
    iVar6 = puVar5[3] + iVar3;
    for (; iVar3 < iVar6; iVar3 = iVar3 + 1) {
      *(int *)(unaff_EBX + 0x60) = iVar3;
      *(int *)(unaff_EBX + 100) =
           (*(int **)(unaff_EBX + 0x48))[2] * iVar3 + **(int **)(unaff_EBX + 0x48);
      FUN_004bb5d8(uVar1,uVar2,0xff);
    }
  }
  return;
}

