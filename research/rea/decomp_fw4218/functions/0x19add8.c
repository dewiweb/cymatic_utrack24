// rea decompile_all
// name: FUN_0019add8
// address: 0x19add8
// body: available
// range: 0x19add8-0x19af07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019add8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined1 auStack_74 [60];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [16];
  
  (**(code **)(**(int **)(param_1 + 0x4c) + 0xd4))(auStack_38);
  uVar1 = FUN_0017274c(auStack_20,auStack_38,*(undefined2 *)(param_1 + 0xe8));
  iVar2 = FUN_00195090(*(undefined4 *)(param_1 + 0x24),uVar1,param_2,0);
  if (iVar2 != 0) {
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_84 = 0;
    uStack_7e = 0;
    uStack_7c = 0;
    uStack_76 = 0;
    iVar2 = FUN_001727f0(auStack_74);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x35) = 1;
    FUN_0015111c(iVar2 + -0x1c);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xd4))(auStack_2c);
    FUN_00150260(&uStack_90,0,auStack_2c,param_2);
    FUN_001a2410(*(int *)(param_1 + 0x24) + 0x4a0,&uStack_90,0);
    FUN_0015111c(&uStack_90);
    FUN_0014ca10(&uStack_7c);
    FUN_0014ca10(&uStack_84);
    return;
  }
  return;
}

