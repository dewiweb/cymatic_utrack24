// rea decompile_all
// name: FUN_000b22c4
// address: 0xb22c4
// body: available
// range: 0xb22c4-0xb24c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b22c4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_78 [20];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_0005cca8(auStack_50);
    uVar2 = FUN_00201f28(auStack_38,0);
    uVar2 = FUN_001aaf10(auStack_30,&LAB_000b24c4,uVar2);
    FUN_00225c84(auStack_50,uVar2);
    FUN_001aafac(auStack_30);
    FUN_00201f54(auStack_38);
    uVar2 = FUN_00225ca8(auStack_50);
    FUN_001aaf30(auStack_60,uVar2);
    FUN_000d7ae4(auStack_64,0,0,0,0);
    FUN_000d7acc(auStack_64,2);
    FUN_00064a34(auStack_78);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x58))(piVar3,auStack_78);
    FUN_000649bc(auStack_78,0x11);
    FUN_000649d4(auStack_78,0x1a);
    FUN_000649c4(auStack_78,0x8c);
    FUN_000649cc(auStack_78,0xaa);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))(piVar3,auStack_78,0,0,auStack_60,auStack_64,0,0,0,0xffffffff);
    if (param_3 == 0) {
      piVar3 = (int *)FUN_0022bc90(param_1 + 1);
      (**(code **)(*piVar3 + 0x34))(piVar3,0x8c,0x1a,0x61,param_2,0xffffffff);
    }
    else {
      piVar3 = (int *)FUN_0022bc90(param_1 + 1);
      (**(code **)(*piVar3 + 0x34))(piVar3,0x8c,0x1a,0x60,param_2,0xffffffff);
    }
    FUN_00064a58(auStack_78);
    FUN_000d7afc(auStack_64);
    FUN_001aafac(auStack_60);
    uVar2 = FUN_0005ccd0(auStack_50);
  }
  return uVar2;
}

