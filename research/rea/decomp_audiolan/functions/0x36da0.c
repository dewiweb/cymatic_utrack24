// rea decompile_all
// name: FUN_00036da0
// address: 0x36da0
// body: available
// range: 0x36da0-0x36ed9 inclusive
// range: 0x36edc-0x36eef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00036da0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_20 [12];
  
  pcVar7 = DAT_00036ef0;
  if (*DAT_00036ef0 == '\0') {
    return 0;
  }
  FUN_001ab224();
  FUN_0002592c(auStack_20);
  iVar3 = FUN_0000339c(auStack_20,param_1,8);
  puVar2 = DAT_00036efc;
  if (iVar3 == 0) {
    iVar8 = 0;
    iVar3 = *(int *)(pcVar7 + 8);
    do {
      iVar4 = iVar3 + -1;
      if (iVar4 < 0) {
        iVar4 = iVar3 + 0x3f;
      }
      iVar3 = iVar4 * 0x10;
      if ((*(char *)(DAT_00036ef8 + iVar3) != '\0') &&
         (*(char *)(iVar3 + DAT_00036ef8 + 0xc) == *(char *)(param_1 + 0x23))) {
        iVar3 = iVar3 + DAT_00036ef8;
        *(undefined1 *)(DAT_00036ef8 + iVar4 * 0x10) = 0;
        uVar6 = s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_;
        uVar9 = *(uint *)(iVar3 + 4);
        if (((uint)(*puVar2 <= DAT_00036f00) <= -puVar2[1]) &&
           ((uVar9 < DAT_00036f04 && ((uint)(*puVar2 <= uVar9) <= -puVar2[1])))) {
          piVar1 = (int *)(s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_ + 4);
          *(undefined4 *)s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_ =
               *(undefined4 *)s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_;
          *(int *)(uVar6 + 4) = *piVar1 + 1;
          *puVar2 = uVar9;
          puVar2[1] = 0;
        }
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_ + 4);
        *(uint *)(param_1 + 0x10) = uVar9;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar4;
    } while (iVar8 < 0x40);
    pcVar7 = s_p___ERROR__Failed_to_get_TX_time_00036f08 + 4;
  }
  else {
    iVar4 = FUN_000370a4(param_1);
    puVar2 = DAT_00036efc;
    iVar3 = DAT_00036ef4;
    iVar11 = 0;
    iVar8 = *(int *)(pcVar7 + 4);
    do {
      iVar10 = iVar8 + -1;
      if (iVar10 < 0) {
        iVar10 = iVar8 + 0x3f;
      }
      iVar8 = iVar10 * 0x18;
      if ((*(char *)(DAT_00036ef4 + iVar8) != '\0') &&
         ((((iVar5 = iVar8 + DAT_00036ef4, *(int *)(iVar5 + 4) != 0 || (*(int *)(iVar5 + 8) != 0))
           && (*(int *)(iVar5 + 0x10) == iVar4)) &&
          ((*(uint *)(iVar5 + 0xc) == (uint)*(ushort *)(param_1 + 10) &&
           (*(char *)(iVar5 + 0x14) == *(char *)(param_1 + 0x23))))))) {
        *(undefined1 *)(DAT_00036ef4 + iVar10 * 0x18) = 0;
        uVar6 = s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_;
        uVar9 = *(uint *)(iVar8 + iVar3 + 4);
        if (((uint)(*puVar2 <= DAT_00036f00) <= -puVar2[1]) &&
           ((uVar9 < DAT_00036f04 && ((uint)(*puVar2 <= uVar9) <= -puVar2[1])))) {
          piVar1 = (int *)(s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_ + 4);
          *(undefined4 *)s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_ =
               *(undefined4 *)s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_;
          *(int *)(uVar6 + 4) = *piVar1 + 1;
          *puVar2 = uVar9;
          puVar2[1] = 0;
        }
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar5 + 8);
        uVar6 = *(undefined4 *)(s_p___ERROR__Failed_to_get_TX_time_00036f08._0_4_ + 4);
        *(uint *)(param_1 + 0x10) = uVar9;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return 1;
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar10;
    } while (iVar11 < 0x40);
    pcVar7 = s_ERROR__Failed_to_get_RX_timestam_00036f30;
  }
  FUN_000028a4(pcVar7);
  return 0;
}

