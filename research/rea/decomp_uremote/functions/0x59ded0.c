// rea decompile_all
// name: FUN_0059ded0
// address: 0x59ded0
// body: available
// range: 0x59ded0-0x59df60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0059ded0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0xc0) == 0x1131) || (*(int *)(in_ECX + 0xc0) == 0x3132)) ||
      (*(int *)(in_ECX + 0xc0) == 0x3133)) || (*(int *)(in_ECX + 0xc0) == 0x2034)) {
    FUN_00584f50(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_0059adb0();
    uVar1 = 0;
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}

