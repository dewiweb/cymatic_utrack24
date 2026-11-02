// rea decompile_all
// name: FUN_004d71fe
// address: 0x4d71fe
// body: available
// range: 0x4d71fe-0x4d771e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d71fe(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,float param_6,
                 float param_7,float param_8,undefined1 *param_9)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined1 *local_c8;
  uint uStack_c4;
  undefined1 *local_ac;
  undefined1 *local_a8;
  float local_a4;
  float local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  float local_90;
  undefined1 *local_8c;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined1 local_50 [32];
  undefined1 local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de5ae;
  local_14 = ExceptionList;
  uStack_c4 = DAT_00955fd4 ^ (uint)&stack0xffffff40;
  ExceptionList = &local_14;
  local_c8 = (undefined1 *)(param_4 / 2);
  iVar3 = FUN_00440367();
  local_c8 = param_9;
  local_a4 = (float)iVar3 - 2.0;
  local_90 = (float)param_2 + (float)param_4 * 0.5;
  local_8c = (undefined1 *)((float)param_5 * 0.5 + (float)param_3);
  local_ac = (undefined1 *)(local_90 - local_a4);
  local_98 = (undefined1 *)((float)local_8c - local_a4);
  local_a0 = local_a4 * 2.0;
  local_94 = (undefined1 *)((param_8 - param_7) * param_6 + param_7);
  cVar2 = FUN_004c3305();
  if (cVar2 != '\0') {
    local_c8 = (undefined1 *)0x4d72c5;
    cVar2 = FUN_004c3153();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_004d72d8;
    }
  }
  bVar1 = false;
LAB_004d72d8:
  if (local_a4 <= 12.0) {
    local_c8 = (undefined1 *)0x4d759b;
    cVar2 = FUN_004c3153();
    if (cVar2 == '\0') {
      local_ac = (undefined1 *)&local_c8;
      FUN_0047604f();
    }
    else {
      puVar7 = _DAT_0095768c;
      if (bVar1) {
        puVar7 = (undefined1 *)0x3f800000;
      }
      local_98 = (undefined1 *)&local_c8;
      ppuVar6 = &local_c8;
      local_ac = puVar7;
      FUN_004c1e29(&local_ac,0x1001311,0);
      FUN_0047620f(ppuVar6,puVar7);
    }
    FUN_0047cda7();
    local_c8 = (undefined1 *)0x4d75fe;
    FUN_0047888f();
    local_c = 3;
    local_c8 = (undefined1 *)(local_a0 * 0.8);
    local_98 = (undefined1 *)(local_a0 * -0.4);
    local_ac = local_c8;
    FUN_00479464(extraout_ECX_01,local_98,local_98,local_c8);
    local_c8 = (undefined1 *)0x3f800000;
    puVar8 = &DAT_0095d798;
    local_ac = (undefined1 *)(local_a0 * 0.1);
    puVar7 = local_88;
    FUN_0047badf(local_ac);
    FUN_0047cac7(puVar7,puVar8);
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = -local_a4;
    local_c8 = (undefined1 *)(local_a0 * 0.2);
    local_ac = local_c8;
    FUN_004799da();
    local_c8 = local_8c;
    puVar7 = local_30;
    fVar9 = local_90;
    FUN_0047727a(&local_68,local_94,puVar7,local_90);
    local_c8 = (undefined1 *)FUN_0047713c(puVar7,fVar9);
    FUN_0047d2ae(local_88);
  }
  else {
    local_c8 = (undefined1 *)0x4d72f4;
    cVar2 = FUN_004c3153();
    if (cVar2 == '\0') {
      local_a8 = (undefined1 *)&local_c8;
      FUN_0047604f();
    }
    else {
      puVar7 = _DAT_0095768c;
      if (bVar1) {
        puVar7 = (undefined1 *)0x3f800000;
      }
      local_9c = (undefined1 *)&local_c8;
      ppuVar6 = &local_c8;
      local_a8 = puVar7;
      FUN_004c1e29(&local_a8,0x1001311,0);
      FUN_0047620f(ppuVar6,puVar7);
    }
    FUN_0047cda7();
    local_c8 = (undefined1 *)0x4d7357;
    FUN_0047888f();
    local_c = 0;
    local_c8 = _DAT_0095768c;
    FUN_004797e4(local_ac,local_98,local_a0,local_a0,param_7,local_94);
    local_c8 = &DAT_0095d798;
    FUN_0047d2ae(extraout_ECX);
    local_c8 = (undefined1 *)0x4d73b8;
    FUN_004f7994();
    local_9c = (undefined1 *)(local_a4 * 0.2);
    local_c8 = (undefined1 *)0x4d73cf;
    FUN_0047888f();
    local_a8 = (undefined1 *)-(float)local_9c;
    local_c = 1;
    local_c8 = (undefined1 *)0x0;
    local_a4 = -local_a4 * 0.7 * 1.1;
    FUN_00479368(extraout_ECX_00,local_a8,0,0,local_a4,local_9c);
    local_c8 = (undefined1 *)((float)local_9c + (float)local_9c);
    local_9c = local_c8;
    FUN_00479464(local_88,local_a8,local_a8,local_c8);
    local_c8 = local_8c;
    puVar5 = &local_68;
    fVar9 = local_90;
    FUN_0047727a(local_30,local_94,puVar5,local_90);
    local_c8 = (undefined1 *)FUN_0047713c(puVar5,fVar9);
    FUN_0047d2ae(local_88);
    local_c = 0xffffffff;
    local_c8 = (undefined1 *)0x4d74ae;
    FUN_004f7994();
    local_c8 = (undefined1 *)0x4d74b6;
    cVar2 = FUN_004c3153();
    local_94 = (undefined1 *)&local_c8;
    if (cVar2 == '\0') {
      FUN_0047604f();
    }
    else {
      local_94 = (undefined1 *)&local_c8;
      FUN_004c1e29(&local_c8,0x1001312,0);
    }
    FUN_0047cda7();
    local_c8 = (undefined1 *)0x4d74ed;
    FUN_0047888f();
    local_c = 2;
    local_c8 = _DAT_0095768c;
    FUN_004797e4(local_ac,local_98,local_a0,local_a0,param_7,param_8);
    local_c8 = (undefined1 *)0x4d7540;
    FUN_00478e1f();
    local_c8 = (undefined1 *)0x4d7548;
    cVar2 = FUN_004c3153();
    if (cVar2 == '\0') {
      local_a8 = (undefined1 *)0x3e99999a;
    }
    else if (bVar1) {
      local_a8 = (undefined1 *)0x40000000;
    }
    else {
      local_a8 = (undefined1 *)0x3f99999a;
    }
    local_c8 = &DAT_0095d798;
    uVar4 = FUN_0047badf(local_a8);
    FUN_0047d2d0(local_50,uVar4);
  }
  local_c8 = (undefined1 *)0x4d7707;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

