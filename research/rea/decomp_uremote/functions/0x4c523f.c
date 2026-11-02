// rea decompile_all
// name: FUN_004c523f
// address: 0x4c523f
// body: available
// range: 0x4c523f-0x4c53aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c523f(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_bc [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  int iStack_a8;
  undefined1 auStack_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 **ppuStack_90;
  code *local_8c;
  undefined1 *local_88;
  uint uStack_84;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined1 auStack_58 [16];
  byte bStack_48;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0286;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_88 = (undefined1 *)0x4c5284;
    FUN_0047479c();
    local_88 = local_60;
    local_8c = (code *)0x4c528e;
    puVar1 = (undefined4 *)FUN_004c5064();
    *(undefined4 *)(param_1 + 0x58) = *puVar1;
    local_70 = (undefined1 *)&local_8c;
    *(undefined4 *)(param_1 + 0x5c) = puVar1[1];
    ppuStack_90 = (undefined1 **)0x4c52a9;
    FUN_004f5a5a();
    ppuStack_90 = (undefined1 **)param_1;
    uStack_94 = 0x4c52b1;
    iStack_ac = FUN_004c4eb5();
    if (iStack_ac != 0) {
      local_88 = (undefined1 *)0x4c52c4;
      FUN_004c3456();
      local_c = 0;
      local_8c = *(code **)(param_1 + 0x58);
      local_6c = (undefined1 *)&local_8c;
      local_88 = *(undefined1 **)(param_1 + 0x5c);
      ppuStack_90 = (undefined1 **)0x0;
      uStack_94 = 0x4c52e8;
      FUN_004c0902();
      local_88 = local_60;
      local_8c = (code *)0x4c52f2;
      FUN_00467eb1();
      local_88 = (undefined1 *)0x0;
      local_8c = (code *)0x0;
      local_6c = (undefined1 *)&uStack_94;
      local_98 = 0x4c5307;
      FUN_00467e6f();
      local_9c = local_68;
      local_6c = auStack_a4;
      local_98 = local_64;
      iStack_a8 = 0x4c532d;
      FUN_00467e6f();
      local_6c = auStack_b0;
      uStack_b4 = 0x4c533b;
      iStack_a8 = iStack_ac;
      FUN_004c751d();
      uStack_b8 = local_68;
      local_6c = auStack_bc;
      uStack_b4 = local_64;
      FUN_004c50cf();
      FUN_004c6ba4();
      ppuStack_90 = &local_70;
      if ((bStack_48 & 0x70) == 0) {
        local_8c = FUN_004f9b3e;
      }
      else {
        local_8c = (code *)&LAB_004f9b63;
      }
      uStack_94 = 0x4c538d;
      local_88 = auStack_58;
      FUN_004f8791();
      local_88 = (undefined1 *)0x4c5396;
      FUN_00474d0f();
    }
  }
  ExceptionList = local_14;
  return;
}

