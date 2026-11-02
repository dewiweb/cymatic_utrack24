// rea decompile_all
// name: FUN_0017dcf8
// address: 0x17dcf8
// body: available
// range: 0x17dcf8-0x17de1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017dcf8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  uVar4 = 0;
  FUN_00180064();
  if (*(short *)(param_1 + 0x3e) == 4) {
    if (*(int **)(param_1 + 0x4c) != (int *)0x0 && param_2 != 0xffff) {
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = (param_2 + -1) * 0x10000;
      }
      if (param_2 != 0) {
        uVar3 = uVar3 >> 0x10;
      }
      uVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
      if (uVar1 <= uVar3) {
        uVar4 = 0x25;
        goto LAB_0017ddf8;
      }
    }
    local_2e = *(undefined2 *)(param_1 + 0x40);
    local_30 = *(undefined2 *)(param_1 + 0x3e);
    local_2c = *(undefined2 *)(param_1 + 0x42);
    local_2a = (short)param_2;
    iVar2 = FUN_0019649c(*(int *)(param_1 + 0x48) + 0x98,*(undefined4 *)(param_1 + 0x24),&local_30,
                         param_3,param_4 & 0xffff);
    if (iVar2 == 0) {
      FUN_0019ca74(*(undefined4 *)(param_1 + 0x48));
      FUN_0019cea4(*(undefined4 *)(param_1 + 0x48));
      local_26 = *(undefined2 *)(param_1 + 0x40);
      local_28 = *(undefined2 *)(param_1 + 0x3e);
      local_24 = *(undefined2 *)(param_1 + 0x42);
      local_22 = (short)param_2;
      FUN_0019649c(*(int *)(param_1 + 0x48) + 0x98,*(undefined4 *)(param_1 + 0x24),&local_28,param_3
                   ,param_4 & 0xffff);
    }
  }
  else {
    uVar4 = 0x11;
  }
LAB_0017ddf8:
  FUN_0017d850(param_1,param_2,param_4);
  FUN_00180054(param_1);
  return uVar4;
}

