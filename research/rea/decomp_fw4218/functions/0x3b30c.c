// rea decompile_all
// name: FUN_0003b30c
// address: 0x3b30c
// body: available
// range: 0x3b30c-0x3b3f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b30c(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int local_1c [2];
  
  puVar1 = DAT_0003b3f8;
  uVar6 = 0;
  while (uVar3 = FUN_0003cd58(*puVar1), iVar2 = DAT_0003b3fc, (uVar3 & 3) != 0) {
    if ((int)(uVar3 << 0x1e) < 0) {
      iVar4 = *(int *)(DAT_0003b3fc + 4) + 1;
      pcVar5 = (char *)(*(int *)(DAT_0003b3fc + 4) * 0x18 + DAT_0003b400);
      *(int *)(DAT_0003b3fc + 4) = iVar4;
      if (0x3f < iVar4) {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      if (*pcVar5 != '\0') {
        FUN_00002898(DAT_0003b404,pcVar5[0x14]);
      }
      *pcVar5 = '\x01';
      FUN_0003ced0(*puVar1,pcVar5 + 4,pcVar5 + 8,local_1c,pcVar5 + 0xc,pcVar5 + 0x14,pcVar5 + 0x10);
      if (local_1c[0] != 0) {
        FUN_00002898(_DAT_0003b408);
      }
      if ((*(int *)(pcVar5 + 4) == 0) && (*(int *)(pcVar5 + 8) == 0)) {
        FUN_00002898(s___ERROR__PTP2_ReadPendingTimesta_0003b40a + 2);
      }
    }
    iVar2 = DAT_0003b3fc;
    if ((uVar3 & 1) != 0) {
      iVar4 = *(int *)(DAT_0003b3fc + 8) + 1;
      pcVar5 = (char *)(*(int *)(DAT_0003b3fc + 8) * 0x10 + DAT_0003b448);
      *(int *)(DAT_0003b3fc + 8) = iVar4;
      if (0x3f < iVar4) {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      if (*pcVar5 != '\0') {
        FUN_00002898(DAT_0003b44c,pcVar5[0xc]);
      }
      *pcVar5 = '\x01';
      FUN_0003cf68(*puVar1,pcVar5 + 4,pcVar5 + 8,local_1c);
      if (local_1c[0] != 0) {
        FUN_00002898(_DAT_0003b450);
      }
      if ((*(int *)(pcVar5 + 4) == 0) && (*(int *)(pcVar5 + 8) == 0)) {
        FUN_00002898(s___ERROR__PTP2_ReadPendingTimesta_0003b452 + 2);
      }
      uVar6 = uVar6 + 1;
      pcVar5[0xc] = (char)*(undefined4 *)(iVar2 + 0xc);
      if (1 < uVar6) {
        FUN_00002898(DAT_0003b490);
      }
    }
  }
  return;
}

