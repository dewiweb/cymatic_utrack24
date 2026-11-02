// rea decompile_all
// name: FUN_00504740
// address: 0x504740
// body: available
// range: 0x504740-0x50483a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00504740(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cdfc9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  FUN_00501f30(&DAT_005e89a8);
  uVar1 = __aullshr();
  FUN_00502e60(uVar1);
  FUN_005017d0();
  local_8._0_1_ = 2;
  FUN_00502e60(*in_ECX);
  uVar1 = FUN_00501cd0(2);
  FUN_00502720(uVar1);
  FUN_00502720(&DAT_005e89a0);
  FUN_00502e10(*(undefined2 *)(in_ECX + 2));
  FUN_00502720(&DAT_00917178);
  FUN_005018d0(local_20);
  local_8._0_1_ = 1;
  FUN_00501900();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

