// rea decompile_all
// name: FUN_000c2118
// address: 0xc2118
// body: available
// range: 0xc2118-0xc21ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c2118(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_50 [36];
  uint local_2c;
  
  FUN_000028a4(s_DMA_s_in_error_000c21f0);
  FUN_000028a4(&DAT_000c2200);
  FUN_000028a4(s_ctx_Errors_000c2204);
  FUN_000028a4(s______________________________000c2210);
  iVar2 = DAT_000c2234;
  piVar1 = DAT_000c2230;
  iVar3 = *DAT_000c2230;
  iVar7 = 0;
  do {
    iVar4 = FUN_00073758(iVar7,auStack_50);
    if (iVar4 != 0) {
      iVar4 = *piVar1 + (local_2c >> 0x1e) * 0x10;
      *(int *)(iVar3 + 0x10cc) = iVar7;
      *(undefined4 *)(&DAT_00001c04 + iVar4) = 0xffffffff;
      uVar5 = *(uint *)(iVar4 + 0x1c00);
      if (1 < uVar5) {
        FUN_000028a4(&DAT_000c2238,iVar7);
        iVar4 = 0;
        uVar6 = 0;
        do {
          if ((uVar5 & 1 << (uVar6 & 0xff)) != 0) {
            FUN_000028a4(DAT_000c2240,*(undefined4 *)(iVar2 + iVar4 * 4));
          }
          uVar6 = uVar6 + 1;
          iVar4 = iVar4 + 1;
        } while ((int)uVar6 < 0xf);
        FUN_000028a4(&DAT_000c2200);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  return 0;
}

