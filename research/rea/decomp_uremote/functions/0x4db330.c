// rea decompile_all
// name: FUN_004db330
// address: 0x4db330
// body: available
// range: 0x4db330-0x4db407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004db330(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [20];
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dcad8;
  local_14 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_14;
  FUN_00464b4e(local_6c,param_1);
  local_c = 0;
  FUN_0046cfd6(local_58);
  local_c._0_1_ = 1;
  FUN_004725b7(local_8c,local_58,uVar1);
  FUN_004723e0(local_7c,0);
  local_c._0_1_ = 3;
  uVar2 = FUN_004c8f71();
  FUN_004722b6();
  FUN_004722b6();
  local_c = (uint)local_c._1_3_ << 8;
  FUN_0046d05a(local_58);
  local_c = 0xffffffff;
  FUN_00464b99(local_6c);
  ExceptionList = local_14;
  return uVar2;
}

