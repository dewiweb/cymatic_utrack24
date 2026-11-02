// rea decompile_all
// name: FUN_00506ef0
// address: 0x506ef0
// body: available
// range: 0x506ef0-0x507176 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00506ef0(uint *param_1,uint param_2)

{
  char cVar1;
  int in_ECX;
  
  if (0x41 < (int)(param_2 - *param_1)) {
    FUN_00507d00();
    FUN_00507d00(in_ECX + 0xc,param_1);
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 0x34) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *(undefined2 *)(in_ECX + 0x36) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 0x40) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *(undefined2 *)(in_ECX + 0x42) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    cVar1 = FUN_00507db0(param_1,param_2);
    if ((cVar1 != '\0') && (*param_1 < param_2)) {
      *(undefined1 *)(in_ECX + 0x44) = *(undefined1 *)*param_1;
      *param_1 = *param_1 + 1;
      return 1;
    }
  }
  FUN_00503b90();
  FUN_00503b90();
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined2 *)(in_ECX + 0x34) = 0;
  *(undefined2 *)(in_ECX + 0x36) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined2 *)(in_ECX + 0x40) = 0;
  *(undefined2 *)(in_ECX + 0x42) = 0;
  *(undefined1 *)(in_ECX + 0x44) = 0;
  FUN_005063e0();
  return 0;
}

