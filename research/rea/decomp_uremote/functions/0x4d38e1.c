// rea decompile_all
// name: FUN_004d38e1
// address: 0x4d38e1
// body: available
// range: 0x4d38e1-0x4d3aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d38e1(undefined4 param_1,undefined4 param_2,float param_3,undefined1 *param_4,
                 float param_5,float param_6,char param_7,char param_8,undefined4 param_9,
                 undefined4 param_10)

{
  float *pfVar1;
  undefined4 uVar2;
  float local_98;
  float local_94;
  undefined1 *local_90;
  float local_8c;
  undefined1 *local_88;
  uint uStack_84;
  undefined1 *local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined1 local_50 [24];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc070;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  local_6c = (undefined1 *)(param_5 * 0.7);
  if (param_8 == '\0') {
    local_74 = (undefined1 *)0x3e99999a;
  }
  else if (((char)param_10 == '\0') && ((char)param_9 == '\0')) {
    local_74 = (undefined1 *)0x3f000000;
  }
  else {
    local_74 = (undefined1 *)0x3f8ccccd;
  }
  uVar2 = 0x3f000000;
  if (param_8 != '\0') {
    uVar2 = 0x3f800000;
  }
  local_88 = local_74;
  local_8c = (float)param_10;
  local_90 = (undefined1 *)param_9;
  local_94 = 1.4013e-45;
  pfVar1 = &local_98;
  local_70 = uVar2;
  FUN_004c1e29(&local_70,0x1000100,0);
  FUN_00476237(pfVar1,uVar2);
  local_8c = (float)FUN_004d3245();
  local_90 = local_6c;
  local_94 = (param_6 - (float)local_6c) * 0.5 + (float)param_4;
  local_98 = param_3;
  local_6c = (undefined1 *)local_94;
  FUN_004dbdca();
  if (param_7 != '\0') {
    local_88 = (undefined1 *)0x4d39e7;
    FUN_0047888f();
    local_c = 0;
    local_88 = (undefined1 *)0x40400000;
    local_8c = 1.5;
    local_90 = (undefined1 *)0x4d3a07;
    FUN_00478b0d();
    local_88 = (undefined1 *)0x40c00000;
    local_8c = 3.0;
    local_90 = (undefined1 *)0x4d3a23;
    FUN_00478ba1();
    local_88 = (undefined1 *)0x0;
    local_8c = 6.0;
    local_90 = (undefined1 *)0x4d3a3b;
    FUN_00478ba1();
    local_88 = &DAT_0095d950;
    if (param_8 == '\0') {
      local_88 = &DAT_0095d9f4;
    }
    local_6c = (undefined1 *)&local_88;
    local_8c = 7.09226e-39;
    FUN_004d076d();
    local_8c = 7.092271e-39;
    FUN_0047cda7();
    local_88 = param_4;
    local_90 = local_50;
    local_8c = param_3;
    local_94 = param_6 / 9.0;
    local_98 = param_5 / 9.0;
    local_6c = (undefined1 *)local_98;
    FUN_00477435();
    local_94 = 7.092381e-39;
    FUN_0047713c();
    local_88 = local_50;
    local_8c = 2.5;
    local_90 = (undefined1 *)0x4d3ac4;
    local_8c = (float)FUN_0047badf();
    local_90 = local_38;
    local_94 = 7.092434e-39;
    FUN_0047d2d0();
    local_88 = (undefined1 *)0x4d3adb;
    FUN_004f7994();
  }
  ExceptionList = local_14;
  return;
}

