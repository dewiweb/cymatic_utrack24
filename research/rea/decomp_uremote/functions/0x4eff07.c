// rea decompile_all
// name: FUN_004eff07
// address: 0x4eff07
// body: available
// range: 0x4eff07-0x4effb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004eff07(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_5d;
  undefined1 local_3c [40];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dae54;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_5d = 0;
  FUN_004efeb2(DAT_00955fd4 ^ (uint)&stack0xffffff90);
  local_c = 0;
  iVar1 = FUN_004effe5();
  if (iVar1 != 0) {
    FUN_004effb3();
    FUN_004f002d(local_3c);
    local_5d = FUN_004f02bf(iVar1,local_3c,param_2);
    thunk_FUN_0047433f();
  }
  FUN_004c8199();
  ExceptionList = local_14;
  return local_5d;
}

