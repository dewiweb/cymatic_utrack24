// rea decompile_all
// name: FUN_0053db20
// address: 0x53db20
// body: available
// range: 0x53db20-0x53dc05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053db20(undefined4 param_1)

{
  int in_ECX;
  bool bVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0054f6b0();
  FUN_00543640(param_1);
  if (*(short *)(in_ECX + -0x38) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = **(int **)(in_ECX + -0x3c) == 0;
  }
  if (bVar1) {
    if (in_ECX == 0x22c) {
      local_20 = 0;
      local_24 = 0;
      local_28 = 0;
    }
    else {
      local_20 = in_ECX + -0xb0;
      local_24 = in_ECX + -0xb4;
      local_28 = in_ECX + -0xb8;
    }
    FUN_00590610(local_28,local_24,local_20,0);
  }
  FUN_0054f6f0();
  return;
}

