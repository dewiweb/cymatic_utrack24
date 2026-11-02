// rea decompile_all
// name: FUN_00536cb0
// address: 0x536cb0
// body: available
// range: 0x536cb0-0x536d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00536cb0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1417;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005af82d(0x3c,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_00588860(1,param_1,param_2,param_3,param_4,param_5,param_6,param_7)
    ;
  }
  local_8 = 0xffffffff;
  if (local_2c == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    iVar1 = FUN_0052f740(local_2c);
    if (iVar1 != 0) {
      if (local_2c != (undefined4 *)0x0) {
        (**(code **)*local_2c)(1);
      }
      local_2c = (undefined4 *)0x0;
    }
  }
  ExceptionList = local_10;
  return local_2c;
}

