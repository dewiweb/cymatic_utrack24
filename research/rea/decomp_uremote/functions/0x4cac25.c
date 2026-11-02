// rea decompile_all
// name: FUN_004cac25
// address: 0x4cac25
// body: available
// range: 0x4cac25-0x4cacac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cac25(undefined4 param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9470;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0047888f(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
  local_c = 0;
  FUN_004e3f82(extraout_ECX,param_1);
  cVar1 = FUN_00478953();
  if (cVar1 != '\0') {
    FUN_0047899c();
    thunk_FUN_004cc15f();
  }
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

