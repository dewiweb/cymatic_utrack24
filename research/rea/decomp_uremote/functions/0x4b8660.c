// rea decompile_all
// name: FUN_004b8660
// address: 0x4b8660
// body: available
// range: 0x4b8660-0x4b86cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8660(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int unaff_EBX;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)(in_ECX + 8);
  puVar3 = puVar4 + *(int *)(in_ECX + 0x10) * 4;
  for (; puVar4 != puVar3; puVar4 = puVar4 + 4) {
    uVar1 = *puVar4;
    iVar2 = puVar4[1];
    iVar5 = puVar4[3] + iVar2;
    for (; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      *(int *)(unaff_EBX + 0x60) = iVar2;
      *(int *)(unaff_EBX + 100) =
           (*(int **)(unaff_EBX + 0x48))[2] * iVar2 + **(int **)(unaff_EBX + 0x48);
      FUN_004bb948(uVar1,0xff);
    }
  }
  return;
}

