// rea decompile_all
// name: FUN_0059a1f0
// address: 0x59a1f0
// body: available
// range: 0x59a1f0-0x59a29c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059a1f0(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6)

{
  int iVar1;
  int in_ECX;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d6e71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x10) != 0) {
    iVar1 = FUN_005af82d(0x24,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0059a2a0(*(undefined4 *)(in_ECX + 0x10),param_2,param_3,param_4,param_5,param_6
                             );
    }
    local_8 = 0xffffffff;
    FUN_00508280(param_1,local_20);
  }
  ExceptionList = local_10;
  return;
}

