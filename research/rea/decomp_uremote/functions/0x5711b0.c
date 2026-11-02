// rea decompile_all
// name: FUN_005711b0
// address: 0x5711b0
// body: available
// range: 0x5711b0-0x57129a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005711b0(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4c7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x118,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = (undefined4 *)FUN_00570e60(param_1,param_2,1);
  }
  local_8 = 0xffffffff;
  if (local_30 != (undefined4 *)0x0) {
    cVar1 = FUN_005289f0(0xd,**(int **)(param_1 + 0x88) + 0x4c0);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_30;
    }
    if (local_30 != (undefined4 *)0x0) {
      (**(code **)*local_30)(1);
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

