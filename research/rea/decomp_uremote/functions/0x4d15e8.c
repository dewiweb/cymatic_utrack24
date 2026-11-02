// rea decompile_all
// name: FUN_004d15e8
// address: 0x4d15e8
// body: available
// range: 0x4d15e8-0x4d16cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d15e8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0xc4)) {
    piVar2 = (int *)thunk_FUN_004c1d58();
    (**(code **)(*piVar2 + 0x14))();
    iVar1 = *piVar2;
    if (*(char *)(in_ECX + 0xe4) == '\0') {
      FUN_004c32c9(in_ECX);
      FUN_004c321c(in_ECX,0);
    }
    else {
      FUN_004c32c9(in_ECX);
      FUN_004c321c(in_ECX,0);
    }
    (**(code **)(iVar1 + 0xc))(param_1);
  }
  return;
}

