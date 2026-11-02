// rea decompile_all
// name: FUN_001120d4
// address: 0x1120d4
// body: available
// range: 0x1120d4-0x112177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_001120d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [88];
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x174))(*(undefined4 **)(param_1 + 0x174),param_2)
  ;
  if (iVar1 != 0) {
    FUN_000f8ee0();
    uVar2 = FUN_001b9a28();
    FUN_00122480(auStack_6c,uVar2);
    uVar2 = FUN_0012246c(auStack_6c);
    FUN_000989d0(auStack_80,uVar2);
    FUN_000989c8(auStack_80,param_2);
    uVar2 = FUN_000f8ee0();
    FUN_000f691c(uVar2,auStack_6c);
    FUN_00098a90(auStack_80);
    FUN_00122588(auStack_6c);
  }
  return iVar1 != 0;
}

