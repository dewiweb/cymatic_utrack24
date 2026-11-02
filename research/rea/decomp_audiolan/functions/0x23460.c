// rea decompile_all
// name: FUN_00023460
// address: 0x23460
// body: available
// range: 0x23460-0x23557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00023460(uint *param_1,undefined4 *param_2,byte param_3,ushort *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort local_40;
  ushort uStack_3e;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  short local_1a;
  
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_3c = param_1[1];
  local_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = (char)(param_5 >> 0x18);
  local_1f = (char)(param_5 >> 0x10);
  local_1e = (char)(param_5 >> 8);
  local_1d = (char)param_5;
  local_1c = 0;
  local_1b = 0;
  local_1a = (ushort)param_3 << 8;
  uVar2 = 0;
  uVar7 = ~((int)~param_5 / 2);
  if (0 < (int)uVar7) {
    puVar4 = param_4 + -1;
    if ((uVar7 & 1) != 0) {
      uVar2 = (uint)*param_4;
      puVar4 = param_4;
    }
    uVar1 = puVar4[1];
    iVar5 = 0;
    for (iVar3 = (int)uVar7 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar2 = uVar2 + uVar1;
      uVar1 = puVar4[3];
      iVar5 = iVar5 + (uint)puVar4[2];
      puVar4 = puVar4 + 2;
    }
    uVar2 = uVar2 + iVar5;
  }
  if ((int)~param_5 / 2 < 0) {
    uVar2 = param_4[uVar7] + uVar2;
  }
  uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
  uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
  if (uVar2 == DAT_00023558) {
    uVar2 = 0;
  }
  iVar5 = (*param_1 & 0xffff) + (uVar2 & 0xffff);
  uStack_3e = (ushort)(*param_1 >> 0x10);
  iVar6 = 0;
  iVar3 = 9;
  puVar4 = &local_40;
  do {
    iVar5 = iVar5 + (uint)uStack_3e;
    uStack_3e = puVar4[3];
    iVar6 = iVar6 + (uint)puVar4[2];
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar3 != 0);
  uVar2 = (uint)param_3 * 0x100 + iVar5 + iVar6;
  uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
  uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
  if (uVar2 == DAT_00023558) {
    uVar2 = 0;
  }
  return uVar2 & 0xffff;
}

