// rea decompile_all
// name: FUN_004db0fc
// address: 0x4db0fc
// body: available
// range: 0x4db0fc-0x4db27a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004db0fc(void)

{
  undefined4 extraout_ECX;
  undefined4 uVar1;
  undefined1 *local_1d8;
  uint uStack_1d4;
  undefined1 local_1c0 [4];
  uint local_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4 [68];
  undefined1 local_160 [332];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e2f90;
  local_14 = ExceptionList;
  uStack_1d4 = DAT_00955fd4 ^ (uint)&stack0xfffffe30;
  ExceptionList = &local_14;
  uVar1 = 0;
  local_1d8 = (undefined1 *)0x108;
  local_1bc = 0;
  local_1b8 = (undefined1 *)FUN_005af82d();
  local_c = 0;
  if (local_1b8 != (undefined1 *)0x0) {
    local_1d8 = local_1c0;
    FUN_0046537e();
    local_1d8 = (undefined1 *)0x3;
    local_c = CONCAT31(local_c._1_3_,1);
    local_1bc = 1;
    uVar1 = FUN_004c848f(local_1c0);
  }
  if ((local_1bc & 1) != 0) {
    local_1d8 = (undefined1 *)0x4db18a;
    FUN_004652d6();
  }
  local_1d8 = (undefined1 *)0x4db193;
  FUN_0047888f();
  local_c = 3;
  local_1b4 = 0x42480000;
  local_1b0 = 0x42c80000;
  local_1ac = 0x42480000;
  local_1a8 = 0;
  local_1d8 = (undefined1 *)0x42480000;
  FUN_00479aa4(extraout_ECX,0x42200000,0x42c80000);
  local_1d8 = (undefined1 *)0x4db1e7;
  FUN_004cab04();
  local_1b8 = (undefined1 *)&local_1d8;
  FUN_0047620f(&local_1d8,0x3ecccccd);
  FUN_00476c68();
  local_c._0_1_ = 5;
  local_1d8 = local_160;
  FUN_004cbf04();
  local_c._0_1_ = 4;
  local_1d8 = (undefined1 *)0x4db22f;
  FUN_00476da0();
  local_1d8 = local_1a4;
  FUN_004cac08();
  local_1d8 = (undefined1 *)0x0;
  FUN_004c85ef();
  local_1d8 = local_160;
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_004cab90();
  local_1d8 = (undefined1 *)0x4db263;
  FUN_004f7994();
  ExceptionList = local_14;
  return uVar1;
}

