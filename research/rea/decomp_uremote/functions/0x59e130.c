// rea decompile_all
// name: FUN_0059e130
// address: 0x59e130
// body: available
// range: 0x59e130-0x59e221 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059e130(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_5;
  
  if (*(int *)(in_ECX + 0xc0) == 0x33c) {
    FUN_005851c0(*(undefined2 *)(in_ECX + 0xe0),*(undefined2 *)(in_ECX + 0xe2),param_1);
    FUN_0059adb0();
    uVar1 = 0;
  }
  else if (*(int *)(in_ECX + 0xc0) == 0x33f) {
    if (*(int *)(*(int *)(in_ECX + 0xe8) + 0x28) == -0x7ff9ffdd) {
      local_5 = FUN_00585860(param_1);
    }
    else {
      local_5 = FUN_00585740(*(undefined2 *)(in_ECX + 0xe0),*(undefined2 *)(in_ECX + 0xe2),param_1);
    }
    if (local_5 == '\0') {
      FUN_0059adb0();
      uVar1 = 8;
    }
    else {
      if (param_2 != '\0') {
        FUN_0059adb0();
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}

