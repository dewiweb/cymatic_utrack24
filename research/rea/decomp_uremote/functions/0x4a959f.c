// rea decompile_all
// name: FUN_004a959f
// address: 0x4a959f
// body: available
// range: 0x4a959f-0x4a9658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a959f(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_ESI;
  undefined1 local_34 [4];
  int local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_005d9470;
  local_14 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_14;
  local_c = 0;
  FUN_00476b8a(unaff_ESI);
  FUN_0047e7d7(local_34,2);
  if (local_30 == 1) {
    FUN_004a9f12(param_2);
  }
  else if (local_30 == 2) {
    FUN_004a9eab();
  }
  else {
    FUN_004a9f79();
  }
  FUN_0047e819(uVar1);
  local_c = 0xffffffff;
  _free((void *)0x0);
  ExceptionList = local_14;
  return;
}

