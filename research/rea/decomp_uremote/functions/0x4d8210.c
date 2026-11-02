// rea decompile_all
// name: FUN_004d8210
// address: 0x4d8210
// body: available
// range: 0x4d8210-0x4d84d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8210(undefined1 *param_1,undefined1 **param_2,undefined4 param_3,undefined1 *param_4,
                 undefined1 **param_5,undefined1 **param_6,int param_7,char param_8)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  undefined1 *puVar3;
  undefined1 **ppuStack_88;
  undefined4 *local_84;
  undefined1 **local_80;
  undefined1 *puStack_7c;
  undefined1 *local_78;
  undefined1 **local_74;
  int *local_70;
  uint uStack_6c;
  char cStack_59;
  undefined1 **ppuStack_58;
  undefined1 *puStack_54;
  int local_4c;
  undefined4 *local_48;
  undefined1 *local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [32];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e193e;
  local_14 = ExceptionList;
  uStack_6c = DAT_00955fd4 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_14;
  if (param_1[0x72] == '\0') {
    local_80 = (undefined1 **)0x3d4ccccd;
  }
  else {
    local_80 = (undefined1 **)0x3e19999a;
  }
  local_70 = (int *)0x0;
  local_3c = (undefined1 *)&puStack_7c;
  local_84 = &puStack_7c;
  local_78 = (undefined1 *)0x0;
  ppuStack_88 = &local_3c;
  local_74 = (undefined1 **)(float)(int)param_4;
  local_48 = local_80;
  FUN_004ef475();
  ppuStack_88 = (undefined1 **)0x4d829a;
  FUN_004765bf();
  local_44 = (undefined1 *)&ppuStack_88;
  local_80 = (undefined1 **)0x0;
  local_84 = (undefined1 **)0x0;
  FUN_004ef475(&ppuStack_88);
  local_70 = (int *)FUN_00476850(local_38);
  local_c = 0;
  local_74 = param_2;
  local_78 = (undefined1 *)0x4d82ce;
  FUN_0047ce07();
  local_c = 0xffffffff;
  local_70 = (int *)0x4d82dc;
  FUN_004768de();
  local_70 = (int *)0x4d82e1;
  FUN_0047d220();
  local_70 = (int *)((float)(int)param_4 * 0.65);
  local_74 = (undefined1 **)0x4d8303;
  local_44 = (undefined1 *)local_70;
  FUN_0049f51e();
  local_c = 1;
  local_74 = (undefined1 **)0x4d8312;
  local_70 = &local_4c;
  FUN_0047ceaa();
  local_74 = (undefined1 **)(param_1 + 4);
  local_78 = (undefined1 *)0x4d8323;
  local_40 = local_74;
  FUN_0049fa60();
  puVar3 = (undefined1 *)0x0;
  puStack_54 = (undefined1 *)0x0;
  if (param_7 != 0) {
    local_74 = (undefined1 **)0x4d8339;
    FUN_0049fa3d();
    local_74 = (undefined1 **)0x4d833e;
    puStack_54 = (undefined1 *)FUN_005b3fb0();
    local_74 = (undefined1 **)0x4d834a;
    FUN_0047e366();
    local_74 = (undefined1 **)0x4d8359;
    iVar2 = FUN_0047e371();
    puVar3 = (undefined1 *)(extraout_ECX / iVar2 + 4);
  }
  local_74 = param_6;
  local_78 = (undefined1 *)0x4d8370;
  iVar2 = FUN_00440367();
  local_4c = iVar2;
  if (param_8 == '\0') {
    local_74 = param_5;
    local_78 = (undefined1 *)0x4d8396;
    ppuStack_58 = (undefined1 **)FUN_00439b5a();
  }
  else {
    ppuStack_58 = param_5;
  }
  if ((int)((int)param_5 + (int)param_6) < (int)((int)ppuStack_58 + iVar2)) {
    ppuStack_58 = (undefined1 **)((int)param_5 + ((int)param_6 - iVar2));
  }
  if (param_7 != 0) {
    if (cStack_59 == '\0') {
      local_74 = (undefined1 **)0x3f19999a;
    }
    else {
      local_74 = (undefined1 **)0x3f800000;
    }
    local_78 = (undefined1 *)0x4d83df;
    local_48 = local_74;
    FUN_0047cdee();
    local_48 = &local_74;
    local_74 = (undefined1 **)0x24;
    local_78 = puStack_54;
    local_80 = (undefined1 **)(((int)param_4 - (int)puStack_54) / 2);
    local_84 = param_2;
    ppuStack_88 = (undefined1 **)0x4d840b;
    puStack_7c = puVar3;
    FUN_0047d945();
    ppuStack_58 = (undefined1 **)((int)ppuStack_58 + (int)puVar3);
    iVar2 = local_4c - (int)puVar3;
    local_4c = iVar2;
  }
  local_74 = (undefined1 **)0x1005701;
  local_78 = param_1;
  puStack_7c = (undefined1 *)0x4d8425;
  cVar1 = FUN_004c1ebf();
  if (cVar1 == '\0') {
    local_74 = (undefined1 **)(local_44 + -0x34);
    local_78 = (undefined1 *)0x4d8438;
    cVar1 = FUN_004d30c9();
    if (cVar1 == '\0') {
      local_78 = _DAT_0095768c;
      if (cStack_59 == '\0') {
        local_78 = (undefined1 *)0x3ecccccd;
      }
      local_44 = (undefined1 *)&local_74;
      puStack_7c = (undefined1 *)&local_74;
      local_80 = &local_44;
      local_84 = (undefined4 *)0x4d8471;
      local_48 = (undefined4 *)local_78;
      FUN_004ef475();
      local_80 = (undefined1 **)0x4d8476;
      FUN_004765bf();
      goto LAB_004d848b;
    }
  }
  local_44 = (undefined1 *)&local_74;
  local_80 = (undefined1 **)&local_74;
  local_78 = (undefined1 *)0x0;
  puStack_7c = (undefined1 *)0x1005701;
  local_84 = (undefined4 *)0x4d848b;
  FUN_004c1e29();
LAB_004d848b:
  local_78 = (undefined1 *)0x4d8493;
  FUN_0047cda7();
  local_74 = (undefined1 **)0x1;
  local_44 = (undefined1 *)&local_78;
  puStack_7c = param_4;
  local_78 = (undefined1 *)0x21;
  local_84 = (undefined4 *)0x0;
  ppuStack_88 = ppuStack_58;
  local_80 = (undefined1 **)iVar2;
  FUN_0047d02d(param_2,local_40);
  local_74 = (undefined1 **)0x4d84c1;
  FUN_004c4d7a();
  ExceptionList = pvStack_18;
  return;
}

