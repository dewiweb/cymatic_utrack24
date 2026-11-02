// rea decompile_all
// name: FUN_00115e98
// address: 0x115e98
// body: available
// range: 0x115e98-0x115f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00115e98(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  iVar1 = FUN_0015ea90(param_2);
  if (iVar1 == 0) {
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_84 = 0;
    uStack_7e = 0;
    uStack_7c = 0;
    uStack_76 = 0;
    iVar1 = FUN_0010f718(auStack_74);
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(iVar1 + 0x35) = 1;
    FUN_000ee880(iVar1 + -0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xd4))(auStack_28);
    FUN_0010f674(auStack_38,auStack_28,*(undefined2 *)(param_1 + 0xf2));
    iVar1 = FUN_0013a4a0(&uStack_90,auStack_38,param_2,uVar2);
    if (iVar1 != 0) {
      FUN_00149df0(*(int *)(param_1 + 0x24) + 0x4a0,&uStack_90,0);
    }
    FUN_000ee880(&uStack_90);
    FUN_000e9f98(&uStack_7c);
    FUN_000e9f98(&uStack_84);
    return;
  }
  return;
}

