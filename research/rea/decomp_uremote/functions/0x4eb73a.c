// rea decompile_all
// name: FUN_004eb73a
// address: 0x4eb73a
// body: available
// range: 0x4eb73a-0x4eb7a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb73a(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_004e9764();
  *(byte *)(in_ECX + 0x94) = *(byte *)(in_ECX + 0x94) & 0x7f;
  FUN_00474839();
  if (*(int *)(in_ECX + 0x144) != 0) {
    _free(*(void **)(in_ECX + 0x140));
    *(undefined4 *)(in_ECX + 0x140) = 0;
    *(undefined4 *)(in_ECX + 0x144) = 0;
  }
  *(undefined4 *)(in_ECX + 0x148) = 0;
  piVar1 = (int *)FUN_004c0453();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))();
  }
  FUN_004e99ba();
  FUN_004c2154(0x10003004);
  FUN_004c1613(in_ECX);
  return;
}

