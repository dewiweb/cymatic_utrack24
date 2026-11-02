// rea decompile_all
// name: FUN_004d87fb
// address: 0x4d87fb
// body: available
// range: 0x4d87fb-0x4d8b48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d87fb(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  uint uStack_84;
  byte local_74;
  undefined1 local_70 [4];
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
  puStack_10 = &LAB_005e2fdf;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  local_74 = 0;
  local_88 = (undefined1 *)0x4d8835;
  FUN_0047888f();
  local_c = 0;
  if (param_1 == 4) {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0x3f800000;
    local_5c = 0x3f800000;
    local_88 = (undefined1 *)0x3eb33333;
    local_8c = (undefined1 *)0x4d886d;
    FUN_004799da();
    local_68 = 0x3f800000;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0x3f800000;
    local_88 = (undefined1 *)0x3eb33333;
    local_8c = (undefined1 *)0x4d8894;
    FUN_004799da();
    local_88 = (undefined1 *)0x120;
    local_8c = (undefined1 *)0x4d889e;
    local_6c = (undefined1 *)FUN_005af82d();
    bVar2 = 1;
    local_c = CONCAT31(local_c._1_3_,1);
    if (local_6c == (undefined1 *)0x0) goto LAB_004d88e8;
    local_88 = local_70;
    local_8c = (undefined1 *)0x4d88bf;
    FUN_0046537e();
LAB_004d88cb:
    local_88 = local_58;
    local_8c = local_58;
    local_6c = (undefined1 *)&local_90;
    FUN_0047604f();
    uVar1 = FUN_004d84d6(local_70);
    local_74 = bVar2;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        local_68 = 0x3f000000;
        local_64 = 0;
        local_60 = 0x3f000000;
        local_5c = 0x3f800000;
        local_88 = (undefined1 *)0x3e800000;
        local_8c = (undefined1 *)0x4d89cb;
        FUN_004799da();
        local_68 = 0;
        local_64 = 0x3f000000;
        local_60 = 0x3f800000;
        local_5c = 0x3f000000;
        local_88 = (undefined1 *)0x3e800000;
        local_8c = (undefined1 *)0x4d89f8;
        FUN_004799da();
        local_88 = (undefined1 *)0x4d8a01;
        FUN_0047888f();
        local_c._0_1_ = 3;
        local_88 = (undefined1 *)0x42c80000;
        local_8c = (undefined1 *)0x42340000;
        local_90 = 0x4d8a22;
        FUN_00478b0d();
        local_88 = (undefined1 *)0x42c80000;
        local_8c = (undefined1 *)0x0;
        local_90 = 0x4d8a3a;
        FUN_00478ba1();
        local_88 = (undefined1 *)0x0;
        local_8c = (undefined1 *)0x0;
        local_90 = 0x4d8a4c;
        FUN_00478ba1();
        local_88 = (undefined1 *)0x0;
        local_8c = (undefined1 *)0x42c80000;
        local_90 = 0x4d8a64;
        FUN_00478ba1();
        local_88 = (undefined1 *)0x42340000;
        local_8c = (undefined1 *)0x42c80000;
        local_90 = 0x4d8a80;
        FUN_00478ba1();
        local_88 = (undefined1 *)0x42c80000;
        local_8c = (undefined1 *)0x42c80000;
        local_90 = 0x42340000;
        FUN_00478eaa(0x42340000);
        local_88 = (undefined1 *)0x3f800000;
        local_8c = &DAT_0095d798;
        FUN_0047badf(0x41f00000);
        FUN_0047cac7();
        local_88 = (undefined1 *)0x120;
        local_8c = (undefined1 *)0x4d8ad7;
        local_6c = (undefined1 *)FUN_005af82d();
        local_c = CONCAT31(local_c._1_3_,4);
        if (local_6c == (undefined1 *)0x0) {
          uVar1 = 0;
          local_6c = (undefined1 *)0x0;
        }
        else {
          local_88 = local_70;
          local_8c = (undefined1 *)0x4d8af8;
          FUN_0046537e();
          local_8c = local_58;
          local_6c = (undefined1 *)&local_90;
          FUN_0047604f();
          uVar1 = FUN_004d84d6(local_70);
          local_88 = (undefined1 *)0x4d8b34;
          FUN_004652d6();
        }
        local_88 = (undefined1 *)0x4d8b3d;
        FUN_004f7994();
      }
      else {
        uVar1 = 0;
      }
      goto LAB_004d88f9;
    }
    local_68 = 0;
    local_64 = 0x3f000000;
    local_60 = 0x3f800000;
    local_5c = 0x3f000000;
    local_88 = (undefined1 *)0x3e800000;
    local_8c = (undefined1 *)0x4d8950;
    FUN_004799da();
    local_88 = (undefined1 *)0x120;
    local_8c = (undefined1 *)0x4d895a;
    local_6c = (undefined1 *)FUN_005af82d();
    local_88._0_1_ = 2;
    bVar2 = (byte)local_88;
    local_c = CONCAT31(local_c._1_3_,2);
    if (local_6c != (undefined1 *)0x0) {
      local_88 = local_70;
      local_8c = (undefined1 *)0x4d897f;
      FUN_0046537e();
      goto LAB_004d88cb;
    }
LAB_004d88e8:
    uVar1 = 0;
  }
  if ((local_74 & bVar2) != 0) {
    local_88 = (undefined1 *)0x4d88f9;
    FUN_004652d6();
  }
LAB_004d88f9:
  local_88 = (undefined1 *)0x4d8902;
  FUN_004f7994();
  ExceptionList = local_14;
  return uVar1;
}

