// rea decompile_all
// name: FUN_004c5108
// address: 0x4c5108
// body: available
// range: 0x4c5108-0x4c5163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c5108(void)

{
  int in_ECX;
  int iVar1;
  undefined4 uVar2;
  
  FUN_004c3124();
  FUN_004f5fb6();
  if (in_ECX == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(in_ECX + 8);
  }
  iVar1 = *(int *)(in_ECX + 0x20);
  while (0 < iVar1) {
    iVar1 = iVar1 + -1;
    if ((*(int *)(in_ECX + 0x20) <= iVar1) && (iVar1 = *(int *)(in_ECX + 0x20) + -1, iVar1 < 0))
    break;
    FUN_004f9b3e(uVar2);
  }
  FUN_00474d0f();
  return;
}

