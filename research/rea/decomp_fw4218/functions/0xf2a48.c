// rea decompile_all
// name: FUN_000f2a48
// address: 0xf2a48
// body: available
// range: 0xf2a48-0xf2ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000f2a48(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *DAT_000f2ba4 = 0;
  uVar1 = FUN_00006604(*DAT_000f2bac,*(undefined4 *)(DAT_000f2ba8 + 0x1c));
  uVar2 = FUN_0011eda0();
  FUN_0011f5a8(uVar2,*(undefined4 *)(DAT_000f2ba8 + 0x80),uVar1,1);
  uVar1 = FUN_0011eda0();
  FUN_000a0ec8(uVar1,5,0);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000946d4(uVar1,1);
  FUN_00082020(param_1 + 0x14,0);
  FUN_001b594c(&local_24,uVar1);
  FUN_001b59ec(&local_30,uVar1);
  (**(code **)(*(int *)(param_1 + 0x14) + 8))
            ((int *)(param_1 + 0x14),local_30,uStack_2c,uStack_28,local_24,uStack_20,uStack_1c,0,1);
  FUN_00084d48(param_1 + 0x14);
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))(*(int **)(param_1 + 0xb0),0xf,0,DAT_000f2bb0,0);
  FUN_00081bc0(param_1 + 0x14,0,*(undefined4 *)(DAT_000f2ba8 + 0x80),*DAT_000f2bb4,0,1);
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))(*(int **)(param_1 + 0xb0),0x2a,1,300,300);
  return;
}

