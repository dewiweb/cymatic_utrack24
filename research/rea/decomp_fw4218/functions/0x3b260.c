// rea decompile_all
// name: FUN_0003b260
// address: 0x3b260
// body: available
// range: 0x3b260-0x3b2d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0003b260(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = DAT_0003b2dc;
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(DAT_0003b2d8 + 0xc) != '\0') {
    FUN_0003b518();
    uVar4 = DAT_0003b2e4;
    puVar3 = DAT_0003b2e0;
    if (DAT_0003b2e0[2] < 0x40) {
      uVar1 = *DAT_0003b2e0;
      *DAT_0003b2e0 = (ushort)(uVar1 & 0x3f);
      FUN_0002c432((uVar1 & 0x3f) * 0x30 + DAT_0003b308,param_1);
      *puVar3 = *puVar3 + 1 & 0x3f;
      puVar3[2] = puVar3[2] + 1;
      FUN_0003b510(uVar2);
      return 1;
    }
    iVar5 = FUN_000366e0(DAT_0003b2e4);
    if (iVar5 != 0) {
      FUN_0002f9bc(uVar4);
      FUN_0002f9fc(3,s_QS__Environment_queue_is_full_0003b2e8);
    }
    FUN_0003b510(uVar2);
  }
  return 0;
}

