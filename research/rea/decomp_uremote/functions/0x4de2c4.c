// rea decompile_all
// name: FUN_004de2c4
// address: 0x4de2c4
// body: available
// range: 0x4de2c4-0x4de579 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de2c4(undefined4 param_1,int param_2,int param_3,undefined1 **param_4,int param_5,
                 undefined1 *param_6,undefined1 *param_7,undefined4 param_8,int param_9,
                 undefined *param_10)

{
  undefined1 *puVar1;
  char cVar2;
  int *in_ECX;
  undefined1 **ppuStack_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  float *local_94;
  undefined *local_90;
  uint uStack_8c;
  undefined *local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined1 *local_64;
  undefined1 local_60 [4];
  undefined1 *local_5c;
  undefined1 local_58 [32];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de52d;
  local_14 = ExceptionList;
  uStack_8c = DAT_00955fd4 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_14;
  local_64 = (undefined1 *)&local_90;
  local_9c = (undefined1 *)&local_90;
  local_94 = (float *)0x0;
  local_98 = (undefined1 *)0x1001200;
  local_a0 = (undefined1 *)0x4de309;
  FUN_004c1e29();
  local_94 = (float *)0x4de311;
  FUN_0047d23a();
  if ((param_9 == 2) || (param_9 == 3)) {
    puVar1 = (undefined1 *)(float)param_2;
    local_64 = (undefined1 *)(float)param_3;
    local_68 = (undefined *)(float)(int)param_4;
    local_70 = (undefined *)(float)param_5;
    local_90 = (undefined *)0x4de3ae;
    local_6c = local_70;
    FUN_0047888f();
    local_c = 0;
    if (param_9 == 3) {
      local_90 = (undefined *)(((float)local_70 + 1.0) - (float)param_6);
      local_94 = (float *)local_68;
      local_98 = param_6;
      local_74 = local_90;
    }
    else {
      local_90 = local_70;
      local_94 = (float *)((float)param_6 - (float)puVar1);
      local_98 = local_64;
      local_74 = (undefined *)local_94;
    }
    local_a0 = (undefined1 *)0x4de415;
    local_9c = puVar1;
    FUN_00478eaa();
    local_90 = (undefined *)0x4de41d;
    cVar2 = FUN_004c3153();
    if (cVar2 == '\0') {
      local_98 = (undefined *)0x3f000000;
    }
    else {
      local_98 = (undefined *)0x3f800000;
    }
    local_94 = (float *)&local_74;
    local_90 = (undefined *)0x3f4ccccd;
    local_9c = local_60;
    local_a0 = (undefined1 *)0x0;
    local_a4 = (undefined1 *)0x1001300;
    ppuStack_a8 = &local_5c;
    local_74 = local_98;
    local_a0 = (undefined1 *)FUN_004c1e29();
    local_a4 = (undefined1 *)0x4de465;
    FUN_00476450();
    local_98 = (undefined1 *)0x4de46a;
    FUN_00476237();
    local_90 = (undefined *)0x0;
    local_5c = (undefined1 *)&local_9c;
    local_a4 = (undefined1 *)&local_9c;
    local_94 = (float *)local_6c;
    local_98 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x3da3d70a;
    ppuStack_a8 = (undefined1 **)0x4de497;
    FUN_00476535();
    local_5c = (undefined1 *)&ppuStack_a8;
    local_a0 = (undefined1 *)0x0;
    local_a4 = (undefined1 *)0x0;
    FUN_004764ae(&ppuStack_a8,0x3da3d70a);
    local_90 = (undefined *)FUN_00476850(local_38);
    local_94 = (float *)param_1;
    local_c._0_1_ = 1;
    local_98 = (undefined1 *)0x4de4d3;
    FUN_0047ce07();
    local_c = (uint)local_c._1_3_ << 8;
    local_90 = (undefined *)0x4de4e4;
    FUN_004768de();
    local_90 = &DAT_0095d798;
    local_94 = (float *)local_58;
    local_98 = (undefined1 *)0x4de4f5;
    FUN_0047d2ae();
    local_5c = (undefined1 *)&local_90;
    local_98 = (undefined1 *)&local_90;
    local_94 = (float *)0x3e4ccccd;
    local_9c = (undefined1 *)0x4de510;
    FUN_00476535();
    local_94 = (float *)0x4de517;
    FUN_0047cda7();
    if (param_9 == 3) {
      local_90 = (undefined *)0x3f800000;
      local_94 = (float *)local_68;
      local_98 = param_6;
      param_6 = puVar1;
    }
    else {
      local_90 = local_70;
      local_94 = (float *)0x3f800000;
      local_98 = local_64;
    }
    local_a0 = (undefined1 *)param_1;
    local_a4 = (undefined1 *)0x4de55c;
    local_9c = param_6;
    FUN_0047d1b5();
    local_90 = (undefined *)0x4de565;
    FUN_004f7994();
  }
  else {
    local_90 = param_10;
    local_94 = (float *)param_9;
    local_98 = (undefined1 *)param_8;
    local_9c = param_7;
    local_a0 = param_6;
    local_a4 = (undefined1 *)param_5;
    ppuStack_a8 = param_4;
    (**(code **)(*in_ECX + 8))(param_1,param_2,param_3);
    (**(code **)(*in_ECX + 0xc))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  ExceptionList = local_14;
  return;
}

