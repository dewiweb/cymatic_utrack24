// rea decompile_all
// name: FUN_0001c804
// address: 0x1c804
// body: available
// range: 0x1c804-0x1c8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0001c804(void)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_r3;
  undefined4 uStack_10;
  
  puVar1 = DAT_0001c8c8;
  if ((*DAT_0001c8c8 & 4) != 0) {
    uStack_10 = in_r3;
    uVar2 = FUN_0018ab18(0);
    FUN_001ab95c(uVar2,DAT_0001c8cc);
    *puVar1 = *puVar1 | 8;
    uVar3 = *puVar1;
    while ((uVar3 & 0x10) == 0) {
      FUN_0017b9f8(100);
      uVar3 = *puVar1;
    }
    while (iVar4 = thunk_EXT_FUN_004002f0(puVar1 + 0x33,&uStack_10,0), iVar4 == 0) {
      FUN_001ab8b8(uStack_10);
    }
    FUN_0017aa44(puVar1 + 0x33);
    FUN_0019f30c(puVar1[0x43]);
    puVar1[0x43] = 0;
    FUN_0017b348(puVar1 + 4);
    FUN_0019f30c(puVar1[0x32]);
    puVar1[0x32] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = *puVar1 & 0xfffffffb;
    return 1;
  }
  return 0;
}

