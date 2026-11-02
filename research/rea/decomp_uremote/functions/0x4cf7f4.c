// rea decompile_all
// name: FUN_004cf7f4
// address: 0x4cf7f4
// body: available
// range: 0x4cf7f4-0x4cf861 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf7f4(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = FUN_00467ec4();
  if ((*(int *)(in_ECX + 0x20) == 0) || (*(int *)(in_ECX + 0x20) == iVar4)) {
    *(int *)(in_ECX + 0x20) = iVar4;
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x20);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    cVar3 = FUN_004cf1f2(iVar4 - iVar2);
    if (cVar3 == '\0') {
      FUN_004f613f(iVar1);
      FUN_004743df();
    }
  }
  *(int *)(in_ECX + 0x20) = iVar4;
  if (*(int *)(in_ECX + 0x1c) == 0) {
    FUN_00474839();
  }
  return;
}

