// rea decompile_all
// name: FUN_00094c54
// address: 0x94c54
// body: available
// range: 0x94c54-0x94d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00094c54(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (((*DAT_00094d30 & 1) == 0) &&
     (iVar2 = FUN_0016ddfa(DAT_00094d30), iVar1 = DAT_00094d34, iVar2 != 0)) {
    piVar6 = (int *)(DAT_00094d34 + 0xc);
    *(undefined4 *)(DAT_00094d34 + 8) = DAT_00094d38;
    *piVar6 = iVar1;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined1 *)(iVar1 + 0x20) = 6;
    *(undefined1 *)(iVar1 + 0x21) = 7;
    *(undefined1 *)(iVar1 + 0x2a) = 0;
    *(undefined1 *)(iVar1 + 0x2b) = 0;
    *(undefined1 *)(iVar1 + 0x2c) = 0;
    puVar3 = (undefined4 *)FUN_0008b800(iVar1 + 0x40);
    *puVar3 = DAT_00094d3c;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    uVar4 = 0;
    do {
      *(undefined1 *)((int)puVar3 + (uVar4 - 0x18)) = 0;
      *(undefined1 *)((int)puVar3 + (uVar4 - 0x1a)) = 0;
      *(undefined1 *)((int)puVar3 + (uVar4 - 0x1e)) = 0;
      *(undefined1 *)((int)puVar3 + (uVar4 - 0x1c)) = 0;
      uVar5 = uVar4 + 1;
      puVar3[uVar4 - 4] = 0;
      puVar3[uVar4 - 2] = 0;
      uVar4 = uVar5;
    } while (uVar5 < 2);
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[8] = 0;
    FUN_0016dd44(puVar3 + -0x10,DAT_00094d44,DAT_00094d40);
  }
  return DAT_00094d34;
}

