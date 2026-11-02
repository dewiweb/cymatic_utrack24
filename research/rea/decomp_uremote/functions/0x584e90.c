// rea decompile_all
// name: FUN_00584e90
// address: 0x584e90
// body: available
// range: 0x584e90-0x584f4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584e90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                 undefined2 param_9)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = 0x187e0119;
  *(undefined4 *)(in_ECX + 0x88) = *param_1;
  *(undefined4 *)(in_ECX + 0x8c) = param_1[1];
  *(undefined4 *)(in_ECX + 0x90) = param_1[2];
  *(undefined4 *)(in_ECX + 0x94) = param_1[3];
  uVar1 = param_2[1];
  *(undefined4 *)(in_ECX + 0x98) = *param_2;
  *(undefined4 *)(in_ECX + 0x9c) = uVar1;
  FUN_00501f30(param_3);
  *(undefined2 *)(in_ECX + 0xc0) = param_4;
  *(undefined2 *)(in_ECX + 0xc2) = param_5;
  *(undefined2 *)(in_ECX + 0xc4) = param_7;
  *(undefined2 *)(in_ECX + 0xc6) = param_8;
  *(undefined2 *)(in_ECX + 200) = param_9;
  *(undefined2 *)(in_ECX + 0xca) = param_6;
  *(undefined1 *)(in_ECX + 0x114) = 1;
  return;
}

