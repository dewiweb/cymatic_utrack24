// rea decompile_all
// name: FUN_0003b530
// address: 0x3b530
// body: available
// range: 0x3b530-0x3b5a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003b530(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  
  bVar1 = *(byte *)(param_2 + -0xc);
  bVar2 = *(byte *)(param_2 + -9);
  bVar3 = *(byte *)(param_2 + -10);
  bVar4 = *(byte *)(param_2 + -0xb);
  bVar5 = *(byte *)(param_2 + -5);
  bVar6 = *(byte *)(param_2 + -8);
  bVar7 = *(byte *)(param_2 + -7);
  bVar8 = *(byte *)(param_2 + -6);
  uVar11 = FUN_0003b6a2(*(undefined2 *)(param_1 + 0x1e));
  uVar9 = *param_1;
  uVar12 = FUN_0003ccfc(param_1 + 0x14);
  iVar10 = DAT_0003b5a4;
  iVar13 = *(int *)(DAT_0003b5a4 + 4) + 1;
  puVar14 = (undefined1 *)(*(int *)(DAT_0003b5a4 + 4) * 0x18 + DAT_0003b5a8);
  *(int *)(DAT_0003b5a4 + 4) = iVar13;
  if (0x3f < iVar13) {
    *(undefined4 *)(iVar10 + 4) = 0;
  }
  *puVar14 = 1;
  *(uint *)(puVar14 + 8) =
       (uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar3 << 8;
  *(uint *)(puVar14 + 4) =
       (uint)bVar5 | (uint)bVar6 << 0x18 | (uint)bVar7 << 0x10 | (uint)bVar8 << 8;
  *(undefined4 *)(puVar14 + 0xc) = uVar11;
  *(undefined4 *)(puVar14 + 0x10) = uVar12;
  puVar14[0x14] = uVar9;
  return;
}

