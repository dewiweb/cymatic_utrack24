// rea decompile_all
// name: FUN_00501378
// address: 0x501378
// body: available
// range: 0x501378-0x5013fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501378(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)*in_ECX;
  iVar3 = ((int *)*in_ECX)[2] * 0x10 + iVar1;
  for (; iVar1 != iVar3; iVar1 = iVar1 + 0x10) {
    FUN_004a4c72(local_18);
    if ((0 < local_10) && (0 < local_c)) {
      iVar2 = local_c + local_14;
      for (iVar4 = local_14; iVar4 < iVar2; iVar4 = iVar4 + 1) {
        *(int *)(unaff_EBX + 8) = iVar4;
        FUN_004fb67f(local_10,*(undefined4 *)(unaff_EBX + 4));
      }
    }
  }
  return;
}

