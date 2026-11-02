// rea decompile_all
// name: FUN_00584a80
// address: 0x584a80
// body: available
// range: 0x584a80-0x584b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = 0x1f302;
  FUN_00503650(param_1);
  *(undefined4 *)(in_ECX + 0xa4) = param_2;
  *(undefined4 *)(in_ECX + 0xac) = param_3;
  *(undefined4 *)(in_ECX + 0xb4) = param_4;
  *(undefined4 *)(in_ECX + 0xa8) = param_5;
  *(undefined4 *)(in_ECX + 0xb0) = param_6;
  *(undefined4 *)(in_ECX + 0xb8) = param_7;
  *(undefined4 *)(in_ECX + 0xbc) = param_8;
  *(undefined4 *)(in_ECX + 0xa0) = param_9;
  FUN_00501f30(param_10);
  FUN_00501f30(param_11);
  FUN_005063a0(param_12);
  *(undefined1 *)(in_ECX + 0x114) = 1;
  return;
}

