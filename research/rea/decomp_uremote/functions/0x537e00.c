// rea decompile_all
// name: FUN_00537e00
// address: 0x537e00
// body: available
// range: 0x537e00-0x537ee4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00537e00(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  undefined4 local_2c;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d15e9;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(in_ECX + 0x14); local_14 = local_14 + 1) {
    local_24 = 0;
    FUN_00512900(local_14,&local_24);
    local_18 = local_24;
    if (local_24 != 0) {
      local_20 = FUN_005af82d(0x18,uVar1);
      local_8 = 0;
      if (local_20 == 0) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_005385c0(local_18,param_2,param_3,param_4);
      }
      local_1c = local_2c;
      local_8 = 0xffffffff;
      FUN_00508280(param_1,local_2c);
    }
  }
  ExceptionList = local_10;
  return;
}

