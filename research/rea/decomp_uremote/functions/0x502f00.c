// rea decompile_all
// name: FUN_00502f00
// address: 0x502f00
// body: available
// range: 0x502f00-0x502f7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00502f00(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cdebd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_00502450(param_1,param_2);
  uVar1 = FUN_005026d0(local_18);
  local_8 = 0xffffffff;
  FUN_00501900();
  ExceptionList = local_10;
  return uVar1;
}

