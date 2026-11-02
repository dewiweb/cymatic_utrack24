// rea decompile_all
// name: FUN_005074c0
// address: 0x5074c0
// body: available
// range: 0x5074c0-0x5075ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_005074c0(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = *param_1;
  FUN_00503650(param_1 + 2);
  FUN_00503650(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xe) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x12) = *(undefined4 *)(param_1 + 0x12);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x16) = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1a) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x1e) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x22) = *(undefined4 *)(param_1 + 0x22);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x26) = *(undefined4 *)(param_1 + 0x26);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2a) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0x2e] = param_1[0x2e];
  in_ECX[0x2f] = param_1[0x2f];
  FUN_005063a0(param_1 + 0x30);
  return in_ECX;
}

