// rea decompile_all
// name: FUN_00168d04
// address: 0x168d04
// body: available
// range: 0x168d04-0x168f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00168d04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            uint param_14)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 local_a8 [12];
  undefined1 auStack_9c [8];
  undefined1 auStack_94 [68];
  undefined4 local_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_50 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar2 = FUN_0022befc(param_1,param_3);
  if (iVar2 == 0) {
    local_50 = DAT_00168f48;
    FUN_001683e4(param_1,local_30,local_2c);
  }
  else {
    local_c8 = param_5;
    local_cc = param_7;
    local_d0 = param_8;
    FUN_00172728(iVar2 + 0x20,local_28);
    *(undefined4 *)(iVar2 + 0x2c) = local_c8;
    *(undefined4 *)(iVar2 + 0x30) = param_6;
    *(undefined4 *)(iVar2 + 0x34) = local_cc;
    *(undefined4 *)(iVar2 + 0x38) = local_d0;
    *(undefined4 *)(iVar2 + 0x3c) = param_9;
    *(undefined4 *)(iVar2 + 0x48) = param_12;
    *(undefined4 *)(iVar2 + 0x44) = param_11;
    *(undefined4 *)(iVar2 + 0x40) = param_10;
    FUN_00171ed0(iVar2 + 0x4c,param_13);
    FUN_00160418(iVar2,4);
    uVar3 = FUN_001d06b8();
    *(undefined4 *)(iVar2 + 0x54) = uVar3;
    iVar4 = FUN_001bed34(local_2c);
    if (iVar4 != 0) {
      bVar5 = (*(byte *)(iVar2 + 0x58) & 0x20) == 0;
      uVar1 = (uint)*(byte *)(iVar2 + 0x58);
      if (!bVar5) {
        uVar1 = param_14;
      }
      if (bVar5 || uVar1 == 0) {
        FUN_001512cc(local_a8);
        thunk_FUN_0014cd1c(auStack_4c,*(undefined4 *)(param_1 + 0x14));
        (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(auStack_40);
        local_ac = auStack_4c;
        local_b4 = param_13;
        local_c8 = param_8;
        local_c0 = param_10;
        local_b0 = auStack_40;
        local_b8 = param_12;
        local_cc = param_7;
        local_bc = param_11;
        local_c4 = param_9;
        local_d0 = param_6;
        FUN_0014f504(local_a8,local_2c,local_28,param_5);
        FUN_00171ea4(auStack_40);
        FUN_0014cd8c(auStack_4c);
        (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),local_a8);
        (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),local_a8);
        FUN_0015111c(local_a8);
        FUN_0014ca10(auStack_94);
        FUN_0014ca10(auStack_9c);
      }
      else {
        FUN_001512cc(&local_d0);
        FUN_00150500(&local_d0,iVar2 + 0x14,local_2c);
        (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),&local_d0);
        (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),&local_d0);
        FUN_0015111c(&local_d0);
        FUN_0014ca10(&local_bc);
        FUN_0014ca10(&local_c4);
      }
    }
  }
  return local_50;
}

