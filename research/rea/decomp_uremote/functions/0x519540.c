// rea decompile_all
// name: FUN_00519540
// address: 0x519540
// body: available
// range: 0x519540-0x5195f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00519540(undefined2 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + -0x2c) == 0) && (*(int *)(in_ECX + -0x28) != 0)) {
    *(undefined2 *)(in_ECX + -0x30) = param_1;
    (**(code **)(*(int *)(*(int *)(in_ECX + -0x4c) + 0xc +
                         *(int *)(*(int *)(*(int *)(in_ECX + -0x4c) + 0xc) + 4)) + 0x28))();
    FUN_00526fe0(in_ECX + -0x78,param_1);
    (**(code **)(*(int *)(*(int *)(in_ECX + -0x4c) + 0xc +
                         *(int *)(*(int *)(*(int *)(in_ECX + -0x4c) + 0xc) + 4)) + 0x2c))();
    uVar1 = 0;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}

