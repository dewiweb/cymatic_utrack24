// rea decompile_all
// name: FUN_000e786c
// address: 0xe786c
// body: available
// range: 0xe786c-0xe7a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000e786c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_00002898(_DAT_000e7a20,*(undefined4 *)(param_1 + 0xb4));
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  FUN_000f4e84();
  uVar3 = FUN_000f5150();
  iVar4 = FUN_000e2cf0(param_1);
  local_30 = param_2;
  if (iVar4 == 0) {
    FUN_00002898(s___ERROR__All_the_clocks_are_not_r_000e7a22 + 2);
    uVar2 = 0;
  }
  else {
    iVar4 = FUN_000e7608(param_1);
    if (iVar4 == 0) {
      FUN_00002898(_DAT_000e7a4c);
      uVar2 = FUN_0011eda0();
      FUN_0011ff88(uVar2,s_Preparing_Recording_000e7a60,s___No_Disk_Space__000e7a4e + 2);
      uVar2 = FUN_0011eda0();
      FUN_000a1000(uVar2,0x1c);
      FUN_001d0130(2000);
      uVar2 = FUN_0011eda0();
      FUN_000a0ec8(uVar2,5,0);
      uVar2 = 0;
    }
    else {
      FUN_000bddec(&uStack_2c,param_1 + 0x14,*(undefined4 *)(param_1 + 0xb4));
      uVar5 = FUN_00232084(&uStack_28,&uStack_2c);
      FUN_0006db48(uVar2,uVar5);
      FUN_00232190(&uStack_28);
      uVar5 = FUN_001b6f18(uVar3);
      uVar5 = FUN_000bdf40(param_1 + 0x14,uVar5);
      uVar1 = FUN_001b6f24(uVar3);
      FUN_000aa570();
      uVar3 = FUN_000aa88c();
      FUN_0008bdc8(uVar3,uVar5,uVar1,&uStack_2c);
      FUN_0006d908(uVar2,1);
      *(undefined1 *)(param_1 + 0xbd) = 0;
      local_30 = 0;
      iVar4 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
                        (*(int **)(param_1 + 0xa4),0x1f,0,DAT_000e7a74);
      if (iVar4 == 0) {
        (**(code **)(**(int **)(param_1 + 0xa4) + 0x28))(*(int **)(param_1 + 0xa4),0x1f);
      }
      FUN_001b275c(uVar2);
      uVar2 = FUN_0022d168();
      FUN_00002898(DAT_000e7a78,uVar2);
      FUN_00232190(&uStack_2c);
      uVar2 = 1;
    }
  }
  return CONCAT44(local_30,uVar2);
}

