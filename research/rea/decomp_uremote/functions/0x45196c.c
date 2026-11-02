// rea decompile_all
// name: FUN_0045196c
// address: 0x45196c
// body: available
// range: 0x45196c-0x4519ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045196c(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  FUN_0044bfc5();
  if (*(char *)(in_ECX + 0x78) != '\0') {
    iVar2 = *(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x74);
  }
  iVar1 = FUN_005b3fb0();
  FUN_004c09cc(*(undefined4 *)(in_ECX + 0x70),(iVar2 - iVar1) / 2 + *(int *)(in_ECX + 0x74),iVar1);
  return;
}

