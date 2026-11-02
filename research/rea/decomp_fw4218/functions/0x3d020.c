// rea decompile_all
// name: FUN_0003d020
// address: 0x3d020
// body: available
// range: 0x3d020-0x3d13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003d020(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *DAT_0003d13c;
  local_1c = DAT_0003d13c[1];
  local_18 = DAT_0003d13c[2];
  puVar2 = (undefined4 *)(param_3 * 6 + DAT_0003d140);
  *(undefined4 *)(param_1 + 0x2c) = *puVar2;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar2 + 1);
  uVar3 = 0;
  if ((param_2 & 1) != 0) {
    uVar3 = 0x80;
  }
  if ((int)(param_2 << 0x1e) < 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((int)(param_2 << 0x1d) < 0) {
    uVar3 = uVar3 | 8;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    uVar3 = uVar3 | 4;
  }
  if ((int)(param_2 << 0x1b) < 0) {
    uVar3 = uVar3 | 2;
  }
  if ((int)(param_2 << 0x1a) < 0) {
    uVar3 = uVar3 | 1;
  }
  if ((int)(param_2 << 0x19) < 0) {
    uVar3 = uVar3 | 0x10;
  }
  if (((int)(param_2 << 0x18) < 0) || (**(char **)(param_1 + 4) != '\0')) {
    uVar3 = uVar3 | 0x20;
  }
  FUN_000264e0(param_1,0xb8,param_4 << 8 | param_3 << 0xb | uVar3);
  FUN_000264e0(param_1,0xd5,param_7 << 4 | param_6 << 8 | param_5 << 0xc | param_8);
  FUN_000264e0(param_1,0xd6,param_9 & 0xffff);
  FUN_000264e0(param_1,0xd7,(param_9 >> 0x18) << 8 | (param_9 & 0xffffff) >> 0x10);
  uVar3 = (param_9 & 0xff0000) >> 8 | param_9 >> 0x18;
  local_18 = CONCAT22((short)uVar3,(ushort)((param_9 & 0xff) << 8) | (ushort)(param_9 >> 8) & 0xff);
  uVar5 = local_20 & 0xffff;
  iVar6 = 0;
  iVar7 = 2;
  puVar4 = (ushort *)&local_20;
  uVar1 = local_20._2_2_;
  do {
    uVar5 = uVar5 + uVar1;
    uVar1 = puVar4[3];
    iVar6 = iVar6 + (uint)puVar4[2];
    iVar7 = iVar7 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar7 != 0);
  for (uVar3 = uVar3 + uVar5 + iVar6; DAT_0003d144 < uVar3;
      uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
  }
  FUN_000264e0(param_1,0xd8);
  *(uint *)(param_1 + 0x24) = param_2;
  return;
}

