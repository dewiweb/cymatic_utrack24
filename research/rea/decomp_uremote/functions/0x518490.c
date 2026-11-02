// rea decompile_all
// name: FUN_00518490
// address: 0x518490
// body: available
// range: 0x518490-0x51856b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00518490(int param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf57f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x7c,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)FUN_00518140(param_1,param_2,param_3,param_4,1);
  }
  local_8 = 0xffffffff;
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = FUN_005289f0(0x28,param_1 + 0x4c0);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_28;
    }
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

