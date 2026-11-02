// rea decompile_all
// name: FUN_00506c40
// address: 0x506c40
// body: available
// range: 0x506c40-0x506d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00506c40(int param_1)

{
  int in_ECX;
  
  FUN_00503650(param_1);
  FUN_00503650(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(in_ECX + 0x34) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(in_ECX + 0x36) = *(undefined2 *)(param_1 + 0x36);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined2 *)(in_ECX + 0x40) = *(undefined2 *)(param_1 + 0x40);
  *(undefined2 *)(in_ECX + 0x42) = *(undefined2 *)(param_1 + 0x42);
  *(undefined1 *)(in_ECX + 0x44) = *(undefined1 *)(param_1 + 0x44);
  FUN_005063a0(param_1 + 0x48);
  return in_ECX;
}

