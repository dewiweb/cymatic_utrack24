// rea decompile_all
// name: FUN_00544180
// address: 0x544180
// body: available
// range: 0x544180-0x544270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00544180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = param_5;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = param_6;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x34) = param_3;
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x14);
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_00528940();
  }
  FUN_00503650(param_2);
  *(undefined1 *)(in_ECX + 0x4c) = 0;
  *(undefined1 *)(in_ECX + 0x4d) = 0;
  *(undefined1 *)(in_ECX + 0x4e) = 0;
  *(undefined2 *)(in_ECX + 0x50) = 0x32;
  *(undefined4 *)(in_ECX + 0x54) = param_4;
  *(undefined4 *)(in_ECX + 0x30) = param_7;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  FUN_0052cad0(in_ECX);
  return;
}

