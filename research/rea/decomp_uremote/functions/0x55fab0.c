// rea decompile_all
// name: FUN_0055fab0
// address: 0x55fab0
// body: available
// range: 0x55fab0-0x55fb02 inclusive
// range: 0x55fb08-0x55fbc3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_0055fab0(undefined2 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            )

{
  undefined1 uVar1;
  int in_ECX;
  int local_20;
  
  if (param_2 == 1) {
    if ((*(byte *)(in_ECX + 0x154) >> 2 & 1) == 0) {
      FUN_0058f6c0(param_1,param_3,param_4,param_5);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (*(int *)(in_ECX + 0x108) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_00515830();
    if (in_ECX == 0) {
      local_20 = 0;
    }
    else {
      local_20 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    uVar1 = (**(code **)**(undefined4 **)(in_ECX + 0x108))
                      (local_20,param_1,param_2,param_3,param_4,param_5);
    FUN_00515860();
  }
  return uVar1;
}

