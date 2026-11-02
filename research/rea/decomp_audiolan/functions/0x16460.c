// rea decompile_all
// name: FUN_00016460
// address: 0x16460
// body: available
// range: 0x16460-0x16647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016460(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    iVar8 = iVar2 * 4 + 0x1000;
    iVar6 = iVar2 + 0x30;
    iVar7 = iVar2 + 0x31;
    iVar3 = iVar2 * 4 + 0x1004;
    iVar2 = iVar2 + 2;
    *(uint *)(iVar4 + iVar8) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar6) | *(uint *)(iVar4 + iVar8) & 0xffffff00;
    iVar4 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    *(uint *)(iVar4 + iVar3) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar7) | *(uint *)(iVar4 + iVar3) & 0xffffff00;
    uVar1 = DAT_00016830;
  } while (iVar2 < 0x18);
  iVar2 = 0;
  uVar5 = DAT_00016830 | (int)DAT_00016830 >> 10;
  do {
    iVar3 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    iVar4 = uVar1 + iVar2 * 4;
    iVar6 = iVar2 + 0x48;
    iVar7 = iVar2 + 0x49;
    iVar8 = uVar5 + iVar2 * 4;
    iVar2 = iVar2 + 2;
    *(uint *)(iVar3 + iVar4) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar6) | *(uint *)(iVar3 + iVar4) & 0xffffff00;
    iVar3 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    *(uint *)(iVar3 + iVar8) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar7) | *(uint *)(iVar3 + iVar8) & 0xffffff00;
  } while (iVar2 < 0x18);
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 4 + 0x10c0;
    iVar4 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    *(uint *)(iVar4 + iVar3) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar2) | *(uint *)(iVar4 + iVar3) & 0xffffff00;
    iVar4 = iVar2 + 1;
    iVar3 = iVar2 * 4 + 0x10c4;
    iVar6 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    iVar2 = iVar2 + 2;
    *(uint *)(iVar6 + iVar3) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar4) | *(uint *)(iVar6 + iVar3) & 0xffffff00;
    uVar1 = DAT_00016834;
  } while (iVar2 < 0x18);
  iVar2 = 0;
  uVar5 = DAT_00016834 | (int)DAT_00016834 >> 10;
  do {
    iVar4 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    iVar8 = uVar1 + iVar2 * 4;
    iVar6 = iVar2 + 0x18;
    iVar7 = iVar2 + 0x19;
    iVar3 = uVar5 + iVar2 * 4;
    iVar2 = iVar2 + 2;
    *(uint *)(iVar4 + iVar8) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar6) | *(uint *)(iVar4 + iVar8) & 0xffffff00;
    iVar4 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xdc) * 0x180;
    *(uint *)(iVar4 + iVar3) =
         (uint)*(byte *)(*(int *)(param_1 + 0x1b4) + iVar7) | *(uint *)(iVar4 + iVar3) & 0xffffff00;
  } while (iVar2 < 0x18);
  return;
}

