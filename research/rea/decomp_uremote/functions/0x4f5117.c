// rea decompile_all
// name: FUN_004f5117
// address: 0x4f5117
// body: available
// range: 0x4f5117-0x4f537e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5117(undefined4 param_1,float param_2)

{
  HWND pHVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float fVar7;
  void *local_c8;
  undefined4 local_c4;
  uint local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  double local_88;
  double local_80;
  char local_78;
  double local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d93f0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004f0b6e(DAT_00955fd4 ^ (uint)&stack0xffffff28);
  iVar3 = 0;
  local_c8 = (void *)0x0;
  local_c4 = 0;
  local_c0 = 0;
  local_c = 0;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_004f503d,(LPARAM)&local_c8);
  fVar6 = (float10)FUN_004f0bec();
  local_70 = (double)fVar6;
  if (local_c0 == 0) {
    pHVar1 = GetDesktopWindow();
    puVar2 = (undefined4 *)FUN_004f0b41(local_28,pHVar1);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    FUN_004f0b04(&local_b8);
    local_68 = local_b8;
    local_58 = local_70;
    local_64 = local_b4;
    local_60 = local_b0;
    local_5c = local_ac;
    local_50 = 1;
    FUN_004f7479(&local_68);
  }
  uVar5 = 1;
  if (1 < (int)local_c0) {
    iVar4 = 0x20;
    do {
      if (((*(char *)((int)local_c8 + iVar4 + 0x18) != '\0') && (uVar5 < local_c0)) &&
         (local_c0 != 0)) {
        FUN_004f8f82();
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x20;
    } while ((int)uVar5 < (int)local_c0);
  }
  SystemParametersInfoW(0x30,0,local_38,0);
  local_bc = 0;
  if (0 < (int)local_c0) {
    do {
      puVar2 = (undefined4 *)FUN_004f8f2e(param_2);
      local_a8 = *puVar2;
      local_a4 = puVar2[1];
      local_a0 = puVar2[2];
      local_9c = puVar2[3];
      local_80 = *(double *)((int)local_c8 + iVar3 + 0x10);
      local_78 = *(char *)((int)local_c8 + iVar3 + 0x18);
      if (local_80 == 0.0) {
        local_88 = (double)param_2;
        local_80 = local_70;
      }
      else {
        local_88 = local_80 / 96.0;
      }
      local_98 = local_a8;
      local_94 = local_a4;
      local_90 = local_a0;
      local_8c = local_9c;
      if (local_78 != '\0') {
        fVar7 = param_2;
        FUN_004f0b04(&local_48,param_2);
        FUN_004f8f2e(fVar7);
        puVar2 = (undefined4 *)FUN_004a4c72(&local_68);
        local_a8 = *puVar2;
        local_a4 = puVar2[1];
        local_a0 = puVar2[2];
        local_9c = puVar2[3];
      }
      FUN_004f61bc();
      local_bc = local_bc + 1;
      iVar3 = iVar3 + 0x20;
    } while (local_bc < (int)local_c0);
  }
  local_c = 0xffffffff;
  _free(local_c8);
  ExceptionList = local_14;
  return;
}

