// rea decompile_all
// name: FUN_004de9ff
// address: 0x4de9ff
// body: available
// range: 0x4de9ff-0x4ded63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de9ff(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined1 *local_98;
  undefined1 *local_94;
  float local_90;
  uint uStack_8c;
  undefined1 local_7c [4];
  float local_78;
  undefined1 *local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [40];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e182a;
  local_14 = ExceptionList;
  uStack_8c = DAT_00955fd4 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_14;
  local_90 = 1.4013e-45;
  local_94 = (undefined1 *)0x100ad01;
  local_98 = local_7c;
  FUN_004c1e29();
  if (*(char *)*param_5 == '\0') {
    local_90 = 7.155794e-39;
    FUN_0047888f();
    local_c = 0;
    local_90 = 100.0;
    local_94 = (undefined1 *)0x42c80000;
    local_98 = (undefined1 *)0x0;
    FUN_00479464(extraout_ECX,0);
    local_90 = 14.0;
    local_94 = (undefined1 *)0x42600000;
    local_98 = (undefined1 *)0x422c0000;
    FUN_00478eaa(0x41b00000);
    local_90 = 21.0;
    local_94 = (undefined1 *)0x41600000;
    local_98 = (undefined1 *)0x41b00000;
    FUN_00478eaa(0x422c0000);
    local_90 = 21.0;
    local_94 = (undefined1 *)0x41600000;
    local_98 = (undefined1 *)0x42640000;
    FUN_00478eaa(0x422c0000);
    local_90 = 7.156068e-39;
    FUN_00478a0d();
    local_90 = 7.15608e-39;
    cVar2 = FUN_004c7c7c();
    uVar1 = _DAT_0095768c;
    if (cVar2 == '\0') {
      local_90 = 7.156103e-39;
      cVar2 = FUN_004c7c89();
      if (cVar2 == '\0') {
        uVar1 = 0x3e99999a;
      }
      else {
        uVar1 = 0x3f000000;
      }
    }
    local_94 = (undefined1 *)uVar1;
    local_74 = (undefined1 *)&local_90;
    local_98 = (undefined1 *)&local_90;
    local_78 = (float)local_94;
    FUN_00476535(&local_74,0x3dcccccd);
    FUN_0047620f();
    local_94 = (undefined1 *)0x4dec9b;
    FUN_0047cda7();
    local_74 = (undefined1 *)&local_90;
    local_98 = (undefined1 *)((float)param_3 - 4.0);
    local_94 = (undefined1 *)0x1;
    local_90 = 5.04467e-44;
    local_78 = (float)(int)param_2 - 4.0;
    local_90 = (float)FUN_0047a633(0x40000000,0x40000000,local_78);
    local_94 = local_38;
    local_98 = (undefined1 *)0x4decfc;
    FUN_0047d2ae();
    local_c = 0xffffffff;
    local_90 = 7.156371e-39;
    FUN_004f7994();
  }
  else {
    local_90 = 7.155397e-39;
    cVar2 = FUN_004c3153();
    if (cVar2 != '\0') {
      local_90 = 7.155422e-39;
      cVar2 = FUN_004c7c7c();
      if (cVar2 == '\0') {
        local_90 = 7.155446e-39;
        cVar2 = FUN_004c7c89();
        if (cVar2 == '\0') {
          local_94 = (undefined1 *)0x3dcccccd;
        }
        else {
          local_94 = (undefined1 *)0x3e4ccccd;
        }
      }
      else {
        local_94 = (undefined1 *)0x3ecccccd;
      }
      local_74 = (undefined1 *)&local_90;
      local_98 = (undefined1 *)&local_90;
      local_78 = (float)local_94;
      FUN_0047620f();
      local_94 = (undefined1 *)0x4deaaf;
      FUN_0047cda7();
      local_94 = local_70;
      local_90 = 4.0;
      local_98 = (undefined1 *)0x4deac5;
      FUN_004c2047();
      local_94 = (undefined1 *)0x4dead0;
      local_94 = (undefined1 *)FUN_0043bc2d();
      local_98 = (undefined1 *)0x4dead8;
      FUN_0047d575();
      local_90 = 1.0;
      local_98 = local_60;
      local_94 = (undefined1 *)0x40800000;
      FUN_004c2047();
      local_98 = (undefined1 *)0x4deb01;
      local_98 = (undefined1 *)FUN_0043bc2d();
      FUN_0047d60d(param_1);
    }
    local_74 = (undefined1 *)&local_90;
    local_94 = (undefined1 *)0x4deb18;
    FUN_004d076d();
    local_94 = (undefined1 *)0x4deb1f;
    FUN_0047cda7();
    local_90 = (float)param_3 * 0.6;
    local_94 = (undefined1 *)0x4deb3b;
    local_78 = local_90;
    FUN_0047ceb8();
    local_90 = 0.0;
    local_94 = (undefined1 *)0x1;
    local_74 = (undefined1 *)&local_98;
    local_98 = (undefined1 *)0x24;
    FUN_0047d12a(4,0,param_2 + -8,param_3);
  }
  local_90 = 0.0;
  local_94 = (undefined1 *)param_4;
  local_98 = (undefined1 *)0x4ded17;
  cVar2 = FUN_004c30fb();
  if (cVar2 != '\0') {
    local_74 = (undefined1 *)&local_90;
    local_98 = (undefined1 *)&local_90;
    local_94 = (undefined1 *)0x3ecccccd;
    FUN_0047620f();
    local_94 = (undefined1 *)0x4ded3d;
    FUN_0047cda7();
    local_90 = 1.4013e-45;
    local_94 = (undefined1 *)param_3;
    local_98 = param_2;
    FUN_0047d353(param_1,0);
  }
  ExceptionList = local_14;
  return;
}

