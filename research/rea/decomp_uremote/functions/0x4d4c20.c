// rea decompile_all
// name: FUN_004d4c20
// address: 0x4d4c20
// body: available
// range: 0x4d4c20-0x4d5276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d4c20(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined1 *param_5,
                 undefined1 *param_6,char param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uStack_e8;
  undefined1 *local_e4;
  float local_e0;
  undefined1 *local_dc;
  undefined1 **local_d8;
  undefined1 **local_d4;
  undefined1 *local_d0;
  uint uStack_cc;
  float local_bc;
  undefined1 *local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 *local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined1 *local_8c [2];
  undefined1 local_84 [32];
  undefined1 local_64 [32];
  undefined1 local_44 [48];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de5f7;
  local_14 = ExceptionList;
  uStack_cc = DAT_00955fd4 ^ (uint)&stack0xffffff38;
  ExceptionList = &local_14;
  local_8c[0] = (undefined1 *)&local_d0;
  local_dc = (undefined1 *)&local_d0;
  local_d4 = (undefined1 **)0x0;
  local_d8 = (undefined1 **)0x1000300;
  local_e0 = 7.098751e-39;
  FUN_004c1e29();
  local_d4 = (undefined1 **)0x4d4c76;
  FUN_0047d23a();
  local_d0 = (undefined1 *)0x4d4c7f;
  FUN_0047888f();
  local_c = 0;
  local_d0 = (undefined1 *)0x4d4c8f;
  FUN_0047888f();
  local_d0 = param_5;
  local_c = CONCAT31(local_c._1_3_,1);
  local_d4 = (undefined1 **)0x4d4ca2;
  iVar4 = FUN_00440367();
  if (iVar4 < 0x10) {
    local_bc = 0.0;
  }
  else {
    local_bc = 1.0;
  }
  fVar1 = local_bc * 2.0;
  local_98 = local_bc + 1.0;
  fVar2 = local_98 * 2.0;
  local_a4 = (undefined1 *)0x0;
  local_b0 = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  if (param_7 == '\0') {
    local_9c = (float)(int)param_6;
    local_e4 = local_64;
    local_d4 = (undefined1 **)(local_9c - fVar1);
    local_a0 = (float)(int)param_5;
    local_ac = (float)param_4;
    local_a8 = (float)param_3;
    local_d0 = (undefined1 *)((float)local_d4 * 0.5);
    local_d8 = (undefined1 **)(local_a0 - fVar1);
    local_dc = (undefined1 *)(local_bc + local_ac);
    local_e0 = local_bc + local_a8;
    uStack_e8 = 0x4d4e99;
    local_b0 = (float)local_d4;
    FUN_0047932d();
    if (0 < param_9) {
      local_d4 = (undefined1 **)(local_9c - fVar2);
      local_e4 = local_84;
      local_d0 = (undefined1 *)((float)local_d4 * 0.5);
      local_d8 = (undefined1 **)((float)param_9 - fVar2);
      local_dc = (undefined1 *)(local_ac + local_98);
      local_e0 = (float)param_8 + local_98;
      uStack_e8 = 0x4d4f0c;
      FUN_0047932d();
    }
    local_b0 = local_ac;
    local_94 = local_9c * 0.7 + local_ac;
  }
  else {
    local_a0 = (float)(int)param_5;
    local_e4 = local_64;
    local_d8 = (undefined1 **)(local_a0 - fVar1);
    local_9c = (float)(int)param_6;
    local_ac = (float)param_4;
    local_a8 = (float)param_3;
    local_d0 = (undefined1 *)((float)local_d8 * 0.5);
    local_d4 = (undefined1 **)(local_9c - fVar1);
    local_dc = (undefined1 *)(local_bc + local_ac);
    local_e0 = local_bc + local_a8;
    uStack_e8 = 0x4d4d82;
    local_a4 = local_d0;
    FUN_0047932d();
    if (0 < param_9) {
      local_d8 = (undefined1 **)(local_a0 - fVar2);
      local_e4 = local_84;
      local_d0 = (undefined1 *)((float)local_d8 * 0.5);
      local_d4 = (undefined1 **)((float)param_9 - fVar2);
      local_dc = (undefined1 *)((float)param_8 + local_98);
      local_e0 = local_a8 + local_98;
      uStack_e8 = 0x4d4df5;
      FUN_0047932d();
    }
    local_a4 = (undefined1 *)local_a8;
    local_90 = local_a0 * 0.7 + local_a8;
  }
  local_d0 = (undefined1 *)0x0;
  local_d4 = (undefined1 **)0x1000400;
  local_d8 = local_8c;
  local_dc = (undefined1 *)0x4d4f39;
  FUN_004c1e29();
  local_d0 = (undefined1 *)0x4d4f42;
  FUN_00476041();
  local_d0 = (undefined1 *)0x4d4f4b;
  FUN_00476041();
  local_d0 = (undefined1 *)0x1000401;
  local_d4 = (undefined1 **)param_2;
  local_d8 = (undefined1 **)0x4d4f59;
  cVar3 = FUN_004c1ebf();
  if (cVar3 == '\0') {
    local_d0 = local_b4;
    local_d4 = (undefined1 **)0x4d4f68;
    cVar3 = FUN_004d30c9();
    if (cVar3 == '\0') {
      local_b4 = (undefined1 *)&local_d0;
      local_d4 = (undefined1 **)0x4d4f7d;
      FUN_0047604f();
      local_d4 = &local_b4;
      local_d8 = (undefined1 **)0x4d4f8b;
      FUN_0047627a();
      local_d0 = (undefined1 *)0x4d4f96;
      FUN_004d076d();
      local_b4 = (undefined1 *)&local_d0;
      local_d4 = (undefined1 **)0x4d4fa7;
      FUN_0047604f();
      local_d4 = &local_b4;
      local_d8 = (undefined1 **)0x4d4fb1;
      FUN_0047627a();
      goto LAB_004d4fd9;
    }
  }
  local_d0 = (undefined1 *)0x0;
  local_d4 = (undefined1 **)0x1000401;
  local_d8 = &local_b4;
  local_dc = (undefined1 *)0x4d4fc8;
  FUN_004c1e29();
  local_d0 = (undefined1 *)0x4d4fd3;
  FUN_004d076d();
LAB_004d4fd9:
  local_d0 = (undefined1 *)0x4d4fde;
  FUN_004d076d();
  local_d0 = (undefined1 *)0x0;
  local_b4 = (undefined1 *)&local_dc;
  local_d4 = (undefined1 **)local_94;
  local_d8 = (undefined1 **)local_90;
  local_e0 = 7.100033e-39;
  FUN_004d076d();
  local_b4 = (undefined1 *)&uStack_e8;
  local_e0 = local_b0;
  local_e4 = local_a4;
  FUN_004d076d();
  local_d0 = (undefined1 *)FUN_00476850(local_44);
  local_d4 = (undefined1 **)param_1;
  local_c._0_1_ = 2;
  local_d8 = (undefined1 **)0x4d5042;
  FUN_0047ce07();
  local_c._0_1_ = 1;
  local_d0 = (undefined1 *)0x4d5056;
  FUN_004768de();
  local_d0 = &DAT_0095d798;
  local_d4 = (undefined1 **)local_64;
  local_d8 = (undefined1 **)0x4d5066;
  FUN_0047d2ae();
  if (param_7 == '\0') {
    local_b0 = local_9c * 0.6 + local_ac;
    local_94 = local_ac + local_9c;
  }
  else {
    local_a4 = (undefined1 *)(local_a0 * 0.6 + local_a8);
    local_90 = local_a8 + local_a0;
  }
  local_d0 = (undefined1 *)0x0;
  local_b4 = (undefined1 *)&local_dc;
  local_d4 = (undefined1 **)local_94;
  local_d8 = (undefined1 **)local_90;
  local_e0 = 7.10032e-39;
  FUN_0047604f();
  local_b4 = (undefined1 *)&uStack_e8;
  local_e0 = local_b0;
  local_e4 = local_a4;
  FUN_004d076d();
  local_d0 = (undefined1 *)FUN_00476850(local_44);
  local_d4 = (undefined1 **)param_1;
  local_c._0_1_ = 3;
  local_d8 = (undefined1 **)0x4d5112;
  FUN_0047ce07();
  local_c._0_1_ = 1;
  local_d0 = (undefined1 *)0x4d5126;
  FUN_004768de();
  local_d0 = &DAT_0095d798;
  local_d4 = (undefined1 **)local_64;
  local_d8 = (undefined1 **)0x4d5131;
  FUN_0047d2ae();
  local_b4 = (undefined1 *)&local_d0;
  local_d4 = (undefined1 **)0x4d5141;
  FUN_004d076d();
  local_d4 = (undefined1 **)0x4d5148;
  FUN_0047cda7();
  local_d0 = &DAT_0095d798;
  local_d4 = (undefined1 **)local_84;
  local_d8 = (undefined1 **)0x4d5153;
  FUN_0047d2ae();
  local_d0 = (undefined1 *)0x0;
  local_b4 = (undefined1 *)&local_dc;
  local_d4 = (undefined1 **)local_94;
  local_d8 = (undefined1 **)local_90;
  local_e0 = 7.100554e-39;
  FUN_004d076d();
  local_b4 = (undefined1 *)&uStack_e8;
  local_e0 = local_b0;
  local_e4 = local_a4;
  FUN_0047604f();
  local_d0 = (undefined1 *)FUN_00476850(local_44);
  local_d4 = (undefined1 **)param_1;
  local_c._0_1_ = 4;
  local_d8 = (undefined1 **)0x4d51b4;
  FUN_0047ce07();
  local_c = CONCAT31(local_c._1_3_,1);
  local_d0 = (undefined1 *)0x4d51c8;
  FUN_004768de();
  local_d0 = (undefined1 *)0x4d51cd;
  FUN_0047cd0e();
  if (param_7 == '\0') {
    local_d8 = (undefined1 **)((int)param_6 / 2 + param_4);
  }
  else {
    local_d8 = (undefined1 **)param_4;
  }
  local_d0 = param_6;
  local_d4 = (undefined1 **)param_5;
  local_dc = (undefined1 *)0x4d51ff;
  FUN_0047ccbf();
  local_d0 = &DAT_0095d798;
  local_d4 = (undefined1 **)local_84;
  local_d8 = (undefined1 **)0x4d520a;
  FUN_0047d2ae();
  local_d0 = (undefined1 *)0x4d5211;
  FUN_0047cd1a();
  local_d4 = (undefined1 **)0x4d5222;
  local_b4 = (undefined1 *)&local_d0;
  FUN_0047604f();
  local_d4 = (undefined1 **)0x4d5229;
  FUN_0047cda7();
  local_d0 = &DAT_0095d798;
  local_d4 = (undefined1 **)0x3ecccccd;
  local_d8 = (undefined1 **)0x4d5240;
  local_d4 = (undefined1 **)FUN_0047badf();
  local_d8 = (undefined1 **)local_84;
  local_dc = (undefined1 *)0x4d524d;
  FUN_0047d2d0();
  local_d0 = (undefined1 *)0x4d5256;
  FUN_004f7994();
  local_d0 = (undefined1 *)0x4d525f;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

