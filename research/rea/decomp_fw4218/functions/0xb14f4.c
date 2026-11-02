// rea decompile_all
// name: FUN_000b14f4
// address: 0xb14f4
// body: available
// range: 0xb14f4-0xb16a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b14f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_84 [20];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [24];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar4 = FUN_00249b28(param_2);
    FUN_000028cc(auStack_44,&DAT_000b16a8,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    FUN_0005cca8(auStack_5c);
    uVar2 = FUN_00201f28(auStack_38,0);
    uVar2 = FUN_001aaf10(auStack_30,auStack_44,uVar2);
    FUN_00225c84(auStack_5c,uVar2);
    FUN_001aafac(auStack_30);
    FUN_00201f54(auStack_38);
    uVar2 = FUN_00225ca8(auStack_5c);
    FUN_001aaf30(auStack_6c,uVar2);
    FUN_000d7ae4(auStack_70,0,0,0,0);
    FUN_000d7acc(auStack_70,2);
    FUN_000d7ac4(auStack_70,param_3);
    FUN_00064a34(auStack_84);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x58))(piVar3,auStack_84);
    FUN_000649bc(auStack_84,0x1a);
    FUN_000649d4(auStack_84,0x35);
    FUN_000649c4(auStack_84,0x31);
    FUN_000649cc(auStack_84,0x86);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))(piVar3,auStack_84,0,0,auStack_6c,auStack_70,0,0,2,0xffffffff);
    FUN_00064a58(auStack_84);
    FUN_000d7afc(auStack_70);
    FUN_001aafac(auStack_6c);
    uVar2 = FUN_0005ccd0(auStack_5c);
  }
  return uVar2;
}

