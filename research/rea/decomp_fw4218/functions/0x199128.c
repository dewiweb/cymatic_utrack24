// rea decompile_all
// name: FUN_00199128
// address: 0x199128
// body: available
// range: 0x199128-0x199223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00199128(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_28 [12];
  
  iVar1 = FUN_001c6b14(0xe8,DAT_00199224);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0018bba0(iVar1,DAT_0019922c,DAT_00199228);
    *puVar2 = DAT_00199230;
    iVar1 = FUN_00172710(puVar2 + 0x30);
    iVar4 = iVar1 + -0xc0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + -0x60) = *(undefined4 *)param_1[0x1f];
    FUN_00172728(iVar1,param_2);
    *(undefined1 *)(iVar1 + 0xc) = param_3;
    *(int **)(iVar1 + 0x10) = param_1;
    *(int **)(iVar1 + 0x14) = param_1;
    *(undefined2 *)(iVar1 + 0x18) = 0;
    (**(code **)(*param_1 + 0xd4))(auStack_28,param_1);
    uVar3 = 0;
    if (*(char *)(*(int *)(iVar1 + -0x60) + 0x15d) != '\0') {
      uVar3 = 2000;
    }
    iVar1 = FUN_0015d72c(iVar4,param_1,auStack_28,param_5,0,uVar3,0,iVar4);
    if (iVar1 != 0) {
      FUN_0015d7c8(iVar4);
      return iVar4;
    }
    FUN_0015da00(iVar4,1);
  }
  return 0;
}

