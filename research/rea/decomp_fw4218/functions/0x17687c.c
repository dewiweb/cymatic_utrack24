// rea decompile_all
// name: FUN_0017687c
// address: 0x17687c
// body: available
// range: 0x17687c-0x176ac5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017687c(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int local_28;
  int local_20;
  
  iVar11 = 0x10;
  uVar2 = param_1[1];
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  piVar9 = param_2;
  do {
    uVar4 = uVar3;
    uVar3 = uVar8;
    uVar1 = uVar7;
    iVar6 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar7 = (uVar2 & uVar3 | uVar4 & ~uVar2) + (uVar1 >> 0x1b | uVar1 << 5) + uVar5 + iVar6 +
            DAT_00176ac8;
    uVar8 = uVar2 >> 2 | uVar2 << 0x1e;
    iVar11 = iVar11 + -1;
    uVar2 = uVar1;
    uVar5 = uVar4;
  } while (iVar11 != 0);
  local_20 = 4;
  puVar10 = (uint *)(param_2 + 0xd);
  do {
    uVar5 = uVar3;
    uVar3 = uVar8;
    uVar2 = uVar7;
    uVar8 = *puVar10 ^ puVar10[-5] ^ puVar10[-0xb] ^ puVar10[-0xd];
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    puVar10[3] = uVar8;
    uVar7 = uVar8 + (uVar2 >> 0x1b | uVar2 << 5) + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar4 +
            DAT_00176ac8;
    uVar8 = uVar1 >> 2 | uVar1 << 0x1e;
    puVar10 = puVar10 + 1;
    local_20 = local_20 + -1;
    uVar1 = uVar2;
    uVar4 = uVar5;
  } while (local_20 != 0);
  local_20 = 0x14;
  puVar10 = (uint *)(param_2 + 0x11);
  do {
    uVar4 = uVar3;
    uVar3 = uVar8;
    uVar1 = uVar7;
    uVar8 = *puVar10 ^ puVar10[-5] ^ puVar10[-0xb] ^ puVar10[-0xd];
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    puVar10[3] = uVar8;
    uVar7 = uVar8 + (uVar1 >> 0x1b | uVar1 << 5) + (uVar2 ^ uVar3 ^ uVar4) + uVar5 + DAT_00176acc;
    uVar8 = uVar2 >> 2 | uVar2 << 0x1e;
    puVar10 = puVar10 + 1;
    local_20 = local_20 + -1;
    uVar2 = uVar1;
    uVar5 = uVar4;
  } while (local_20 != 0);
  local_20 = 0x14;
  puVar10 = (uint *)(param_2 + 0x25);
  do {
    uVar5 = uVar3;
    uVar3 = uVar8;
    uVar2 = uVar7;
    uVar8 = *puVar10 ^ puVar10[-5] ^ puVar10[-0xb] ^ puVar10[-0xd];
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    puVar10[3] = uVar8;
    uVar7 = uVar8 + (uVar2 >> 0x1b | uVar2 << 5) + ((uVar3 | uVar5) & uVar1 | uVar3 & uVar5) + uVar4
            + DAT_00176ad0;
    uVar8 = uVar1 >> 2 | uVar1 << 0x1e;
    puVar10 = puVar10 + 1;
    local_20 = local_20 + -1;
    uVar1 = uVar2;
    uVar4 = uVar5;
  } while (local_20 != 0);
  local_28 = 0x14;
  puVar10 = (uint *)(param_2 + 0x39);
  do {
    uVar4 = uVar3;
    uVar3 = uVar8;
    uVar1 = uVar7;
    uVar8 = *puVar10 ^ puVar10[-5] ^ puVar10[-0xb] ^ puVar10[-0xd];
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    puVar10[3] = uVar8;
    uVar7 = uVar8 + (uVar1 >> 0x1b | uVar1 << 5) + (uVar2 ^ uVar3 ^ uVar4) + uVar5 + DAT_00176ad4;
    uVar8 = uVar2 >> 2 | uVar2 << 0x1e;
    puVar10 = puVar10 + 1;
    local_28 = local_28 + -1;
    uVar2 = uVar1;
    uVar5 = uVar4;
  } while (local_28 != 0);
  *param_1 = *param_1 + uVar7;
  param_1[1] = param_1[1] + uVar1;
  param_1[2] = param_1[2] + uVar8;
  param_1[3] = param_1[3] + uVar3;
  param_1[4] = param_1[4] + uVar4;
  return;
}

