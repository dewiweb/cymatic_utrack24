// rea decompile_all
// name: FUN_00132a80
// address: 0x132a80
// body: available
// range: 0x132a80-0x132b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00132a80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  puVar2 = (undefined4 *)FUN_000f581c();
  *puVar2 = DAT_00132b5c;
  *(undefined2 *)(puVar2 + 0x45) = 0;
  *(undefined2 *)((int)puVar2 + 0x116) = 0;
  *(undefined2 *)(puVar2 + 0x46) = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4c] = 0;
  puVar2[0x4d] = 0;
  puVar2[0x4e] = 0;
  puVar2[0x4f] = 0;
  puVar2[0x50] = 0;
  puVar2[0x51] = 0;
  puVar2[0x52] = 0;
  puVar2[0x53] = 0;
  puVar1 = DAT_00132b60;
  puVar2[0x54] = 0;
  uVar4 = puVar1[1];
  puVar2[0x55] = *puVar1;
  puVar2[0x56] = uVar4;
  iVar3 = FUN_001c70d8(puVar2 + 0x57,DAT_00132b64,0x2c,0x18,in_stack_00000000,in_stack_00000004,
                       in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018);
  *(undefined1 *)(iVar3 + 0x420) = 2;
  *(undefined4 *)(iVar3 + 0x424) = 0;
  *(undefined4 *)(iVar3 + 0x428) = 0;
  *(undefined4 *)(iVar3 + 0x42c) = 0;
  *(undefined1 *)(iVar3 + 0x490) = 0;
  *(undefined2 *)(DAT_00132b68 + iVar3 + -0x15c) = 0;
  iVar3 = FUN_001c70d8(iVar3 + 0x55c,DAT_00132b6c,0x18);
  return iVar3 + -0x6b8;
}

