// rea decompile_all
// name: FUN_000a0a9c
// address: 0xa0a9c
// body: available
// range: 0xa0a9c-0xa0bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a0a9c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_000dfcb0();
  FUN_000e08ec(uVar2,1);
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x24))(*(int **)(param_1 + 0x90),0x1c,0,2000,0);
  }
  FUN_00178f04();
  iVar3 = FUN_001bf388();
  if (iVar3 == 0) {
    uVar2 = FUN_0011eda0();
    FUN_000a0ec8(uVar2,2,0);
    FUN_000f4e84();
    uVar2 = FUN_000f4fc0();
    FUN_00093300(uVar2,7);
    uVar2 = FUN_0011eda0();
    FUN_001205a0(uVar2,s_DISCONNECTED_000a0c04);
    uVar2 = FUN_0011eda0();
    FUN_00120070(uVar2,s_uTrack24_000a0c14);
    FUN_000aa570();
    uVar2 = FUN_000aff40();
  }
  else {
    uVar2 = FUN_0011eda0();
    FUN_000a0ec8(uVar2,1,0);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x24))
              (*(int **)(param_1 + 0x90),0x16,0,DAT_000a0bfc,0);
    FUN_00129534(param_1 + 0x94,1);
    uVar2 = FUN_0011eda0();
    FUN_001205a0(uVar2,&DAT_000a0c00);
    uVar2 = FUN_000bfe18(param_1 + 0x14);
    uVar4 = FUN_0011eda0();
    FUN_0011ff18(uVar4,uVar2);
    uVar1 = FUN_000bda98(param_1 + 0x14);
    uVar2 = FUN_000bfda0(param_1 + 0x14);
    uVar4 = FUN_0011eda0();
    uVar2 = FUN_0011fb50(uVar4,uVar2,uVar1);
  }
  return uVar2;
}

