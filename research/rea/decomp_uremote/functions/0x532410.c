// rea decompile_all
// name: FUN_00532410
// address: 0x532410
// body: available
// range: 0x532410-0x532537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00532410(undefined2 param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  undefined4 *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d09d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_005af82d(0x28,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar1 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else {
    local_30 = (undefined4 *)FUN_005819f0();
  }
  local_8 = 0xffffffff;
  if (local_30 != (undefined4 *)0x0) {
    local_30[4] = local_30[4] & 0xffff00ff | 0x3700;
    local_30[4] = local_30[4] & 0xffffff00 |
                  (uint)(byte)(param_2 + (-(param_3 != '\0') & 0x80U) + (-(param_4 != '\0') & 0x40U)
                              );
    iVar1 = FUN_00581b60(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_0052f740(local_30), iVar1 == 0)) {
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

