// rea decompile_all
// name: FUN_004df081
// address: 0x4df081
// body: available
// range: 0x4df081-0x4df40d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004df081(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  uint uStack_8c;
  byte local_78;
  undefined1 local_74 [4];
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e2f23;
  local_14 = ExceptionList;
  uStack_8c = DAT_00955fd4 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_14;
  uVar2 = 0;
  local_78 = 0;
  local_90 = (undefined1 *)0x4df0bc;
  FUN_0047888f();
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  if (param_1 == 4) {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0x3f800000;
    local_5c = 0x3f800000;
    local_90 = (undefined1 *)0x3eb33333;
    local_94 = (undefined1 *)0x4df0f6;
    FUN_004799da();
    local_68 = 0x3f800000;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0x3f800000;
    local_90 = (undefined1 *)0x3eb33333;
    local_94 = (undefined1 *)0x4df11d;
    FUN_004799da();
    local_90 = (undefined1 *)0x120;
    local_94 = (undefined1 *)0x4df127;
    local_70 = FUN_005af82d();
    bVar1 = 1;
    local_c._0_1_ = 1;
    if (local_70 != 0) {
      local_90 = local_74;
      local_94 = (undefined1 *)0x4df149;
      FUN_0046537e();
      local_94 = local_58;
      local_6c = (undefined1 *)&local_98;
      local_c._0_1_ = 2;
      local_78 = 1;
      local_90 = local_94;
      FUN_0047604f();
      uVar2 = FUN_004ded64(local_70,local_74);
    }
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        local_68 = 0x3f000000;
        local_64 = 0;
        local_60 = 0x3f000000;
        local_5c = 0x3f800000;
        local_90 = (undefined1 *)0x3e800000;
        local_94 = (undefined1 *)0x4df286;
        FUN_004799da();
        local_68 = 0;
        local_64 = 0x3f000000;
        local_60 = 0x3f800000;
        local_5c = 0x3f000000;
        local_90 = (undefined1 *)0x3e800000;
        local_94 = (undefined1 *)0x4df2b3;
        FUN_004799da();
        local_90 = (undefined1 *)0x4df2bc;
        FUN_0047888f();
        local_c._0_1_ = 7;
        local_90 = (undefined1 *)0x42c80000;
        local_94 = (undefined1 *)0x42340000;
        local_98 = 0x4df2e0;
        FUN_00478b0d();
        local_90 = (undefined1 *)0x42c80000;
        local_94 = (undefined1 *)0x0;
        local_98 = 0x4df2f8;
        FUN_00478ba1();
        local_90 = (undefined1 *)0x0;
        local_94 = (undefined1 *)0x0;
        local_98 = 0x4df30a;
        FUN_00478ba1();
        local_90 = (undefined1 *)0x0;
        local_94 = (undefined1 *)0x42c80000;
        local_98 = 0x4df322;
        FUN_00478ba1();
        local_90 = (undefined1 *)0x42340000;
        local_94 = (undefined1 *)0x42c80000;
        local_98 = 0x4df33e;
        FUN_00478ba1();
        local_90 = (undefined1 *)0x42c80000;
        local_94 = (undefined1 *)0x42c80000;
        local_98 = 0x42340000;
        FUN_00478eaa(0x42340000);
        local_90 = (undefined1 *)0x3f800000;
        local_94 = &DAT_0095d798;
        FUN_0047badf(0x41f00000);
        FUN_0047cac7();
        local_90 = (undefined1 *)0x120;
        local_94 = (undefined1 *)0x4df395;
        local_70 = FUN_005af82d();
        local_c._0_1_ = 8;
        if (local_70 == 0) {
          uVar2 = 0;
        }
        else {
          local_90 = local_74;
          local_94 = (undefined1 *)0x4df3b5;
          FUN_0046537e();
          local_6c = (undefined1 *)&local_98;
          local_c._0_1_ = 9;
          local_94 = local_58;
          FUN_0047604f();
          uVar2 = FUN_004ded64(local_70,local_74);
          local_90 = (undefined1 *)0x4df400;
          FUN_004652d6();
        }
        local_90 = (undefined1 *)0x4df409;
        FUN_004f7994();
      }
      goto LAB_004df18b;
    }
    local_68 = 0;
    local_64 = 0x3f000000;
    local_60 = 0x3f800000;
    local_5c = 0x3f000000;
    local_90 = (undefined1 *)0x3e800000;
    local_94 = (undefined1 *)0x4df1e6;
    FUN_004799da();
    local_90 = (undefined1 *)0x120;
    local_94 = (undefined1 *)0x4df1f0;
    local_70 = FUN_005af82d();
    local_90._0_1_ = 2;
    bVar1 = (byte)local_90;
    local_c._0_1_ = 4;
    if (local_70 != 0) {
      local_90 = local_74;
      local_94 = (undefined1 *)0x4df213;
      FUN_0046537e();
      local_94 = local_58;
      local_6c = (undefined1 *)&local_98;
      local_c._0_1_ = 5;
      local_78 = 2;
      local_90 = local_94;
      FUN_0047604f();
      uVar2 = FUN_004ded64(local_70,local_74);
    }
  }
  if ((local_78 & bVar1) != 0) {
    local_90 = (undefined1 *)0x4df18b;
    FUN_004652d6();
  }
LAB_004df18b:
  local_90 = (undefined1 *)0x4df194;
  FUN_004f7994();
  ExceptionList = local_14;
  return uVar2;
}

