// rea decompile_all
// name: FUN_000b16b0
// address: 0xb16b0
// body: available
// range: 0xb16b0-0xb1913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b16b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [16];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0005cca8(auStack_4c);
    uVar2 = FUN_00201f28(auStack_34,0);
    uVar2 = FUN_001aaf10(auStack_2c,&DAT_000b1914,uVar2);
    FUN_00225c84(auStack_4c,uVar2);
    FUN_001aafac(auStack_2c);
    FUN_00201f54(auStack_34);
    uVar2 = FUN_00225ca8(auStack_4c);
    FUN_001aaf30(auStack_5c,uVar2);
    FUN_000d7ae4(auStack_60,0,0,0,0);
    FUN_000d7acc(auStack_60,2);
    FUN_00064a34(auStack_74);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x58))(piVar3,auStack_74);
    iVar1 = FUN_001b23c8(auStack_74);
    FUN_000649d4(auStack_74,iVar1 + 2);
    iVar1 = FUN_001b23c8(auStack_74);
    FUN_000649bc(auStack_74,iVar1 + -0xb);
    FUN_000649c4(auStack_74,0x2b);
    FUN_000649cc(auStack_74,0x31);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))(piVar3,auStack_74,0,0,auStack_5c,auStack_60,0,0,0,0xffffffff);
    uVar2 = FUN_00201f28(auStack_34,0);
    uVar2 = FUN_001aaf10(auStack_2c,&DAT_000b1918,uVar2);
    FUN_00225c84(auStack_4c,uVar2);
    FUN_001aafac(auStack_2c);
    FUN_00201f54(auStack_34);
    uVar2 = FUN_00225ca8(auStack_4c);
    FUN_001ab1a2(auStack_5c,uVar2);
    FUN_000d7acc(auStack_60,2);
    FUN_000649c4(auStack_74,0xad);
    FUN_000649cc(auStack_74,0xb2);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))(piVar3,auStack_74,0,0,auStack_5c,auStack_60,0,0,0,0xffffffff);
    FUN_00064a58(auStack_74);
    FUN_000d7afc(auStack_60);
    FUN_001aafac(auStack_5c);
    uVar2 = FUN_0005ccd0(auStack_4c);
  }
  return uVar2;
}

