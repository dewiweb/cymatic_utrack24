// rea decompile_all
// name: FUN_00510fb0
// address: 0x510fb0
// body: available
// range: 0x510fb0-0x511090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00510fb0(undefined4 param_1)

{
  int in_ECX;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cefb9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))
            (DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  FUN_005018d0(in_ECX + -0xaa4);
  local_8 = 1;
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

