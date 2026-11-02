// rea decompile_all
// name: FUN_00510d30
// address: 0x510d30
// body: available
// range: 0x510d30-0x510e8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00510d30(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cef39;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005017f0(0x40);
  local_8 = 1;
  FUN_00501f30("CHAI: ");
  uVar2 = FUN_0052e4b0(local_20,0x1402,uVar1);
  local_8._0_1_ = 2;
  FUN_005026d0(uVar2);
  local_8._0_1_ = 1;
  FUN_00501900();
  FUN_00502720(" VNM: ");
  if (*(short *)(in_ECX + -0xaac) == 0) {
    FUN_00502720("(not connected)");
  }
  else if (*(ushort *)(in_ECX + -0xaac) < 0x1403) {
    uVar2 = FUN_0052e4b0(local_28,*(undefined2 *)(in_ECX + -0xaac));
    local_8._0_1_ = 3;
    FUN_005026d0(uVar2);
    local_8._0_1_ = 1;
    FUN_00501900();
  }
  else {
    FUN_00502720("[newer(");
    FUN_00502ce0(*(undefined2 *)(in_ECX + -0xaac));
    FUN_00502720(&DAT_005e94bc);
  }
  FUN_005018d0(local_18);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

