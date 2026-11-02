// rea decompile_all
// name: FUN_004d9f92
// address: 0x4d9f92
// body: available
// range: 0x4d9f92-0x4da337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d9f92(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar1;
  undefined1 **local_498;
  uint uStack_494;
  undefined1 *local_488;
  uint local_484;
  undefined4 local_480 [17];
  int iStack_43c;
  undefined4 auStack_438 [50];
  undefined4 auStack_370 [50];
  undefined4 auStack_2a8 [82];
  undefined4 local_160 [83];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e3e4e;
  local_14 = ExceptionList;
  uStack_494 = DAT_00955fd4 ^ (uint)&stack0xfffffb70;
  ExceptionList = &local_14;
  local_484 = 0;
  local_498 = (undefined1 **)0x4d9fd1;
  FUN_0047888f();
  local_c = 0;
  local_498 = (undefined1 **)0x42f00000;
  FUN_00479464(extraout_ECX,0xc1200000,0xc1200000,0x42f00000);
  local_498 = (undefined1 **)0x4da00b;
  FUN_004cab04();
  local_498 = (undefined1 **)local_480;
  local_c._0_1_ = 1;
  FUN_004cac08();
  local_488 = (undefined1 *)&local_498;
  FUN_0047604f();
  FUN_00476c68();
  local_c._0_1_ = 2;
  local_498 = (undefined1 **)local_160;
  FUN_004cbf04();
  local_c._0_1_ = 1;
  local_498 = (undefined1 **)0x4da05c;
  FUN_00476da0();
  local_498 = (undefined1 **)0x4da065;
  FUN_00478990();
  local_498 = (undefined1 **)0x42c80000;
  FUN_00479464(local_480,0,0,0x42c80000);
  local_498 = (undefined1 **)0x41600000;
  FUN_00478eaa(0x41b00000,0x422c0000,0x42600000);
  local_498 = (undefined1 **)0x41a80000;
  FUN_00478eaa(0x422c0000,0x41b00000,0x41600000);
  local_498 = (undefined1 **)0x41a80000;
  FUN_00478eaa(0x422c0000,0x42640000,0x41600000);
  local_498 = (undefined1 **)0x4da123;
  FUN_00478a0d();
  local_498 = (undefined1 **)0x4da12f;
  FUN_004cab04();
  local_498 = (undefined1 **)local_480;
  local_c._0_1_ = 3;
  FUN_004cac08();
  local_488 = (undefined1 *)&local_498;
  FUN_0047604f();
  FUN_00476c68();
  local_c._0_1_ = 4;
  local_498 = (undefined1 **)auStack_2a8;
  FUN_004cbf04();
  local_c._0_1_ = 3;
  local_498 = (undefined1 **)0x4da180;
  FUN_00476da0();
  local_498 = (undefined1 **)auStack_438;
  FUN_004c90ad();
  local_498 = (undefined1 **)0xffffffff;
  local_c._0_1_ = 5;
  FUN_004cabd2(extraout_ECX_00);
  FUN_004c1064();
  local_498 = (undefined1 **)0xffffffff;
  FUN_004cabd2(extraout_ECX_01);
  FUN_004c1064();
  local_488 = (undefined1 *)&local_498;
  FUN_0047604f();
  FUN_00476c68();
  local_498 = (undefined1 **)auStack_2a8;
  local_c._0_1_ = 6;
  FUN_004cbf04();
  local_c._0_1_ = 5;
  local_498 = (undefined1 **)0x4da206;
  FUN_00476da0();
  local_498 = (undefined1 **)auStack_370;
  FUN_004c90ad();
  local_498 = (undefined1 **)0xffffffff;
  local_c._0_1_ = 7;
  FUN_004cabd2(extraout_ECX_02);
  FUN_004c1064();
  local_498 = (undefined1 **)0xffffffff;
  FUN_004cabd2(extraout_ECX_03);
  FUN_004c1064();
  local_498 = (undefined1 **)0x108;
  iStack_43c = FUN_005af82d();
  uVar1 = 0;
  local_c._0_1_ = 8;
  if (iStack_43c != 0) {
    local_498 = &local_488;
    FUN_0046537e();
    local_498 = (undefined1 **)0x0;
    local_c = CONCAT31(local_c._1_3_,9);
    local_484 = 1;
    uVar1 = FUN_004c848f(&local_488);
  }
  local_c = 7;
  if ((local_484 & 1) != 0) {
    local_498 = (undefined1 **)0x4da2b6;
    FUN_004652d6();
  }
  local_498 = (undefined1 **)auStack_370;
  FUN_004c85ef();
  local_498 = (undefined1 **)auStack_370;
  local_c._0_1_ = 5;
  FUN_004c9363();
  local_498 = (undefined1 **)auStack_438;
  local_c._0_1_ = 3;
  FUN_004c9363();
  local_498 = (undefined1 **)auStack_2a8;
  local_c._0_1_ = 1;
  FUN_004cab90();
  local_498 = (undefined1 **)local_160;
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004cab90();
  local_498 = (undefined1 **)0x4da321;
  FUN_004f7994();
  ExceptionList = local_14;
  return uVar1;
}

