// rea decompile_all
// name: FUN_00099340
// address: 0x99340
// body: available
// range: 0x99340-0x9949b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00099340(int *param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  
  *(undefined1 *)(param_2 + 0x14) = 9;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 0x10) = 8;
  if ((char)param_1[0x3e] == '\0') {
    thunk_FUN_000028a4(DAT_0009949c);
  }
  uVar4 = FUN_00157354(param_1 + 0x43);
  uVar4 = uVar4 >> 3;
  uVar5 = FUN_00157354(param_1 + 0x43);
  puVar1 = DAT_000994a0;
  if (uVar4 * 8 < uVar5) {
    uVar4 = uVar4 + 1;
  }
  iVar6 = 0;
  if (uVar4 != 0) {
    *DAT_000994a0 = 100;
    iVar10 = DAT_000994a4;
    iVar6 = 1;
    if (1 < uVar4) {
      iVar6 = 2;
      puVar1[1] = (uint)*(byte *)(DAT_000994a4 + 1);
    }
    if (2 < uVar4) {
      puVar1[iVar6] = (uint)*(byte *)(iVar10 + iVar6);
      iVar6 = iVar6 + 1;
    }
    if (3 < uVar4) {
      uVar4 = 3;
    }
  }
  param_1[0x94] = uVar4 << 3;
  puVar1[iVar6] = 0xffffffff;
  pcVar2 = DAT_000994a8;
  iVar10 = param_1[0x94];
  iVar6 = 0;
  if (iVar10 != 0) {
    cVar9 = '\0';
    pcVar7 = DAT_000994a8 + 3;
    pcVar8 = DAT_000994a8;
    pcVar11 = DAT_000994a8 + 1;
    pcVar12 = DAT_000994a8 + 2;
    do {
      *pcVar8 = cVar9;
      *pcVar11 = cVar9;
      *pcVar12 = '\x05';
      iVar10 = iVar10 + -1;
      cVar9 = cVar9 + '\x01';
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    } while (iVar10 != 0);
    iVar6 = param_1[0x94];
  }
  uVar3 = DAT_000994ac;
  pcVar2[iVar6 * 4] = -1;
  iVar6 = (**(code **)(*param_1 + 0xf4))(param_1,param_2,*puVar1,DAT_000994a0,uVar3);
  if (iVar6 != 0) {
    iVar6 = FUN_00099c88(param_1,param_2,DAT_000994a8);
    return iVar6 != 0;
  }
  return false;
}

