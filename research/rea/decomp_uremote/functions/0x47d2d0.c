// rea decompile_all
// name: FUN_0047d2d0
// address: 0x47d2d0
// body: available
// range: 0x47d2d0-0x47d352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  float10 fVar1;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9470;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0047888f(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
  local_c = 0;
  fVar1 = (float10)(**(code **)(*(int *)*in_ECX + 0x10))();
  FUN_0047cac7(local_38,param_3,(float)fVar1);
  FUN_0047d2ae(local_38,&DAT_0095d798);
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

