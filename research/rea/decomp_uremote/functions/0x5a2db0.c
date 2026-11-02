// rea decompile_all
// name: FUN_005a2db0
// address: 0x5a2db0
// body: available
// range: 0x5a2db0-0x5a2ea6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_005a2db0(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined2 param_5
            ,undefined2 param_6,undefined2 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d749f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x94,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_005a52d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,1)
    ;
  }
  local_8 = 0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
    cVar1 = FUN_005289f0(0x1e,*(int *)(param_1 + 0x2c) + 0x4c0);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_2c;
    }
    if (local_2c != (undefined4 *)0x0) {
      (**(code **)*local_2c)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

