// rea decompile_all
// name: FUN_00506a00
// address: 0x506a00
// body: available
// range: 0x506a00-0x506b56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00506a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined2 param_10,undefined2 param_11,undefined4 param_12,
                undefined4 param_13,undefined2 param_14,undefined2 param_15,char param_16,
                char param_17,char param_18,char param_19,char param_20,char param_21)

{
  int in_ECX;
  
  FUN_005033e0(param_1);
  FUN_005033e0(param_2);
  *(undefined4 *)(in_ECX + 0x18) = param_3;
  *(undefined4 *)(in_ECX + 0x1c) = param_4;
  *(undefined4 *)(in_ECX + 0x20) = param_5;
  *(undefined4 *)(in_ECX + 0x24) = param_6;
  *(undefined4 *)(in_ECX + 0x28) = param_7;
  *(undefined4 *)(in_ECX + 0x2c) = param_8;
  *(undefined4 *)(in_ECX + 0x30) = param_9;
  *(undefined2 *)(in_ECX + 0x34) = param_10;
  *(undefined2 *)(in_ECX + 0x36) = param_11;
  *(undefined4 *)(in_ECX + 0x38) = param_12;
  *(undefined4 *)(in_ECX + 0x3c) = param_13;
  *(undefined2 *)(in_ECX + 0x40) = param_14;
  *(undefined2 *)(in_ECX + 0x42) = param_15;
  *(undefined1 *)(in_ECX + 0x44) = 0;
  FUN_00506310();
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | -(param_16 != '\0') & 4U;
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | -(param_17 != '\0') & 0x80U;
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | -(param_18 != '\0') & 2U;
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | param_19 != '\0';
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | -(param_20 != '\0') & 8U;
  *(byte *)(in_ECX + 0x44) = *(byte *)(in_ECX + 0x44) | -(param_21 != '\0') & 0x40U;
  return in_ECX;
}

