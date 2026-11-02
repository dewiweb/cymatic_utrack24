// rea decompile_all
// name: FUN_000a55b8
// address: 0xa55b8
// body: available
// range: 0xa55b8-0xa56af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a55b8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  if (8 < in_stack_00000008) {
    in_stack_00000008 = 8;
  }
  puVar2 = (undefined4 *)FUN_0005f9e4();
  uVar5 = DAT_000a56b0;
  puVar2[0x24] = 0xffffffff;
  *puVar2 = uVar5;
  puVar2[0x25] = 0xffffffff;
  puVar2[0x26] = DAT_000a56b4;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  if (in_stack_00000004 < 0x11) {
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
  }
  puVar2[0x38] = 0;
  *(undefined2 *)(puVar2 + 0x39) = uVar4;
  *(undefined2 *)((int)puVar2 + 0xe6) = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar1 = DAT_000a56b8;
  puVar2[0x3c] = 0;
  uVar5 = puVar1[1];
  puVar2[0x3d] = *puVar1;
  puVar2[0x3e] = uVar5;
  iVar3 = FUN_001c70d8(puVar2 + 0x3f,DAT_000a56bc,0x28,8,in_stack_00000000,in_stack_00000008,
                       in_stack_0000000c,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                       in_stack_0000001c,in_stack_00000020);
  iVar3 = FUN_0012370c(iVar3 + 0x140);
  iVar3 = FUN_000ec13c(iVar3 + 0x18);
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined1 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined2 *)(iVar3 + 0x24) = 0;
  *(undefined2 *)(iVar3 + 0x26) = 0;
  return;
}

