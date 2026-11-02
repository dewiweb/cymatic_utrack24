// rea decompile_all
// name: FUN_000d23c0
// address: 0xd23c0
// body: available
// range: 0xd23c0-0xd2487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d23c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  
  uVar1 = FUN_000b9aac();
  iVar2 = FUN_0018e4b4(param_3,auStack_48,0x20);
  if ((((iVar2 == 0) || (iVar2 = FUN_000bc528(uVar1,auStack_48), iVar2 == 0)) ||
      (iVar2 = FUN_000b96e0(uVar1,param_4), iVar2 == 0)) ||
     (((iVar2 = FUN_000bdde0(uVar1,param_5), iVar2 == 0 ||
       (iVar2 = FUN_000be894(uVar1,param_6), iVar2 == 0)) ||
      (iVar2 = FUN_000bc4ac(uVar1,param_7), iVar2 == 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar1);
  return;
}

