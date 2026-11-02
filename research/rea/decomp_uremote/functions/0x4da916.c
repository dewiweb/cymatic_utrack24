// rea decompile_all
// name: FUN_004da916
// address: 0x4da916
// body: available
// range: 0x4da916-0x4daa63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da916(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int extraout_EDX;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e18b1;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  iStack_50 = 0;
  uStack_54 = param_3;
  FUN_004d076d();
  (**(code **)(*(int *)(extraout_EDX + -0x2c) + 4))();
  uStack_4c = FUN_005b3fb0();
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0049f51e();
  FUN_0047ceaa();
  FUN_004c4d7a();
  FUN_0047d02d(param_1,param_2,iStack_50,0,(param_4 - iStack_50) + -4,param_5);
  ExceptionList = auStack_58;
  return;
}

