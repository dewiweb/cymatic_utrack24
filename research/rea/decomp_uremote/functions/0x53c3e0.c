// rea decompile_all
// name: FUN_0053c3e0
// address: 0x53c3e0
// body: available
// range: 0x53c3e0-0x53c4a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053c3e0(undefined4 param_1)

{
  int in_ECX;
  bool bVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0054f6b0();
  if (*(short *)(in_ECX + -0x38) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = **(int **)(in_ECX + -0x3c) == 0;
  }
  if (bVar1) {
    if (in_ECX == 0x220) {
      local_2c = 0;
      local_30 = 0;
    }
    else {
      local_2c = in_ECX + -0xa8;
      local_30 = in_ECX + -0xac;
    }
    FUN_00590610(local_30,local_2c,0,1);
  }
  FUN_005a1930(param_1);
  FUN_0054f6f0();
  return;
}

