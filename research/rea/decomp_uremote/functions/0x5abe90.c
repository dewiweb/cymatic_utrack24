// rea decompile_all
// name: FUN_005abe90
// address: 0x5abe90
// body: available
// range: 0x5abe90-0x5abf6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005abe90(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int *local_28;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7d19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = FUN_005af82d(0x118,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_1c == 0) {
    local_28 = (int *)0x0;
  }
  else {
    local_20 = 0;
    local_28 = (int *)FUN_005abc20(param_1,&local_20,1);
  }
  local_18 = local_28;
  local_8 = 0xffffffff;
  local_14 = local_28;
  if (local_28 != (int *)0x0) {
    uVar1 = (**(code **)(*local_28 + 0x1c))();
    if ((int)(uVar1 & 0xffff) <= param_3 - param_2) {
      local_14[0x3c] = *(int *)(param_2 + 2);
    }
  }
  ExceptionList = local_10;
  return local_14;
}

