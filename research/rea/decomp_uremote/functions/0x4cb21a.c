// rea decompile_all
// name: FUN_004cb21a
// address: 0x4cb21a
// body: available
// range: 0x4cb21a-0x4cb2ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cb21a(void)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  undefined1 local_38 [16];
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e312d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  thunk_FUN_00472232(DAT_00955fd4 ^ (uint)&stack0xffffffb0);
  local_c = 0;
  FUN_004c8ff2(local_38,local_48);
  FUN_004c0036();
  FUN_004652d6();
  uVar1 = FUN_004d01c2();
  FUN_004cc04c(unaff_ESI,local_38,uVar1);
  uVar1 = FUN_004ccd8b(local_38,local_44);
  FUN_004cc003(uVar1);
  uVar1 = FUN_004e3b6c();
  local_c._0_1_ = 1;
  FUN_004caf68(local_38,uVar1);
  FUN_004cad78();
  local_c = (uint)local_c._1_3_ << 8;
  thunk_FUN_004f69da(local_28);
  FUN_004722b6();
  ExceptionList = local_14;
  return;
}

