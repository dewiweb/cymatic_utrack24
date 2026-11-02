// rea decompile_all
// name: FUN_001d6980
// address: 0x1d6980
// body: available
// range: 0x1d6980-0x1d6ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d6980(int *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char local_30 [12];
  
  pcVar4 = local_30;
  do {
    pcVar7 = pcVar4;
    uVar8 = (uint)((ulonglong)param_2 * (ulonglong)DAT_001d6ab8 >> 0x23);
    *pcVar7 = (char)param_2 + (char)uVar8 * -10 + '0';
    param_2 = uVar8;
    pcVar4 = pcVar7 + 1;
  } while (uVar8 != 0);
  iVar6 = *param_1;
  cVar1 = *pcVar7;
  if (*(uint *)(iVar6 + 0x10) <= *(int *)(iVar6 + 0xc) + 1U) {
    iVar9 = *(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8);
    uVar8 = *(int *)(iVar6 + 0x14) << 1;
    uVar2 = iVar9 + 1;
    if (uVar8 < uVar2) {
      uVar8 = uVar2;
    }
    iVar3 = FUN_001ab47c(*(int *)(iVar6 + 8),uVar8);
    *(uint *)(iVar6 + 0x14) = uVar8;
    *(int *)(iVar6 + 8) = iVar3;
    *(int *)(iVar6 + 0xc) = iVar3 + iVar9;
    *(uint *)(iVar6 + 0x10) = iVar3 + uVar8;
  }
  pcVar4 = *(char **)(iVar6 + 0xc);
  pcVar10 = pcVar7 + (1 - (int)local_30);
  *(char **)(iVar6 + 0xc) = pcVar4 + 1;
  *pcVar4 = cVar1;
  iVar6 = 1;
  if (1 < (int)pcVar10) {
    do {
      iVar9 = *param_1;
      pcVar7 = pcVar7 + -1;
      cVar1 = *pcVar7;
      if (*(uint *)(iVar9 + 0x10) <= *(int *)(iVar9 + 0xc) + 1U) {
        iVar3 = *(int *)(iVar9 + 0xc) - *(int *)(iVar9 + 8);
        uVar8 = *(int *)(iVar9 + 0x14) << 1;
        uVar2 = iVar3 + 1;
        if (uVar8 < uVar2) {
          uVar8 = uVar2;
        }
        iVar5 = FUN_001ab47c(*(int *)(iVar9 + 8),uVar8);
        *(uint *)(iVar9 + 0x14) = uVar8;
        *(int *)(iVar9 + 8) = iVar5;
        *(int *)(iVar9 + 0xc) = iVar5 + iVar3;
        *(uint *)(iVar9 + 0x10) = iVar5 + uVar8;
      }
      pcVar4 = *(char **)(iVar9 + 0xc);
      iVar6 = iVar6 + 1;
      *(char **)(iVar9 + 0xc) = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (iVar6 < (int)pcVar10);
    return;
  }
  return;
}

