// rea decompile_all
// name: FUN_005981a0
// address: 0x5981a0
// body: available
// range: 0x5981a0-0x598277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005981a0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,
                 undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined4 *param_12,
                 undefined4 *param_13,undefined4 param_14)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  
  FUN_00503650(param_2);
  FUN_00503650(param_3);
  *(undefined4 *)(in_ECX + 0x78) = param_7;
  *(undefined2 *)(in_ECX + 0x7c) = param_8;
  *(undefined2 *)(in_ECX + 0x7e) = param_9;
  *(undefined2 *)(in_ECX + 0x80) = param_10;
  *(undefined2 *)(in_ECX + 0x82) = param_11;
  *(undefined4 *)(in_ECX + 0x88) = *param_12;
  *(undefined4 *)(in_ECX + 0x8c) = param_12[1];
  *(undefined4 *)(in_ECX + 0x90) = param_12[2];
  *(undefined4 *)(in_ECX + 0x94) = param_12[3];
  uVar1 = param_13[1];
  *(undefined4 *)(in_ECX + 0x98) = *param_13;
  *(undefined4 *)(in_ECX + 0x9c) = uVar1;
  cVar2 = FUN_00544180(param_4,param_2,param_5,param_6,-(uint)(param_1 != '\0') & 2000,2,param_14);
  return cVar2 != '\0';
}

