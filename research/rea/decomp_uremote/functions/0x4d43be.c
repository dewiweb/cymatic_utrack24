// rea decompile_all
// name: FUN_004d43be
// address: 0x4d43be
// body: available
// range: 0x4d43be-0x4d4714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d43be(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                 double param_5,undefined4 *param_6)

{
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar1;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined *local_80;
  uint uStack_7c;
  float local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined *local_5c;
  float local_58;
  undefined1 *local_54;
  undefined1 local_50 [4];
  undefined1 *local_4c;
  double local_48;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e1a07;
  local_14 = ExceptionList;
  uStack_7c = DAT_00955fd4 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_14;
  local_80 = (undefined *)0x0;
  local_84 = (undefined1 *)0x1001900;
  local_88 = local_50;
  FUN_004c1e29();
  local_80 = (undefined *)0x0;
  local_84 = (undefined1 *)0x1001a00;
  local_88 = local_64;
  FUN_004c1e29();
  local_4c = (undefined1 *)&local_80;
  local_84 = (undefined1 *)0x4d4422;
  FUN_004d076d();
  local_84 = (undefined1 *)0x4d442c;
  FUN_0047d23a();
  if ((NAN(param_5) || 0.0 < param_5 == (param_5 == 0.0)) || (1.0 <= param_5)) {
    local_84 = (undefined1 *)0x4d44cf;
    local_4c = (undefined1 *)&local_80;
    FUN_004d076d();
    local_84 = (undefined1 *)0x4d44d6;
    FUN_0047cda7();
    local_80 = (undefined *)0x4d44e5;
    local_58 = (float)((int)param_4 * 2);
    FUN_00467ec4();
    local_80 = (undefined *)0x4d44f8;
    FUN_0047888f();
    local_c = 0;
    local_68 = (float)-extraout_EDX;
    local_54 = (undefined1 *)(float)(int)(param_3 + (int)param_4 * 2);
    if (local_68 < (float)local_54) {
      local_5c = (undefined *)(float)(int)param_4;
      local_58 = (float)(int)local_58;
      local_48 = (double)(local_58 * 0.5);
      do {
        local_80 = local_5c;
        local_84 = (undefined1 *)(local_68 - (float)local_48);
        local_88 = local_5c;
        local_4c = (undefined1 *)(local_68 + (float)local_48);
        FUN_004793fa(local_68,0,local_4c,0,local_68);
        local_68 = local_58 + local_68;
      } while (local_68 < (float)local_54);
    }
    local_80 = (undefined *)0x1;
    local_84 = param_4;
    local_88 = param_3;
    FUN_0047e303(local_60,2);
    local_c = CONCAT31(local_c._1_3_,1);
    local_80 = (undefined *)0x4d45ea;
    FUN_0047cc87();
    local_80 = (undefined *)0x1;
    local_84 = (undefined1 *)0x1;
    local_88 = (undefined1 *)0x1;
    local_4c = param_3 + -2;
    FUN_004dc42b();
    local_80 = (undefined *)0x4d4642;
    FUN_0047cca3();
    local_84 = local_60;
    local_80 = (undefined *)0x3f59999a;
    local_88 = (undefined1 *)0x4d465b;
    FUN_0047ce3c();
    local_80 = &DAT_0095d798;
    local_84 = local_38;
    local_88 = (undefined1 *)0x4d466a;
    FUN_0047d2ae();
    local_80 = (undefined *)0x4d4673;
    FUN_004c4d7a();
    local_c = 0xffffffff;
    local_80 = (undefined *)0x4d4681;
    FUN_004f7994();
  }
  else {
    local_80 = (undefined *)0x1;
    local_84 = (undefined1 *)0x1;
    local_88 = (undefined1 *)0x1;
    local_54 = param_4 + -2;
    fVar1 = (float10)FUN_0047065b(0,(double)(int)param_3 - 2.0,
                                  param_5 * ((double)(int)param_3 - 2.0),(float)(int)local_54,
                                  local_64,0x3f000000,0,1);
    local_54 = (undefined1 *)(float)fVar1;
    FUN_004dc42b();
  }
  if (*(char *)*param_6 != '\0') {
    local_4c = (undefined1 *)&local_84;
    local_88 = (undefined1 *)0x4d46a3;
    FUN_004d076d();
    local_4c = (undefined1 *)&local_88;
    FUN_004d076d();
    FUN_004766f5(extraout_EDX_00);
    local_84 = (undefined1 *)0x4d46c4;
    FUN_0047cda7();
    local_80 = (undefined *)((float)(int)param_4 * 0.6);
    local_84 = (undefined1 *)0x4d46e1;
    local_4c = local_80;
    FUN_0047ceb8();
    local_80 = (undefined *)0x0;
    local_4c = (undefined1 *)&local_84;
    local_88 = param_4;
    local_84 = (undefined1 *)0x24;
    FUN_0047d02d(param_1,param_6,0,0,param_3);
  }
  ExceptionList = local_14;
  return;
}

