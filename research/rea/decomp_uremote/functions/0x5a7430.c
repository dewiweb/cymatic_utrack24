// rea decompile_all
// name: FUN_005a7430
// address: 0x5a7430
// body: available
// range: 0x5a7430-0x5a74fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005a7430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int local_24;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d79b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = 0;
  iVar1 = FUN_005af82d(0x118,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005a7500(param_1,param_4,1);
  }
  local_8 = 0xffffffff;
  if (local_24 != 0) {
    local_11 = FUN_00595f40(8,0xc0,param_3,param_2);
    (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 8)) + 4))();
  }
  ExceptionList = local_10;
  return local_11;
}

