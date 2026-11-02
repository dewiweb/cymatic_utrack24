// rea decompile_all
// name: FUN_00595090
// address: 0x595090
// body: available
// range: 0x595090-0x59519b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00595090(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  int in_ECX;
  
  FUN_00503650(param_1);
  *(undefined1 *)(in_ECX + 0x6c) = param_2;
  *(undefined1 *)(in_ECX + 0x6d) = param_3;
  *(undefined1 *)(in_ECX + 0x6e) = param_4;
  *(undefined1 *)(in_ECX + 0x6f) = param_5;
  *(undefined1 *)(in_ECX + 0x70) = param_6;
  FUN_00503650(param_7);
  *(undefined4 *)(in_ECX + 0x80) = param_8;
  *(undefined4 *)(in_ECX + 0x84) = param_9;
  *(undefined4 *)(in_ECX + 0x88) = param_10;
  *(undefined4 *)(in_ECX + 0x8c) = param_11;
  *(undefined4 *)(in_ECX + 0x90) = param_12;
  *(undefined4 *)(in_ECX + 0x94) = param_13;
  *(undefined4 *)(in_ECX + 0x98) = param_14;
  *(undefined2 *)(in_ECX + 0x9c) = 0xffff;
  *(undefined2 *)(in_ECX + 0x9e) = 0xffff;
  *(undefined2 *)(in_ECX + 0xa0) = 0xffff;
  *(undefined2 *)(in_ECX + 0xa2) = 0xffff;
  FUN_00544180(param_15,&DAT_0095c848,param_16,param_17,2000,4,param_18);
  return;
}

