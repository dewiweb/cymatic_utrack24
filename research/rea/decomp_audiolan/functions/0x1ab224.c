// rea decompile_all
// name: FUN_001ab224
// address: 0x1ab224
// body: available
// range: 0x1ab224-0x1ab2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ab224(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c [8];
  
  puVar1 = DAT_001ab2ec;
  iVar3 = FUN_00037100(*DAT_001ab2ec);
  iVar2 = DAT_001ab2f0;
  for (iVar3 = iVar3 * 0x40000000; iVar3 < 0; iVar3 = iVar3 << 0x1e) {
    puVar5 = (undefined1 *)(*(int *)(iVar2 + 4) * 0x18 + _DAT_001ab2f4);
    iVar3 = *(int *)(iVar2 + 4) + 1;
    *(int *)(iVar2 + 4) = iVar3;
    if (0x3f < iVar3) {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    *puVar5 = 1;
    FUN_00037278(*puVar1,puVar5 + 4,puVar5 + 8,auStack_1c,puVar5 + 0xc,puVar5 + 0x14,puVar5 + 0x10);
    if ((*(int *)(puVar5 + 4) == 0) && (*(int *)(puVar5 + 8) == 0)) {
      FUN_000028a4(s_gI_ERROR__Fatal__zero_rx_timesta_001ab2f5 + 3);
    }
    iVar3 = FUN_00037100(*puVar1);
  }
  uVar4 = FUN_00037100(*puVar1);
  while ((uVar4 & 1) != 0) {
    iVar3 = *(int *)(iVar2 + 8) + 1;
    puVar5 = (undefined1 *)(*(int *)(iVar2 + 8) * 0x10 + _DAT_001ab328);
    *(int *)(iVar2 + 8) = iVar3;
    if (0x3f < iVar3) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    *puVar5 = 1;
    FUN_00037310(*puVar1,puVar5 + 4,puVar5 + 8,auStack_1c);
    if ((*(int *)(puVar5 + 4) == 0) && (*(int *)(puVar5 + 8) == 0)) {
      FUN_000028a4(s_mI_ERROR__Fatal__zero_tx_timesta_001ab329 + 3);
    }
    puVar5[0xc] = (char)*(undefined4 *)(iVar2 + 0xc);
    uVar4 = FUN_00037100(*puVar1);
    if ((uVar4 & 1) != 0) {
      FUN_000028a4(DAT_001ab35c);
    }
    uVar4 = FUN_00037100(*puVar1);
  }
  return;
}

