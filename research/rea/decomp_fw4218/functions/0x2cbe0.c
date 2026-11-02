// rea decompile_all
// name: FUN_0002cbe0
// address: 0x2cbe0
// body: available
// range: 0x2cbe0-0x2cc63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002cbe0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (*(char *)(param_1 + 0x26) != '\0') {
      if (param_2 == 0) {
        FUN_00039968(auStack_18,3);
      }
      else {
        FUN_00039968(auStack_18,2);
        FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_18);
        FUN_00039968(auStack_18,0xd);
      }
      FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_18);
      FUN_0003ae08(*(undefined4 *)(param_1 + 0xa4));
      if (*(int *)(param_1 + 0xa4) == 0) goto LAB_0002cc3c;
    }
    FUN_0003ac28(*(undefined4 *)(param_1 + 0xa4),param_2);
  }
LAB_0002cc3c:
  uVar1 = FUN_001e11e8((int)*(char *)(*(int *)(param_1 + 0xa4) + 0x268));
  FUN_0003c79c(param_1 + 0x88,uVar1,0);
  FUN_0003c808(param_1 + 0x88);
  return;
}

