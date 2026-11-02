// rea decompile_all
// name: FUN_0053d7a0
// address: 0x53d7a0
// body: available
// range: 0x53d7a0-0x53d926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0053d7a0(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 *local_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  char local_35;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1f55;
  local_10 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_50 = 0x234;
  puStack_54 = (undefined4 *)0x53d7cf;
  local_1c = FUN_005af82d();
  local_8 = 0;
  if (local_1c == 0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    uStack_50 = 1;
    puStack_54 = (undefined4 *)param_1;
    local_58 = (undefined4 *)0x53d7f0;
    local_34 = (undefined4 *)FUN_0053d3d0();
  }
  local_18 = local_34;
  local_8 = 0xffffffff;
  local_14 = local_34;
  if (local_34 != (undefined4 *)0x0) {
    local_24 = 0x60040001;
    uStack_50 = param_8;
    puStack_54 = (undefined4 *)param_7;
    local_20 = (undefined1 *)&local_58;
    local_30 = (undefined1 *)&local_58;
    local_58 = (undefined4 *)0x60040001;
    local_35 = FUN_0055c2d0(param_2,param_3,param_4,param_5);
    if (local_35 != '\0') {
      uStack_50 = 3;
      puStack_54 = (undefined4 *)0x53d872;
      cVar1 = FUN_0058fd30();
      if (cVar1 != '\0') {
        if (local_14 == (undefined4 *)0x0) {
          local_3c = (undefined4 *)0x0;
          local_40 = (undefined4 *)0x0;
          local_44 = (undefined4 *)0x0;
          local_58 = local_40;
          puStack_54 = local_3c;
        }
        else {
          puStack_54 = local_14 + 0x5f;
          local_58 = local_14 + 0x5e;
          local_44 = local_14 + 0x5d;
        }
        uStack_50 = 0;
        local_40 = local_58;
        local_3c = puStack_54;
        FUN_00590610(local_44);
        ExceptionList = local_10;
        return local_14;
      }
    }
    local_2c = local_14;
    local_28 = local_14;
    if (local_14 != (undefined4 *)0x0) {
      uStack_50 = 1;
      puStack_54 = (undefined4 *)0x53d90a;
      (**(code **)*local_14)();
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

