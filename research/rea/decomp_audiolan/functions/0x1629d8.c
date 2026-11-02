// rea decompile_all
// name: FUN_001629d8
// address: 0x1629d8
// body: available
// range: 0x1629d8-0x162a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001629d8(void)

{
  undefined4 uVar1;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  
  if (in_stack_00000000 == 0x1001) {
    uVar1 = FUN_000b9aac();
    FUN_000be010(&uStack_10,uVar1,in_stack_00000004);
    FUN_0010e090(auStack_18,in_stack_00000004);
    FUN_0010e820(in_stack_00000008,auStack_18);
    FUN_0010e7f4(auStack_18);
    FUN_0010e518(in_stack_00000008,&DAT_00162a60);
    FUN_0010e518(in_stack_00000008,uStack_10);
    FUN_0010e518(in_stack_00000008,&LAB_00162a64);
    FUN_001da44c(&uStack_10);
    return;
  }
  return;
}

