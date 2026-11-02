// rea decompile_all
// name: FUN_0011610c
// address: 0x11610c
// body: available
// range: 0x11610c-0x116213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011610c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  uVar3 = 0x15;
  iVar1 = FUN_0015ea90(param_3);
  if (iVar1 == 0) {
    FUN_001179e0(param_1);
    FUN_00116c1c(param_1);
    iVar1 = FUN_0013281c(param_1 + 0x15,param_2,param_3);
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      FUN_00115e98(param_1,param_2);
      (**(code **)(*param_1 + 0xb4))(param_1,1,param_2);
      (**(code **)(*param_1 + 0xb8))(param_1,1,param_3);
      FUN_0013ea84(param_1[0x1b] + 0xa8,param_3);
      uVar2 = param_1[0x1a];
      (**(code **)(*(int *)param_1[0x1b] + 0xd4))(auStack_28);
      FUN_0010f674(auStack_38,auStack_28,*(undefined2 *)((int)param_1 + 0xf2));
      FUN_00139904(param_1[9],auStack_38,param_3,~(uVar2 >> 0x19) & 1);
      FUN_00129060(param_1[0x1b]);
    }
    FUN_001179d0(param_1);
  }
  return uVar3;
}

