// rea decompile_all
// name: FUN_0003b14c
// address: 0x3b14c
// body: available
// range: 0x3b14c-0x3b1b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003b14c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  short sVar5;
  
  uVar2 = DAT_0003b1c0;
  iVar1 = DAT_0003b1bc;
  if (*(char *)(DAT_0003b1bc + 0xc) != '\0') {
    FUN_0003b518();
    puVar3 = DAT_0003b1c4;
    DAT_0003b1c4[1] = DAT_0003b1c4[1] & 0x3f;
    iVar4 = DAT_0003b1c8;
    sVar5 = puVar3[2];
    while (sVar5 != 0) {
      if (*(int *)((uint)(ushort)puVar3[1] * 0x30 + iVar4 + 8) != 0) {
        FUN_001dae24();
      }
      FUN_0002c406((uint)(ushort)puVar3[1] * 0x30 + iVar4);
      puVar3[1] = puVar3[1] + 1 & 0x3f;
      sVar5 = puVar3[2] + -1;
      puVar3[2] = sVar5;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(iVar1 + 0xc) = 0;
    FUN_0003b510(uVar2);
    FUN_0003b494(uVar2);
  }
  return;
}

