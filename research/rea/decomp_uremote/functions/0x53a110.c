// rea decompile_all
// name: FUN_0053a110
// address: 0x53a110
// body: available
// range: 0x53a110-0x53a243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0053a110(uint param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,uint param_6,uint param_7,undefined4 param_8)

{
  char cVar1;
  uint local_58;
  uint local_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char local_41;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  uint local_2c;
  undefined1 *local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1a4b;
  local_10 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_50 = 0x208;
  local_54 = 0x53a13f;
  local_1c = FUN_005af82d();
  local_8 = 0;
  if (local_1c == 0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    uStack_50 = 1;
    local_54 = param_1;
    local_58 = 0x53a160;
    local_40 = (undefined4 *)FUN_00539ce0();
  }
  local_18 = local_40;
  local_8 = 0xffffffff;
  local_14 = local_40;
  if (local_40 != (undefined4 *)0x0) {
    local_54 = param_7 | 0x800000;
    local_58 = param_6 | 0x20000000;
    uStack_50 = param_8;
    local_20 = (undefined1 *)&local_54;
    local_38 = (undefined1 *)&local_54;
    local_28 = (undefined1 *)&local_58;
    local_3c = (undefined1 *)&local_58;
    local_2c = local_58;
    local_24 = local_54;
    local_41 = FUN_0055c2d0(param_2,param_3,param_4,param_5);
    if (local_41 != '\0') {
      uStack_50 = 1;
      local_54 = 0x53a1fb;
      cVar1 = FUN_0058fd30();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return local_14;
      }
    }
    local_34 = local_14;
    local_30 = local_14;
    if (local_14 != (undefined4 *)0x0) {
      uStack_50 = 1;
      local_54 = 0x53a227;
      (**(code **)*local_14)();
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

